/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180083E14
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180083A80 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x180084040 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180084060 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetStateRegKey(CallerIdentity *this, HKEY a2, const unsigned __int16 *a3, HKEY *a4)
{
  signed int LastError; // eax
  signed int Error; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  const WCHAR *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char *v13; // r8
  WCHAR *v14; // rdx
  __int64 v15; // r9
  WCHAR *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  LSTATUS v19; // eax
  LSTATUS Key; // eax
  WCHAR v22; // ax
  const WCHAR *v23; // [rsp+50h] [rbp-10h] BYREF
  HKEY phkResult; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+50h] BYREF
  HKEY hKey; // [rsp+B8h] [rbp+58h] BYREF

  phkResult = a2;
  *a4 = 0LL;
  v25 = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v25) )
    return (unsigned int)-2147418113;
  LastError = GetLastError();
  Error = LastError;
  if ( LastError > 0 )
    Error = (unsigned __int16)LastError | 0x80070000;
  if ( Error >= 0 )
    return (unsigned int)-2147467259;
  if ( Error == -2147024774 && v25 )
  {
    CoTaskMemFree(0LL);
    v8 = v25;
    v9 = -1LL;
    v10 = 0LL;
    v23 = 0LL;
    v11 = v25 + 1LL;
    if ( v11 >= v25 )
      v9 = v25 + 1LL;
    Error = v11 < v25 ? 0x80070216 : 0;
    if ( v11 >= v25 )
    {
      v23 = 0LL;
      if ( is_mul_ok(v9, 2uLL) )
      {
        v23 = (const WCHAR *)CoTaskMemAlloc(2 * v9);
        v10 = v23;
        if ( !v23 )
        {
          Error = -2147024882;
LABEL_33:
          CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&v23);
          return (unsigned int)Error;
        }
        Error = 0;
        if ( v9 > 0x7FFFFFFF || v8 >= 0x7FFFFFFF )
        {
          *v23 = 0;
        }
        else
        {
          v12 = v9;
          v13 = (char *)((char *)&word_18035ABCC - (char *)v23);
          v14 = (WCHAR *)v23;
          v15 = 0LL;
          do
          {
            if ( v12 == v9 )
              break;
            v22 = *(WCHAR *)((char *)v14 + (_QWORD)v13);
            if ( !v22 )
              break;
            *v14 = v22;
            ++v15;
            ++v14;
            --v12;
          }
          while ( v12 );
          v16 = v14 - 1;
          if ( v12 )
            v16 = v14;
          *v16 = 0;
          v17 = v15 - 1;
          if ( v12 )
            v17 = v15;
          v18 = v9 - v17;
          if ( v12 && v18 > 1 && 2 * v18 > 2 )
            memset_0((void *)&v10[v17 + 1], 0, 2 * v18 - 2);
        }
      }
      else
      {
        Error = -2147024362;
      }
    }
    if ( Error >= 0 )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&hKey);
      if ( (unsigned int)GetSystemAppDataKey(this, &hKey, v10, &v25) || (Error = ResultFromKnownLastError(), Error >= 0) )
      {
        Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&phkResult);
        v19 = RegOpenKeyExW(hKey, v10, 0, 0x2001Fu, &phkResult);
        Error = v19;
        if ( v19 > 0 )
          Error = (unsigned __int16)v19 | 0x80070000;
        if ( Error >= 0 )
        {
          Key = RegCreateKeyExW(phkResult, L"SplashScreen", 0, 0LL, 0, 0x20019u, 0LL, a4, 0LL);
          Error = Key;
          if ( Key > 0 )
            Error = (unsigned __int16)Key | 0x80070000;
        }
        CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&phkResult);
      }
      CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
    }
    goto LABEL_33;
  }
  return (unsigned int)Error;
}
