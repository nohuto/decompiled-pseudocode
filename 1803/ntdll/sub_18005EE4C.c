/*
 * XREFs of sub_18005EE4C @ 0x18005EE4C
 * Callers:
 *     sub_18005EB88 @ 0x18005EB88 (sub_18005EB88.c)
 *     sub_18005ED80 @ 0x18005ED80 (sub_18005ED80.c)
 * Callees:
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 *     sub_18005EE34 @ 0x18005EE34 (sub_18005EE34.c)
 *     sub_18005EF2C @ 0x18005EF2C (sub_18005EF2C.c)
 *     sub_18005F060 @ 0x18005F060 (sub_18005F060.c)
 */

__int64 __fastcall sub_18005EE4C(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-30h]
  PVOID BaseAddress; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  v16 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)a1, a2 >> 15) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (v5 << 12));
    v9 = sub_18005F060(&BaseAddress, &RegionSize, 4u, v11, v12, 0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)a1, v5);
    v7 = v16;
  }
  v14 = 0uLL;
  *a4 = 0uLL;
  while ( 1 )
  {
    sub_18005EF2C(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 40) != v7 )
      break;
    sub_18005EE34(a3);
    sub_18004AABC((_QWORD *)(a1 + 40), &v16, 8LL, 0LL, dword_1801596D8);
  }
  if ( !_bittest64(*(const signed __int64 **)(a1 + 8), v7) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 16) + (v7 << 12));
    v9 = sub_18005F060(&BaseAddress, &RegionSize, 4u, v11, v12, 0LL);
    if ( v9 < 0 )
    {
      sub_18005EE34(a3);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)(a1 + 8), v7);
  }
  return 0;
}
