/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F01D0
 * Callers:
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1800F02EC @ 0x1800F02EC (sub_1800F02EC.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( off_180156A40 == (_UNKNOWN *)&off_180156A40 )
    return 0;
  if ( !a2 )
  {
    if ( (int)ZwQueryVirtualMemory() < 0 || v4 == 0x10000 )
      return 0;
    a2 = v5;
  }
  return sub_1800F02EC(a1, a2);
}
