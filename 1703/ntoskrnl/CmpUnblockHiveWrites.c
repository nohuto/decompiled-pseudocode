/*
 * XREFs of CmpUnblockHiveWrites @ 0x1404D451C
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpGetNextHive @ 0x1404D64B4 (CmpGetNextHive.c)
 */

__int64 __fastcall CmpUnblockHiveWrites(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 NextHive; // rax

  v5 = a1;
  if ( a1 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  }
  else
  {
    do
    {
      NextHive = CmpGetNextHive();
      v5 = NextHive;
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 5360)) == a2 || NextHive == CmpMasterHive )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(NextHive + 2848));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
    }
    while ( v5 != a3 );
  }
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(v5);
  return result;
}
