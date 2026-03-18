/*
 * XREFs of ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CCE98
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18002E1BC (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CChannelContext *,1>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 i; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  for ( i = *a1; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( *a2 == *(_QWORD *)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
  }
  result = 1LL;
  *((_DWORD *)a1 + 6) = v2 - 1;
  return result;
}
