/*
 * XREFs of MmPrefetchVirtualMemory @ 0x140444728
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14000405C (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x140444690 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x1406F2B50 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MiGetSessionVm @ 0x14012F680 (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x14021BA84 (MiLockAndSelectSessionAttachProcess.c)
 *     ObIsKernelHandle @ 0x1402391A0 (ObIsKernelHandle.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebx
  PVOID v8; // r15
  _KPROCESS *v9; // r14
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _KPROCESS *v14; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v19; // [rsp+60h] [rbp-29h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = a3;
  v18 = a2;
  BugCheckParameter1 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( !Handle )
  {
    SessionVm = 1LL;
    goto LABEL_17;
  }
  if ( Handle != (char *)-1LL )
  {
    if ( Handle == (char *)-3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[193] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle(Handle) )
      return -1073741585;
    if ( (int)ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 1716546893, (__int64)&BugCheckParameter1, 0LL, 0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v19);
        v7 = 1;
      }
      goto LABEL_15;
    }
    result = ObReferenceObjectByHandle(Handle, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v8 = Object;
    if ( result < 0 )
      return result;
    v14 = (_KPROCESS *)MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v9 = v14;
    if ( !v14 )
    {
LABEL_28:
      ObfDereferenceObject(v8);
      return 0;
    }
    if ( (int)MmAttachSession(v14, (__int64)&v19) < 0 )
    {
      ObfDereferenceObject(v9);
      goto LABEL_28;
    }
    SessionVm = MiGetSessionVm();
LABEL_17:
    p_LockNV = (_DWORD *)BugCheckParameter1;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 320);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, SessionVm, a4);
  if ( v7 )
    KiUnstackDetachProcess(&v19, 0LL);
  if ( v9 )
  {
    MmDetachSession((__int64)v9, (__int64)&v19);
    ObfDereferenceObject(v9);
  }
  if ( Handle == (char *)-2LL || (unsigned __int64)(Handle - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v8 )
    {
      ObfDereferenceObject(v8);
    }
  }
  return v12;
}
