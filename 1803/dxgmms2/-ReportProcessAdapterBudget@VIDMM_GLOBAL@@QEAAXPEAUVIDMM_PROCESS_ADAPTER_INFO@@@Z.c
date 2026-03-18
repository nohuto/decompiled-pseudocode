/*
 * XREFs of ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C006B704
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073DE0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3324 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0xxpqhc @ 0x1C00254FC (McTemplateK0xxpqhc.c)
 *     McTemplateK0xxpqhccccc @ 0x1C0026A84 (McTemplateK0xxpqhccccc.c)
 */

void __fastcall VIDMM_GLOBAL::ReportProcessAdapterBudget(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int i; // ebx
  unsigned __int8 v8; // bp
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // r13
  unsigned __int8 v13; // bp
  _QWORD *v14; // r14
  __int64 v15; // [rsp+30h] [rbp-88h]
  __int64 v16; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  _BYTE v18[32]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, a2 + 45);
  for ( i = 0; i < *((_DWORD *)this + 1748); ++i )
  {
    v8 = 0;
    v9 = (__int64)a2[6] + 296 * i;
    v10 = 1560LL * i;
    v11 = (__int64 *)(v9 + 136);
    do
    {
      LOBYTE(v5) = *(_BYTE *)(v10 + *((_QWORD *)this + 5090) + 512);
      if ( (v5 & 2) != 0 )
      {
        v12 = *v11;
        LOBYTE(v5) = *((_BYTE *)a2 + 392);
        v19 = v11[8];
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LOBYTE(v4) = *((_BYTE *)a2 + 384);
          McTemplateK0xxpqhccccc(v5, v4, v6);
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LOBYTE(v17) = v8;
            LOWORD(v16) = i;
            LODWORD(v15) = *((_DWORD *)a2[5] + 2);
            McTemplateK0xxpqhc(v5, &EventVidMmProcessUsageChange, v6, v12, v12, *((_QWORD *)this + 3), v15, v16, v17);
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LOBYTE(v17) = v8;
              LOWORD(v16) = i;
              LODWORD(v15) = *((_DWORD *)a2[5] + 2);
              McTemplateK0xxpqhc(
                v5,
                &EventVidMmProcessCommitmentChange,
                v6,
                v19,
                v19,
                *((_QWORD *)this + 3),
                v15,
                v16,
                v17);
            }
          }
        }
      }
      ++v8;
      v10 += 24LL;
      ++v11;
    }
    while ( v8 < 2u );
    if ( *(_QWORD *)(v9 + 152) && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0xxpqhc(v5, &EventVidMmProcessUsageChange, v6);
    v13 = 0;
    v14 = (_QWORD *)(v9 + 256);
    do
    {
      if ( *v14 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0xxpqhc(v5, &EventVidMmProcessDemotedCommitmentChange, v6);
      ++v13;
      ++v14;
    }
    while ( v13 < 5u );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
