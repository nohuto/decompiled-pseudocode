/*
 * XREFs of ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18004C180
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18004C8A8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 */

bool __fastcall CD2DBitmap::SupportsFastLock(CD2DBitmap *this)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 *v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)((char *)this - 112), &v6, &v4, &v3, &v5) )
    ReleaseInterface<IBitmapLock>((__int64 *)&v5);
  return *((_BYTE *)this + 148);
}
