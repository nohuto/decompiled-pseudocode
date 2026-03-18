/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00B626C
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0E70 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01C3780 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C01C4BA0 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00B8D7C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00B9388 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B9988 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B999C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        struct _QDC_CONTEXT *a4)
{
  __int64 v4; // rdi
  struct _QDC_CONTEXT *v5; // r14
  char v6; // r12
  struct D3DKMT_GETPATHSMODALITY *v7; // rbx
  unsigned int v8; // ebp
  int v9; // edx
  char v10; // r15
  int *v11; // r8
  bool v12; // al
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rsi
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v19; // eax
  int v20; // edx
  __int64 v21; // rdx
  bool v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // [rsp+68h] [rbp+10h]

  v28 = a2;
  v4 = *((_QWORD *)a4 + 1);
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = 1;
  if ( (_BYTE)a3 )
  {
    if ( *((_DWORD *)a4 + 1) )
      goto LABEL_3;
LABEL_55:
    v21 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v21 + 24) = *((unsigned int *)v5 + 1);
    if ( !v6 )
      v8 = *((unsigned __int16 *)v7 + 10);
    *(_QWORD *)(v21 + 32) = v8;
    WdLogEvent5_WdWarning(v21);
    return 3221225507LL;
  }
  if ( *((_DWORD *)a4 + 1) < (unsigned int)*((unsigned __int16 *)a1 + 10) )
    goto LABEL_55;
LABEL_3:
  v9 = *((unsigned __int16 *)a1 + 10);
  v10 = 0;
  if ( *((_WORD *)a1 + 10) )
  {
    v11 = (int *)((char *)a1 + 136);
    do
    {
      v12 = IsInternalVideoOutput(*v11);
      v11 = (int *)(v14 + 264);
      if ( v12 )
        v10 = 1;
    }
    while ( v13 != 1 );
  }
  v15 = 0;
  if ( v9 )
  {
    v16 = 0x100000000000LL;
    while ( 1 )
    {
      v17 = 264LL * v15;
      if ( !v6 || !v10 || (v22 = IsInternalVideoOutput(*(_DWORD *)((char *)v7 + v17 + 136))) )
      {
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)(v4 + 8) = 0LL;
        if ( (v16 & *(_QWORD *)((_BYTE *)v7 + v17 + 48)) == 0 )
        {
          v23 = WdLogNewEntry5_WdAssertion(a1);
          *(_QWORD *)(v23 + 24) = 1134LL;
          WdLogEvent5_WdAssertion(v23);
          v16 = 0x100000000000LL;
        }
        *(_QWORD *)v4 |= v16 & *(_QWORD *)((_BYTE *)v7 + v17 + 48);
        *(_QWORD *)(v4 + 16) = *(_QWORD *)((char *)v7 + v17 + 64);
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x200000000000LL) == 0 )
        {
          v24 = WdLogNewEntry5_WdAssertion(0x200000000000LL);
          *(_QWORD *)(v24 + 24) = 1138LL;
          WdLogEvent5_WdAssertion(v24);
        }
        *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x200000000000LL;
        *(_DWORD *)(v4 + 24) = *(_DWORD *)((char *)v7 + v17 + 72);
        *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x4000000000000000LL;
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x400000000000LL) == 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(0x400000000000LL);
          *(_QWORD *)(v25 + 24) = 1144LL;
          WdLogEvent5_WdAssertion(v25);
        }
        *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x400000000000LL;
        *(_DWORD *)(v4 + 28) = *(_DWORD *)((char *)v7 + v17 + 76);
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x800000000000LL) == 0 )
        {
          v26 = WdLogNewEntry5_WdAssertion(0x800000000000LL);
          *(_QWORD *)(v26 + 24) = 1148LL;
          WdLogEvent5_WdAssertion(v26);
        }
        *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x800000000000LL;
        *(_DWORD *)(v4 + 80) = *(_DWORD *)((char *)v7 + v17 + 136);
        *(_DWORD *)(v4 + 84) = *(_DWORD *)((char *)v7 + v17 + 140);
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x4000000000000LL) != 0 )
        {
          *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x4000000000000LL;
          *(_DWORD *)(v4 + 156) = *(_DWORD *)((char *)v7 + v17 + 232);
          *(_QWORD *)(v4 + 168) = *(_QWORD *)((char *)v7 + v17 + 244);
        }
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x8000000000000LL) == 0 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0x8000000000000LL);
          *(_QWORD *)(v27 + 24) = 1160LL;
          WdLogEvent5_WdAssertion(v27);
        }
        *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x8000000000000LL;
        *(_BYTE *)(v4 + 101) = *((_BYTE *)v7 + v17 + 177);
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x87) != 0 )
        {
          *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x87LL;
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((char *)v7 + v17 + 80, v4 + 32);
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v17 + 48) & 0x200LL) != 0 )
        {
          *(_QWORD *)v4 |= 0x200uLL;
          v19 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)((char *)v7 + v17 + 180));
          v20 = 1;
          if ( (unsigned int)(v19 - 1) <= 3 )
            v20 = v19;
          *(_DWORD *)(v4 + 104) = v20;
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v17 + 48) & 0x10000LL) != 0 )
        {
          *(_QWORD *)v4 |= 0x10000uLL;
          *(_DWORD *)(v4 + 112) = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)v7 + v17 + 188));
        }
        if ( (*(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0x40000000000LL) != 0 )
        {
          *(_QWORD *)v4 |= 0x40000000000uLL;
          *(_DWORD *)(v4 + 108) = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)v7 + v17 + 184));
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v17 + 48) & 0x800LL) != 0 )
        {
          *(_QWORD *)v4 |= 0x800uLL;
          *(_QWORD *)(v4 + 116) = *(_QWORD *)((char *)v7 + v17 + 192);
        }
        a1 = (struct D3DKMT_GETPATHSMODALITY *)0xBF00001000000000LL;
        *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)v7 + v17 + 48) & 0xBF00001000000000uLL;
        if ( v28 || *(__int64 *)((char *)v7 + v17 + 48) < 0 )
        {
          a1 = (struct D3DKMT_GETPATHSMODALITY *)0x8000000000000000LL;
          *(_QWORD *)v4 |= 0x8000000000000000uLL;
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v17 + 48) & 0x20000) != 0 )
        {
          *(_QWORD *)v4 |= 0x20000uLL;
          *(_QWORD *)(v4 + 124) = *(_QWORD *)((char *)v7 + v17 + 200);
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v17 + 48) & 0x100LL) != 0 )
        {
          *(_QWORD *)v4 |= 0x100uLL;
          *(_DWORD *)(v4 + 88) = *(_DWORD *)((char *)v7 + v17 + 144);
          *(_DWORD *)(v4 + 92) = *(_DWORD *)((char *)v7 + v17 + 148);
          *(_DWORD *)(v4 + 96) = *(_DWORD *)((char *)v7 + v17 + 164);
          *(_BYTE *)(v4 + 100) = *((_BYTE *)v7 + v17 + 176);
        }
        if ( (*(_DWORD *)((_BYTE *)v7 + v17 + 48) & 0x800000) != 0 )
        {
          *(_QWORD *)v4 |= 0x800000uLL;
          *(_OWORD *)(v4 + 140) = *(_OWORD *)((char *)v7 + v17 + 216);
        }
        if ( (*((_BYTE *)v7 + v17 + 48) & 8) != 0 )
        {
          *(_QWORD *)v4 |= 8uLL;
          *(_DWORD *)(v4 + 180) = GetColorDepthFromPickedWireFormat(*(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)v7 + v17 + 252));
          *(_DWORD *)(v4 + 176) = ConvertDmmToDisplayConfigColorEncoding(*(unsigned int *)((char *)v7 + v17 + 252));
          *(_DWORD *)(v4 + 184) = *(_DWORD *)((char *)v7 + v17 + 256);
        }
        *(_DWORD *)(v4 + 160) = *(_DWORD *)((char *)v7 + v17 + 236);
        *(_DWORD *)(v4 + 164) = *(_DWORD *)((char *)v7 + v17 + 240);
        v4 += 192LL;
        if ( v6 )
        {
LABEL_45:
          v5 = a4;
          break;
        }
        v16 = 0x100000000000LL;
      }
      if ( ++v15 >= *((unsigned __int16 *)v7 + 10) )
        goto LABEL_45;
    }
  }
  *((_QWORD *)v5 + 2) = v4;
  return 0LL;
}
