/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x1408E4574
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     BcpGetProgressMessages @ 0x14017C468 (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x14017C5E0 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterDestroyContext @ 0x14083D0AC (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x14083DBB8 (BgpDisplayCharacterGetContext.c)
 *     BgpFoDetermineFontInformation @ 0x1408E4884 (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x1408E4944 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v2; // eax
  PCWSTR v4; // rbx
  const WCHAR *Message; // rax
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v14; // rax
  const WCHAR *v15; // rax
  const WCHAR *v16; // rax
  const WCHAR *v17; // rax
  int ProgressMessages; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  _DWORD *v22; // rdi
  __int64 v23; // r14
  _DWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 Memory; // rax
  unsigned __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-28h]
  _DWORD v30[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v32[4]; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp+30h] BYREF
  PCWSTR v34; // [rsp+A0h] [rbp+40h] BYREF
  PCWSTR v35; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a1 + 120);
  if ( (v2 & 0x400000) != 0 )
  {
    dword_14039D7F0 |= 0x400000u;
  }
  else
  {
    if ( (v2 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v4 = 0LL;
    SourceString = 0LL;
    v35 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_1403D0F50, Message);
      v6 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_1403D0F70, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_1403D0F80, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_1403D0F90, v8);
      v9 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_1403D0FA0, v9);
      v10 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_1403D0F60, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_1403D0FF0, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_1403D1000, v12);
      v13 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_1403D1010, v13);
      v14 = (const WCHAR *)BcpFindMessage(1090551832LL);
      RtlInitUnicodeString(&stru_1403D1020, v14);
      v15 = (const WCHAR *)BcpFindMessage(1090551831LL);
      RtlInitUnicodeString(&stru_1403D1030, v15);
      v16 = (const WCHAR *)BcpFindMessage(1090551833LL);
      RtlInitUnicodeString(&stru_1403D1040, v16);
      v17 = (const WCHAR *)BcpFindMessage(1090551840LL);
      RtlInitUnicodeString(&stru_1403D1050, v17);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v34) >= 0 )
      {
        RtlInitUnicodeString(&stru_1403D0FB0, SourceString);
        RtlInitUnicodeString(&stru_1403D0FC0, v34);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v35, &v34);
        v4 = v35;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_1403D0FD0, v35);
          RtlInitUnicodeString(&stru_1403D0FE0, v34);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_14039D7F0 |= 0x20000u;
          v21 = *(_DWORD *)(a1 + 120);
          v22 = dword_14039B810;
          v30[1] = -1;
          v30[0] = (v21 & 0x10000000) != 0 ? -14389468 : -16746281;
LABEL_10:
          v23 = 0LL;
          v24 = v22;
          while ( (int)BgpFoDetermineFontInformation(*v24, v19, v20, (unsigned int)&v34, (__int64)v32, (__int64)v31) >= 0 )
          {
            ++v23;
            *v24++ = v32[0];
            if ( v23 >= 4 )
            {
              v22 += 18;
              if ( (__int64)v22 < (__int64)&qword_14039B978 )
                goto LABEL_10;
              v32[1] = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v30, &v28) >= 0 )
              {
                v25 = v28;
                Memory = BgpFwAllocateMemory(v28);
                if ( Memory )
                {
                  qword_14039D730 = 0LL;
                  BcpWorkspace = Memory;
                  v28 = __PAIR64__(HIDWORD(v34), v29);
                  qword_14039D728 = v25;
                  qword_1403D1060 = BgpDisplayCharacterGetContext((__int64)v30, &v28, 3);
                  if ( qword_1403D1060 )
                  {
                    dword_14039D7F0 |= 0x10u;
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
      if ( qword_1403D1060 )
        BgpDisplayCharacterDestroyContext(qword_1403D1060);
    }
  }
  return 0LL;
}
