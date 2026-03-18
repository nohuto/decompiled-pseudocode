/*
 * XREFs of ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800C517C
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C50EC (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int ConversationHost; // eax
  signed int v3; // ebx
  __int64 *v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  signed int LastError; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+98h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A0h] [rbp+18h] BYREF

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
      v11 = 115;
    }
    else
    {
      v12 = 0LL;
      v4 = (__int64 *)*((_QWORD *)this + 3);
      v14 = 0;
      v5 = (_QWORD *)((char *)this + 40);
      v6 = *v4;
      v7 = *((_QWORD *)this + 4);
      v13 = 1;
      ConversationHost = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64, __int64 *, int, int, int, char *, int *, char *))(v6 + 312))(
                           v4,
                           L"System\\CompositionEngine",
                           v7,
                           &v12,
                           1,
                           1,
                           1,
                           (char *)this + 16,
                           &v14,
                           (char *)this + 40);
      v3 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v11 = 133;
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
          v11 = 143;
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
          v11 = 155;
        }
      }
    }
    v10 = ConversationHost;
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v11 = 111;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v10 = v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v11);
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v3;
}
