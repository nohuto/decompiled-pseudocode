/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023FF0
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800242B0 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180023B80 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  DWORD v2; // esi
  __int64 v4; // rbp
  _QWORD *Value; // rdi
  char v7; // cl
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  bool v12; // zf
  DWORD v13; // ebp
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  DWORD v19; // edi
  _QWORD *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned int v24; // edi
  int v25; // [rsp+40h] [rbp+8h]

  v2 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *((_BYTE *)a1 + 540) == 4 )
  {
    v24 = -1073741275;
LABEL_45:
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
    return v24;
  }
  if ( (*((_BYTE *)a1 + 536) & 8) != 0 )
  {
    v24 = -1058275327;
    goto LABEL_45;
  }
  v7 = *(_DWORD *)a2;
  v8 = HIWORD(*(_DWORD *)a2);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~1u;
    *((_DWORD *)a1 + 28) |= v7 & 1;
  }
  if ( (v8 & 2) != 0 )
  {
    *((_DWORD *)a1 + 28) &= 0xFFFFE7FF;
    *((_DWORD *)a1 + 28) |= (v7 & 6) << 10;
  }
  v9 = *((_DWORD *)a2 + 1);
  v25 = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( !HIBYTE(v9) )
    {
      HIBYTE(v25) = *((_BYTE *)a1 + 427);
      v9 = v25;
    }
    *((_DWORD *)a1 + 106) = v9;
    HampHostUpdateActivityState(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  }
  v10 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v11 & 2) == 0 )
      __int2c();
    v12 = v11[2]-- == 1LL;
    if ( v12 )
      *v11 &= ~2uLL;
  }
  *(_DWORD *)(v10 + 8) = 0;
  RtlReleaseSRWLockExclusive(v10);
  v13 = HampLockTrackerId;
  v14 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v15 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v13) )
      __int2c();
    *v15 |= 1uLL;
    ++v15[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800937F8 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)(v14 - 64), 2);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v14 - 64), 2);
  QueryUnbiasedInterruptTime((PULONGLONG)(v14 + 1392));
  if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v14 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v14 - 8) + 88LL));
  v16 = *(_QWORD *)(v14 - 16);
  *(_QWORD *)(v14 + 1048) = 0LL;
  v17 = *(_QWORD *)(v16 + 2232);
  v18 = *(_DWORD *)(v17 + 184);
  if ( (v18 & 3) == 0 )
  {
    *(_DWORD *)(v17 + 184) = v18 | 1;
    TpPostWork(*(_QWORD *)(v17 + 168));
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v20 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v20 |= 2uLL;
    ++v20[2];
  }
  RtlAcquireSRWLockExclusive(v14);
  *(_DWORD *)(v14 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v14, 0);
  if ( HampLockTrackerId != -1 )
  {
    v21 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v21 & 2) == 0 )
      __int2c();
    v12 = v21[2]-- == 1LL;
    if ( v12 )
      *v21 &= ~2uLL;
  }
  *(_DWORD *)(v14 + 8) = 0;
  RtlReleaseSRWLockExclusive(v14);
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v22 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v22 & 1) == 0 )
      __int2c();
    v12 = v22[1]-- == 1LL;
    if ( v12 )
      *v22 &= ~1uLL;
  }
  return 0LL;
}
