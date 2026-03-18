/*
 * XREFs of sub_14044A7A8 @ 0x14044A7A8
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_14044A98C @ 0x14044A98C (sub_14044A98C.c)
 *     sub_140501EA0 @ 0x140501EA0 (sub_140501EA0.c)
 */

__int64 __fastcall sub_14044A7A8(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140501EA0(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14044A98C(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
