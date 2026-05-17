/*
 * XREFs of ResCKeOpenRuntimeView @ 0x18001AFA0
 * Callers:
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
 *     ResCKeGetCacheIndices @ 0x18010BE24 (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     _ResGetSystemWindowsDirectory @ 0x18001B1C4 (_ResGetSystemWindowsDirectory.c)
 *     ResCKeDirectoryOpenMapping @ 0x18001B394 (ResCKeDirectoryOpenMapping.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     _ResCDupString @ 0x18008EA74 (_ResCDupString.c)
 *     ResCKeHitsOpenMapping @ 0x18008ECD8 (ResCKeHitsOpenMapping.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 */

__int64 ResCKeOpenRuntimeView()
{
  wchar_t *v0; // rdi
  unsigned int SystemWindowsDirectory; // eax
  unsigned int v2; // r10d
  __int64 v3; // rdx
  wchar_t *v4; // rcx
  int v5; // r11d
  wchar_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // r9
  wchar_t v10; // dx
  __int64 Heap; // rax
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  int v20[4]; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v20[0] = 0;
  memset(pszDest, 0, 520);
  v0 = 0LL;
  SystemWindowsDirectory = ResGetSystemWindowsDirectory(pszDest);
  v2 = SystemWindowsDirectory;
  if ( SystemWindowsDirectory )
  {
    if ( SystemWindowsDirectory >= 0x104 )
      goto LABEL_13;
    v3 = 260LL;
    v4 = pszDest;
    while ( *v4 )
    {
      ++v4;
      if ( !--v3 )
        goto LABEL_15;
    }
    v5 = 0;
    v6 = &pszDest[260 - v3];
    v7 = v3;
    v8 = 2147483646LL;
    v9 = (char *)((char *)L"\\rescache" - (char *)v6);
    while ( v8 )
    {
      v10 = *(wchar_t *)((char *)v6 + (_QWORD)v9);
      if ( !v10 )
        break;
      *v6 = v10;
      --v8;
      ++v6;
      if ( !--v7 )
      {
        --v6;
        v5 = -2147024774;
        break;
      }
    }
    *v6 = 0;
    if ( v5 >= 0 )
    {
LABEL_13:
      if ( v2 + 8 <= 0x102 )
        v0 = pszDest;
    }
  }
LABEL_15:
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 48LL);
  v13 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    return 0LL;
  }
  *(_QWORD *)(Heap + 8) = 0LL;
  v14 = ResCKeDirectoryOpenMapping(-1, v12, 0, 0, 0, (__int64)v20);
  *(_QWORD *)(v13 + 16) = v14;
  if ( !v14 )
  {
LABEL_17:
    if ( *(_QWORD *)(v13 + 16) )
      ResCDirectoryFree();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v13);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v14 + 24) + 68LL) )
  {
    v19 = 536937730;
    goto LABEL_32;
  }
  *(_QWORD *)(*(_QWORD *)(v13 + 16) + 64LL) = ResCKeHitsOpenMapping();
  v16 = RtlAllocateHeap(
          NtCurrentPeb()->ProcessHeap,
          8LL,
          8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 24LL) + 52LL));
  *(_QWORD *)(v13 + 24) = v16;
  if ( !v16 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      goto LABEL_17;
    v19 = 14;
LABEL_32:
    RtlSetLastWin32Error(v19);
    goto LABEL_17;
  }
  if ( v0 )
    v17 = ResCDupString(v0);
  else
    v17 = 0LL;
  *(_DWORD *)v13 |= 0x80u;
  *(_QWORD *)(v13 + 32) = v17;
  v18 = v20[0] & 7;
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_DWORD *)(v13 + 4) |= v18;
  return v13;
}
