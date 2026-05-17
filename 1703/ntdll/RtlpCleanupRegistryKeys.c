/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800EC730
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046590 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlCleanUpTEBLangLists @ 0x18006BFE0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1800A6C50 (ZwDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A7090 (ZwGetMUIRegistryInfo.c)
 *     ZwIsUILanguageComitted @ 0x1800A7230 (ZwIsUILanguageComitted.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800EECC8 @ 0x1800EECC8 (sub_1800EECC8.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  unsigned __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // rdi
  const WCHAR *v4; // rcx
  __int64 v5; // rax
  __int16 v6; // cx
  __int64 result; // rax
  __int64 v8; // rsi
  int v9; // r12d
  const void *v10; // r14
  int v11; // edi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _WORD *v14; // rcx
  int v15; // edx
  __int16 v16; // cx
  __int64 v17; // rcx
  char v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  const void *v24; // rbx
  __int64 v25; // rcx
  unsigned __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int16 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  int *v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int *v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  __int128 v44; // [rsp+D0h] [rbp-30h]
  char v45; // [rsp+E0h] [rbp-20h] BYREF

  v0 = 0;
  Heap = 0LL;
  v30 = 0LL;
  ZwIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v32);
  if ( SystemDefaultUILanguage >= 0 )
  {
    v3 = v32;
    SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v26, v32);
    if ( SystemDefaultUILanguage >= 0 )
    {
      String2 = (wchar_t *)&v45;
      v33 = 11272192;
      if ( RtlLCIDToCultureName(v26, (__int64)&v33) )
      {
        if ( v3 )
        {
          v28 = 0;
          v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
          v29 = 0LL;
          v5 = 0x7FFFLL;
          do
          {
            if ( !*v4 )
              break;
            ++v4;
            --v5;
          }
          while ( v5 );
          SystemDefaultUILanguage = -1073741811;
          if ( v5 )
          {
            SystemDefaultUILanguage = 0;
            v6 = 0x7FFF - v5;
          }
          else
          {
            v6 = 0;
          }
          if ( v5 )
          {
            v29 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
            LOWORD(v28) = 2 * v6;
            HIWORD(v28) = 2 * v6 + 2;
          }
          if ( SystemDefaultUILanguage >= 0 )
          {
            v30 = 0LL;
            v37 = &v28;
            v35 = 48;
            v36 = 0LL;
            v38 = 64;
            v39 = 0LL;
            result = ZwOpenKey();
            if ( (int)result < 0 )
              return result;
            v27 = 0LL;
            LODWORD(v8) = 0;
            v9 = 0;
            v10 = 0LL;
            Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 512LL);
            if ( Heap )
            {
              while ( 1 )
              {
                v11 = ZwEnumerateKey();
                if ( v11 < 0 )
                  break;
                v12 = *(unsigned int *)(Heap + 12);
                ++v9;
                if ( v12 + 24 <= 0x200 )
                {
                  *(_WORD *)(Heap + 2 * (v12 >> 1) + 16) = 0;
                  if ( (int)sub_180044C70(v32, (const WCHAR *)(Heap + 16), 0, &v31) < 0 )
                  {
                    if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                    {
                      v28 = 0;
                      v29 = 0LL;
                      if ( Heap == -16LL )
                        goto LABEL_33;
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
                      v15 = -1073741811;
                      if ( v13 )
                      {
                        v15 = 0;
                        v16 = 0x7FFF - v13;
                      }
                      else
                      {
                        v16 = 0;
                      }
                      if ( v13 )
                      {
                        v29 = (const WCHAR *)(Heap + 16);
                        LOWORD(v28) = 2 * v16;
                        HIWORD(v28) = 2 * v16 + 2;
                      }
                      if ( v15 >= 0 )
                      {
LABEL_33:
                        v41 = v30;
                        v27 = 0LL;
                        v42 = &v28;
                        v40 = 48;
                        v43 = 64;
                        v44 = 0LL;
                        if ( (int)ZwOpenKey() >= 0 )
                        {
                          if ( v10 )
                          {
                            if ( (unsigned int)v8 >= v0 )
                            {
                              v23 = (void *)sub_1800EECC8(v17, v0 + 10);
                              v24 = v23;
                              if ( !v23 )
                              {
LABEL_36:
                                v11 = -1073741801;
                                break;
                              }
                              memmove(v23, v10, v0);
                              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
                              v0 += 10;
                              v10 = v24;
                            }
                          }
                          else
                          {
                            v0 = 10;
                            v10 = (const void *)sub_1800EECC8(v17, 10LL);
                            if ( !v10 )
                              goto LABEL_36;
                          }
                          v25 = (unsigned int)v8;
                          LODWORD(v8) = v8 + 1;
                          *((_QWORD *)v10 + v25) = v27;
                          v27 = 0LL;
                        }
                      }
                    }
                  }
                }
              }
              if ( v27 )
                ZwClose();
              SystemDefaultUILanguage = 0;
              if ( v11 != -2147483622 )
                SystemDefaultUILanguage = v11;
              v18 = 0;
              if ( v10 )
              {
                while ( (_DWORD)v8 )
                {
                  v8 = (unsigned int)(v8 - 1);
                  v27 = *((_QWORD *)v10 + v8);
                  if ( v27 )
                  {
                    if ( SystemDefaultUILanguage >= 0 )
                    {
                      v18 = 1;
                      ZwDeleteKey();
                    }
                    ZwClose();
                  }
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
              }
              if ( SystemDefaultUILanguage >= 0 && v18 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                sub_18006E3A0(v20, v19, v21, v22);
                RtlEnterCriticalSection((__int64)&unk_180159BA0);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(qword_18015BF90, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( qword_18015BF90 )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_18015BF90);
                  qword_18015BF90 = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&unk_180159BA0);
              }
            }
            else
            {
              SystemDefaultUILanguage = -1073741801;
            }
          }
        }
        else
        {
          SystemDefaultUILanguage = -1073741823;
        }
      }
      else
      {
        SystemDefaultUILanguage = -1073741823;
      }
    }
  }
  if ( v30 )
    ZwClose();
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)SystemDefaultUILanguage;
}
