/*
 * XREFs of BcpDisplayErrorInformation @ 0x140266AE4
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1402674B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     BcpDisplayCriticalCharacter @ 0x1402666B0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140266788 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x14026723C (BcpSanitizeDriverName.c)
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
  __int64 v7; // rbp
  unsigned __int64 *v10; // r15
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned __int16 *v23; // rsi
  __int64 v24; // xmm0_8
  unsigned int v25; // ebx
  char v26; // cl
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned __int64 v29; // r10
  __int16 *i; // rdx
  __int16 v31; // ax
  unsigned __int8 v32; // al
  __int64 result; // rax
  int v34; // [rsp+20h] [rbp-E8h] BYREF
  int v35; // [rsp+24h] [rbp-E4h]
  int v36; // [rsp+28h] [rbp-E0h]
  _QWORD v37[2]; // [rsp+30h] [rbp-D8h] BYREF
  char v38; // [rsp+40h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v34 = BcpCursor;
  BcpTextBoxLeftEdgeOverride = (__int64)&v34;
  v10 = a3;
  BcpDisplayCriticalString((__int16 *)&stru_14036EB30, dword_14033FBD0[18 * a1 + 1], (unsigned int)a3, a1);
  v11 = dword_14033FBD0[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v11 + dword_14036B980;
  v13 = dword_14033FBD0[18 * v7];
  dword_14036B980 += v11 + v11;
  v12 = dword_14036B980;
  BcpDisplayCriticalString((__int16 *)&stru_14036EA80, v13, v14, v7);
  LODWORD(BcpCursor) = v6;
  v15 = dword_14033FBD0[18 * v7];
  v16 = v12;
  v17 = dword_14033FBD0[18 * v7 + 11] + v12;
  dword_14036B980 = v17;
  HIDWORD(BcpCursor) = v16;
  BcpDisplayCriticalString((__int16 *)&stru_14036EB20, v15, v18, v7);
  BcpDisplayCriticalCharacter((__int64)dword_14033FBD0, dword_14033FBD0[18 * v7]);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), dword_14033FBD0[18 * v7], v19, v7);
  if ( a4 )
  {
    LODWORD(BcpCursor) = v6;
    HIDWORD(BcpCursor) = v17;
    dword_14036B980 = dword_14033FBD0[18 * v7 + 11] + v17;
    BcpDisplayCriticalString((__int16 *)&stru_14036EB10, dword_14033FBD0[18 * v7], v20, v7);
    BcpDisplayCriticalCharacter(v21, dword_14033FBD0[18 * v7]);
    LODWORD(v37[0]) = 0x800000;
    v37[1] = &v38;
    BcpSanitizeDriverName(a4, v37);
    BcpDisplayCriticalString((__int16 *)v37, dword_14033FBD0[18 * v7], v22, v7);
  }
  v23 = (unsigned __int16 *)(a5 + 34);
  v24 = BcpCursor;
  BcpCursor = 0LL;
  v25 = 0;
  v36 = dword_14036B980;
  v37[0] = v24;
  v35 = 48;
  dword_14036B980 = 0;
  do
  {
    v26 = 60;
    v27 = *v23 >> 1;
    v28 = 0;
    v29 = *v10;
    for ( i = *(__int16 **)(v23 + 3); v28 < v27; ++i )
    {
      if ( v28 )
      {
        if ( v28 == 1 )
        {
          v31 = 120;
LABEL_15:
          *i = v31;
          goto LABEL_16;
        }
        if ( v28 != v27 - 1 )
        {
          v32 = (v29 >> v26) & 0xF;
          if ( v32 >= 0xAu )
            v31 = (unsigned __int8)(v32 - 10) + 65;
          else
            v31 = v35 + ((v29 >> v26) & 0xF);
          v26 -= 4;
          goto LABEL_15;
        }
        *i = 0;
      }
      else
      {
        *i = 48;
      }
LABEL_16:
      ++v28;
    }
    if ( BcpDisplayParameters || (a6 & 8) != 0 && a2 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(a5 + 16 * (v25 + 2LL)), dword_14033FBD0[18 * v7], v28, v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_14036B980;
    }
    ++v25;
    v23 += 8;
    ++v10;
    result = 48LL;
  }
  while ( v25 < 4 );
  BcpCursor = v37[0];
  dword_14036B980 = v36;
  BcpTextBoxLeftEdgeOverride = 0LL;
  return result;
}
