/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x1405B60EC
 * Callers:
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  unsigned __int64 result; // rax
  char v2; // r12
  unsigned __int16 i; // di
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // r15
  _BYTE *v7; // r14
  __int64 *v8; // rsi
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  int v14; // [rsp+38h] [rbp-89h] BYREF
  _DWORD v15[43]; // [rsp+3Ch] [rbp-85h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = a1;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v4 = PpmParkNodes + 248LL * i;
    v5 = *(_BYTE *)(v4 + 122);
    if ( v2 )
    {
      if ( (v5 & 8) == 0 )
      {
        v6 = 2LL;
        v7 = (_BYTE *)(v4 + 104);
        v8 = (__int64 *)(v4 + 128);
        *(_BYTE *)(v4 + 122) = v5 | 8;
        do
        {
          if ( *v7 )
          {
            v14 = 1310721;
            memset(v15, 0, 0xA4uLL);
            v9 = *(_WORD *)(v4 + 4);
            v10 = *(v8 - 14);
            if ( v9 )
              LOWORD(v14) = v9 + 1;
            *(_QWORD *)&v15[2 * v9 + 1] |= v10;
            PopExecuteOnTargetProcessors((__int64)&v14, (__int64)PpmIdleInstallConcurrency, *(_QWORD *)(v4 + 48), *v8);
          }
          ++v8;
          ++v7;
          --v6;
        }
        while ( v6 );
        v2 = a1;
      }
    }
    else if ( (v5 & 8) != 0 )
    {
      *(_BYTE *)(v4 + 122) = v5 & 0xF7;
      v14 = 1310721;
      memset(v15, 0, 0xA4uLL);
      v11 = *(_WORD *)(v4 + 4);
      v12 = *(_QWORD *)(v4 + 8);
      if ( v11 )
        LOWORD(v14) = v11 + 1;
      *(_QWORD *)&v15[2 * v11 + 1] |= v12;
      PopExecuteOnTargetProcessors((__int64)&v14, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    }
    ++i;
  }
  return result;
}
