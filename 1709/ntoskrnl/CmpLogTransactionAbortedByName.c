/*
 * XREFs of CmpLogTransactionAbortedByName @ 0x140695DE4
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall CmpLogTransactionAbortedByName(unsigned __int16 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  __int64 v12; // [rsp+70h] [rbp+27h]
  _DWORD v13[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  if ( a4 )
  {
    v5 = a4;
    do
    {
      if ( stru_1403549F0.LevelPlus1 > 4 )
      {
        if ( TlgKeywordOn(&stru_1403549F0, 1uLL) )
        {
          v11 = 0;
          v13[1] = 0;
          v16 = 0;
          v9 = v13;
          v12 = *((_QWORD *)a1 + 1);
          v13[0] = *a1;
          v14 = &v7;
          v7 = a2;
          v10 = 2;
          v15 = 4;
          TlgWrite(&stru_1403549F0, &unk_1402CEEAF, 0LL, 0LL, 5u, &pData);
        }
      }
      --v5;
    }
    while ( v5 );
  }
}
