/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14015BE00
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1401687E8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 a1, __int64 *a2, int a3)
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
