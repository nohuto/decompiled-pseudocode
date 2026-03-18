/*
 * XREFs of CmpLogTransactionAbortedByName @ 0x14066B778
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall CmpLogTransactionAbortedByName(unsigned __int16 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  _DWORD v13[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]

  if ( a4 )
  {
    v5 = a4;
    do
    {
      if ( stru_14033C3C0.LevelPlus1 > 4 )
      {
        if ( TlgKeywordOn(&stru_14033C3C0, 1uLL) )
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
          TlgWrite(&stru_14033C3C0, &unk_1402AB0D0, 0LL, 0LL, 5u, &pData);
        }
      }
      --v5;
    }
    while ( v5 );
  }
}
