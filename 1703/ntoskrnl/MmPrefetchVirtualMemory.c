/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1404C9B00
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14007D858 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1404C9A70 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x1405789F4 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MiGetSessionVm @ 0x14007D8DC (MiGetSessionVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     ObIsKernelHandle @ 0x14013DF00 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140213B80 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(char *Handle, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebx
  PVOID v8; // r15
  __int64 *v9; // r14
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  __int64 *v14; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  $5BC46E0569261879018906DEC3127961 v19; // [rsp+60h] [rbp-29h] BYREF

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
    v14 = MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v9 = v14;
    if ( !v14 )
    {
LABEL_30:
      ObfDereferenceObject(v8);
      return 0;
    }
    if ( (int)MmAttachSession((ULONG_PTR)v14) < 0 )
    {
      ObfDereferenceObject(v9);
      goto LABEL_30;
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
