/*
 * XREFs of ValidateRGBBitFields @ 0x1C0079F08
 * Callers:
 *     ValidateHTSI @ 0x1C0079CCC (ValidateHTSI.c)
 *     GetDstBFInfo @ 0x1C023E604 (GetDstBFInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateRGBBitFields(__int128 *a1)
{
  __int128 v1; // xmm2
  char v2; // dl
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // r10d
  __int64 i; // rcx
  unsigned int v8; // eax
  char v9; // r8
  char v10; // r9
  bool v11; // cf
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // xmm1_8
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // [rsp+0h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-10h]

  v1 = *a1;
  v2 = 0;
  v4 = *(_QWORD *)a1;
  v19 = *((_QWORD *)a1 + 2);
  v5 = v4 >> 8;
  v18 = v1;
  if ( !(_BYTE)v5 )
    return 0LL;
  if ( (unsigned __int8)v5 > 3u )
  {
    if ( (_BYTE)v5 == 4 )
      goto LABEL_30;
    if ( (unsigned __int8)v5 <= 6u )
    {
LABEL_5:
      v6 = v19 | HIDWORD(v18) | DWORD2(v18);
      if ( v6 && ((HIDWORD(v18) | DWORD2(v18)) & (unsigned int)v19) == 0 && (HIDWORD(v18) & DWORD2(v18)) == 0 )
      {
        for ( i = 0LL; i < 3; ++i )
        {
          v8 = *((_DWORD *)&v18 + i + 2);
          v9 = 0;
          v10 = 0;
          if ( v8 )
          {
            while ( (v8 & 1) == 0 )
            {
              v8 >>= 1;
              ++v10;
            }
            do
            {
              ++v9;
              v8 >>= 1;
            }
            while ( (v8 & 1) != 0 );
            if ( v8 )
              return 0LL;
          }
          *((_BYTE *)&v18 + i + 2) = v10;
          *((_BYTE *)&v18 + i + 5) = v9;
        }
        if ( v6 == 0xFFFFFF && *(_WORD *)((char *)&v18 + 5) == 2056 && BYTE7(v18) == 8 )
          LOBYTE(v18) = v18 | 1;
        v11 = HIDWORD(v18) < DWORD2(v18);
        if ( HIDWORD(v18) > DWORD2(v18) )
        {
          if ( DWORD2(v18) < (unsigned int)v19 )
          {
            v12 = HIDWORD(v18) >= (unsigned int)v19 ? 4 : 0;
LABEL_23:
            HIDWORD(v19) = *(_DWORD *)((char *)SrcOrderTable + v12);
            goto LABEL_24;
          }
          v11 = HIDWORD(v18) < DWORD2(v18);
        }
        if ( v11 && HIDWORD(v18) < (unsigned int)v19 )
          v12 = (-(__int64)(DWORD2(v18) < (unsigned int)v19) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
        else
          v12 = DWORD2(v18) < HIDWORD(v18) ? 20LL : 16LL;
        goto LABEL_23;
      }
      return 0LL;
    }
    if ( (_BYTE)v5 == 0xFC || (_BYTE)v5 == 0xFD )
    {
LABEL_30:
      WORD5(v18) = 0;
      HIWORD(v18) = 0;
      WORD1(v19) = 0;
      goto LABEL_5;
    }
    return 0LL;
  }
  WORD3(v18) = 2056;
  v15 = 255;
  BYTE5(v18) = 8;
  v16 = 0LL;
  HIDWORD(v19) = SrcOrderTable[BYTE4(v19)];
  do
  {
    v17 = *((unsigned __int8 *)&v19 + v16++ + 5);
    *((_DWORD *)&v18 + v17 + 2) = v15;
    *((_BYTE *)&v18 + v17 + 2) = v2;
    v2 += 8;
    v15 <<= 8;
  }
  while ( v16 < 3 );
LABEL_24:
  result = 1LL;
  v14 = v19;
  *a1 = v18;
  *((_QWORD *)a1 + 2) = v14;
  return result;
}
