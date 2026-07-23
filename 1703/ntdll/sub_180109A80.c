/*
 * XREFs of sub_180109A80 @ 0x180109A80
 * Callers:
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 * Callees:
 *     sub_1800031C4 @ 0x1800031C4 (sub_1800031C4.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180109804 @ 0x180109804 (sub_180109804.c)
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 */

__int64 __fastcall sub_180109A80(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // edi
  _DWORD *v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+44h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v11 = 0;
  v4 = 3;
  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  v6 = *(_DWORD **)(a1 + 24);
  if ( !(unsigned int)sub_1800031C4((__int64)v6, a2) )
    return 0LL;
  while ( 1 )
  {
    _InterlockedOr(v10, 0);
    v7 = v6[4];
    if ( sub_180109804(a1) )
    {
      v9 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 88LL);
      if ( (int)v9 < 0 )
        break;
      sub_18010E4A8(a1, v9, v8, &v11);
      if ( !v11 )
        break;
    }
    _InterlockedOr(v10, 0);
    if ( v7 > v6[6] || v7 > v6[5] )
    {
      if ( --v4 )
        continue;
    }
    return 0LL;
  }
  return 1LL;
}
