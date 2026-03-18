/*
 * XREFs of MiBitmapRangeZero @ 0x14001B3F0
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiBitmapRangeZero(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r11d
  __int64 i; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-58h]
  unsigned __int64 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = (((unsigned __int64)(v3 + a2 / 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v5;
  v13 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 4;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(*(&v12 + (unsigned int)(v6 - 1)));
    if ( !v7 )
      break;
    if ( (v7 & 0x81) == 0x81 )
      goto LABEL_7;
    if ( !v6 )
      goto LABEL_5;
  }
  v9 = 1;
LABEL_7:
  for ( i = (v8 + 8) << 25 >> 16; v6; --v6 )
    i = i << 25 >> 16;
  if ( !i )
LABEL_5:
    i = (__int64)((v5 << 25) + 0x10000000) >> 16;
  if ( (unsigned __int64)(8 * (i - v3)) >= 0x100000000LL )
    *a3 = -1;
  else
    *a3 = 8 * (i - v3);
  return v9;
}
