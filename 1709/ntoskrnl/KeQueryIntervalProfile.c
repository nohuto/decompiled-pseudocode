/*
 * XREFs of KeQueryIntervalProfile @ 0x1406D86EC
 * Callers:
 *     KeSetIntervalProfile @ 0x1406D8798 (KeSetIntervalProfile.c)
 *     NtQueryIntervalProfile @ 0x140760A30 (NtQueryIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  int v2; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+34h] [rbp-24h]
  unsigned int v4; // [rsp+38h] [rbp-20h]
  char v5; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  v2 = a1;
  if ( ((int (__fastcall *)(__int64, __int64, int *, char *))off_140354F48[0])(1LL, 24LL, &v2, &v5) >= 0 && v3 )
    return v4;
  else
    return 0LL;
}
