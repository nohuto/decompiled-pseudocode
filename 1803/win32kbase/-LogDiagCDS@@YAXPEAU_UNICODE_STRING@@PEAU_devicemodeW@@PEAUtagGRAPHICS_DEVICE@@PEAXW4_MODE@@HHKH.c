/*
 * XREFs of ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C004B7FC
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C004BCC8 (DrvChangeDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C004BA1C (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C004BB20 (DrvDxgkWriteDiagEntry.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
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
        int a14,
        __int16 a15,
        struct _devicemodeW *a16)
{
  void *v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // edi
  int v22; // edi
  __int64 v24; // rax

  v19 = PALLOCMEM2(0xA0uLL, 0x73726447u, 1);
  v20 = (__int64)v19;
  if ( v19 )
  {
    memset(v19, 0, 0xA0uLL);
    *(_DWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 4) = 160;
    *(_DWORD *)v20 = 5;
    *(_QWORD *)(v20 + 8) = 0LL;
    *(_QWORD *)(v20 + 16) = 0LL;
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 64) = a11;
    *(_DWORD *)(v20 + 56) = a12;
    *(_DWORD *)(v20 + 52) = a13;
    *(_DWORD *)(v20 + 60) = a14;
    v21 = ((unsigned __int16)(a15 << 13) ^ (*(_WORD *)(v20 + 48) | (a9 != 0 ? 0x20 : 0) | (a7 != 0 ? 0x10 : 0) | (a10 != 0 ? 0x40 : 0) | (a6 != 0 ? 8 : 0) | (a5 == 0 ? 4 : 0) | (a2 != 0LL) | (a1 != 0 ? 2 : 0) | (a16 != 0LL ? 0x1000 : 0))) & 0xE000 ^ ((a10 != 0 ? 0x40 : 0) | (a9 != 0 ? 0x20 : 0) | (a7 != 0 ? 0x10 : 0) | (a6 != 0 ? 8 : 0) | (a5 == 0 ? 4 : 0) | (a1 != 0 ? 2 : 0) | (a16 != 0LL ? 0x1000 : 0) | *(_DWORD *)(v20 + 48) & 0xFFFFEF80 | (a2 != 0LL));
    *(_DWORD *)(v20 + 48) = v21;
    if ( a3 )
    {
      v22 = v21 | 0x800;
      *(_DWORD *)(v20 + 48) = v22;
      *(_DWORD *)(v20 + 48) = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 256) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v20 + 72));
    FillSimpleDevModeField(a16, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v20 + 116));
    DrvDxgkWriteDiagEntry(v20);
    return Win32FreePool(v20);
  }
  else
  {
    v24 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v24 + 24) = 160LL;
    WdLogEvent5_WdLowResource(v24);
    return DrvDxgkLogCodePointPacket(5LL, a12, a13);
  }
}
