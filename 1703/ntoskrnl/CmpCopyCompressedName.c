/*
 * XREFs of CmpCopyCompressedName @ 0x1404D2CB0
 * Callers:
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmpInitializeValueNameString @ 0x1404CC440 (CmpInitializeValueNameString.c)
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1404D2404 (CmpAddSubKeyToList.c)
 *     CmpPopulateNodeInformation @ 0x1404D2B6C (CmpPopulateNodeInformation.c)
 *     CmpQueryKeyValueData @ 0x140503410 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405039C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpInitializeKeyNameString @ 0x14058DF54 (CmpInitializeKeyNameString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406659C0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x14080F0A8 (CmpGetNodeName.c)
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
