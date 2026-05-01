/*
 * XREFs of ?ScaleRectFromRegistry@@YAXPEAUtagRECT@@@Z @ 0x18016B7F0
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18016BB50 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18016C380 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ScaleRectFromRegistry(struct tagRECT *a1)
{
  int v1; // edi
  int v3; // esi
  LSTATUS v4; // eax
  int v5; // ecx
  unsigned int v6; // kr00_4
  HKEY v7; // rcx
  LSTATUS v8; // eax
  int v9; // ecx
  unsigned int v10; // kr04_4
  HKEY v11; // rcx
  LSTATUS v12; // eax
  int v13; // ecx
  unsigned int v14; // kr08_4
  HKEY v15; // rcx
  LSTATUS v16; // eax
  int v17; // ecx
  unsigned int v18; // edx
  int Data; // [rsp+70h] [rbp+40h] BYREF
  DWORD cbData; // [rsp+78h] [rbp+48h] BYREF
  DWORD Type; // [rsp+80h] [rbp+50h] BYREF
  HKEY hKey; // [rsp+88h] [rbp+58h] BYREF

  v1 = a1->right - a1->left;
  v3 = a1->bottom - a1->top;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input\\SIPDim", 0, 0x20019u, &hKey) )
  {
    v18 = 10 * v1 / 0x64u;
    a1->left += v18;
    a1->right -= v18;
    a1->bottom -= 4 * v3 / 0x64u;
    a1->top += 65 * v3 / 0x64u;
  }
  else
  {
    Data = 0;
    cbData = 4;
    Type = 4;
    v4 = RegQueryValueExW(hKey, L"LeftPercentBuffer", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v5 = Data;
    cbData = 4;
    if ( v4 )
      v5 = 10;
    Data = v5;
    v6 = v1 * v5;
    v7 = hKey;
    a1->left += v6 / 0x64;
    v8 = RegQueryValueExW(v7, L"RightPercentBuffer", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v9 = Data;
    cbData = 4;
    if ( v8 )
      v9 = 10;
    Data = v9;
    v10 = v1 * v9;
    v11 = hKey;
    a1->right -= v10 / 0x64;
    v12 = RegQueryValueExW(v11, L"BottomPercentBuffer", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v13 = Data;
    cbData = 4;
    if ( v12 )
      v13 = 4;
    Data = v13;
    v14 = v3 * v13;
    v15 = hKey;
    a1->bottom -= v14 / 0x64;
    v16 = RegQueryValueExW(v15, L"TopPercentBuffer", 0LL, &Type, (LPBYTE)&Data, &cbData);
    v17 = Data;
    if ( v16 )
      v17 = 65;
    Data = v17;
    a1->top += v3 * v17 / 0x64u;
    RegCloseKey(hKey);
  }
}
