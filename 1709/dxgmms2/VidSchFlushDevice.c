/*
 * XREFs of VidSchFlushDevice @ 0x1C0070780
 * Callers:
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005C85C (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00616A0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0062030 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchTerminateDevice @ 0x1C00709F0 (VidSchTerminateDevice.c)
 *     VidSchSuspendAdapter @ 0x1C0071DF0 (VidSchSuspendAdapter.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C009AB9C (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C000E960 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x1C000EA54 (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C000EB1C (VidSchiClearFlipDevice.c)
 *     VidSchSuspendResumeDevice @ 0x1C000ECF0 (VidSchSuspendResumeDevice.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00518C0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00715AC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rax
  VIDMM_DEVICE *v10; // rcx
  _DWORD *v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  union _LARGE_INTEGER v14; // [rsp+28h] [rbp-69h]
  _QWORD v15[20]; // [rsp+38h] [rbp-59h] BYREF

  v4 = 0;
  if ( a1 && a2 )
  {
    v7 = *a2;
    if ( *a2 == 11 )
    {
      *(_DWORD *)(a1 + 1312) = 1;
      VidSchiMarkDeviceAsError(a1, 14);
      VidSchSuspendResumeDevice(a1, 1, 0, 0);
      VidSchSuspendResumeDevice(a1, 0, 0, 0);
    }
    v8 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v8, *a2, a4, v14);
    if ( (v7 & 1) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        v10 = *(VIDMM_DEVICE **)(v9 + 592);
        if ( v10 )
          VIDMM_DEVICE::EnsureSchedulable(v10, 0LL);
      }
      v11 = (_DWORD *)((-(__int64)(((*a2 - 3) & 0xFFFFFFFD) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 1200);
      if ( *v11 )
      {
        memset(v15, 0, sizeof(v15));
        LODWORD(v15[4]) |= 4u;
        LODWORD(v15[2]) = 1;
        v15[5] = v11;
        VidSchiWaitFlushCompletion(v8, v15, 24LL);
      }
      if ( *(_DWORD *)(a1 + 1188) )
      {
        memset(v15, 0, sizeof(v15));
        LODWORD(v15[4]) |= 4u;
        LODWORD(v15[2]) = 3;
        v15[5] = a1 + 1188;
        VidSchiWaitFlushCompletion(v8, v15, 23LL);
      }
      if ( v7 != 5 )
      {
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v8, a1, 9u);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v8 + 1888), (_DWORD *)(a1 + 1188));
      }
    }
    LOBYTE(v4) = v7 >= 9;
    result = 0LL;
    *(_DWORD *)(a1 + 1308) = v4;
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  return result;
}
