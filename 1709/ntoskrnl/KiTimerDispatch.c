/*
 * XREFs of KiTimerDispatch @ 0x1402B1490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimerDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r10
  _QWORD *v6; // r11
  unsigned __int64 *v7; // rcx
  char v8; // al
  unsigned __int64 v9; // rdi
  unsigned int v10; // r9d
  __int64 v11; // rbx
  char v12; // r8
  char v13; // cl
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // r8
  unsigned __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-10h]
  unsigned __int64 v20; // [rsp+40h] [rbp+8h]
  __int64 v21; // [rsp+40h] [rbp+8h]

  v2 = 16LL;
  v3 = a2 ^ *(_QWORD *)(a1 + 64);
  v4 = &v18;
  v18 = 0x949F9A959B969093uLL;
  v5 = v3 | 0xFFFF800000000000uLL;
  v19 = 0x91989C92979D999EuLL;
  v6 = (_QWORD *)v5;
  v7 = &v18;
  v20 = __ROR8__(v5, v5 & 0x3F);
  do
  {
    v8 = *(_BYTE *)v7;
    v7 = (unsigned __int64 *)((char *)v7 + 1);
    *(_BYTE *)v4 = v8 ^ 0x93;
    v4 = (unsigned __int64 *)((char *)v4 + 1);
    --v2;
  }
  while ( v2 );
  v9 = v20;
  v10 = 0;
  v11 = 0LL;
  do
  {
    v12 = *v6 & 0x3F;
    v13 = ~(unsigned __int8)*v6 & 0x3F;
    *v6 = v11 + (v9 ^ *v6);
    v14 = __ROR8__(v10 * (200 - v10), v13);
    v15 = v12;
    v16 = 16LL;
    v9 = v5 + __ROL8__(v14 ^ v9, v15);
    do
    {
      *v6 = __ROR8__(*((unsigned __int8 *)&v18 + (*(_BYTE *)v6 & 0xF)) | *v6 & 0xFFFFFFFFFFFFFFF0uLL, 4);
      --v16;
    }
    while ( v16 );
    ++v6;
    ++v10;
    v11 += v5;
  }
  while ( v10 < 0x19 );
  v21 = *(_QWORD *)v5 ^ 0x85131481131482ELL;
  *(_DWORD *)v5 = -1390710795;
  *(_DWORD *)v5 ^= 0xBC2A27DB;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD, unsigned __int64, unsigned __int64))v5)(
           v5,
           v21,
           0LL,
           0LL,
           v18,
           v19);
}
