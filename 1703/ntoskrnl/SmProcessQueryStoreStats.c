/*
 * XREFs of SmProcessQueryStoreStats @ 0x140596E7C
 * Callers:
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 * Callees:
 *     SmpProcessQueryStoreStats @ 0x14015256C (SmpProcessQueryStoreStats.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(void *a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r8d
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // [rsp+2Ch] [rbp-60Ch]
  unsigned int v11; // [rsp+40h] [rbp-5F8h]
  char v12; // [rsp+4Ch] [rbp-5ECh] BYREF

  StoreStats = SmpProcessQueryStoreStats(a1);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v7 = &v12;
      v8 = 8LL;
      do
      {
        v9 = *(unsigned int *)v7;
        v7 += 8;
        *a2 += v10 * v9;
        --v8;
      }
      while ( v8 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v11 << 12;
  }
  return (unsigned int)StoreStats;
}
