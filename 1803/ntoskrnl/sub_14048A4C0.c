/*
 * XREFs of sub_14048A4C0 @ 0x14048A4C0
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140489EA8 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_14048A6A4 @ 0x14048A6A4 (sub_14048A6A4.c)
 *     sub_14050F54C @ 0x14050F54C (sub_14050F54C.c)
 */

__int64 __fastcall sub_14048A4C0(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14050F54C(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14048A6A4(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
