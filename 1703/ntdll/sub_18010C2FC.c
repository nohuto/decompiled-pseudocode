/*
 * XREFs of sub_18010C2FC @ 0x18010C2FC
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 * Callees:
 *     sub_180002DE4 @ 0x180002DE4 (sub_180002DE4.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010D418 @ 0x18010D418 (sub_18010D418.c)
 *     sub_18010D4D4 @ 0x18010D4D4 (sub_18010D4D4.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

void *__fastcall sub_18010C2FC(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  void *result; // rax

  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
LABEL_7:
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_18010C390(v3);
    goto LABEL_9;
  }
  v4 = sub_18010D4D4(4LL, a2, a1);
  v3 = v4;
  if ( !v4 )
    return 0LL;
  v2 = (void *)sub_18010D418(v4, 4, v5, v6, 0LL);
  if ( !v2 )
    goto LABEL_7;
  sub_18010C390(v3);
  result = sub_180002DE4((__int64)v2, 0, 9);
  if ( !result )
  {
LABEL_9:
    if ( v2 )
      sub_18010D634(v2);
    return 0LL;
  }
  return result;
}
