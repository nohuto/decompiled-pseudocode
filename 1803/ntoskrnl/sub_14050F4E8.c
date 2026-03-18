/*
 * XREFs of sub_14050F4E8 @ 0x14050F4E8
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14050EB18 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x14050F32C (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_14050F54C @ 0x14050F54C (sub_14050F54C.c)
 */

__int64 __fastcall sub_14050F4E8(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_14050F54C((unsigned int)&qword_1403D0F10, a1, 8, (unsigned int)&v5, 0LL);
  if ( (int)result >= 0 && a2 )
  {
    v4 = v5;
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 232));
      v4 = v5;
    }
    *a2 = v4;
  }
  return result;
}
