/*
 * XREFs of RtlUnlockBootStatusData @ 0x180089B20
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1800A5A20 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1800A5C60 (ZwFlushBuffersFile.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  _BYTE v3[24]; // [rsp+50h] [rbp-18h] BYREF
  __int16 v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ZwFsControlFile(a1, 0LL, 0LL, 0LL, v3, 639040, &v4, 2, 0LL, 0);
  ZwFlushBuffersFile(a1, v3);
  return ZwClose(a1);
}
