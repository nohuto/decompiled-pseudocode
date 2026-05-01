/*
 * XREFs of ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180057324
 * Callers:
 *     ?RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@KW4_RM_GAME_MODE_PAIRED_PROCESS@@@Z @ 0x1800575AC (-RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT.c)
 *     ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x18005779C (-RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeComparePairingByAuxiliaryId(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int Right_high; // edx

  Right_high = HIDWORD(a2[2].Children[1][4].Right);
  if ( (unsigned int)a1 >= Right_high )
    return (unsigned int)a1 > Right_high;
  else
    return 0xFFFFFFFFLL;
}
