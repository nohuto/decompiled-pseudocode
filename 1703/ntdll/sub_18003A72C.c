/*
 * XREFs of sub_18003A72C @ 0x18003A72C
 * Callers:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_1800016BC @ 0x1800016BC (sub_1800016BC.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_18003A658 @ 0x18003A658 (sub_18003A658.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180079EB0 (RtlGuardCheckLongJumpTarget.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800F5B90 @ 0x1800F5B90 (sub_1800F5B90.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall sub_18003A72C(PVOID BaseOfImage)
{
  NTSTATUS v2; // eax
  _DWORD *v3; // rdx
  DWORD v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !BaseOfImage )
    return 0LL;
  v2 = sub_180032C0C((unsigned __int64)BaseOfImage, 1, 0xAu, &v5, (char **)&v6);
  v3 = (_DWORD *)v6;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( v3 && v5 && v5 == *v3 && OutHeaders->FileHeader.Machine == 0x8664 )
    return v3;
  else
    return 0LL;
}
