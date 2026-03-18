/*
 * XREFs of ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0226044
 * Callers:
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0225F68 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02268A8 (_BmlGetPathModeListForAdapter.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapterWithCoreAccessHeld(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rsi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int PathModeListForAdapter; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-68h]
  char v23[16]; // [rsp+50h] [rbp-38h] BYREF

  v6 = (unsigned __int16 *)&unk_1C0079FD8;
  v11 = 0;
  do
  {
    v12 = v6[1];
    v13 = *v6;
    LOBYTE(v22) = a3;
    v23[0] = 1;
    PathModeListForAdapter = BmlGetPathModeListForAdapter(v13, v12, a1, a2, v22, a4, a5, v23, a6);
    v19 = PathModeListForAdapter;
    if ( PathModeListForAdapter != -1071774970 )
      break;
    if ( !v23[0] )
      return (unsigned int)v19;
    DxgkLogCodePointPacket(0x17u, v11++, *v6, 0xC01E0306, *(_QWORD *)(a2 + 268));
    v6 += 2;
  }
  while ( v11 < 5 );
  if ( (int)v19 >= 0 )
  {
    v20 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = v19;
    *(_QWORD *)(v20 + 32) = v11;
  }
  return (unsigned int)v19;
}
