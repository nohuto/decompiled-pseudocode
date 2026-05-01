/*
 * XREFs of ?GetUniqueId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800538C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005D360 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall CImmersiveApp::GetUniqueId(CImmersiveApp *this, unsigned __int16 **a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // ebx
  void *v6; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *((unsigned int *)this + 114);
  v4 = *((_QWORD *)this + 56);
  memset(v8, 0, 24);
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v8,
         L"%s+%u",
         v4,
         v3);
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
  return (unsigned int)v5;
}
