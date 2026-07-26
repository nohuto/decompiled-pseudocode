/*
 * XREFs of ndisOidPrePacketFilter @ 0x1C00C0B40
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetMiniportPacketFilter @ 0x1C001C6E8 (ndisSetMiniportPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C001C84C (ndisSetOpenPacketFilter.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     ndisSetRestorePacketFilter @ 0x1C00488C8 (ndisSetRestorePacketFilter.c)
 *     ndisQueryMiniportPacketFilter @ 0x1C00DF468 (ndisQueryMiniportPacketFilter.c)
 *     ndisQueryOpenPacketFilter @ 0x1C00DF550 (ndisQueryOpenPacketFilter.c)
 */

unsigned __int8 __fastcall ndisOidPrePacketFilter(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // r14
  int v6; // eax
  bool v8; // zf
  int OpenPacketFilter; // eax
  __int64 v10; // rax
  __int64 v11; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x64u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v5, v3);
  v6 = *(_DWORD *)(v3 + 4);
  switch ( v6 )
  {
    case 2:
      v8 = *(_QWORD *)a1 == 0LL;
      goto LABEL_17;
    case 0:
      if ( v5 )
      {
        OpenPacketFilter = ndisQueryOpenPacketFilter(v5, v3);
        goto LABEL_19;
      }
      v8 = v1 == 0;
LABEL_17:
      if ( v8 )
        break;
      OpenPacketFilter = ndisQueryMiniportPacketFilter(v1, v3);
      if ( OpenPacketFilter == 259 )
        break;
LABEL_19:
      *(_DWORD *)(a1 + 40) = OpenPacketFilter;
      v4 = 1;
      break;
    case 1:
      if ( !v5 || (v4 = ndisSetOpenPacketFilter(v5, v3, (int *)(a1 + 40)), v4 != 1) )
      {
        if ( *(_UNKNOWN **)(v3 + 104) != &ndisIntReqRestore )
          goto LABEL_8;
        v10 = *(_QWORD *)(a1 + 16);
        v11 = v1;
        if ( v10 )
          v11 = *(_QWORD *)(v10 + 32);
        v4 = ndisSetRestorePacketFilter(v11, v3, (_DWORD *)(a1 + 40));
        if ( v4 != 1 )
        {
LABEL_8:
          if ( v1 )
            v4 = ndisSetMiniportPacketFilter(v1, v3, (_DWORD *)(a1 + 40));
        }
      }
      break;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(0x65u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v5, v3, v4);
  return v4;
}
