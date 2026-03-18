/*
 * XREFs of PipDmgIsDmaRemappingEnabled @ 0x14062303C
 * Callers:
 *     PiDmaGuardInitialize @ 0x1408A4834 (PiDmaGuardInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char PipDmgIsDmaRemappingEnabled()
{
  int v0; // eax
  char v1; // cl
  char v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v0 = ((__int64 (__fastcall *)(__int64, __int64, char *, int *))off_140397D98[0])(47LL, 1LL, &v3, &v4);
  v1 = 0;
  if ( v0 >= 0 && v4 == 1 )
    return v3;
  return v1;
}
