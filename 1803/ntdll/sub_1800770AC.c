/*
 * XREFs of sub_1800770AC @ 0x1800770AC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800770AC(
        PUNICODE_STRING StringToFind,
        unsigned __int16 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        PUNICODE_STRING *NewName)
{
  NTSTATUS ActivationContextSectionString; // ebx
  __int64 hActCtx; // rdi
  unsigned __int16 v12; // r13
  const WCHAR *v13; // r14
  SIZE_T v14; // r12
  int v15; // eax
  unsigned __int64 v16; // rdx
  ULONG NewFlags; // [rsp+54h] [rbp-1F4h] BYREF
  NTSTATUS v19; // [rsp+58h] [rbp-1F0h]
  __int64 v20; // [rsp+60h] [rbp-1E8h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+68h] [rbp-1E0h] BYREF
  PUNICODE_STRING StaticString; // [rsp+78h] [rbp-1D0h]
  PCWCH v23; // [rsp+80h] [rbp-1C8h]
  PUNICODE_STRING *v24; // [rsp+88h] [rbp-1C0h]
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v26; // [rsp+100h] [rbp-148h] BYREF
  int v27; // [rsp+108h] [rbp-140h]
  _BYTE v28[56]; // [rsp+110h] [rbp-138h] BYREF
  char v29; // [rsp+150h] [rbp-F8h] BYREF

  StaticString = a3;
  v24 = NewName;
  v20 = 0LL;
  NewFlags = 0;
  ReturnedData.cbSize = 112;
  memset(&ReturnedData.ulDataFormatVersion, 0, 0x6CuLL);
  v26 = 72LL;
  v27 = 1;
  memset(v28, 0, sizeof(v28));
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     StringToFind,
                                     0LL,
                                     a3,
                                     a4,
                                     NewName,
                                     &NewFlags,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( qword_18015CF98 )
    {
      if ( (NewFlags & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0LL, 2u, StringToFind, &ReturnedData);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( ReturnedData.ulDataFormatVersion == 1 )
          {
            if ( (ReturnedData.ulFlags & 1) != 0 )
            {
              hActCtx = 0LL;
              ReturnedData.hActCtx = 0LL;
            }
            else
            {
              hActCtx = (__int64)ReturnedData.hActCtx;
              if ( (ReturnedData.ulFlags & 2) != 0 )
                hActCtx = -4LL;
              ReturnedData.hActCtx = (HANDLE)hActCtx;
            }
            v12 = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
            v13 = (const WCHAR *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
            LocaleName.Buffer = (PWCH)&v29;
            LocaleName.MaximumLength = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(a2, &LocaleName, 2u, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)LocaleName.Length >> 1;
              if ( RtlCompareUnicodeStrings(v13, (unsigned __int64)v12 >> 1, LocaleName.Buffer, v14, 1u) )
              {
                v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))qword_18015CF98)(hActCtx, a2, &v20);
                ActivationContextSectionString = v15;
                if ( v15 >= 0 )
                {
                  if ( v20 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v26, v20);
                    if ( a4->Buffer )
                      RtlFreeUnicodeString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       StringToFind,
                                                       0LL,
                                                       StaticString,
                                                       a4,
                                                       v24,
                                                       &NewFlags,
                                                       0LL,
                                                       0LL);
                    v19 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7u,
                                                         0LL,
                                                         2u,
                                                         StringToFind,
                                                         &ReturnedData);
                      v19 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( ReturnedData.ulDataFormatVersion == 1 )
                        {
                          v16 = *((unsigned __int16 *)ReturnedData.AssemblyMetadata.lpInformation + 46);
                          WORD1(StaticString) = v16;
                          LOWORD(StaticString) = v16;
                          v23 = (PCWCH)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                      + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
                          if ( RtlCompareUnicodeStrings(v23, v16 >> 1, LocaleName.Buffer, v14, 1u) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v19 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v26);
                  }
                  if ( qword_18015CFA8 )
                    qword_18015CFA8();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
