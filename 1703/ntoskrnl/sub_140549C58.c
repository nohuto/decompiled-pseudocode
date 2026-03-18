/*
 * XREFs of sub_140549C58 @ 0x140549C58
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140440FC4 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_14053B960 @ 0x14053B960 (sub_14053B960.c)
 *     sub_140549E38 @ 0x140549E38 (sub_140549E38.c)
 */

__int64 __fastcall sub_140549C58(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14053B960(a1 + 136, a2, 0x10u, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140549E38(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
