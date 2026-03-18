/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01A7890
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C01A79D0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C017286C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C01A61C0 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C01A627C (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C01A7864 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C01A8024 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *v2; // rcx
  _QWORD *Pool; // rax
  struct _TDR_RECOVERY_CONTEXT *v4; // rax
  __int64 v5; // r8

  if ( (int)DXGADAPTER::Reset(*(DXGADAPTER **)(BugCheckParameter1 + 32), BugCheckParameter1) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 104) = -1LL;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  v2 = *(struct _KTHREAD **)(BugCheckParameter1 + 2896);
  if ( !v2 || KeGetCurrentThread() == v2 )
  {
    Pool = TdrAllocatePool(0x20uLL, PagedPool);
    if ( Pool )
    {
      Pool[1] = 0LL;
      *((_DWORD *)Pool + 4) = 0;
      *Pool = &CTDR_GDI_RESET_THREAD::`vftable';
      v4 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
      *(_QWORD *)(v5 + 24) = v4;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
    if ( CVP_SYSTEM_THREAD::Start((void **)v5) < 0 )
      TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  return 0LL;
}
