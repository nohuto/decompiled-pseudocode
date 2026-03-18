/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140167CE4
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140173EEC (KiLockExtendedServiceTable.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, a3, &v7);
  v5 = v7;
  if ( v4 < 0 )
    v5 = 0LL;
  result = 0LL;
  *a2 = v5;
  return result;
}
