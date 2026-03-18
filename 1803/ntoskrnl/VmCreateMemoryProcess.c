/*
 * XREFs of VmCreateMemoryProcess @ 0x1407A0840
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 */

__int64 __fastcall VmCreateMemoryProcess(__int64 a1, __int64 a2, PVOID Object, int a4, __int64 a5, _QWORD *a6)
{
  char v6; // si
  NTSTATUS v8; // edi
  int v9; // edx
  int v10; // r14d
  int v11; // eax
  HANDLE v12; // rbx
  PVOID Objecta; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  HANDLE ProcessHandle; // [rsp+90h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  v6 = a4;
  if ( (a4 & 0xFFFFFFF0) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = ((a4 & 1) << 13) | 0x4000;
    if ( (a4 & 2) == 0 )
      v9 = (a4 & 1) << 13;
    v10 = v9 | 0x20000;
    if ( (a4 & 4) == 0 )
      v10 = v9;
    v11 = PsCreateMinimalProcess(
            (struct _KPROCESS *)a1,
            a2,
            0LL,
            *(_BYTE *)(a1 + 1738),
            Object,
            v10,
            0,
            0LL,
            a5,
            &ProcessHandle);
    v12 = ProcessHandle;
    v8 = v11;
    if ( v11 >= 0 )
    {
      BaseAddress = (PVOID)0x10000;
      RegionSize = 4294901760LL;
      if ( (v10 & 0x6000) != 0
        || (v8 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x2000u, 1u), v8 >= 0) )
      {
        if ( (v6 & 8) == 0 )
        {
          ObReferenceObjectByHandle(v12, 0, (POBJECT_TYPE)PsProcessType, 0, &Objecta, 0LL);
          _InterlockedOr((volatile signed __int32 *)Objecta + 435, 0x2000u);
          ObfDereferenceObject(Objecta);
          v12 = ProcessHandle;
        }
        *a6 = v12;
        v12 = 0LL;
        v8 = 0;
      }
    }
    if ( v12 )
      ZwClose(v12);
  }
  return (unsigned int)v8;
}
