/*
 * XREFs of CmpInitializeRegistryProcess @ 0x14062C3D8
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     ExInitializeLookasideListEx @ 0x14006A540 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x1400D2EC0 (CmSiProcessTupleInitialize.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14017739C (CmSiProcessTupleStartFromHandle.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1401A7840 (ZwSetInformationProcess.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x14062C9C4 (CmpCreateRegistryProcessToken.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  void *v1; // rsi
  int MinimalProcess; // ebx
  int v3; // r9d
  void *v4; // rcx
  HANDLE ProcessInformation[2]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v7; // [rsp+60h] [rbp+7h] BYREF
  __int64 v8; // [rsp+70h] [rbp+17h]
  int v9; // [rsp+78h] [rbp+1Fh]
  __int128 v10; // [rsp+80h] [rbp+27h]
  PVOID Object; // [rsp+C0h] [rbp+67h] BYREF
  void *v12; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+D0h] [rbp+77h] BYREF

  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v1 = 0LL;
  v12 = 0LL;
  ProcessInformation[0] = 0LL;
  ProcessInformation[1] = 0LL;
  CmSiProcessTupleInitialize();
  MinimalProcess = CmpCreateRegistryProcessToken(&Object);
  if ( MinimalProcess >= 0 )
  {
    LOBYTE(v3) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    MinimalProcess = PsCreateMinimalProcess(
                       (int)PsInitialSystemProcess,
                       (int)&CmRegistryProcessName,
                       0,
                       v3,
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       (__int64)&ProcessHandle);
    if ( MinimalProcess < 0
      || (MinimalProcess = ObOpenObjectByPointer(
                             Object,
                             0x200u,
                             0LL,
                             1u,
                             (POBJECT_TYPE)SeTokenObjectType,
                             0,
                             ProcessInformation),
          MinimalProcess < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      MinimalProcess = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( MinimalProcess >= 0 )
      {
        MinimalProcess = CmSiProcessTupleStartFromHandle(v4, v0);
        if ( MinimalProcess >= 0 )
        {
          v0 = 0LL;
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          LODWORD(v7) = 48;
          *((_QWORD *)&v7 + 1) = 0LL;
          v9 = 512;
          v8 = 0LL;
          v10 = 0LL;
          MinimalProcess = PsCreateSystemThreadEx(
                             (__int64)&v12,
                             0x1FFFFF,
                             &v7,
                             CmpRegistryProcess,
                             0LL,
                             (__int64)CmpDummyThreadRoutine,
                             0LL,
                             0LL,
                             0LL);
          if ( MinimalProcess >= 0 )
          {
            MinimalProcess = ExInitializeLookasideListEx(
                               (PLOOKASIDE_LIST_EX)&CmpBounceBufferLookaside,
                               0LL,
                               0LL,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( MinimalProcess >= 0 )
            {
              CmpUseSectionBackedHives = 1;
              MinimalProcess = 0;
            }
          }
          v1 = v12;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v1 )
    ZwClose(v1);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)MinimalProcess;
}
