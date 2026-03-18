/*
 * XREFs of PspSetMinimalProcessName @ 0x14071A600
 * Callers:
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PspSetProcessShortName @ 0x14057B5F0 (PspSetProcessShortName.c)
 */

__int64 __fastcall PspSetMinimalProcessName(__int64 a1, const void **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi
  void *v7; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)*(unsigned __int16 *)a2 + 16, 0x6E497350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = PoolWithTag + 2;
  *(_WORD *)PoolWithTag = *(_WORD *)a2;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)a2;
  memmove(PoolWithTag + 2, a2[1], *(unsigned __int16 *)a2);
  v7 = *(void **)(a1 + 1128);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 1128) = 0LL;
  }
  *(_QWORD *)(a1 + 1128) = v5;
  PspSetProcessShortName(a1, (unsigned __int16 *)a2);
  return 0LL;
}
