/*
 * XREFs of CmpBlockHiveWrites @ 0x1404D5900
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     CmpGetNextHive @ 0x1404D64B4 (CmpGetNextHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 a1, int a2, __int64 *a3)
{
  __int64 i; // rcx
  __int64 NextHive; // rax
  __int64 v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = NextHive;
    if ( !NextHive )
      return a1 != 0 ? 0xC0000034 : 0;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 5360)) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive(NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 2848), 1u);
      }
      if ( a1 == v8 )
        break;
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v8);
  return 0LL;
}
