/*
 * XREFs of ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0056AE0
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C0056D00 (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        __int16 a15,
        struct _devicemodeW *a16)
{
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  unsigned int v25; // edi
  int v26; // edi
  __int64 v28; // rax

  v19 = PALLOCMEM2(0xA0uLL, 1936876615LL, 1);
  v24 = (__int64)v19;
  if ( v19 )
  {
    memset(v19, 0, 0xA0uLL);
    *(_DWORD *)(v24 + 40) = 0;
    *(_QWORD *)(v24 + 32) = 0LL;
    *(_DWORD *)(v24 + 4) = 160;
    *(_DWORD *)v24 = 5;
    *(_QWORD *)(v24 + 8) = 0LL;
    *(_QWORD *)(v24 + 16) = 0LL;
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 64) = a11;
    *(_DWORD *)(v24 + 56) = a12;
    *(_DWORD *)(v24 + 52) = a13;
    *(_DWORD *)(v24 + 60) = a14;
    v25 = ((unsigned __int16)(a15 << 13) ^ (*(_WORD *)(v24 + 48) | (a9 != 0 ? 0x20 : 0) | (a7 != 0 ? 0x10 : 0) | (a10 != 0 ? 0x40 : 0) | (a6 != 0 ? 8 : 0) | (a5 == 0 ? 4 : 0) | (a2 != 0LL) | (a1 != 0 ? 2 : 0) | (a16 != 0LL ? 0x1000 : 0))) & 0xE000 ^ ((a10 != 0 ? 0x40 : 0) | (a9 != 0 ? 0x20 : 0) | (a7 != 0 ? 0x10 : 0) | (a6 != 0 ? 8 : 0) | (a5 == 0 ? 4 : 0) | (a1 != 0 ? 2 : 0) | (a16 != 0LL ? 0x1000 : 0) | *(_DWORD *)(v24 + 48) & 0xFFFFEF80 | (a2 != 0LL));
    *(_DWORD *)(v24 + 48) = v25;
    if ( a3 )
    {
      v26 = v25 | 0x800;
      *(_DWORD *)(v24 + 48) = v26;
      *(_DWORD *)(v24 + 48) = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 272) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v24 + 72));
    FillSimpleDevModeField(a16, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v24 + 116));
    DrvDxgkWriteDiagEntry(v24);
    return Win32FreePool(v24);
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    *(_QWORD *)(v28 + 24) = 160LL;
    WdLogEvent5_WdLowResource(v28);
    return DrvDxgkLogCodePointPacket(5LL, a12, a13, a14);
  }
}
