/*
 * XREFs of sub_180086A30 @ 0x180086A30
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 * Callees:
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

bool __fastcall sub_180086A30(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  bool result; // al
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v1 = qword_1801593C0;
  v2 = a1 & 0xFFFF7FFF;
  v6 = a1 & 0xFFFF7FFF;
  if ( !qword_1801593C0 )
    return 0;
  if ( v2 >= 0x40 )
  {
    v4 = sub_180104B00(a1, &v6);
    if ( v4 )
    {
      v3 = v7;
      goto LABEL_5;
    }
    v2 = v6;
    v1 = qword_1801593C0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16LL * v2 + 8));
  v3 = *(_QWORD *)(qword_1801593C0 + 16LL * v2);
  if ( (*(_BYTE *)(qword_1801593C0 + 16LL * v2) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v2 + 8));
    return 0;
  }
  v4 = 0;
LABEL_5:
  if ( !v4 )
  {
    result = *(_DWORD *)(v3 + 328) != 0;
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v3 + 20) + 8));
    return result;
  }
  return 0;
}
