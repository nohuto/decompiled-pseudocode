/*
 * XREFs of ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023E40
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180023B80 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmHamHostUpdateSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v1; // ebp
  _QWORD *Value; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  bool v10; // zf
  _QWORD *v11; // rax

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v1) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800937F8 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 2);
  RmpActivityHostUpdateImportance((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 2);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 174);
  if ( RmpActivityHostIsRevocable((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64)) )
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 - 1) + 88LL));
  v4 = *((_QWORD *)a1 - 2);
  *((_QWORD *)a1 + 131) = 0LL;
  v5 = *(_QWORD *)(v4 + 2232);
  v6 = *(_DWORD *)(v5 + 184);
  if ( (v6 & 3) == 0 )
  {
    *(_DWORD *)(v5 + 184) = v6 | 1;
    TpPostWork(*(_QWORD *)(v5 + 168));
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v8 |= 2uLL;
    ++v8[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker(a1, 0);
  if ( HampLockTrackerId != -1 )
  {
    v9 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v9 & 2) == 0 )
      __int2c();
    v10 = v9[2]-- == 1LL;
    if ( v10 )
      *v9 &= ~2uLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v11 & 1) == 0 )
      __int2c();
    v10 = v11[1]-- == 1LL;
    if ( v10 )
      *v11 &= ~1uLL;
  }
}
