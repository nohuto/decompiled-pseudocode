/*
 * XREFs of sub_18002B3EC @ 0x18002B3EC
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18000B210 (RtlGuardCheckLongJumpTarget.c)
 *     sub_18002B318 @ 0x18002B318 (sub_18002B318.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     sub_18004FC74 @ 0x18004FC74 (sub_18004FC74.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800F2E70 @ 0x1800F2E70 (sub_1800F2E70.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall sub_18002B3EC(unsigned __int64 a1)
{
  int v2; // eax
  _DWORD *v3; // r8
  __int16 v4; // dx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1, a1, 0LL, &v8);
  if ( !a1 )
    return 0LL;
  v2 = sub_18001014C(a1, 1, 0xAu, &v6, (__int64 *)&v7);
  v3 = v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  v4 = *(_WORD *)(v8 + 4);
  if ( v4 == 14948 )
    v4 = 332;
  if ( v4 == -31132 )
    return v3;
  else
    return 0LL;
}
