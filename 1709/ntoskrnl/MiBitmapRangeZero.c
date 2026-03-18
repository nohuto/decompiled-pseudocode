/*
 * XREFs of MiBitmapRangeZero @ 0x140114300
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiBitmapRangeZero(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // r11d
  unsigned __int64 v6; // rdi
  __int64 v7; // r9
  __int64 *v8; // r10
  __int64 PteShadow; // rax
  __int64 i; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-68h]
  unsigned __int64 v13; // [rsp+28h] [rbp-60h]
  unsigned __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = (((unsigned __int64)(v3 + a2 / 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v6;
  v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v7) = 4;
  while ( 1 )
  {
    v7 = (unsigned int)(v7 - 1);
    v8 = (__int64 *)*(&v12 + v7);
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(*(&v12 + v7), *v8);
    if ( !PteShadow )
      break;
    if ( (PteShadow & 0x81) == 0x81 )
      goto LABEL_10;
    if ( !(_DWORD)v7 )
      goto LABEL_13;
  }
  v5 = 1;
LABEL_10:
  for ( i = (__int64)((_QWORD)(v8 + 1) << 25) >> 16; (_DWORD)v7; LODWORD(v7) = v7 - 1 )
    i = i << 25 >> 16;
  if ( !i )
LABEL_13:
    i = (__int64)((v6 << 25) + 0x10000000) >> 16;
  if ( (unsigned __int64)(8 * (i - v3)) >= 0x100000000LL )
    *a3 = -1;
  else
    *a3 = 8 * (i - v3);
  return v5;
}
