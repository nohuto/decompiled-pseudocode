/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18005762C
 * Callers:
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18005741C (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x1800574D8 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180057DD4 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180057E90 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800591B8 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // rcx

  v2 = (unsigned __int64)a1 + 8;
  v4 = *((_QWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *(_QWORD *)v2;
  if ( (v4 & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v2;
    else
      v6 = 0LL;
  }
  v7 = v4 & 1;
  while ( v6 )
  {
    if ( a2 < *(_DWORD *)(v6 + 100) )
    {
      v8 = *(_QWORD *)v6;
    }
    else
    {
      if ( a2 <= *(_DWORD *)(v6 + 100) )
      {
        v5 = v6 - 8;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 - 8)) <= 1 )
          __fastfail(0xEu);
        return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
      }
      v8 = *(_QWORD *)(v6 + 8);
    }
    if ( v7 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
}
