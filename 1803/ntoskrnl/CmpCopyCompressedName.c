/*
 * XREFs of CmpCopyCompressedName @ 0x1404A33EC
 * Callers:
 *     CmpPopulateNodeInformation @ 0x1404A120C (CmpPopulateNodeInformation.c)
 *     CmpQueryKeyValueData @ 0x1404A6780 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1404ABDD0 (CmpConstructNameFromKeyNodes.c)
 *     CmpAddSubKeyToList @ 0x140513844 (CmpAddSubKeyToList.c)
 *     CmpRemoveSubKeyFromList @ 0x140517418 (CmpRemoveSubKeyFromList.c)
 *     CmpInitializeValueNameString @ 0x14054F5BC (CmpInitializeValueNameString.c)
 *     CmpMarkIndexDirty @ 0x14057076C (CmpMarkIndexDirty.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406F34B4 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x1406FDE14 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1408B87E4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x1408B9C34 (CmpGetNodeName.c)
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
