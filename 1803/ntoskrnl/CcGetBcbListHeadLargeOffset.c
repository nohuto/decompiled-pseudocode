/*
 * XREFs of CcGetBcbListHeadLargeOffset @ 0x1400AE3C0
 * Callers:
 *     CcFindBcb @ 0x1400AE290 (CcFindBcb.c)
 *     CcSetVacbLargeOffset @ 0x1400DA8B8 (CcSetVacbLargeOffset.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall CcGetBcbListHeadLargeOffset(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  int v6; // r10d
  char v7; // cl
  __int64 v8; // r9
  char v9; // r11
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD v14[22]; // [rsp+0h] [rbp-68h]

  v4 = 0LL;
  v6 = 0;
  v7 = 25;
  v8 = *(_QWORD *)(a1 + 88);
  do
  {
    v9 = v7;
    v7 += 7;
    ++v6;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v7 );
  if ( a2 >= 1LL << v7 )
    return a1 + 16;
  while ( 1 )
  {
    v10 = a2 >> v9;
    --v6;
    v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)(a2 >> v9));
    if ( !v11 )
      break;
LABEL_5:
    v14[v4] = v10;
    *(_QWORD *)&v14[2 * v4 + 8] = v8;
    v4 = (unsigned int)(v4 + 1);
    v12 = (1LL << v9) - 1;
    v9 -= 7;
    a2 &= v12;
    v8 = v11;
    if ( !v6 )
      return v11 + 8 * (((a2 >> v9) & 0xFFFFFFFELL) + 128);
  }
  while ( 1 )
  {
    if ( a3 )
    {
      if ( (_DWORD)v10 != 127 )
      {
        do
        {
          if ( (_DWORD)v10 == 127 )
            break;
          v10 = (unsigned int)(v10 + 1);
        }
        while ( !*(_QWORD *)(v8 + 8 * v10) );
        v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)v10);
        if ( v11 )
        {
          a2 = 0LL;
          goto LABEL_5;
        }
      }
    }
    else if ( (_DWORD)v10 )
    {
      do
      {
        if ( !(_DWORD)v10 )
          break;
        v10 = (unsigned int)(v10 - 1);
      }
      while ( !*(_QWORD *)(v8 + 8 * v10) );
      v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)v10);
      if ( v11 )
      {
        a2 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_5;
      }
    }
    if ( !(_DWORD)v4 )
      return a1 + 16;
    if ( (unsigned int)v4 >= 7 )
      return 0LL;
    ++v6;
    v4 = (unsigned int)(v4 - 1);
    LODWORD(v10) = v14[(unsigned int)v4];
    v8 = *(_QWORD *)&v14[2 * (unsigned int)v4 + 8];
  }
}
