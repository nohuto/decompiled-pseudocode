/*
 * XREFs of PspInheritMitigationAuditOptions @ 0x1404EFD20
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PspInheritMitigationAuditOptions(__int128 *a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // r9d
  char v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int8 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  bool v12; // al
  __int128 v13; // [rsp+0h] [rbp-48h]
  __int128 v14; // [rsp+10h] [rbp-38h]
  __int128 v15; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v4 = *a2;
  v5 = 0;
  v15 = 0uLL;
  v13 = v3;
  v14 = v4;
  do
  {
    v7 = (4 * v5) & 0x3F;
    v8 = (unsigned __int64)(unsigned int)(4 * v5) >> 6;
    v9 = (*((_QWORD *)&v14 + v8) >> v7) & 3;
    v10 = (*((_QWORD *)&v13 + v8) >> v7) & 3LL;
    if ( ((*((_QWORD *)&v13 + v8) >> v7) & 3) != 0 )
    {
      if ( (_DWORD)v10 == 1 )
        goto LABEL_13;
      if ( (_DWORD)v10 != 2 )
      {
        if ( (_DWORD)v10 != 3 )
        {
LABEL_4:
          v9 = v10;
          goto LABEL_5;
        }
LABEL_13:
        v12 = v9 != 2;
        goto LABEL_8;
      }
    }
    if ( ((v9 - 1) & 0xFD) != 0 )
      goto LABEL_4;
    v12 = 0;
LABEL_8:
    if ( v12 )
      goto LABEL_4;
LABEL_5:
    result = (unsigned __int64)v9 << v7;
    ++v5;
    *((_QWORD *)&v15 + v8) = result | *((_QWORD *)&v15 + v8) & ~(15LL << v7);
  }
  while ( v5 < 30 );
  *a3 = v15;
  return result;
}
