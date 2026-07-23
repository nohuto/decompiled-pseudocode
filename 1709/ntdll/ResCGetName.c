/*
 * XREFs of ResCGetName @ 0x180110DA8
 * Callers:
 *     ResCRuntimeViewLoadCultureMap @ 0x18010C144 (ResCRuntimeViewLoadCultureMap.c)
 *     ResCGetHighestCacheIndex @ 0x1801106D8 (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x18011086C (ResCGetHighestConsecutiveCacheIndex.c)
 *     ResCGetIndexedName @ 0x180110974 (ResCGetIndexedName.c)
 *     ResCGetSubIndexedName @ 0x180111190 (ResCGetSubIndexedName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18010E75C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _CopyLowerCaseAndSubstitute @ 0x180111238 (_CopyLowerCaseAndSubstitute.c)
 */

_BOOL8 __fastcall ResCGetName(__int64 a1, __int16 a2, wchar_t *a3)
{
  int v3; // edi
  const wchar_t *v6; // r12
  const wchar_t *v7; // r15
  void *v8; // r14
  int v9; // ebx
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  const unsigned __int16 *v12; // r8
  int v13; // eax
  const wchar_t *v14; // rax
  const unsigned __int16 *v15; // r8
  PVOID v16; // rax
  PVOID Heap; // rax
  int v18; // eax
  const wchar_t *v20; // [rsp+28h] [rbp-30h]

  v3 = a2 & 0xFF00;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -2147467259;
  if ( !a3 )
    return 0LL;
  if ( (unsigned __int8)a2 > 8u )
  {
    if ( (unsigned __int8)a2 != 9 )
    {
      if ( (unsigned __int8)a2 == 10 )
      {
        if ( v3 == 256 )
        {
          v20 = L"tmp";
          v12 = L"%s\\%s\\%s";
          v11 = L"upd";
          goto LABEL_16;
        }
        goto LABEL_67;
      }
      if ( (unsigned __int8)a2 != 11 )
      {
        switch ( (unsigned __int8)a2 )
        {
          case 0xCu:
            if ( v3 != 256 )
              goto LABEL_67;
            v14 = L"Rdy-";
            break;
          case 0xDu:
            if ( v3 != 256 )
              goto LABEL_67;
            v14 = L"Upd-";
            break;
          case 0xEu:
            if ( v3 != 1280 )
            {
              v6 = L"ResCache.hit";
              v7 = L"CmfHits";
              goto LABEL_66;
            }
            v14 = L"ResCache.hit";
            goto LABEL_22;
          default:
            goto LABEL_67;
        }
        v15 = L"%s%s";
        goto LABEL_64;
      }
      if ( v3 == 1280 )
      {
        v20 = L".tmp";
        v11 = L"Upd";
        goto LABEL_15;
      }
      if ( v3 != 256 )
        goto LABEL_67;
      v13 = StringCchPrintfW(a3, 0x103uLL, L"%s\\", a1);
LABEL_65:
      v9 = v13;
LABEL_66:
      if ( v9 >= 0 )
        goto LABEL_73;
      goto LABEL_67;
    }
    if ( v3 != 256 )
      goto LABEL_67;
    v14 = L"upd";
LABEL_63:
    v15 = L"%s\\%s";
    goto LABEL_64;
  }
  if ( (unsigned __int8)a2 == 8 )
  {
    if ( ((v3 - 256) & 0xFFFFFBFF) != 0 )
    {
      if ( v3 != 1024 )
        goto LABEL_67;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
      v8 = Heap;
      if ( !Heap || !(unsigned int)CopyLowerCaseAndSubstitute(a1, Heap) )
        goto LABEL_67;
      v13 = StringCchPrintfW(a3, 0x103uLL, L"Global\\%s%s%s", v8, L"wip", L".owner");
      goto LABEL_65;
    }
    v14 = L"wip";
    goto LABEL_63;
  }
  if ( (unsigned __int8)a2 == 1 )
  {
    if ( v3 == 256 )
    {
      v13 = StringCchPrintfW(a3, 0x103uLL, L"%s", a1);
      goto LABEL_65;
    }
    if ( v3 != 1024 )
    {
      if ( v3 != 1280 )
        goto LABEL_67;
      v14 = L"rc";
      v15 = L"%s\\%s*";
      goto LABEL_64;
    }
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v8 = v16;
    if ( !v16 || !(unsigned int)CopyLowerCaseAndSubstitute(a1, v16) )
      goto LABEL_67;
    v13 = StringCchPrintfW(a3, 0x103uLL, L"Global\\%s/base%s", v8, L".owner");
    goto LABEL_65;
  }
  if ( (unsigned __int8)a2 == 2 )
  {
    v6 = L"ResCache.ccm";
    goto LABEL_67;
  }
  if ( (unsigned __int8)a2 == 3 )
  {
    v6 = L"ResCache.mni";
    goto LABEL_67;
  }
  if ( (unsigned __int8)a2 == 4 )
  {
    if ( v3 != 1280 )
    {
      v6 = L"ResCache.dir";
      v7 = L"Directory";
      goto LABEL_66;
    }
    v14 = L"ResCache.dir";
LABEL_22:
    v15 = L"%s\\*\\%s";
LABEL_64:
    v13 = StringCchPrintfW(a3, 0x103uLL, v15, a1, v14);
    goto LABEL_65;
  }
  if ( (unsigned __int8)a2 == 5 )
  {
    if ( v3 == 1280 )
    {
      v10 = L".cmf";
      goto LABEL_14;
    }
  }
  else
  {
    if ( (unsigned __int8)a2 != 6 )
    {
      if ( (unsigned __int8)a2 == 7 )
        v6 = L"ResCache.usg";
      goto LABEL_67;
    }
    if ( v3 == 1280 )
    {
      v10 = L".toc";
LABEL_14:
      v20 = v10;
      v11 = L"Segment";
LABEL_15:
      v12 = L"%s\\%s*%s";
LABEL_16:
      v13 = StringCchPrintfW(a3, 0x103uLL, v12, a1, v11, v20);
      goto LABEL_65;
    }
  }
LABEL_67:
  switch ( v3 )
  {
    case 256:
      goto LABEL_70;
    case 512:
      if ( !v7 )
        break;
      v18 = StringCchPrintfW(a3, 0x103uLL, L"%s%s", a1, v7);
      goto LABEL_72;
    case 1280:
LABEL_70:
      if ( v6 )
      {
        v18 = StringCchPrintfW(a3, 0x103uLL, L"%s\\%s", a1, v6);
LABEL_72:
        v9 = v18;
      }
      break;
  }
LABEL_73:
  a3[259] = 0;
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  return v9 >= 0;
}
