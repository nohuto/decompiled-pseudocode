/*
 * XREFs of sub_180036588 @ 0x180036588
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 * Callees:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     LdrRscIsTypeExist @ 0x180036760 (LdrRscIsTypeExist.c)
 */

int __fastcall sub_180036588(void *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v6 = sub_18003660C(a1);
  v7 = v6;
  if ( !v6 )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(v6, *a2, a4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (*(_DWORD *)(v7 + 20) & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
