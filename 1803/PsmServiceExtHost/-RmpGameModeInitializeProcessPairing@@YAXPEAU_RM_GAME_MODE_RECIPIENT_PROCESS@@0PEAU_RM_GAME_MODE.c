/*
 * XREFs of ?RmpGameModeInitializeProcessPairing@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@0PEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x1800576A8
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180057E90 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall RmpGameModeInitializeProcessPairing(
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2,
        struct _RM_GAME_MODE_PROCESS_PAIRING *a3)
{
  memset_0(a3, 0, 0x40uLL);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 5) = -1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 6) = a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 7) = a2;
}
