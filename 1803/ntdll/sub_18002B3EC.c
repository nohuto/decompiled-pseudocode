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

_DWORD *__fastcall sub_18002B3EC(PVOID BaseOfImage)
{
  NTSTATUS v2; // eax
  _DWORD *v3; // r8
  WORD Machine; // dx
  DWORD v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !BaseOfImage )
    return 0LL;
  v2 = sub_18001014C((unsigned __int64)BaseOfImage, 1, 0xAu, &v6, (char **)&v7);
  v3 = (_DWORD *)v7;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( !v3 || !v6 || v6 != *v3 )
    return 0LL;
  Machine = OutHeaders->FileHeader.Machine;
  if ( Machine == 14948 )
    Machine = 332;
  if ( Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
