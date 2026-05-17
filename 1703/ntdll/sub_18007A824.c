/*
 * XREFs of sub_18007A824 @ 0x18007A824
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     sub_18001B710 @ 0x18001B710 (sub_18001B710.c)
 *     sub_180083608 @ 0x180083608 (sub_180083608.c)
 * Callees:
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

__int64 __fastcall sub_18007A824(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = qword_1801593C0;
  v4 = a1 & 0x7FFF;
  v9 = v4;
  if ( !qword_1801593C0 )
    return 4201;
  if ( v4 < 0x40 )
  {
LABEL_3:
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v4 + 8));
    v5 = *(_QWORD *)(qword_1801593C0 + 16LL * v4);
    if ( (*(_BYTE *)(qword_1801593C0 + 16LL * v4) & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v4 + 8));
    return 4201;
  }
  v6 = sub_180104B00(a1, &v9);
  if ( !v6 )
  {
    v4 = v9;
    v2 = qword_1801593C0;
    goto LABEL_3;
  }
  v5 = v10;
LABEL_5:
  if ( !v6 )
  {
    v7 = *(_DWORD *)(v5 + 324);
    if ( (v7 & 0x800) != 0 && (v7 & 0x10000) == 0 )
      v6 = sub_18007A8C0(v5, a2);
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v5 + 20) + 8));
  }
  return v6;
}
