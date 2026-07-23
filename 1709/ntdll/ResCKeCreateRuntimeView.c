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

_DWORD *__fastcall ResCKeCreateRuntimeView(__int64 a1, int a2, int a3)
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
  _DWORD *Heap; // rax
  _DWORD *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  PVOID v21; // rax
  void *v22; // rcx
  char *v24; // rax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-248h] BYREF
  int v27; // [rsp+34h] [rbp-244h] BYREF
  _BYTE v28[8]; // [rsp+38h] [rbp-240h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-238h] BYREF

  v26 = 0;
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
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v18 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    return 0LL;
  }
  *((_QWORD *)Heap + 1) = 0LL;
  ResCKeGetCacheIndices(&v27, v28);
  v20 = ResCKeDirectoryOpenMapping(v27, v19, a2, a3, 1u, &v26);
  *((_QWORD *)v18 + 2) = v20;
  if ( !v20 || !*(_DWORD *)(v20[3] + 68LL) )
  {
LABEL_29:
    v22 = (void *)*((_QWORD *)v18 + 2);
    if ( v22 )
      ResCDirectoryFree(v22);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    return 0LL;
  }
  *(_QWORD *)(*((_QWORD *)v18 + 2) + 64LL) = ResCKeHitsOpenMapping();
  v21 = RtlAllocateHeap(
          NtCurrentPeb()->ProcessHeap,
          8u,
          8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 24LL) + 52LL));
  *((_QWORD *)v18 + 3) = v21;
  if ( !v21 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    goto LABEL_29;
  }
  if ( v5 )
    v24 = ResCDupString(v5);
  else
    v24 = 0LL;
  *v18 |= 0x80u;
  *((_QWORD *)v18 + 4) = v24;
  v25 = v26 & 7;
  *((_QWORD *)v18 + 5) = 0LL;
  v18[1] |= v25;
  return v18;
}
