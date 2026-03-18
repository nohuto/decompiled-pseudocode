/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x14086F1D0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     BcpGetMaxResourceProfile @ 0x14013B348 (BcpGetMaxResourceProfile.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x14013E908 (BcpGetProgressMessages.c)
 *     BgpDisplayCharacterGetContext @ 0x1407CE760 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1407D0AE4 (BgpDisplayCharacterDestroyContext.c)
 *     BcpFindMessage @ 0x14086F160 (BcpFindMessage.c)
 *     BgpFoDetermineFontInformation @ 0x14086F728 (BgpFoDetermineFontInformation.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v2; // eax
  PCWSTR v4; // rbx
  const wchar_t *Message; // rax
  const wchar_t *v6; // rax
  const wchar_t *v7; // rax
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  int ProgressMessages; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  _DWORD *v19; // rdi
  __int64 v20; // r14
  _DWORD *v21; // rsi
  __int64 v22; // rdi
  __int64 Memory; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-28h]
  _DWORD v27[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v28[8]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v29[4]; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp+30h] BYREF
  PCWSTR v31; // [rsp+A0h] [rbp+40h] BYREF
  PCWSTR v32; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a1 + 120);
  if ( (v2 & 0x400000) != 0 )
  {
    dword_14035A1B0 |= 0x400000u;
  }
  else
  {
    if ( (v2 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v32 = 0LL;
    if ( a2 != -1 )
    {
      Message = BcpFindMessage(0xC1008001);
      RtlInitUnicodeString(&stru_14038CC90, Message);
      v6 = BcpFindMessage(0xC1008008);
      RtlInitUnicodeString(&stru_14038CCB0, v6);
      v7 = BcpFindMessage(0x41008009u);
      RtlInitUnicodeString(&stru_14038CCC0, v7);
      v8 = BcpFindMessage(0x41008010u);
      RtlInitUnicodeString(&stru_14038CCD0, v8);
      v9 = BcpFindMessage(0x41008011u);
      RtlInitUnicodeString(&stru_14038CCE0, v9);
      v10 = BcpFindMessage(0xC1008003);
      RtlInitUnicodeString(&stru_14038CCA0, v10);
      v11 = BcpFindMessage(0x41008014u);
      RtlInitUnicodeString(&stru_14038CD30, v11);
      v12 = BcpFindMessage(0x41008015u);
      RtlInitUnicodeString(&stru_14038CD40, v12);
      v13 = BcpFindMessage(0x41008016u);
      RtlInitUnicodeString(&stru_14038CD50, v13);
      v14 = BcpFindMessage(0x41008017u);
      RtlInitUnicodeString(&stru_14038CD60, v14);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v31) >= 0 )
      {
        RtlInitUnicodeString(&stru_14038CCF0, SourceString);
        RtlInitUnicodeString(&stru_14038CD00, v31);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v32, &v31);
        v4 = v32;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_14038CD10, v32);
          RtlInitUnicodeString(&stru_14038CD20, v31);
          if ( *BcpFindMessage(0x41008006u) == 48 )
            dword_14035A1B0 |= 0x20000u;
          v18 = *(_DWORD *)(a1 + 120);
          v19 = dword_140358260;
          v27[1] = -1;
          v27[0] = (v18 & 0x10000000) != 0 ? -14389468 : -16746281;
LABEL_10:
          v20 = 0LL;
          v21 = v19;
          while ( (int)BgpFoDetermineFontInformation(*v21, v16, v17, (unsigned int)&v31, (__int64)v29, (__int64)v28) >= 0 )
          {
            ++v20;
            *v21++ = v29[0];
            if ( v20 >= 4 )
            {
              v19 += 18;
              if ( (__int64)v19 < (__int64)&qword_1403583C8 )
                goto LABEL_10;
              v29[1] = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v27, &v25) >= 0 )
              {
                v22 = v25;
                Memory = BgpFwAllocateMemory(v25);
                if ( Memory )
                {
                  qword_14035A0F0 = 0LL;
                  BcpWorkspace = Memory;
                  v25 = __PAIR64__(HIDWORD(v31), v26);
                  qword_14035A0E8 = v22;
                  qword_14038CD70 = BgpDisplayCharacterGetContext((__int64)v27, &v25, 3);
                  if ( qword_14038CD70 )
                  {
                    dword_14035A1B0 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        BgpFwFreeMemory((__int64)SourceString);
      if ( v4 )
        BgpFwFreeMemory((__int64)v4);
      if ( qword_14038CD70 )
        BgpDisplayCharacterDestroyContext(qword_14038CD70);
    }
  }
  return 0LL;
}
