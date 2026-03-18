/*
 * XREFs of BcpDisplayErrorInformation @ 0x1402C6914
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     BcpConvertBugDataToString @ 0x1402C636C (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalCharacter @ 0x1402C64F8 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1402C65C0 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x1402C6FF8 (BcpSanitizeDriverName.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(
        unsigned int a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // ebp
  __int64 v7; // rsi
  unsigned __int64 *v9; // r14
  unsigned int v10; // r8d
  int v11; // ecx
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // r15d
  int v16; // edx
  unsigned int v17; // r8d
  __int16 v18; // cx
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rbx
  int v22; // edx
  int v23; // edx
  __int16 v24; // cx
  unsigned int v25; // r8d
  __int64 v26; // rbp
  __int64 v27; // r12
  int v28; // r13d
  unsigned int v29; // r8d
  __int64 result; // rax
  int v31; // [rsp+20h] [rbp-F8h] BYREF
  int v32; // [rsp+24h] [rbp-F4h]
  __int64 v33; // [rsp+28h] [rbp-F0h]
  unsigned int v34; // [rsp+30h] [rbp-E8h]
  int v35; // [rsp+38h] [rbp-E0h] BYREF
  char *v36; // [rsp+40h] [rbp-D8h]
  __int64 v37; // [rsp+48h] [rbp-D0h]
  char v38; // [rsp+50h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v32 = a2;
  v37 = a5;
  v9 = a3;
  v31 = BcpCursor;
  BcpTextBoxLeftEdgeOverride = (__int64)&v31;
  BcpDisplayCriticalString((__int16 *)&stru_1403D1010, dword_14039B810[18 * a1 + 1], (unsigned int)a3, a1);
  BcpDisplayCriticalString((__int16 *)&stru_1403D1020, dword_14039B810[18 * v7 + 1], v10, v7);
  v11 = dword_14039B810[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v11 + dword_1403CADF8;
  v13 = dword_14039B810[18 * v7];
  dword_1403CADF8 += v11 + v11;
  v12 = dword_1403CADF8;
  BcpDisplayCriticalString((__int16 *)&stru_1403D0F60, v13, v14, v7);
  v15 = v12 + dword_14039B810[18 * v7 + 11];
  HIDWORD(BcpCursor) = v12;
  LODWORD(BcpCursor) = v6;
  v16 = dword_14039B810[18 * v7];
  dword_1403CADF8 = v15;
  BcpDisplayCriticalString((__int16 *)&stru_1403D1000, v16, v17, v7);
  BcpDisplayCriticalCharacter(v18, dword_14039B810[18 * v7]);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), dword_14039B810[18 * v7], v19, v7);
  v21 = 0LL;
  if ( a4 )
  {
    v22 = dword_14039B810[18 * v7 + 11];
    LODWORD(BcpCursor) = v6;
    dword_1403CADF8 = v15 + v22;
    v23 = dword_14039B810[18 * v7];
    HIDWORD(BcpCursor) = v15;
    BcpDisplayCriticalString((__int16 *)&stru_1403D0FF0, v23, v20, v7);
    BcpDisplayCriticalCharacter(v24, dword_14039B810[18 * v7]);
    v35 = 0x800000;
    v36 = &v38;
    BcpSanitizeDriverName(a4, &v35);
    BcpDisplayCriticalString((__int16 *)&v35, dword_14039B810[18 * v7], v25, v7);
  }
  v26 = 4LL;
  v33 = BcpCursor;
  v27 = v37;
  v28 = v32;
  v34 = dword_1403CADF8;
  BcpCursor = 0LL;
  dword_1403CADF8 = 0;
  do
  {
    BcpConvertBugDataToString(*v9, v21 + v27 + 32);
    if ( BcpDisplayParameters || (a6 & 8) != 0 && v28 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(v21 + v27 + 32), dword_14039B810[18 * v7], v29, v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_1403CADF8;
    }
    v21 += 16LL;
    ++v9;
    --v26;
  }
  while ( v26 );
  result = v34;
  BcpTextBoxLeftEdgeOverride = 0LL;
  BcpCursor = v33;
  dword_1403CADF8 = v34;
  return result;
}
