/*
 * XREFs of ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180007388
 * Callers:
 *     ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180006FB0 (-RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBX.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x1800383C0 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?HampHostDepAllocateState@@YAJPEAU_HAM_HOST_DEPENDENCY@@KK@Z @ 0x180045570 (-HampHostDepAllocateState@@YAJPEAU_HAM_HOST_DEPENDENCY@@KK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemOpenProcess(void **a1, ACCESS_MASK a2, unsigned int a3)
{
  unsigned __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF

  v5.Length = 48;
  memset(&v5.RootDirectory, 0, 20);
  v4 = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return NtOpenProcess(a1, a2, &v5, (PCLIENT_ID)&v4);
}
