/*
 * XREFs of ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C0090D70
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vResetSurfacePalette(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *Reserved; // rcx
  __int64 v4; // r9
  __int64 i; // r8
  void (__fastcall *v6)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r11
  int v7; // [rsp+40h] [rbp+8h]
  int v8; // [rsp+40h] [rbp+8h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 547) & 0x100) != 0 )
  {
    v2 = a1[228];
    v9 = v2;
    if ( *(_DWORD *)(v2 + 60) == 20 && (*(_DWORD *)(v2 + 24) & 0x11000) == 0 )
    {
      Reserved = WPP_MAIN_CB.Reserved;
      v4 = 32LL;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + Reserved[15]);
        HIBYTE(v7) = 48;
        *(_DWORD *)(v4 + *(_QWORD *)(v2 + 120)) = v7;
        v4 += 4LL;
        if ( v4 >= 40 )
          break;
        v2 = v9;
      }
      for ( i = 984LL; i < 992; i += 4LL )
      {
        v8 = *(_DWORD *)(Reserved[15] + i - 944);
        HIBYTE(v8) = 48;
        *(_DWORD *)(i + *(_QWORD *)(v9 + 120)) = v8;
      }
      v2 = v9;
    }
    if ( (a1[4] & 0x400) == 0 )
    {
      v6 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))a1[360];
      if ( v6 )
        v6(a1[227], &v9, 0LL, 0LL, *(_DWORD *)(v2 + 28));
    }
  }
}
