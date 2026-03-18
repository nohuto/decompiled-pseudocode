/*
 * XREFs of SDM845GetByte @ 0x1402CB880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SDM845GetByte(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rsi
  _BYTE *v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // edx

  if ( !a1 )
    return 3LL;
  v3 = *a1;
  if ( !*a1 )
    return 3LL;
  if ( !dword_1403EBF60 )
  {
    v4 = byte_1403EBEE0;
    qword_1403EBF68 = (__int64)byte_1403EBEE0;
    v5 = ((unsigned int (__fastcall *)(__int64))off_140399430[0])(v3 + 1600);
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v3 + 1608, v5);
    v6 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 2052);
    v7 = v6 & 0x1FFFFFF;
    v8 = (v6 >> 28) & 7;
    if ( v8 || v7 )
    {
      if ( ((v6 >> 28) & 3) != 0 )
        --v7;
    }
    else if ( (v5 & 0x4000000) != 0 )
    {
      v7 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 2064);
    }
    v9 = 0;
    dword_1403EBF60 = v8 + 4 * v7;
    if ( v7 )
    {
      v10 = 2;
      do
      {
        v11 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 4 * v9 + 384 + 1536LL);
        v12 = v10;
        ++v9;
        byte_1403EBEE0[v10 - 2] = v11;
        byte_1403EBEE0[v10 - 1] = BYTE1(v11);
        v13 = v10 + 1;
        v10 += 4;
        byte_1403EBEE0[v12] = BYTE2(v11);
        byte_1403EBEE0[v13] = HIBYTE(v11);
      }
      while ( v9 < v7 );
    }
    if ( v8 )
    {
      v14 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v3 + 4 * v9 + 384 + 1536LL);
      v15 = 0;
      v16 = v8;
      do
      {
        v17 = v14 >> v15;
        v15 += 8;
        *v4++ = v17;
        --v16;
      }
      while ( v16 );
    }
    if ( !dword_1403EBF60 )
      return 1LL;
  }
  *a2 = *(_BYTE *)qword_1403EBF68++;
  --dword_1403EBF60;
  return 0LL;
}
