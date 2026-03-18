/*
 * XREFs of PspInheritMitigationOptions @ 0x14048B748
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // r9d
  unsigned int v7; // r11d
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned __int8 v10; // r8
  char v11; // dl
  unsigned __int8 v12; // al
  unsigned __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-48h]
  __int128 v15; // [rsp+10h] [rbp-38h]
  __int128 v16; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v4 = *a2;
  v5 = 0;
  v16 = 0uLL;
  v14 = v3;
  v15 = v4;
  do
  {
    v7 = 4 * v5;
    v8 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v9 = (4 * v5) & 0x3F;
    v10 = (*((_QWORD *)&v14 + v8) >> v9) & 0xF;
    v11 = (*((_QWORD *)&v15 + v8) >> v9) & 0xF;
    if ( ((*((_QWORD *)&v14 + v8) >> v9) & 4) != 0 || (v12 = (*((_QWORD *)&v15 + v8) >> v9) & 0xF, (v11 & 3) == 0) )
      v12 = v10;
    ++v5;
    result = (unsigned __int64)v12 << v9;
    *((_QWORD *)&v16 + ((unsigned __int64)v7 >> 6)) = result | *((_QWORD *)&v16 + ((unsigned __int64)v7 >> 6)) & ~(15LL << v9);
  }
  while ( v5 < 30 );
  *a3 = v16;
  return result;
}
