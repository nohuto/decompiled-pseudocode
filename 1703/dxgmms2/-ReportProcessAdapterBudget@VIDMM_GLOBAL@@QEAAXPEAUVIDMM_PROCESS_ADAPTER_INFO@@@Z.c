/*
 * XREFs of ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00A53F4
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DD7C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_xxpqhc @ 0x1C0020B14 (Template_xxpqhc.c)
 *     Template_xxpqhccccc @ 0x1C0021CCC (Template_xxpqhccccc.c)
 */

void __fastcall VIDMM_GLOBAL::ReportProcessAdapterBudget(VIDMM_GLOBAL *this, struct _KTHREAD **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int i; // ebx
  unsigned __int8 v7; // bp
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned __int8 v12; // bp
  _QWORD *v13; // r14
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]
  _BYTE v17[32]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+8h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, a2 + 41);
  for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
  {
    v7 = 0;
    v8 = (__int64)a2[6] + 264 * i;
    v9 = v8 + 24;
    do
    {
      v10 = 280LL * i - v8 + v9 + 8;
      if ( *(_QWORD *)(v10 + *((_QWORD *)this + 5150)) )
      {
        v11 = *(_QWORD *)(v9 + 112);
        LOBYTE(v10) = *((_BYTE *)a2 + 360);
        v18 = *(_QWORD *)(v9 + 176);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LOBYTE(v4) = *((_BYTE *)a2 + 352);
          Template_xxpqhccccc(v10, v4, v5);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LOBYTE(v16) = v7;
            LOWORD(v15) = i;
            LODWORD(v14) = *((_DWORD *)a2[5] + 2);
            Template_xxpqhc(v10, &EventVidMmProcessUsageChange, v5, v11, v11, *((_QWORD *)this + 3), v14, v15, v16);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              LOBYTE(v16) = v7;
              LOWORD(v15) = i;
              LODWORD(v14) = *((_DWORD *)a2[5] + 2);
              Template_xxpqhc(
                v10,
                &EventVidMmProcessCommitmentChange,
                v5,
                v18,
                v18,
                *((_QWORD *)this + 3),
                v14,
                v15,
                v16);
            }
          }
        }
      }
      ++v7;
      v9 += 8LL;
    }
    while ( v7 < 2u );
    if ( *(_QWORD *)(v8 + 152) && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_xxpqhc(v10, &EventVidMmProcessUsageChange, v5);
    v12 = 0;
    v13 = (_QWORD *)(v8 + 224);
    do
    {
      if ( *v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_xxpqhc(v10, &EventVidMmProcessDemotedCommitmentChange, v5);
      ++v12;
      ++v13;
    }
    while ( v12 < 5u );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
