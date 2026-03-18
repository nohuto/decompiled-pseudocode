/*
 * XREFs of ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800BD824
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800CBDC4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int ConversationHost; // eax
  signed int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  signed int LastError; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+78h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  SetLastError(0);
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    ConversationHost = (*(__int64 (__fastcall **)(_QWORD, PSECURITY_DESCRIPTOR, char *))(**((_QWORD **)this + 3) + 56LL))(
                         *((_QWORD *)this + 3),
                         SecurityDescriptor,
                         (char *)this + 32);
    v3 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v9 = 111;
    }
    else
    {
      v4 = *((_QWORD *)this + 3);
      v10 = 0;
      v5 = (_QWORD *)((char *)this + 40);
      ConversationHost = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64, int, int, char *, int *, char *))(*(_QWORD *)v4 + 304LL))(
                           v4,
                           L"System\\CompositionEngine",
                           *((_QWORD *)this + 4),
                           1LL,
                           1,
                           1,
                           (char *)this + 16,
                           &v10,
                           (char *)this + 40);
      v3 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v9 = 128;
      }
      else
      {
        ConversationHost = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v5)(
                             *v5,
                             &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
                             (char *)this + 48);
        v3 = ConversationHost;
        if ( ConversationHost < 0 )
        {
          v9 = 138;
        }
        else
        {
          ConversationHost = CoreUICallCreateConversationHost(*((_QWORD *)this + 3), *v5, (char *)this + 56, 0LL);
          v3 = ConversationHost;
          if ( ConversationHost >= 0 )
          {
            v3 = 0;
            goto LABEL_7;
          }
          v9 = 150;
        }
      }
    }
    v8 = ConversationHost;
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v9 = 107;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v8 = v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v3;
}
