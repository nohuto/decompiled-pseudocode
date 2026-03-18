/*
 * XREFs of PspInheritMitigationAuditOptions @ 0x14048C058
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationAuditOptions(__int128 *a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // r9d
  unsigned __int64 v7; // r11
  char v8; // r10
  char v9; // dl
  __int64 v10; // r8
  unsigned __int64 result; // rax
  bool v12; // al
  __int128 v13; // [rsp+0h] [rbp-48h]
  __int128 v14; // [rsp+10h] [rbp-38h]
  __int128 v15; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v4 = *a2;
  v5 = 0;
  v15 = 0uLL;
  v14 = v3;
  v13 = v4;
  do
  {
    v7 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v8 = (4 * v5) & 0x3F;
    v9 = (*((_QWORD *)&v13 + v7) >> v8) & 3;
    v10 = (*((_QWORD *)&v14 + v7) >> v8) & 3LL;
    if ( ((*((_QWORD *)&v14 + v7) >> v8) & 3) == 0 )
    {
LABEL_3:
      if ( ((v9 - 1) & 0xFD) != 0 )
        goto LABEL_4;
      v12 = 0;
      goto LABEL_7;
    }
    if ( (_DWORD)v10 != 1 )
    {
      if ( (_DWORD)v10 == 2 )
        goto LABEL_3;
      if ( (_DWORD)v10 != 3 )
        goto LABEL_4;
    }
    v12 = v9 != 2;
LABEL_7:
    if ( !v12 )
      LOBYTE(v10) = (*((_QWORD *)&v13 + v7) >> v8) & 3;
LABEL_4:
    result = (unsigned __int64)(unsigned __int8)v10 << v8;
    ++v5;
    *((_QWORD *)&v15 + v7) = result | *((_QWORD *)&v15 + v7) & ~(15LL << v8);
  }
  while ( v5 < 30 );
  *a3 = v15;
  return result;
}
