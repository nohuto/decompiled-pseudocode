/*
 * XREFs of ?SetAppModelUserId@PWSLayoutItem@@UEAAJPEBG@Z @ 0x1800CEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall PWSLayoutItem::SetAppModelUserId(PWSLayoutItem *this, const unsigned __int16 *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 16,
         a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (void *)*((_QWORD *)this + 5);
    if ( v6 )
    {
      CoTaskMemFree(v6);
      *((_QWORD *)this + 5) = 0LL;
    }
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutitem.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
