/*
 * XREFs of ?GetTitle@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180047D00
 * Callers:
 *     ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004C4B0 (-GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall CTaskWindow::GetTitle(CTaskWindow *this, unsigned __int16 **a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  int v5; // ebx
  void *v6; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 9);
    memset(v8, 0, 24);
    if ( v4 == -1LL )
    {
      do
        ++v4;
      while ( *(_WORD *)(v3 + 2 * v4) );
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v8,
           v3,
           v4);
    if ( v5 < 0 )
    {
      v6 = (void *)v8[0];
    }
    else
    {
      v6 = 0LL;
      *a2 = (unsigned __int16 *)v8[0];
    }
    if ( v6 )
      CoTaskMemFree(v6);
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return (unsigned int)v5;
}
