/*
 * XREFs of PspInheritMitigationOptions @ 0x1404A0C50
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // r11d
  unsigned int v7; // r10d
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned __int8 v10; // r9
  char v11; // r8
  unsigned __int8 v12; // al
  unsigned __int64 v13; // r8
  char v14; // r10
  unsigned __int64 result; // rax
  __int128 v16; // [rsp+0h] [rbp-48h]
  __int128 v17; // [rsp+10h] [rbp-38h]
  __int128 v18; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v4 = *a2;
  v5 = 0;
  v18 = 0uLL;
  v16 = v3;
  v17 = v4;
  do
  {
    v7 = 4 * v5;
    v8 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v9 = (4 * v5) & 0x3F;
    v10 = (*((_QWORD *)&v16 + v8) >> v9) & 0xF;
    v11 = (*((_QWORD *)&v17 + v8) >> v9) & 0xF;
    if ( ((*((_QWORD *)&v16 + v8) >> v9) & 4) != 0 || (v12 = (*((_QWORD *)&v17 + v8) >> v9) & 0xF, (v11 & 3) == 0) )
      v12 = v10;
    v13 = (unsigned __int64)v7 >> 6;
    v14 = v7 & 0x3F;
    ++v5;
    result = (unsigned __int64)v12 << v14;
    *((_QWORD *)&v18 + v13) = result | *((_QWORD *)&v18 + v13) & ~(15LL << v14);
  }
  while ( v5 < 30 );
  *a3 = v18;
  return result;
}
