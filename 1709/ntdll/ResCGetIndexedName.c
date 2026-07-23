/*
 * XREFs of ResCGetIndexedName @ 0x180110974
 * Callers:
 *     ResCGetHighestConsecutiveCacheIndex @ 0x18011086C (ResCGetHighestConsecutiveCacheIndex.c)
 *     ResCGetSubIndexedName @ 0x180111190 (ResCGetSubIndexedName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18010E75C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ResCGetName @ 0x180110DA8 (ResCGetName.c)
 *     _CopyLowerCaseAndSubstitute @ 0x180111238 (_CopyLowerCaseAndSubstitute.c)
 */

__int64 __fastcall ResCGetIndexedName(__int64 a1, __int64 a2, int a3, wchar_t *a4)
{
  int v5; // edi
  const wchar_t *v8; // r15
  const wchar_t *v9; // rcx
  const wchar_t *v10; // r12
  int v11; // ebx
  const wchar_t *v13; // rax
  int v14; // eax
  const wchar_t *v15; // rax
  PVOID v16; // rax
  void *v17; // r13
  const wchar_t *v18; // rax
  PVOID Heap; // rax
  int v20; // eax
  __int64 v21; // [rsp+28h] [rbp-40h]
  const wchar_t *v22; // [rsp+30h] [rbp-38h]
  const wchar_t *v23; // [rsp+30h] [rbp-38h]

  v5 = a2 & 0xFF00;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = -2147467259;
  if ( !a4 )
    return 0LL;
  if ( a3 < 0 )
    return ResCGetName(a1, a2, a4);
  if ( (unsigned __int8)a2 != 1 )
  {
    switch ( (unsigned __int8)a2 )
    {
      case 4u:
        if ( ((v5 - 256) & 0xFFFFFBFF) != 0 )
        {
          if ( v5 != 512 )
          {
            if ( v5 == 768 )
            {
              v22 = L".init";
            }
            else
            {
              if ( v5 != 1024 )
                goto LABEL_46;
              v22 = L".owner";
            }
            v14 = StringCchPrintfW(a4, 0x103uLL, L"%s%04d-%s%s", a1, a3, L"Directory", v22);
            goto LABEL_43;
          }
          v13 = L"Directory";
          goto LABEL_13;
        }
        v15 = L"ResCache.dir";
        break;
      case 5u:
        v8 = L"Segment";
        v10 = L"Segment";
        v9 = L".cmf";
        goto LABEL_46;
      case 6u:
        v8 = L"Segment";
        v9 = L".toc";
        goto LABEL_46;
      case 0xBu:
        if ( v5 != 256 )
          goto LABEL_47;
        v14 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d%s", a1, L"Upd", a3, L".tmp");
        goto LABEL_43;
      case 0xEu:
        if ( ((v5 - 256) & 0xFFFFFBFF) != 0 )
        {
          if ( v5 != 512 )
            goto LABEL_46;
          v13 = L"CmfHits";
LABEL_13:
          v14 = StringCchPrintfW(a4, 0x103uLL, L"%s%04d-%s", a1, a3, v13);
LABEL_43:
          v11 = v14;
          goto LABEL_44;
        }
        v15 = L"ResCache.hit";
        break;
      default:
        goto LABEL_46;
    }
    v14 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d\\%s", a1, L"rc", a3, v15);
    goto LABEL_43;
  }
  if ( ((v5 - 256) & 0xFFFFFBFF) == 0 )
  {
    v14 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d", a1, L"rc", a3);
    goto LABEL_43;
  }
  if ( v5 != 768 )
  {
    if ( v5 != 1024 )
      goto LABEL_46;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v17 = Heap;
    if ( Heap )
    {
      if ( !(unsigned int)CopyLowerCaseAndSubstitute(a1, Heap) )
        goto LABEL_34;
      v18 = L".owner";
      goto LABEL_37;
    }
    return 0LL;
  }
  v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v17 = v16;
  if ( !v16 )
    return 0LL;
  if ( !(unsigned int)CopyLowerCaseAndSubstitute(a1, v16) )
  {
LABEL_34:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    return 0LL;
  }
  v18 = L".init";
LABEL_37:
  v11 = StringCchPrintfW(a4, 0x103uLL, L"Global\\%s/%s%04d%s", v17, L"rc", a3, v18);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
LABEL_44:
  if ( v11 >= 0 )
    goto LABEL_63;
  v9 = 0LL;
LABEL_46:
  if ( v5 == 256 )
  {
    if ( v8 )
    {
      LODWORD(v21) = a3;
      v20 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%d%s", a1, v8, v21, v9);
      goto LABEL_62;
    }
    goto LABEL_63;
  }
LABEL_47:
  switch ( v5 )
  {
    case 512:
      if ( v10 )
      {
        LODWORD(v21) = a3;
        v20 = StringCchPrintfW(a4, 0x103uLL, L"%s%s%d", a1, v10, v21);
        goto LABEL_62;
      }
      break;
    case 768:
      if ( v10 )
      {
        v23 = L".init";
        goto LABEL_55;
      }
      break;
    case 1024:
      if ( v10 )
      {
        v23 = L".owner";
LABEL_55:
        LODWORD(v21) = a3;
        v20 = StringCchPrintfW(a4, 0x103uLL, L"%s%s%d%s", a1, v10, v21, v23);
LABEL_62:
        v11 = v20;
      }
      break;
    default:
      if ( v5 != 1280 || !v8 )
        break;
      LODWORD(v21) = a3;
      v20 = StringCchPrintfW(a4, 0x103uLL, L"%s\\%s%04d\\%s*%s", a1, L"rc", v21, v8, v9);
      goto LABEL_62;
  }
LABEL_63:
  a4[259] = 0;
  return v11 >= 0;
}
