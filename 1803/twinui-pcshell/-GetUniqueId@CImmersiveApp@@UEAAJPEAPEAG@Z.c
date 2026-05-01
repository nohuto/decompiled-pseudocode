/*
 * XREFs of ?GetUniqueId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004D050
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall CImmersiveApp::GetUniqueId(CImmersiveApp *this, unsigned __int16 **a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // ebx
  wchar_t *v6; // rdx
  wchar_t *v8[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *((unsigned int *)this + 116);
  v4 = *((_QWORD *)this + 57);
  memset(v8, 0, 24);
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v8,
         L"%s+%u",
         v4,
         v3);
  if ( v5 < 0 )
  {
    v6 = v8[0];
  }
  else
  {
    v6 = 0LL;
    *a2 = v8[0];
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)v5;
}
