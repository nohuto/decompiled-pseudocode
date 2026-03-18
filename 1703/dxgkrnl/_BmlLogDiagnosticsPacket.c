/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1C00A0940
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C000A860 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000ABB0 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00A0CDC (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(DXGDIAGNOSTICS **a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r15d
  int v16; // eax
  DMMVIDPNTOPOLOGY *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 *v20; // r14
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  DMMVIDPNTOPOLOGY *v24; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v34; // [rsp+78h] [rbp+20h]

  v7 = 376 * *a4 + 64;
  v8 = operator new(v7, 0x63644356u, PagedPool);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *v11 = 32;
    v11[1] = v7;
    v15 = 0;
    v11[10] = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    v11[12] = *a4;
    v16 = *((_DWORD *)a4 + 1);
    v11[14] = a2;
    v17 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    v11[13] = v16;
    v18 = *(_QWORD *)(a3 + 48);
    if ( *a4 )
    {
      do
      {
        v19 = 104LL * v15;
        v20 = *(__int64 **)&a4[v19 + 16];
        v21 = *v20;
        if ( (*v20 & 0x700000000000LL) == 0x700000000000LL )
        {
          v22 = 94LL * v15;
          *(_QWORD *)&v11[v22 + 16] = v21;
          *(_QWORD *)&v11[v22 + 18] = v20[1];
          *(_QWORD *)&v11[v22 + 20] = v20[2];
          v11[v22 + 22] = *((_DWORD *)v20 + 6);
          v11[v22 + 23] = *((_DWORD *)v20 + 7);
          v11[v22 + 34] = *((_DWORD *)v20 + 8);
          *(_QWORD *)&v11[v22 + 26] = *(__int64 *)((char *)v20 + 36);
          *(_QWORD *)&v11[v22 + 28] = *(__int64 *)((char *)v20 + 44);
          *(_QWORD *)&v11[v22 + 30] = *(__int64 *)((char *)v20 + 52);
          *(_QWORD *)&v11[v22 + 32] = *(__int64 *)((char *)v20 + 60);
          *(_QWORD *)&v11[v22 + 24] = *((unsigned int *)v20 + 18);
          v11[v22 + 35] = (int)(*((_DWORD *)v20 + 20) << 29) >> 29;
          v11[v22 + 36] = *((_DWORD *)v20 + 22);
          v11[v22 + 37] = *((_DWORD *)v20 + 23);
          *(_OWORD *)&v11[v22 + 38] = *((_OWORD *)v20 + 6);
          *(_OWORD *)&v11[v22 + 42] = *((_OWORD *)v20 + 7);
          v11[v22 + 46] = *((_DWORD *)v20 + 33);
          v11[v22 + 47] = *((_DWORD *)v20 + 34);
          v11[v22 + 48] = *((_DWORD *)v20 + 35);
          *(_QWORD *)&v11[v22 + 49] = v20[18];
          v11[v22 + 88] = *(_DWORD *)&a4[v19 + 24];
          v11[v22 + 89] = *(_DWORD *)&a4[v19 + 28];
          LOWORD(v11[v22 + 90]) = *(_WORD *)&a4[v19 + 32];
          *(_QWORD *)&v11[v22 + 91] = *(_QWORD *)&a4[v19 + 36];
          *(_QWORD *)&v11[v22 + 93] = *(_QWORD *)&a4[v19 + 44];
          *(_QWORD *)&v11[v22 + 95] = *(_QWORD *)&a4[v19 + 52];
          v11[v22 + 97] = *(_DWORD *)&a4[v19 + 60];
          LOWORD(v11[v22 + 98]) = *(_WORD *)&a4[v19 + 64];
          HIWORD(v11[v22 + 98]) = *(_WORD *)&a4[v19 + 66];
          LOWORD(v11[v22 + 99]) = *(_WORD *)&a4[v19 + 68];
          HIWORD(v11[v22 + 99]) = *(_WORD *)&a4[v19 + 70];
          v11[v22 + 100] = *(_DWORD *)&a4[v19 + 72];
          v11[v22 + 101] = *(_DWORD *)&a4[v19 + 76];
          v11[v22 + 102] = *(_DWORD *)&a4[v19 + 80];
          v11[v22 + 103] = *(_DWORD *)&a4[v19 + 84];
          v11[v22 + 104] = *(_DWORD *)&a4[v19 + 88];
          v11[v22 + 106] = *(_DWORD *)&a4[v19 + 96];
          v11[v22 + 105] = *(_DWORD *)&a4[v19 + 92];
          v11[v22 + 108] = *(_DWORD *)&a4[v19 + 104];
          v11[v22 + 107] = *(_DWORD *)&a4[v19 + 100];
          *(_QWORD *)&v11[v22 + 56] = v20[2];
          v11[v22 + 58] = *((_DWORD *)v20 + 6);
          v11[v22 + 59] = *((_DWORD *)v20 + 7);
          v34 = &v11[v22 + 52];
          *v34 = 0x700000000000LL;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v17);
          if ( FirstPath )
          {
            while ( 1 )
            {
              if ( !*(_QWORD *)(v18 + 8) )
              {
                v30 = WdLogNewEntry5_WdAssertion(v24, v23, v13, v26);
                WdLogEvent5_WdAssertion(v30);
              }
              v23 = *(_QWORD *)(v18 + 8);
              v27 = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 268LL);
              if ( *((_DWORD *)v20 + 4) == (_DWORD)v27 )
              {
                if ( !v23 )
                {
                  v31 = WdLogNewEntry5_WdAssertion(v27, 0LL, v13, v26);
                  WdLogEvent5_WdAssertion(v31);
                }
                if ( *((_DWORD *)v20 + 5) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 272LL)
                  && *((_DWORD *)v20 + 6) == *(_DWORD *)(*((_QWORD *)FirstPath + 11) + 24LL)
                  && *((_DWORD *)v20 + 7) == *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL) )
                {
                  break;
                }
              }
              v24 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
              FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v24 - 8);
              if ( v24 == (DMMVIDPNTOPOLOGY *)((char *)v17 + 24) )
                FirstPath = 0LL;
              if ( !FirstPath )
                goto LABEL_14;
            }
            _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(FirstPath, v34);
          }
        }
        else
        {
          v32 = WdLogNewEntry5_WdWarning(v12, v19, v21, 0x700000000000LL);
          *(_QWORD *)(v32 + 24) = v15;
          *(_QWORD *)(v32 + 32) = v20;
          WdLogEvent5_WdWarning(v32);
        }
LABEL_14:
        v12 = *a4;
        ++v15;
        v14 = 0x700000000000LL;
      }
      while ( v15 < (unsigned int)v12 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v11, v13, v14);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v29 + 24) = a4;
    *(_QWORD *)(v29 + 32) = *a4;
    WdLogEvent5_WdLowResource(v29);
    return (unsigned int)-1073741670;
  }
  return v10;
}
