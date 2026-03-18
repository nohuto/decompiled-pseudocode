/*
 * XREFs of ?GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801B63B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801B6520 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetLegacyBitmapSource(
        CDxHandleStereoBitmapRealization *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  char *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ebx
  int v9; // eax

  v3 = (char *)this - 16;
  if ( a3 )
    v5 = *((unsigned int *)a3 + 3);
  else
    v5 = 0LL;
  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v3, v5) )
  {
    *a2 = 0LL;
    return 0;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct IBitmapSource **, __int64))(*(_QWORD *)(v7 + 432) + 72LL))(
           v7 + 432,
           a2,
           v6);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Bu);
  }
  return v8;
}
