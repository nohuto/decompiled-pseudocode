/*
 * XREFs of ResCKeGetCacheIndices @ 0x18010BE24
 * Callers:
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     _ResGetSystemWindowsDirectory @ 0x18001B1C4 (_ResGetSystemWindowsDirectory.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ResCCloseRuntimeView @ 0x18010BA90 (ResCCloseRuntimeView.c)
 *     ResCGetRegistryLatestIndex @ 0x18010EC60 (ResCGetRegistryLatestIndex.c)
 *     ResCGetHighestCacheIndex @ 0x1801106D8 (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x18011086C (ResCGetHighestConsecutiveCacheIndex.c)
 */

__int64 __fastcall ResCKeGetCacheIndices(int *a1, int *a2)
{
  int v3; // ebx
  wchar_t *v4; // rsi
  int v5; // ebp
  unsigned int SystemWindowsDirectory; // r11d
  __int64 v8; // rcx
  wchar_t *v9; // rdx
  __int64 v10; // rdx
  int v11; // r9d
  wchar_t *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  char *v15; // r10
  wchar_t v16; // dx
  wchar_t *v17; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26[4]; // [rsp+20h] [rbp-258h] BYREF
  wchar_t pszDest[264]; // [rsp+30h] [rbp-248h] BYREF

  v3 = -1;
  v4 = 0LL;
  v26[0] = -1;
  pszDest[0] = 0;
  v5 = -1;
  SystemWindowsDirectory = ResGetSystemWindowsDirectory(pszDest);
  if ( SystemWindowsDirectory )
  {
    if ( SystemWindowsDirectory >= 0x104 )
      goto LABEL_19;
    v8 = 260LL;
    v9 = pszDest;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v8;
    }
    while ( v8 );
    v10 = v8 ? 260 - v8 : 0LL;
    if ( v8 )
    {
      v11 = 0;
      v12 = &pszDest[v10];
      v13 = 260 - v10;
      if ( 260 == v10 )
        goto LABEL_17;
      v14 = 2147483646LL;
      v15 = (char *)((char *)L"\\rescache" - (char *)v12);
      while ( v14 )
      {
        v16 = *(wchar_t *)((char *)v12 + (_QWORD)v15);
        if ( !v16 )
          break;
        *v12 = v16;
        --v14;
        ++v12;
        if ( !--v13 )
          goto LABEL_17;
      }
      if ( !v13 )
      {
LABEL_17:
        --v12;
        v11 = -2147024774;
      }
      *v12 = 0;
      if ( v11 >= 0 )
      {
LABEL_19:
        v17 = pszDest;
        if ( SystemWindowsDirectory + 8 > 0x102 )
          v17 = 0LL;
        v4 = v17;
      }
    }
  }
  if ( a1 )
  {
    v19 = ResCKeOpenRuntimeView();
    if ( v19 )
    {
      v21 = v19[2];
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 24);
        if ( v22 )
          v3 = *(_DWORD *)(v22 + 12);
      }
      ResCCloseRuntimeView(v19);
    }
    if ( (unsigned int)ResCGetRegistryLatestIndex(v20, v26) )
    {
      v23 = v26[0];
      if ( v26[0] >= 0 && v26[0] != v3 )
      {
        if ( v3 >= 0 )
        {
          v5 = v26[0];
        }
        else
        {
          v3 = v26[0];
          if ( v4 )
          {
            v24 = ResCGetHighestConsecutiveCacheIndex(v4, (unsigned int)v26[0]);
            if ( v24 >= 0 && v24 != v23 )
              v5 = v24;
          }
        }
      }
    }
    if ( v3 < 0 )
    {
      if ( v4 )
      {
        v3 = ResCGetHighestCacheIndex(v4);
        if ( v3 == 9999 )
        {
          v25 = ResCGetHighestConsecutiveCacheIndex(v4, 9999LL);
          if ( v25 >= 0 )
            v3 = v25;
        }
      }
    }
    *a1 = v3;
    if ( a2 )
      *a2 = v5;
    return 1LL;
  }
  else
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
}
