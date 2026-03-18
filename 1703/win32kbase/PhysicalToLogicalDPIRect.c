/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C0049B40
 * Callers:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C00727C0 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     NtUserGetClipCursor @ 0x1C00E15C0 (NtUserGetClipCursor.c)
 * Callees:
 *     OriginFromMonFlags @ 0x1C0049C70 (OriginFromMonFlags.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ScaleDPIRect @ 0x1C0049D80 (ScaleDPIRect.c)
 *     ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C0049ED4 (-LogicalDpiFromMonFlags@@YAGK@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00DE2D0 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(_OWORD *a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int8 v16; // bl
  __int64 v17; // rcx
  unsigned int v18[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+30h] BYREF

  v20 = a3;
  if ( !(unsigned int)ValidateMonFlags(&v20) || (int)Is_MonitorFromRectSupported() < 0 )
  {
    result = 0LL;
    *a1 = *(_OWORD *)a2;
    return result;
  }
  if ( a4 )
    v19 = *a4;
  else
    v19 = 0LL;
  v7 = &v19;
  if ( a4 )
    v7 = a4;
  if ( (v20 & 0x100) == 0 )
    goto LABEL_8;
  if ( !*v7 )
  {
    if ( **(_DWORD **)gpDispInfo > 1u )
    {
      v16 = DpiAwarenessContextFromMonitorFlags(v20);
      v18[0] = (*(_DWORD *)a2 + *(_DWORD *)(a2 + 8)) / 2;
      v18[1] = (*(_DWORD *)(a2 + 4) + *(_DWORD *)(a2 + 12)) / 2;
      v17 = (int)IsDCELogicalSpeedTopLevelHitTestSupported(2LL) < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest(v18, 18LL);
      if ( v17 && ((v16 ^ *(_BYTE *)(v17 + 368)) & 0xF) == 0 )
        *v7 = HMValidateSharedHandleNoRip(*(_QWORD *)(v17 + 360));
    }
LABEL_8:
    if ( !*v7 )
      *v7 = _MonitorFromRect(a2, v20 & 3 | 0x20);
  }
  v8 = *v7;
  v18[0] = 32;
  ValidateMonFlags(v18);
  v9 = *(_QWORD *)(v8 + 40);
  if ( (v18[0] & 0x40) != 0 )
  {
    v10 = (__int64 *)(v9 + 44);
  }
  else if ( SLOBYTE(v18[0]) < 0 )
  {
    v10 = (__int64 *)(v9 + 60);
  }
  else
  {
    v10 = (__int64 *)(v9 + 28);
  }
  v11 = *v10;
  OriginFromMonFlags(v20, *v7);
  v12 = LogicalDpiFromMonFlags(v20);
  ScaleDPIRect((_DWORD)a1, a2, v12, *(unsigned __int16 *)(v13 + 128), v14, v11);
  return 1LL;
}
