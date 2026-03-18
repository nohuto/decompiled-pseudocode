/*
 * XREFs of MiCombineIdenticalPages @ 0x140509D90
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     MmManagePartitionCombineMemory @ 0x1406EE5D4 (MmManagePartitionCombineMemory.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiCombiningInProgress @ 0x1400CF508 (MiCombiningInProgress.c)
 *     MiCombineWorkingSet @ 0x1400CF650 (MiCombineWorkingSet.c)
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
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
  char *v10; // r14
  __int64 v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v15; // rdi
  _WORD *v16; // r11
  __int16 v17; // ax
  unsigned int v18; // eax
  NTSTATUS v20; // eax
  PVOID v21; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR *v23; // [rsp+40h] [rbp-C0h]
  _QWORD *v24; // [rsp+48h] [rbp-B8h]
  _WORD *v25; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v26; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v27; // [rsp+5Ah] [rbp-A6h]
  _QWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[24]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v31[4]; // [rsp+180h] [rbp+80h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v32; // [rsp+1A0h] [rbp+A0h] BYREF

  v23 = a1;
  v24 = a6;
  memset(v31, 0, sizeof(v31));
  memset(v30, 0, 0xB8uLL);
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
  if ( (dword_140400108 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v20 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v21, 0LL),
        v9 = v21,
        v13 = v20,
        v20 >= 0) )
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
          KiUnstackDetachProcess(&v32, 0LL);
          ObfDereferenceObject(v10);
        }
        goto LABEL_25;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v32);
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v23 + 661;
    if ( (a3 & 1) == 0 || v23 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v15, v29, 1);
      v30[5] = 0LL;
      LODWORD(v30[6]) = 0;
      if ( (a3 & 4) != 0 )
      {
        v28[0] = qword_1403891B8;
        v28[1] = qword_1403891C0;
        v30[5] = v28;
        LODWORD(v30[6]) = 2;
      }
      v30[0] = v15;
      v30[2] = v29;
      v30[1] = v9;
      v30[3] = v31;
      HIDWORD(v30[6]) = a3;
      MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], 0, (__int64)&v25);
      v16 = v25;
      v17 = v26;
      ++*v25;
      if ( (unsigned int)MiCreateUltraThreadContext(
                           (__int64)&v30[7],
                           v27 | (unsigned int)(unsigned __int16)(v17 & *v16),
                           8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v30[4] = v10 + 1280;
          v18 = MiCombineWorkingSet((__int64)v30);
        }
        else
        {
          v30[4] = 0LL;
          v18 = MiCombineAllPhysicalMemory(v30);
        }
        v13 = v18;
        MiDeleteUltraThreadContext((__int64)&v30[7]);
        *v24 = v31[0];
        _InterlockedAdd((volatile signed __int32 *)v15 + 94, 1u);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 46, v31[1]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 44, v31[2]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 45, v31[3]);
      }
      else
      {
        v13 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v15, v29, 0);
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
