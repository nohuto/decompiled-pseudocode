/*
 * XREFs of MiCombineIdenticalPages @ 0x14048CAE4
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     MmManagePartitionCombineMemory @ 0x140757ABC (MmManagePartitionCombineMemory.c)
 * Callees:
 *     MiCombineWorkingSet @ 0x140004854 (MiCombineWorkingSet.c)
 *     MiCombiningInProgress @ 0x140004A14 (MiCombiningInProgress.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetNextPageColor @ 0x1400093C8 (MiGetNextPageColor.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(
        ULONG_PTR *a1,
        void *a2,
        int a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        _QWORD *a6)
{
  PVOID v9; // r13
  char *v10; // r15
  __int64 v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR *v15; // rdi
  unsigned int NextPageColor; // eax
  unsigned int v17; // eax
  NTSTATUS v19; // eax
  PVOID v20; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR *v22; // [rsp+40h] [rbp-C0h]
  _QWORD *v23; // [rsp+48h] [rbp-B8h]
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[30]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v28[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v29[48]; // [rsp+1D0h] [rbp+D0h] BYREF

  v22 = a1;
  v23 = a6;
  memset(v28, 0, sizeof(v28));
  memset(v27, 0, 0xE8uLL);
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 0x18) == 0x10 )
    return (unsigned int)-1073741637;
  if ( (a3 & 8) == 0 )
    goto LABEL_6;
  if ( (a3 & 2) == 0 )
    return (unsigned int)-1073741637;
  if ( (a3 & 4) != 0 )
    return (unsigned int)-1073741583;
LABEL_6:
  v11 = -1LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a4 )
      v11 = (__int64)a4;
    a4 = (void *)v11;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_14044B168 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v19 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v20, 0LL),
        v9 = v20,
        v13 = v19,
        v19 >= 0) )
  {
    if ( a4 )
    {
      v12 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
      v10 = (char *)Object;
      v13 = v12;
      if ( v12 < 0 )
      {
LABEL_23:
        if ( v10 )
        {
          KiUnstackDetachProcess((__int64)v29, 0LL);
          ObfDereferenceObject(v10);
        }
        goto LABEL_25;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v29);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v22 + 797;
    if ( (a3 & 1) == 0 || v22 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v26, 1);
      v27[5] = 0LL;
      LODWORD(v27[6]) = 0;
      if ( (a3 & 4) != 0 )
      {
        v24[0] = qword_1403CC438;
        v24[1] = qword_1403CC440;
        v27[5] = v24;
        LODWORD(v27[6]) = 2;
      }
      v27[0] = v15;
      v27[2] = v26;
      v27[1] = v9;
      v27[3] = v28;
      HIDWORD(v27[6]) = a3;
      MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], 0, (__int64)v25);
      NextPageColor = MiGetNextPageColor((__int64)v25);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v27[13], NextPageColor, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v27[4] = v10 + 1280;
          v17 = MiCombineWorkingSet((__int64)v27);
        }
        else
        {
          v27[4] = 0LL;
          v17 = MiCombineAllPhysicalMemory(v27);
        }
        v13 = v17;
        MiDeleteUltraThreadContext((__int64)&v27[13]);
        *v23 = v28[0];
        _InterlockedIncrement((volatile signed __int32 *)v15 + 94);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 46, v28[1]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 44, v28[2]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 45, v28[3]);
      }
      else
      {
        v13 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v15, v26, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v13 = -1073741637;
    }
    goto LABEL_23;
  }
LABEL_25:
  if ( v9 )
    ObfDereferenceObject(v9);
  return v13;
}
