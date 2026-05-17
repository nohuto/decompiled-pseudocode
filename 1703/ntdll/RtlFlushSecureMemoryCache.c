/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F30F0
 * Callers:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800F320C @ 0x1800F320C (sub_1800F320C.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( off_1801559E0 == (_UNKNOWN *)&off_1801559E0 )
    return 0;
  if ( !a2 )
  {
    if ( (int)ZwQueryVirtualMemory() < 0 || v4 == 0x10000 )
      return 0;
    a2 = v5;
  }
  return sub_1800F320C(a1, a2);
}
