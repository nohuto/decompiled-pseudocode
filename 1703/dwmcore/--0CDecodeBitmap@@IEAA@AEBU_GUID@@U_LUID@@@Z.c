/*
 * XREFs of ??0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z @ 0x180021344
 * Callers:
 *     ?Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x1800212C0 (-Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x1800470B8 (--0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::CDecodeBitmap(CDecodeBitmap *this, const struct _GUID *a2, struct _LUID a3)
{
  __int64 v3; // rcx
  __int64 v4; // r10

  CRenderTargetBitmap::CRenderTargetBitmap(this, a2, 0);
  *(_QWORD *)(v3 + 208) = v4;
  *(_QWORD *)(v3 + 16) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)v3 = &CDecodeBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v3 + 24) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v3 + 104) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(v3 + 112) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v3 + 216) = 0LL;
  *(_DWORD *)(v3 + 224) = 0;
  *(_WORD *)(v3 + 228) = 0;
  return (CDecodeBitmap *)v3;
}
