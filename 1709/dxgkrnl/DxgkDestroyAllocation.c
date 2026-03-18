/*
 * XREFs of DxgkDestroyAllocation @ 0x1C0183EF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008DD70 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r10
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  _QWORD v11[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v11, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v11[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 51;
  LOBYTE(v11[6]) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2006);
  Current = DXGPROCESS::GetCurrent(v3, v2);
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
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C005F010, &EventProfilerExit, v9, 2006);
  return v8;
}
