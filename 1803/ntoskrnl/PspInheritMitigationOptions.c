/*
 * XREFs of PspInheritMitigationOptions @ 0x1404EF3BC
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // r9d
  unsigned __int64 v7; // r8
  char v8; // cl
  unsigned __int8 v9; // al
  unsigned __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-48h]
  __int128 v12; // [rsp+10h] [rbp-38h]
  __int128 v13; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v4 = *a2;
  v5 = 0;
  v13 = 0uLL;
  v11 = v3;
  v12 = v4;
  do
  {
    v7 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v8 = (4 * v5) & 0x3F;
    v9 = (*((_QWORD *)&v12 + v7) >> v8) & 0xF;
    if ( ((*((_QWORD *)&v11 + v7) >> v8) & 4) != 0 || ((*((_QWORD *)&v12 + v7) >> v8) & 3) == 0 )
      v9 = (*((_QWORD *)&v11 + v7) >> v8) & 0xF;
    ++v5;
    result = (unsigned __int64)v9 << v8;
    *((_QWORD *)&v13 + v7) = result | *((_QWORD *)&v13 + v7) & ~(15LL << v8);
  }
  while ( v5 < 30 );
  *a3 = v13;
  return result;
}
