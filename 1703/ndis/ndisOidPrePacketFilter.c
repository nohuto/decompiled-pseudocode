/*
 * XREFs of ndisOidPrePacketFilter @ 0x1C00B6F50
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetOpenPacketFilter @ 0x1C001BE70 (ndisSetOpenPacketFilter.c)
 *     ndisSetMiniportPacketFilter @ 0x1C001C100 (ndisSetMiniportPacketFilter.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     ndisSetRestorePacketFilter @ 0x1C004A240 (ndisSetRestorePacketFilter.c)
 *     ndisQueryMiniportPacketFilter @ 0x1C00D2F94 (ndisQueryMiniportPacketFilter.c)
 *     ndisQueryOpenPacketFilter @ 0x1C00D307C (ndisQueryOpenPacketFilter.c)
 */

unsigned __int8 __fastcall ndisOidPrePacketFilter(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // r14
  int v6; // eax
  int OpenPacketFilter; // eax
  __int64 v9; // rax
  __int64 v10; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x64u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v5, v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_10;
    goto LABEL_16;
  }
  if ( v6 )
    goto LABEL_5;
  if ( v5 )
  {
    OpenPacketFilter = ndisQueryOpenPacketFilter(v5, v3);
LABEL_19:
    *(_DWORD *)(a1 + 40) = OpenPacketFilter;
    v4 = 1;
    goto LABEL_10;
  }
  if ( v1 )
  {
LABEL_16:
    OpenPacketFilter = ndisQueryMiniportPacketFilter(v1, v3);
    if ( OpenPacketFilter == 259 )
      goto LABEL_10;
    goto LABEL_19;
  }
LABEL_5:
  if ( v6 == 1 )
  {
    if ( !v5 || (v4 = ndisSetOpenPacketFilter(v5, v3, (unsigned int *)(a1 + 40)), v4 != 1) )
    {
      if ( *(_UNKNOWN **)(v3 + 104) != &ndisIntReqRestore )
        goto LABEL_8;
      v9 = *(_QWORD *)(a1 + 16);
      v10 = v1;
      if ( v9 )
        v10 = *(_QWORD *)(v9 + 32);
      v4 = ndisSetRestorePacketFilter(v10, v3, (_DWORD *)(a1 + 40));
      if ( v4 != 1 )
      {
LABEL_8:
        if ( v1 )
          v4 = ndisSetMiniportPacketFilter(v1, v3, (_DWORD *)(a1 + 40));
      }
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqL(0x65u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v5, v3, v4);
  return v4;
}
