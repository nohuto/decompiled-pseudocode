/*
 * XREFs of ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x180057AE0
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002CE10 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18003F3EC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

void __fastcall RmpGameModeNotifyExtensionRecipientsPresent(struct _RM_GAME_MODE_CONTEXT *a1, char a2)
{
  unsigned int v4; // edi

  if ( *((_BYTE *)a1 + 140) != a2 )
  {
    v4 = 0;
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    if ( IsNotifyGameModeExtensionRecipientsPresentPresent() )
    {
      LOBYTE(v4) = a2 != 0;
      NotifyGameModeExtensionRecipientsPresent(v4);
    }
    *((_BYTE *)a1 + 140) = a2;
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  }
}
