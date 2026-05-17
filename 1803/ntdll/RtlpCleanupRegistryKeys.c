/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800E8720
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800311A0 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlCleanUpTEBLangLists @ 0x18006E7E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x18009B100 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x18009C450 (ZwDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009C890 (ZwGetMUIRegistryInfo.c)
 *     ZwIsUILanguageComitted @ 0x18009CA30 (ZwIsUILanguageComitted.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800EAA3C @ 0x1800EAA3C (sub_1800EAA3C.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v2; // rdi
  const WCHAR *v3; // rax
  __int64 v4; // rcx
  __int16 v5; // ax
  __int64 result; // rax
  unsigned int v7; // edi
  int v8; // r12d
  unsigned int v9; // r13d
  char *v10; // r14
  int v11; // esi
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rax
  __int16 v15; // ax
  __int64 v16; // rcx
  char v17; // r12
  char *v18; // rsi
  __int64 v19; // rcx
  char *v20; // rax
  char *v21; // rbx
  __int64 v22; // rcx
  unsigned __int16 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int16 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  int *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  __int128 v41; // [rsp+D0h] [rbp-30h]
  char v42; // [rsp+E0h] [rbp-20h] BYREF

  Heap = 0LL;
  v27 = 0LL;
  ZwIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v29);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_54;
  v2 = v29;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v23, v29);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_54;
  String2 = (wchar_t *)&v42;
  v30 = 11272192;
  if ( !RtlLCIDToCultureName(v23, (__int64)&v30) )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_54;
  }
  if ( !v2 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_54;
  }
  v25 = 0;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  v26 = 0LL;
  v4 = 0x7FFFLL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  SystemDefaultUILanguage = -1073741811;
  if ( v4 )
  {
    SystemDefaultUILanguage = 0;
    v5 = 0x7FFF - v4;
  }
  else
  {
    v5 = 0;
  }
  if ( v4 )
  {
    v26 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
    LOWORD(v25) = 2 * v5;
    HIWORD(v25) = 2 * v5 + 2;
    v27 = 0LL;
    v34 = &v25;
    v32 = 48;
    v33 = 0LL;
    v35 = 64;
    v36 = 0LL;
    result = ZwOpenKey();
    if ( (int)result >= 0 )
    {
      v24 = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0LL;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 512LL);
      if ( !Heap )
      {
        SystemDefaultUILanguage = -1073741801;
        goto LABEL_54;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v11 = ZwEnumerateKey();
            if ( v11 < 0 )
            {
LABEL_34:
              if ( v24 )
                ZwClose();
              SystemDefaultUILanguage = 0;
              if ( v11 != -2147483622 )
                SystemDefaultUILanguage = v11;
              v17 = 0;
              if ( v10 )
              {
                if ( v7 )
                {
                  v18 = &v10[8 * v7];
                  do
                  {
                    v19 = *((_QWORD *)v18 - 1);
                    v18 -= 8;
                    --v7;
                    v24 = v19;
                    if ( v19 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v17 = 1;
                        ZwDeleteKey();
                      }
                      ZwClose();
                    }
                  }
                  while ( v7 );
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
              }
              if ( SystemDefaultUILanguage >= 0 && v17 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                sub_180031FD4();
                RtlEnterCriticalSection((__int64)&unk_18015ABE0);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(qword_18015D000, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( qword_18015D000 )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_18015D000);
                  qword_18015D000 = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&unk_18015ABE0);
              }
              goto LABEL_54;
            }
            v12 = *(unsigned int *)(Heap + 12);
            ++v8;
            if ( v12 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v12 >> 1) + 16) = 0;
              if ( (int)sub_1800352EC(v29, (const WCHAR *)(Heap + 16), 0, &v28) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          v25 = 0;
          v26 = 0LL;
          if ( Heap != -16LL )
            break;
LABEL_30:
          v38 = v27;
          v24 = 0LL;
          v39 = &v25;
          v37 = 48;
          v40 = 64;
          v41 = 0LL;
          if ( (int)ZwOpenKey() >= 0 )
          {
            if ( v10 )
            {
              if ( v7 >= v9 )
              {
                v20 = (char *)sub_1800EAA3C(v16, v9 + 10);
                v21 = v20;
                if ( !v20 )
                {
LABEL_33:
                  v11 = -1073741801;
                  goto LABEL_34;
                }
                memmove(v20, v10, v9);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
                v9 += 10;
                v10 = v21;
              }
            }
            else
            {
              v9 = 10;
              v10 = (char *)sub_1800EAA3C(v16, 10LL);
              if ( !v10 )
                goto LABEL_33;
            }
            v22 = v7++;
            *(_QWORD *)&v10[8 * v22] = v24;
            v24 = 0LL;
          }
        }
        v13 = 0x7FFFLL;
        v14 = (_WORD *)(Heap + 16);
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v13;
        }
        while ( v13 );
        if ( v13 )
          v15 = 0x7FFF - v13;
        else
          v15 = 0;
        if ( v13 )
        {
          v26 = (const WCHAR *)(Heap + 16);
          LOWORD(v25) = 2 * v15;
          HIWORD(v25) = 2 * v15 + 2;
          goto LABEL_30;
        }
      }
    }
  }
  else
  {
LABEL_54:
    if ( v27 )
      ZwClose();
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    return (unsigned int)SystemDefaultUILanguage;
  }
  return result;
}
