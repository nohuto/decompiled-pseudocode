/*
 * XREFs of IopProcessWorkItem @ 0x140116BE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x14027BA30 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  _WORD *v1; // rbp
  void (__fastcall *v3)(_WORD *, __int64, __int64); // rdi
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rsi
  __int64 v8; // rdx
  struct _KTHREAD *result; // rax
  _WORD *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD **)(a1 + 40);
  v3 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( !v5 )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v4 = 1;
    v11 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = &v11;
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    PsImpersonateContainerOfThread(v6);
    v7 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1344LL);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v3(v1, v8, a1);
  }
  else
  {
    if ( *v1 == 3 )
      v10 = v1;
    else
      v10 = 0LL;
    ((void (__fastcall *)(_WORD *, __int64))v3)(v10, v8);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1345LL);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
  if ( v7 )
  {
    PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v3, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
