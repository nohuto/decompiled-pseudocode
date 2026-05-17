/*
 * XREFs of sub_1800FB1B0 @ 0x1800FB1B0
 * Callers:
 *     sub_1800ED164 @ 0x1800ED164 (sub_1800ED164.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_1800563A0 @ 0x1800563A0 (sub_1800563A0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800FB5BC @ 0x1800FB5BC (sub_1800FB5BC.c)
 */

__int64 __fastcall sub_1800FB1B0(__int64 a1, __int16 a2, unsigned int *a3, _WORD *a4, unsigned int a5, _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int16 *v9; // rdx
  __int64 v10; // rdx
  unsigned int v12; // ecx
  int v13; // [rsp+20h] [rbp-E8h] BYREF
  char *v14; // [rsp+28h] [rbp-E0h]
  char v15; // [rsp+30h] [rbp-D8h] BYREF

  if ( !a1 || !a3 || !a4 || !a5 || !a6 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 3221226021LL;
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 || a2 < 0 || a2 >= (int)*(unsigned __int16 *)(v7 + 6) )
    return 3221226021LL;
  v9 = (unsigned __int16 *)(v8 + 28LL * a2);
  *a3 = v9[2];
  *a6 = *v9;
  v10 = v9[3];
  if ( (__int16)v10 > 0 )
    return sub_1800FB5BC(a1, v10, a4, a5);
  v12 = *a3;
  v14 = &v15;
  v13 = 11141120;
  if ( RtlLCIDToCultureName(v12, (__int64)&v13) )
    return sub_1800563A0(a4, a5, (__int64)v14);
  else
    return 3221226021LL;
}
