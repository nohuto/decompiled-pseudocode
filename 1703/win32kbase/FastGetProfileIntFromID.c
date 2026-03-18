/*
 * XREFs of FastGetProfileIntFromID @ 0x1C0073AA0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     FastGetProfileIntW @ 0x1C0073CA0 (FastGetProfileIntW.c)
 *     RtlLoadStringOrError @ 0x1C0073FB0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntFromID(int a1, int a2, ULONG a3, int a4, int *a5, int a6)
{
  int v10; // edx
  int v12[4]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v13[160]; // [rsp+40h] [rbp-D8h] BYREF

  RtlLoadStringOrError(a3, v13);
  if ( !(unsigned int)FastGetProfileIntW(a1, a2, (unsigned int)v13, a4, (__int64)v12, a6) )
    return 0LL;
  if ( a3 > 0x90 )
  {
    if ( a3 < 0x92 || a3 > 0x94 && (a3 <= 0x97 || a3 > 0x99 && a3 != 158) )
      goto LABEL_7;
LABEL_18:
    v10 = v12[0];
    if ( v12[0] < 0 )
      v10 = (720 - v12[0] * *((unsigned __int16 *)gpsi + 4339)) / 1440;
    goto LABEL_8;
  }
  if ( a3 >= 0x8F || a3 >= 0x40 && (a3 <= 0x41 || a3 > 0x87 && (a3 <= 0x8A || a3 > 0x8B && a3 <= 0x8D)) )
    goto LABEL_18;
LABEL_7:
  v10 = v12[0];
LABEL_8:
  if ( a5 )
    *a5 = v10;
  return 1LL;
}
