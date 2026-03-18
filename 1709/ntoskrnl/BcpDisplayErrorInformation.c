/*
 * XREFs of BcpDisplayErrorInformation @ 0x140290DF8
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1402917C8 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     BcpDisplayCriticalCharacter @ 0x1402909DC (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140290AA4 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x14029154C (BcpSanitizeDriverName.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(
        unsigned int a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // esi
  __int64 v7; // r14
  unsigned __int64 *v9; // r15
  int v10; // eax
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // r8d
  __int16 v18; // cx
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  int v21; // edx
  __int16 v22; // cx
  unsigned int v23; // r8d
  __int64 v24; // kr00_8
  unsigned int v25; // ebx
  __int64 v26; // rbp
  int v27; // r12d
  unsigned __int16 *v28; // rsi
  char v29; // cl
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  unsigned __int64 v32; // r10
  __int16 *i; // rdx
  __int16 v34; // ax
  unsigned __int8 v35; // al
  __int64 result; // rax
  int v37; // [rsp+20h] [rbp-F8h] BYREF
  int v38; // [rsp+24h] [rbp-F4h]
  __int64 v39; // [rsp+28h] [rbp-F0h]
  __int64 v40; // [rsp+30h] [rbp-E8h]
  int v41; // [rsp+38h] [rbp-E0h]
  int v42; // [rsp+40h] [rbp-D8h] BYREF
  char *v43; // [rsp+48h] [rbp-D0h]
  char v44; // [rsp+50h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v38 = a2;
  v39 = a5;
  v9 = a3;
  v37 = BcpCursor;
  BcpTextBoxLeftEdgeOverride = (__int64)&v37;
  BcpDisplayCriticalString((__int16 *)&stru_14038CD50, dword_140358260[18 * a1 + 1], (unsigned int)a3, a1);
  v10 = dword_140358260[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v10 + dword_140387EC8;
  v12 = dword_140358260[18 * v7];
  dword_140387EC8 += v10 + v10;
  v11 = dword_140387EC8;
  BcpDisplayCriticalString((__int16 *)&stru_14038CCA0, v12, v13, v7);
  v14 = dword_140358260[18 * v7];
  v15 = v11;
  LODWORD(BcpCursor) = v6;
  v16 = dword_140358260[18 * v7 + 11] + v11;
  dword_140387EC8 = v16;
  HIDWORD(BcpCursor) = v15;
  BcpDisplayCriticalString((__int16 *)&stru_14038CD40, v14, v17, v7);
  BcpDisplayCriticalCharacter(v18, dword_140358260[18 * v7]);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), dword_140358260[18 * v7], v19, v7);
  if ( a4 )
  {
    v21 = dword_140358260[18 * v7];
    LODWORD(BcpCursor) = v6;
    dword_140387EC8 = dword_140358260[18 * v7 + 11] + v16;
    HIDWORD(BcpCursor) = v16;
    BcpDisplayCriticalString((__int16 *)&stru_14038CD30, v21, v20, v7);
    BcpDisplayCriticalCharacter(v22, dword_140358260[18 * v7]);
    v42 = 0x800000;
    v43 = &v44;
    BcpSanitizeDriverName(a4, &v42);
    BcpDisplayCriticalString((__int16 *)&v42, dword_140358260[18 * v7], v23, v7);
  }
  v24 = BcpCursor;
  v25 = 0;
  BcpCursor = 0LL;
  v40 = v24;
  v26 = v39;
  v27 = v38;
  v41 = dword_140387EC8;
  v28 = (unsigned __int16 *)(v39 + 34);
  dword_140387EC8 = 0;
  LODWORD(v39) = 48;
  do
  {
    v29 = 60;
    v30 = *v28 >> 1;
    v31 = 0;
    v32 = *v9;
    for ( i = *(__int16 **)(v28 + 3); v31 < v30; ++i )
    {
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          v34 = 120;
LABEL_15:
          *i = v34;
          goto LABEL_16;
        }
        if ( v31 != v30 - 1 )
        {
          v35 = (v32 >> v29) & 0xF;
          if ( v35 >= 0xAu )
            v34 = (unsigned __int8)(v35 - 10) + 65;
          else
            v34 = v39 + ((v32 >> v29) & 0xF);
          v29 -= 4;
          goto LABEL_15;
        }
        *i = 0;
      }
      else
      {
        *i = 48;
      }
LABEL_16:
      ++v31;
    }
    if ( BcpDisplayParameters || (a6 & 8) != 0 && v27 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(v26 + 16 * (v25 + 2LL)), dword_140358260[18 * v7], v31, v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_140387EC8;
    }
    ++v25;
    v28 += 8;
    ++v9;
    result = 48LL;
  }
  while ( v25 < 4 );
  BcpCursor = v40;
  dword_140387EC8 = v41;
  BcpTextBoxLeftEdgeOverride = 0LL;
  return result;
}
