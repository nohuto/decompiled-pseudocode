/*
 * XREFs of ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180083A80
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x180316B60 (-v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180083E14 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x180084040 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetManifestedOrientationPreference(
        char *lpSubKey,
        unsigned __int16 *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  unsigned __int64 v3; // rsi
  signed __int64 v6; // r8
  wchar_t *v7; // rax
  char *v8; // r14
  __int64 v9; // rdx
  int v10; // r9d
  wchar_t v11; // cx
  wchar_t *v12; // rax
  signed __int64 v13; // r9
  wchar_t *v14; // r10
  __int64 v15; // rdx
  _WORD *v16; // rcx
  signed int StateRegKey; // edi
  __int16 v18; // ax
  signed __int64 v19; // r10
  _BYTE *v20; // rcx
  unsigned __int64 v21; // rbx
  char *v22; // rax
  unsigned __int64 v23; // rcx
  _WORD *v24; // rdx
  int v25; // r10d
  __int16 v26; // ax
  unsigned __int64 v27; // rbx
  CallerIdentity *v28; // rbx
  void *v29; // rdx
  const unsigned __int16 *v30; // r8
  LSTATUS v31; // eax
  LSTATUS v32; // eax
  HKEY *phkResult; // [rsp+20h] [rbp-E0h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  DWORD Type; // [rsp+34h] [rbp-CCh] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-C8h] BYREF
  HKEY v38; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v40[4]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v41[72]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t Str[136]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v43[144]; // [rsp+210h] [rbp+110h] BYREF

  v3 = -1LL;
  *(_DWORD *)a2 = 0;
  v40[1] = -1LL;
  v40[2] = -1LL;
  v40[0] = 0LL;
  v41[0] = 0;
  v6 = lpSubKey - (char *)Str;
  v7 = Str;
  v8 = 0LL;
  v9 = 130LL;
  v10 = 0;
  while ( v9 != -2147483516 )
  {
    v11 = *(wchar_t *)((char *)v7 + v6);
    if ( !v11 )
      break;
    *v7++ = v11;
    if ( !--v9 )
    {
      --v7;
      v10 = -2147024774;
      break;
    }
  }
  *v7 = 0;
  if ( v10 < 0 )
  {
    v13 = 2147942487LL;
    StateRegKey = -2147024809;
LABEL_21:
    if ( StateRegKey >= 0 )
    {
      do
        ++v3;
      while ( v41[v3] );
      v21 = v3 + 1;
      v40[0] = 0LL;
      if ( v3 + 1 >= v3 && (v40[0] = 0LL, is_mul_ok(v21, 2uLL)) )
      {
        v22 = (char *)CoTaskMemAlloc(2 * v21);
        v40[0] = v22;
        v8 = v22;
        if ( v22 )
        {
          StateRegKey = 0;
          if ( v21 > 0x7FFFFFFF || v3 >= 0x7FFFFFFF )
          {
            if ( v3 != -1LL )
              *(_WORD *)v22 = 0;
          }
          else
          {
            v6 = (char *)v41 - v22;
            v23 = v3 + 1;
            v24 = v22;
            v25 = 0;
            v13 = 0LL;
            while ( v23 != 1 )
            {
              v26 = *(_WORD *)((char *)v24 + v6);
              if ( !v26 )
                break;
              *v24 = v26;
              ++v13;
              ++v24;
              if ( !--v23 )
                goto LABEL_50;
            }
            if ( v23 )
              goto LABEL_34;
LABEL_50:
            --v24;
            v25 = -2147024774;
            --v13;
LABEL_34:
            v27 = v21 - v13;
            *v24 = 0;
            if ( v25 >= 0 && v27 > 1 )
            {
              v6 = 2 * v27;
              if ( 2 * v27 > 2 )
                memset_0(&v8[2 * v13 + 2], 0, v6 - 2);
            }
          }
        }
        else
        {
          StateRegKey = -2147024882;
        }
      }
      else
      {
        StateRegKey = -2147024362;
      }
    }
    goto LABEL_36;
  }
  v12 = wcsrchr(Str, 0x21u);
  v14 = v12;
  if ( Str[0] == 33 || !v12 || !v12[1] )
  {
    StateRegKey = -2147024809;
    goto LABEL_21;
  }
  *v12 = 0;
  v15 = 65LL;
  v13 = (char *)Str - (char *)v41;
  v16 = v41;
  v6 = 65LL;
  StateRegKey = 0;
  while ( v6 != -2147483581 )
  {
    v18 = *(_WORD *)((char *)v16 + v13);
    if ( !v18 )
      break;
    *v16++ = v18;
    if ( !--v6 )
    {
      --v16;
      StateRegKey = -2147024774;
      break;
    }
  }
  *v16 = 0;
  if ( StateRegKey >= 0 )
  {
    StateRegKey = 0;
    v19 = (char *)v14 - v43;
    v20 = v43;
    while ( v15 != -2147483581 && *(_WORD *)&v20[v19 + 2] )
    {
      v20 += 2;
      if ( !--v15 )
      {
        StateRegKey = -2147024774;
        goto LABEL_21;
      }
    }
    goto LABEL_21;
  }
LABEL_36:
  if ( StateRegKey >= 0 )
  {
    v28 = (CallerIdentity *)OpenStateExplicit(-6LL, v8, v6, v13);
    if ( v28 || (StateRegKey = ResultFromKnownLastError(), StateRegKey >= 0) )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&hKey);
      StateRegKey = CallerIdentity::GetStateRegKey(v28, v29, v30, (unsigned int)&hKey, phkResult);
      if ( StateRegKey >= 0 )
      {
        Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v38);
        v31 = RegOpenKeyExW(hKey, (LPCWSTR)lpSubKey, 0, 0x20019u, &v38);
        StateRegKey = v31;
        if ( v31 > 0 )
          StateRegKey = (unsigned __int16)v31 | 0x80070000;
        if ( StateRegKey >= 0 )
        {
          cbData = 4;
          v32 = RegQueryValueExW(v38, L"Orientation", 0LL, &Type, Data, &cbData);
          StateRegKey = v32;
          if ( v32 > 0 )
            StateRegKey = (unsigned __int16)v32 | 0x80070000;
          if ( StateRegKey >= 0 )
          {
            if ( Type == 4 )
            {
              StateRegKey = 0;
              *(_DWORD *)a2 = *(_DWORD *)Data;
            }
            else
            {
              StateRegKey = -2147467259;
            }
          }
        }
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&v38);
      }
      CloseState(v28);
      CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v40);
  return (unsigned int)StateRegKey;
}
