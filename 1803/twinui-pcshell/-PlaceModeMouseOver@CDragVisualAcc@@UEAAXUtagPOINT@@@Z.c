/*
 * XREFs of ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x1802F9780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1802F8778 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x1802F9A50 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 */

void __fastcall CDragVisualAcc::PlaceModeMouseOver(CDragVisualAcc *this, struct tagPOINT a2)
{
  BOOL v3; // ebx
  const WCHAR *v4; // rcx
  bool v5; // zf
  unsigned __int16 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  struct tagPOINT v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  if ( *((_DWORD *)this + 4) == 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v3 = Geometry::CRect::Contains((CDragVisualAcc *)((char *)this + 40), &v9);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v6);
    v4 = &word_18035ABCC;
    v5 = *((_QWORD *)this + 10) == 0LL;
    v7 = -1LL;
    if ( !v5 )
      v4 = (const WCHAR *)*((_QWORD *)this + 10);
    v8 = -1LL;
    if ( (int)GenerateDropEffectPlaceMode((__int64)v4, v3 + 1, &v6) >= 0 )
      CDragVisualAcc::SetDropEffect(this, v6);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v6);
  }
}
