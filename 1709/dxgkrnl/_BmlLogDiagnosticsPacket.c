/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1C00F3D24
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D1DD8 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C01F8B44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0006C38 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00F40C4 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(DXGDIAGNOSTICS **a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // r13
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbp
  _QWORD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v31; // [rsp+78h] [rbp+20h]

  v7 = 376 * *a4 + 64;
  v8 = operator new(v7, 0x63644356u, PagedPool);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *v11 = 32;
    v11[1] = v7;
    v11[10] = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    v11[12] = *a4;
    v13 = *((_DWORD *)a4 + 1);
    v11[14] = a2;
    v14 = 0;
    v11[13] = v13;
    v15 = *(_QWORD *)(a3 + 48);
    if ( *a4 )
    {
      v16 = 0x700000000000LL;
      do
      {
        v17 = 104LL * v14;
        v18 = *(__int64 **)&a4[v17 + 16];
        v19 = *v18;
        if ( (*v18 & 0x700000000000LL) == 0x700000000000LL )
        {
          v20 = 376LL * v14;
          *(_QWORD *)((char *)v11 + v20 + 64) = v19;
          *(_QWORD *)((char *)v11 + v20 + 72) = v18[1];
          *(_QWORD *)((char *)v11 + v20 + 80) = v18[2];
          *(_DWORD *)((char *)v11 + v20 + 88) = *((_DWORD *)v18 + 6);
          *(_DWORD *)((char *)v11 + v20 + 92) = *((_DWORD *)v18 + 7);
          *(_DWORD *)((char *)v11 + v20 + 136) = *((_DWORD *)v18 + 8);
          *(_QWORD *)((char *)v11 + v20 + 104) = *(__int64 *)((char *)v18 + 36);
          *(_QWORD *)((char *)v11 + v20 + 112) = *(__int64 *)((char *)v18 + 44);
          *(_QWORD *)((char *)v11 + v20 + 120) = *(__int64 *)((char *)v18 + 52);
          *(_QWORD *)((char *)v11 + v20 + 128) = *(__int64 *)((char *)v18 + 60);
          *(_QWORD *)((char *)v11 + v20 + 96) = *((unsigned int *)v18 + 18);
          *(_DWORD *)((char *)v11 + v20 + 140) = (int)(*((_DWORD *)v18 + 20) << 29) >> 29;
          *(_DWORD *)((char *)v11 + v20 + 144) = *((_DWORD *)v18 + 22);
          *(_DWORD *)((char *)v11 + v20 + 148) = *((_DWORD *)v18 + 23);
          *(_OWORD *)((char *)v11 + v20 + 152) = *((_OWORD *)v18 + 6);
          *(_OWORD *)((char *)v11 + v20 + 168) = *((_OWORD *)v18 + 7);
          *(_DWORD *)((char *)v11 + v20 + 184) = *((_DWORD *)v18 + 33);
          *(_DWORD *)((char *)v11 + v20 + 188) = *((_DWORD *)v18 + 34);
          *(_DWORD *)((char *)v11 + v20 + 192) = *((_DWORD *)v18 + 35);
          *(_QWORD *)((char *)v11 + v20 + 196) = v18[18];
          *(_DWORD *)((char *)v11 + v20 + 352) = *(_DWORD *)&a4[v17 + 24];
          *(_DWORD *)((char *)v11 + v20 + 356) = *(_DWORD *)&a4[v17 + 28];
          *(_WORD *)((char *)v11 + v20 + 360) = *(_WORD *)&a4[v17 + 32];
          *(_QWORD *)((char *)v11 + v20 + 364) = *(_QWORD *)&a4[v17 + 36];
          *(_QWORD *)((char *)v11 + v20 + 372) = *(_QWORD *)&a4[v17 + 44];
          *(_QWORD *)((char *)v11 + v20 + 380) = *(_QWORD *)&a4[v17 + 52];
          *(_DWORD *)((char *)v11 + v20 + 388) = *(_DWORD *)&a4[v17 + 60];
          *(_WORD *)((char *)v11 + v20 + 392) = *(_WORD *)&a4[v17 + 64];
          *(_WORD *)((char *)v11 + v20 + 394) = *(_WORD *)&a4[v17 + 66];
          *(_WORD *)((char *)v11 + v20 + 396) = *(_WORD *)&a4[v17 + 68];
          *(_WORD *)((char *)v11 + v20 + 398) = *(_WORD *)&a4[v17 + 70];
          *(_DWORD *)((char *)v11 + v20 + 400) = *(_DWORD *)&a4[v17 + 72];
          *(_DWORD *)((char *)v11 + v20 + 404) = *(_DWORD *)&a4[v17 + 76];
          *(_DWORD *)((char *)v11 + v20 + 408) = *(_DWORD *)&a4[v17 + 80];
          *(_DWORD *)((char *)v11 + v20 + 412) = *(_DWORD *)&a4[v17 + 84];
          *(_DWORD *)((char *)v11 + v20 + 416) = *(_DWORD *)&a4[v17 + 88];
          *(_DWORD *)((char *)v11 + v20 + 424) = *(_DWORD *)&a4[v17 + 96];
          *(_DWORD *)((char *)v11 + v20 + 420) = *(_DWORD *)&a4[v17 + 92];
          *(_DWORD *)((char *)v11 + v20 + 432) = *(_DWORD *)&a4[v17 + 104];
          *(_DWORD *)((char *)v11 + v20 + 428) = *(_DWORD *)&a4[v17 + 100];
          *(_QWORD *)((char *)v11 + v20 + 224) = v18[2];
          *(_DWORD *)((char *)v11 + v20 + 232) = *((_DWORD *)v18 + 6);
          *(_DWORD *)((char *)v11 + v20 + 236) = *((_DWORD *)v18 + 7);
          v31 = (_QWORD *)((char *)v11 + v20 + 208);
          *v31 = 0x700000000000LL;
          v21 = *(_QWORD *)(a3 + 120);
          if ( v21 == a3 + 120 )
            goto LABEL_17;
          v22 = (_QWORD *)(v21 - 8);
          if ( !v22 )
            goto LABEL_17;
          while ( 1 )
          {
            if ( !*(_QWORD *)(v15 + 8) )
            {
              v27 = WdLogNewEntry5_WdAssertion(v20);
              WdLogEvent5_WdAssertion(v27);
            }
            v23 = *(_QWORD *)(v15 + 8);
            v24 = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 268LL);
            if ( *((_DWORD *)v18 + 4) == (_DWORD)v24 )
            {
              if ( !v23 )
              {
                v28 = WdLogNewEntry5_WdAssertion(v24);
                WdLogEvent5_WdAssertion(v28);
              }
              if ( *((_DWORD *)v18 + 5) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL) + 272LL)
                && *((_DWORD *)v18 + 6) == *(_DWORD *)(v22[11] + 24LL)
                && *((_DWORD *)v18 + 7) == *(_DWORD *)(v22[12] + 24LL) )
              {
                break;
              }
            }
            v20 = v22[1];
            v22 = (_QWORD *)(v20 - 8);
            if ( v20 == a3 + 120 )
              v22 = 0LL;
            if ( !v22 )
              goto LABEL_16;
          }
          _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(v22, v31, v19, v16);
        }
        else
        {
          v29 = WdLogNewEntry5_WdWarning(v12, v17, v19);
          *(_QWORD *)(v29 + 24) = v14;
          *(_QWORD *)(v29 + 32) = v18;
          WdLogEvent5_WdWarning(v29);
        }
LABEL_16:
        v16 = 0x700000000000LL;
LABEL_17:
        v12 = *a4;
        ++v14;
      }
      while ( v14 < (unsigned int)v12 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v11);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v26 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v26 + 24) = a4;
    *(_QWORD *)(v26 + 32) = *a4;
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)-1073741670;
  }
  return v10;
}
