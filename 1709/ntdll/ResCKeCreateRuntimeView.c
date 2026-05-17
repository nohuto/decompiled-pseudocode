/*
 * XREFs of ResCKeCreateRuntimeView @ 0x18010BBAC
 * Callers:
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
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
 *     ResCKeGetCacheIndices @ 0x18010BE24 (ResCKeGetCacheIndices.c)
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 */

unsigned __int64 __fastcall ResCKeCreateRuntimeView(__int64 a1, int a2, int a3)
{
  wchar_t *v5; // rdi
  unsigned int SystemWindowsDirectory; // eax
  unsigned int v7; // r11d
  __int64 v8; // rdx
  wchar_t *v9; // r8
  __int64 v10; // r8
  int v11; // r10d
  wchar_t *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  char *v15; // r8
  wchar_t v16; // r9
  __int64 Heap; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char *v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // [rsp+30h] [rbp-248h] BYREF
  int v26; // [rsp+34h] [rbp-244h] BYREF
  _BYTE v27[8]; // [rsp+38h] [rbp-240h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-238h] BYREF

  v25 = 0;
  memset(pszDest, 0, 520);
  v5 = 0LL;
  SystemWindowsDirectory = ResGetSystemWindowsDirectory(pszDest);
  v7 = SystemWindowsDirectory;
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
        v5 = pszDest;
        if ( v7 + 8 > 0x102 )
          v5 = 0LL;
      }
    }
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 48LL);
  v18 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    return 0LL;
  }
  *(_QWORD *)(Heap + 8) = 0LL;
  ResCKeGetCacheIndices(&v26, v27);
  v20 = ResCKeDirectoryOpenMapping(v26, v19, a2, a3, 1, &v25);
  *(_QWORD *)(v18 + 16) = v20;
  if ( !v20 || !*(_DWORD *)(*(_QWORD *)(v20 + 24) + 68LL) )
  {
LABEL_29:
    if ( *(_QWORD *)(v18 + 16) )
      ResCDirectoryFree();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(v18 + 16) + 64LL) = ResCKeHitsOpenMapping();
  v21 = RtlAllocateHeap(
          (__int64)NtCurrentPeb()->ProcessHeap,
          8u,
          8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 24LL) + 52LL));
  *(_QWORD *)(v18 + 24) = v21;
  if ( !v21 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    goto LABEL_29;
  }
  if ( v5 )
    v23 = ResCDupString(v5);
  else
    v23 = 0LL;
  *(_DWORD *)v18 |= 0x80u;
  *(_QWORD *)(v18 + 32) = v23;
  v24 = v25 & 7;
  *(_QWORD *)(v18 + 40) = 0LL;
  *(_DWORD *)(v18 + 4) |= v24;
  return v18;
}
