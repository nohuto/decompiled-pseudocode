/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18003CFF4
 * Callers:
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x180089598 (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180033BBC (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  signed int v3; // r9d
  __int64 v5; // rcx
  unsigned __int16 *i; // rax
  __int64 v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
    goto LABEL_12;
  v5 = a2;
  for ( i = a1; v5; --v5 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v3 = v5 == 0 ? 0x80070057 : 0;
  if ( v5 )
    v7 = a2 - v5;
  else
LABEL_12:
    v7 = 0LL;
  if ( v3 >= 0 )
    return (unsigned int)StringCopyWorkerW(&a1[v7], a2 - v7, a3, (STRSAFE_PCNZWCH)a3, v9);
  return (unsigned int)v3;
}
