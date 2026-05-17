/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x18005DF10
 * Callers:
 *     sub_18005683C @ 0x18005683C (sub_18005683C.c)
 *     sub_18005DD3C @ 0x18005DD3C (sub_18005DD3C.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 *     sub_1800E0020 @ 0x1800E0020 (sub_1800E0020.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x18003AFF0 (RtlExpandEnvironmentStrings.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings_U(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r8
  _WORD *v8; // rdx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a3 + 2);
  v6 = *a2;
  v8 = (_WORD *)*((_QWORD *)a2 + 1);
  v13 = 0LL;
  v9 = RtlExpandEnvironmentStrings(a1, v8, v6 >> 1, *(_WORD **)(a3 + 8), v4 >> 1, &v13);
  v10 = v13;
  v11 = v9;
  if ( v13 > 0x7FFF )
  {
    v11 = -1073741823;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    if ( v9 >= 0 )
      *(_WORD *)a3 = 2 * (v13 - 1);
    if ( a4 )
      *a4 = 2 * v10;
  }
  return v11;
}
