/*
 * XREFs of ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CD60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000C3E0 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 */

void __fastcall CApplication::SoundLevelChangeCompletionCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 184));
  *((_DWORD *)a2 + 58) = 0;
  LeaveCriticalSection(v3);
  CApplication::ProcessPendingSoundLevelNotification((CApplication *)a2);
  CApplication::ProcessPendingPLMExemptionChange((CApplication *)a2);
}
