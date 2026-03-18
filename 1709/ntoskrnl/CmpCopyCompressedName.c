/*
 * XREFs of CmpCopyCompressedName @ 0x14047442C
 * Callers:
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x140473EEC (CmpAddSubKeyToList.c)
 *     CmpPopulateNodeInformation @ 0x1404742E8 (CmpPopulateNodeInformation.c)
 *     CmpQueryKeyValueData @ 0x14047DAE0 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpInitializeValueNameString @ 0x14059D1F8 (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x1405A6294 (CmpInitializeKeyNameString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1405E5920 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140837344 (CmpGetNodeName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
