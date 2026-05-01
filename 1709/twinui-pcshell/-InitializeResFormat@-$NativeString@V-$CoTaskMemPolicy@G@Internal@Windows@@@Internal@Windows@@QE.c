/*
 * XREFs of ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180174720
 * Callers:
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x180171608 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x18005D804 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_18005D804.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
        __int64 a1,
        HMODULE a2,
        unsigned int a3,
        ...)
{
  char v4; // di
  unsigned __int16 *v6; // rbx
  int v7; // esi
  HRSRC Resource; // rax
  HGLOBAL v9; // rax
  _WORD *v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rax
  bool v13; // zf
  const WCHAR *v14; // rax
  unsigned __int64 v15; // r8
  const WCHAR *v16; // rdx
  int v17; // eax
  _QWORD v19[11]; // [rsp+20h] [rbp-58h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a3;
  v6 = 0LL;
  memset(v19, 0, 24);
  v7 = -2147467259;
  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( Resource )
  {
    v9 = LoadResource(a2, Resource);
    if ( v9 )
    {
      v10 = LockResource(v9);
      if ( v10 )
      {
        v11 = v4 & 0xF;
        if ( v11 )
        {
          v12 = v11;
          do
          {
            v10 += (unsigned int)(unsigned __int16)*v10 + 1;
            --v12;
          }
          while ( v12 );
        }
        v13 = *v10 == 0;
        v14 = v10 + 1;
        v15 = (unsigned __int16)*v10;
        v16 = &word_18021F3A8;
        if ( !v13 )
          v16 = v14;
        v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)v19,
                (__int64)v16,
                v15);
        v6 = (unsigned __int16 *)v19[0];
        v7 = v17;
      }
    }
  }
  if ( v7 >= 0 )
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           a1,
           v6,
           va);
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)v7;
}
