/*
 * XREFs of CmpTraceSecurityChanging @ 0x1404E1C30
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     RtlFindUnicodeSubstring @ 0x1404E1CE0 (RtlFindUnicodeSubstring.c)
 */

__int64 __fastcall CmpTraceSecurityChanging(
        __int64 a1,
        void *a2,
        int a3,
        void *a4,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int v8; // eax
  PUNICODE_STRING v9; // rdi
  unsigned int v10; // ebx
  ULONG v12; // ebx
  ULONG v13; // esi
  unsigned __int16 v14; // r9
  __int64 v15; // r10
  int Length; // ecx
  PUNICODE_STRING FullString[2]; // [rsp+30h] [rbp-B1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  wchar_t *Buffer; // [rsp+70h] [rbp-71h]
  _DWORD v22[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  void *v25; // [rsp+90h] [rbp-51h]
  _DWORD v26[2]; // [rsp+98h] [rbp-49h] BYREF
  PUNICODE_STRING *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  _DWORD *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  void *v31; // [rsp+C0h] [rbp-21h]
  _DWORD v32[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]
  PSECURITY_DESCRIPTOR v35; // [rsp+E0h] [rbp-1h]
  _DWORD v36[2]; // [rsp+E8h] [rbp+7h] BYREF

  FullString[0] = 0LL;
  v8 = CmpConstructNameWithStatus(a1, FullString);
  v9 = FullString[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( RtlFindUnicodeSubstring(FullString[0], &CmMpsSvcKeySubstring, 1u) )
    {
      v12 = RtlLengthSecurityDescriptor(a2);
      if ( v12 > 0xFFFF )
        LOWORD(v12) = -1;
      v13 = RtlLengthSecurityDescriptor(a4);
      if ( v13 > 0xFFFF )
        LOWORD(v13) = -1;
      RtlLengthSecurityDescriptor(SecurityDescriptor);
      if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 2uLL) )
      {
        LODWORD(FullString[0]) = a3;
        Length = v9->Length;
        Buffer = v9->Buffer;
        v23 = v26;
        v26[0] = (unsigned __int16)v12;
        v27 = FullString;
        v29 = v32;
        v32[0] = (unsigned __int16)v13;
        v33 = v36;
        v19 = v22;
        v36[0] = v14;
        v20 = v15;
        v22[0] = Length;
        v22[1] = 0;
        v24 = v15;
        v25 = a2;
        v26[1] = 0;
        v28 = 4LL;
        v30 = v15;
        v31 = a4;
        v32[1] = 0;
        v34 = v15;
        v35 = SecurityDescriptor;
        v36[1] = 0;
        TlgWrite(&stru_140397090, &unk_140308270, 0LL, 0LL, 0xBu, &pData);
      }
    }
    v10 = 0;
  }
  if ( v9 )
    CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
  return v10;
}
