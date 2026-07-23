/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800EC2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCleanUpTEBLangLists @ 0x1800031C0 (RtlCleanUpTEBLangLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180003570 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180005920 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800061E0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A0700 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A1A30 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A1E70 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A2010 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800EE9FC (_MuiRegAllocArray_0.c)
 */

NTSTATUS RtlpCleanupRegistryKeys()
{
  wchar_t *Heap; // r15
  int SystemDefaultUILanguage; // ebx
  PLCID v2; // rdi
  const WCHAR *v3; // rax
  __int64 v4; // rcx
  __int16 v5; // ax
  NTSTATUS result; // eax
  unsigned int v7; // edi
  ULONG v8; // r12d
  unsigned int v9; // r13d
  char *v10; // r14
  NTSTATUS v11; // esi
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rax
  __int16 v15; // ax
  __int64 v16; // rcx
  char v17; // r12
  char *v18; // rsi
  HANDLE v19; // rcx
  char *v20; // rax
  char *v21; // rbx
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

  Heap = 0LL;
  KeyHandle = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_54;
  v2 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_54;
  String.Buffer = (wchar_t *)&v34;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId, &String) )
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
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      Handle = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0LL;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
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
            v11 = NtEnumerateKey(KeyHandle, v8, KeyBasicInformation, Heap, 0x200u, &ResultLength);
            if ( v11 < 0 )
            {
LABEL_34:
              if ( Handle )
                NtClose(Handle);
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
                    v19 = (HANDLE)*((_QWORD *)v18 - 1);
                    v18 -= 8;
                    --v7;
                    Handle = v19;
                    if ( v19 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v17 = 1;
                        NtDeleteKey(v19);
                        v19 = Handle;
                      }
                      NtClose(v19);
                    }
                  }
                  while ( v7 );
                }
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
              }
              if ( SystemDefaultUILanguage >= 0 && v17 )
              {
                ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection(&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection(&RegistryInfoCritSect);
              }
              goto LABEL_54;
            }
            v12 = *((unsigned int *)Heap + 3);
            ++v8;
            if ( v12 + 24 <= 0x200 )
            {
              Heap[(v12 >> 1) + 8] = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap + 8, 0, &v28) < 0 )
              {
                if ( wcsicmp(Heap + 8, String.Buffer) )
                  break;
              }
            }
          }
          v25 = 0;
          v26 = 0LL;
          if ( Heap != (wchar_t *)-16LL )
            break;
LABEL_30:
          v33.RootDirectory = KeyHandle;
          Handle = 0LL;
          v33.ObjectName = (PUNICODE_STRING)&v25;
          v33.Length = 48;
          v33.Attributes = 64;
          *(_OWORD *)&v33.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&Handle, 0xF003Fu, &v33) >= 0 )
          {
            if ( v10 )
            {
              if ( v7 >= v9 )
              {
                v20 = (char *)MuiRegAllocArray_0(v16, v9 + 10);
                v21 = v20;
                if ( !v20 )
                {
LABEL_33:
                  v11 = -1073741801;
                  goto LABEL_34;
                }
                memmove(v20, v10, v9);
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
                v9 += 10;
                v10 = v21;
              }
            }
            else
            {
              v9 = 10;
              v10 = (char *)MuiRegAllocArray_0(v16, 10LL);
              if ( !v10 )
                goto LABEL_33;
            }
            v22 = v7++;
            *(_QWORD *)&v10[8 * v22] = Handle;
            Handle = 0LL;
          }
        }
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
        if ( v13 )
          v15 = 0x7FFF - v13;
        else
          v15 = 0;
        if ( v13 )
        {
          v26 = Heap + 8;
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
    if ( KeyHandle )
      NtClose(KeyHandle);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return SystemDefaultUILanguage;
  }
  return result;
}
