/*
 * XREFs of PpmPerfSnapUtility @ 0x140090290
 * Callers:
 *     PpmCheckSnapAllUtility @ 0x1400901E0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmPerfSnapUtility(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // r14d
  unsigned int v10; // r15d
  _BYTE *v11; // r11
  __int64 v12; // rdi
  _QWORD *v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v1 = *(_QWORD *)(a1 + 24168);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 112) - *(_QWORD *)(v1 + 32);
    v4 = v3;
    v5 = *(_QWORD *)(v1 + 152) - *(_QWORD *)(v1 + 72);
    v6 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 24);
    if ( !v3 )
      v4 = 1LL;
    v7 = (*(_QWORD *)(v1 + 136) - *(_QWORD *)(v1 + 56)) / v4;
    v8 = *(_QWORD *)(v1 + 152) - *(_QWORD *)(v1 + 72);
    v9 = v7;
    if ( !v5 )
      v8 = 1LL;
    v10 = (unsigned __int8)(100LL * (*(_QWORD *)(v1 + 160) - *(_QWORD *)(v1 + 80)) / v8);
    if ( v10 > 0x64 )
      v10 = 100;
    if ( !(_DWORD)v7 )
      v9 = *(_DWORD *)(a1 + 24228);
    v11 = (_BYTE *)(v1 + 272);
    v12 = 2LL;
    v13 = (_QWORD *)(v1 + 88);
    do
    {
      v14 = v5;
      if ( !v5 )
        v14 = 1LL;
      v15 = 100LL * (v13[10] - *v13) / v14;
      if ( (unsigned __int8)v15 > 0x64u )
        LOBYTE(v15) = 100;
      *v11 = v15;
      ++v13;
      ++v11;
      --v12;
    }
    while ( v12 );
    v16 = *(_QWORD *)(a1 + 24184);
    *(_DWORD *)(a1 + 24228) = v9;
    *(_DWORD *)(a1 + 24236) = v10;
    if ( v16 )
    {
      v17 = v3;
      if ( !v3 )
        v17 = 1LL;
      v18 = (*(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 48)) / v17;
      if ( !(_DWORD)v18 )
        LODWORD(v18) = *(_DWORD *)(v16 + 116);
      *(_DWORD *)(v16 + 116) = v18;
    }
    *(_OWORD *)(v1 + 24) = *(_OWORD *)(v1 + 104);
    *(_OWORD *)(v1 + 40) = *(_OWORD *)(v1 + 120);
    *(_OWORD *)(v1 + 56) = *(_OWORD *)(v1 + 136);
    *(_OWORD *)(v1 + 72) = *(_OWORD *)(v1 + 152);
    *(_OWORD *)(v1 + 88) = *(_OWORD *)(v1 + 168);
    *(_QWORD *)(a1 + 24264) += v3;
    *(_QWORD *)(a1 + 24272) += v6;
  }
}
