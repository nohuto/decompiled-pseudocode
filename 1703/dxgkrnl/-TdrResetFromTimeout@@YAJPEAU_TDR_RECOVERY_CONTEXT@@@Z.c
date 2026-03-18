/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192D80
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0192EC0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C0191698 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0191754 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C0192D58 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C019350C (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *v5; // rcx
  _QWORD *Pool; // rax
  struct _TDR_RECOVERY_CONTEXT *v7; // rax
  __int64 v8; // r8

  if ( (int)DXGADAPTER::Reset(*(DXGADAPTER **)(BugCheckParameter1 + 32), BugCheckParameter1, a3, a4) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = -1LL;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v5 = *(struct _KTHREAD **)(BugCheckParameter1 + 2896);
  if ( !v5 || KeGetCurrentThread() == v5 )
  {
    Pool = TdrAllocatePool(0x20uLL, PagedPool);
    if ( Pool )
    {
      Pool[1] = 0LL;
      *((_DWORD *)Pool + 4) = 0;
      *Pool = &CTDR_GDI_RESET_THREAD::`vftable';
      v7 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
      *(_QWORD *)(v8 + 24) = v7;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
    if ( CVP_SYSTEM_THREAD::Start((void **)v8) < 0 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  return 0LL;
}
