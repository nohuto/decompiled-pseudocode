/*
 * XREFs of VidSchFlushDevice @ 0x1C0078E70
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C0056B00 (VidSchSuspendAdapter.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060FF0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0065A40 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0066390 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchTerminateDevice @ 0x1C0078CB0 (VidSchTerminateDevice.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00A0430 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0012590 (VidSchSuspendResumeDevice.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0012A80 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x1C0012B74 (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0012C3C (VidSchiClearFlipDevice.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076410 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0078FEC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // esi
  int v8; // r8d
  __int64 v9; // r15
  __int64 v10; // rax
  VIDMM_DEVICE *v11; // rcx
  _DWORD *v12; // r14
  __int64 result; // rax
  __int64 v14; // rax
  union _LARGE_INTEGER v15; // [rsp+28h] [rbp-69h]
  _QWORD v16[20]; // [rsp+38h] [rbp-59h] BYREF

  v4 = 0;
  if ( a1 && a2 )
  {
    v7 = *a2;
    v8 = *a2;
    if ( *a2 == 11 )
    {
      *(_DWORD *)(a1 + 1336) = 1;
      VidSchiMarkDeviceAsError(a1, 14);
      VidSchSuspendResumeDevice(a1, 1, 0, 0);
      VidSchSuspendResumeDevice(a1, 0, 0, 0);
      v8 = *a2;
    }
    v9 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v9, v8, a4, v15);
    if ( (v7 & 1) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 )
      {
        v11 = *(VIDMM_DEVICE **)(v10 + 608);
        if ( v11 )
          VIDMM_DEVICE::EnsureSchedulable(v11, 0LL);
      }
      v12 = (_DWORD *)((-(__int64)(((*a2 - 3) & 0xFFFFFFFD) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 1224);
      if ( *v12 )
      {
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[4]) |= 0x10u;
        LODWORD(v16[2]) = 1;
        v16[5] = v12;
        VidSchiWaitFlushCompletion(v9, v16, 24LL);
      }
      if ( *(_DWORD *)(a1 + 1212) )
      {
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[4]) |= 0x10u;
        LODWORD(v16[2]) = 3;
        v16[5] = a1 + 1212;
        VidSchiWaitFlushCompletion(v9, v16, 23LL);
      }
      if ( v7 != 5 )
      {
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v9, a1, 9u);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v9 + 1904), (_DWORD *)(a1 + 1212));
      }
    }
    LOBYTE(v4) = v7 >= 9;
    result = 0LL;
    *(_DWORD *)(a1 + 1332) = v4;
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  return result;
}
