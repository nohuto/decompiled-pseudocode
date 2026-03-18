/*
 * XREFs of DxgkDestroyAllocation @ 0x1C017FE30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB320 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r10
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  _QWORD v11[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v11[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 51;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2006);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v8 = DxgkDestroyAllocationHelper(
           Current,
           *(_OWORD *)a1,
           HIDWORD(*(_QWORD *)a1),
           *(unsigned int **)(a1 + 8),
           *(_QWORD *)(a1 + 16),
           0,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11,
           1);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v9, 2006);
  return v8;
}
