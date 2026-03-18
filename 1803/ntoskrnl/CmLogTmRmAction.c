/*
 * XREFs of CmLogTmRmAction @ 0x1405DE7E4
 * Callers:
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpTransWriteLog @ 0x1405DE890 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1405DEB38 (HvBufferCheckSum.c)
 */

NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, int a3)
{
  __int128 v4; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-58h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-50h] BYREF
  int v8[4]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v9; // [rsp+50h] [rbp-38h]

  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v4 = *(_OWORD *)(a2 + 88);
  v8[3] = 0;
  v8[1] = 48;
  v9 = v4;
  v8[2] = a3;
  v8[0] = HvBufferCheckSum(v8, 48LL);
  result = CmpTransWriteLog(a1, (int)v8, 48, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
