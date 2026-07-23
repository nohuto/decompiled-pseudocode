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

NTSTATUS RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  _WORD *Heap; // r15
  int SystemDefaultUILanguage; // ebx
  PLCID v3; // rdi
  const WCHAR *v4; // rcx
  __int64 v5; // rax
  __int16 v6; // cx
  NTSTATUS result; // eax
  __int64 v8; // rsi
  ULONG v9; // r12d
  void *v10; // r14
  NTSTATUS v11; // edi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _WORD *v14; // rcx
  int v15; // edx
  __int16 v16; // cx
  __int64 v17; // rcx
  char v18; // r12
  HANDLE v19; // rcx
  void *v20; // rax
  void *v21; // rbx
  __int64 v22; // rcx
  LANGID DefaultUILanguageId; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v26; // [rsp+48h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+58h] [rbp-A8h] BYREF
  PLCID Lcid; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES v33; // [rsp+B0h] [rbp-50h] BYREF
  char v34; // [rsp+E0h] [rbp-20h] BYREF

  v0 = 0;
  Heap = 0LL;
  KeyHandle = 0LL;
  ZwIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage >= 0 )
  {
    v3 = Lcid;
    SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, Lcid);
    if ( SystemDefaultUILanguage >= 0 )
    {
      String.Buffer = (PWCH)&v34;
      *(_DWORD *)&String.Length = 11272192;
      if ( RtlLCIDToCultureName(DefaultUILanguageId, &String) )
      {
        if ( v3 )
        {
          v25 = 0;
          v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
          v26 = 0LL;
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
            v26 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
            LOWORD(v25) = 2 * v6;
            HIWORD(v25) = 2 * v6 + 2;
          }
          if ( SystemDefaultUILanguage >= 0 )
          {
            KeyHandle = 0LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
            if ( result < 0 )
              return result;
            Handle = 0LL;
            LODWORD(v8) = 0;
            v9 = 0;
            v10 = 0LL;
            Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
            if ( Heap )
            {
              while ( 1 )
              {
                v11 = ZwEnumerateKey(KeyHandle, v9, KeyBasicInformation, Heap, 0x200u, &ResultLength);
                if ( v11 < 0 )
                  break;
                v12 = *((unsigned int *)Heap + 3);
                ++v9;
                if ( v12 + 24 <= 0x200 )
                {
                  Heap[(v12 >> 1) + 8] = 0;
                  if ( (int)sub_180044C70((__int64)Lcid, Heap + 8, 0, &v28) < 0 )
                  {
                    if ( wcsicmp(Heap + 8, String.Buffer) )
                    {
                      v25 = 0;
                      v26 = 0LL;
                      if ( Heap == (_WORD *)-16LL )
                        goto LABEL_33;
                      v13 = 0x7FFFLL;
                      v14 = Heap + 8;
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
                        v26 = Heap + 8;
                        LOWORD(v25) = 2 * v16;
                        HIWORD(v25) = 2 * v16 + 2;
                      }
                      if ( v15 >= 0 )
                      {
LABEL_33:
                        v33.RootDirectory = KeyHandle;
                        Handle = 0LL;
                        v33.ObjectName = (PUNICODE_STRING)&v25;
                        v33.Length = 48;
                        v33.Attributes = 64;
                        *(_OWORD *)&v33.SecurityDescriptor = 0LL;
                        if ( ZwOpenKey(&Handle, 0xF003Fu, &v33) >= 0 )
                        {
                          if ( v10 )
                          {
                            if ( (unsigned int)v8 >= v0 )
                            {
                              v20 = (void *)sub_1800EECC8(v17, v0 + 10);
                              v21 = v20;
                              if ( !v20 )
                              {
LABEL_36:
                                v11 = -1073741801;
                                break;
                              }
                              memmove(v20, v10, v0);
                              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
                              v0 += 10;
                              v10 = v21;
                            }
                          }
                          else
                          {
                            v0 = 10;
                            v10 = (void *)sub_1800EECC8(v17, 10LL);
                            if ( !v10 )
                              goto LABEL_36;
                          }
                          v22 = (unsigned int)v8;
                          LODWORD(v8) = v8 + 1;
                          *((_QWORD *)v10 + v22) = Handle;
                          Handle = 0LL;
                        }
                      }
                    }
                  }
                }
              }
              if ( Handle )
                ZwClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v11 != -2147483622 )
                SystemDefaultUILanguage = v11;
              v18 = 0;
              if ( v10 )
              {
                while ( (_DWORD)v8 )
                {
                  v8 = (unsigned int)(v8 - 1);
                  v19 = (HANDLE)*((_QWORD *)v10 + v8);
                  Handle = v19;
                  if ( v19 )
                  {
                    if ( SystemDefaultUILanguage >= 0 )
                    {
                      v18 = 1;
                      ZwDeleteKey(v19);
                      v19 = Handle;
                    }
                    ZwClose(v19);
                  }
                }
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
              }
              if ( SystemDefaultUILanguage >= 0 && v18 )
              {
                ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                sub_18006E3A0();
                RtlEnterCriticalSection(&stru_180159BA0);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)qword_18015BF90, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( qword_18015BF90 )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_18015BF90);
                  qword_18015BF90 = 0LL;
                }
                RtlLeaveCriticalSection(&stru_180159BA0);
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
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return SystemDefaultUILanguage;
}
