/*
 * XREFs of ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180026A0C
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025F30 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180027260 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C78 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampWakeManagerAcquireLockExclusive(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      __int2c();
    *Value |= 0x10uLL;
    ++Value[5];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  *((_DWORD *)a1 + 6) = GetCurrentThreadId();
}
