/*
 * XREFs of RmSetHostLimit @ 0x18000C8B0
 * Callers:
 *     <none>
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x18000FA14 (RmpResourceLimitsAreLegal.c)
 */

__int64 __fastcall RmSetHostLimit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 264LL;
  v8 = 8LL;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *, __int64 *, __int64))RmpResourceLimitsAreLegal)(
                       a3,
                       v7,
                       &v8,
                       a1) )
    return RmpClientSetHostLimits(v3, v5, v4);
  else
    return 3221225713LL;
}
