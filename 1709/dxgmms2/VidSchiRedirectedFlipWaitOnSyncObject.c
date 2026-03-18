/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C0028E08
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C002C1E0 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C0071EE0 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(__int64 a1, union _ULARGE_INTEGER *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 HighPart; // r15
  void (__fastcall *v12)(_QWORD); // rax
  ULONGLONG QuadPart; // rcx
  union _ULARGE_INTEGER v14; // rdx
  union _ULARGE_INTEGER *v15; // rax
  _QWORD *v16; // rax
  union _ULARGE_INTEGER v17; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rax
  __int64 **v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  v9 = *(ULONGLONG *)((char *)&a2[61].QuadPart + a2[55].HighPart * ((8 * a2[56].LowPart + 175) & 0xFFFFFFF8));
  if ( v9 )
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 32LL);
  else
    v10 = 0LL;
  HighPart = a2[14].HighPart;
  if ( (a2->LowPart & 0x1000000) != 0
    && (_DWORD)HighPart != -1
    && *(_DWORD *)(*(_QWORD *)(a1 + 8 * HighPart + 3008) + 23648LL) != -1 )
  {
    v12 = *(void (__fastcall **)(_QWORD))(a1 + 2864);
    if ( v12 )
      v12(*(_QWORD *)(a1 + 2928));
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)HighPart != -1 && (a2->LowPart & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 960), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 1188), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * HighPart + 1124), 1u);
    if ( (*(_DWORD *)(v10 + 48) & 2) != 0 || (int)a2[15].LowPart >= 4 || *(_BYTE *)(a1 + 132) )
      VidSchIsVSyncEnabled(a1, (unsigned int)HighPart);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  v14 = a2[52];
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_20;
  v15 = *(union _ULARGE_INTEGER **)(a3 + 56);
  if ( *(_BYTE *)(a3 + 29) )
  {
    QuadPart = v15->QuadPart;
    if ( v15->QuadPart >= v14.QuadPart )
    {
LABEL_20:
      v16 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
                        QuadPart,
                        (union _ULARGE_INTEGER)v14.QuadPart);
      v16[3] = a3;
      v16[4] = **(_QWORD **)(a3 + 56);
      v16[5] = a2[52].QuadPart;
      WdLogEvent5_WdEvent(v16);
      v17 = a2[3];
      if ( v17.QuadPart )
        _InterlockedAdd((volatile signed __int32 *)(v17.QuadPart + 4), 1u);
      VidSchiSubmitPresentHistoryToken(0LL, a2, a2[52], a1);
      goto LABEL_23;
    }
  }
  else
  {
    QuadPart = (v15->LowPart - v14.LowPart) >> 31;
    LOBYTE(QuadPart) = (signed int)(v15->LowPart - v14.LowPart) >= 0;
    if ( (signed int)(v15->LowPart - v14.LowPart) >= 0 )
      goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *(_DWORD *)(a1 + 128) * (48 * *(_DWORD *)(a1 + 56) + ((8 * *(_DWORD *)(a1 + 56) + 175) & 0xFFFFFFF8))
                + 8 * (*(_DWORD *)(a1 + 56) + 62),
                  0x68536956u);
  v22 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = a3;
    PoolWithTag[2] = a2[52].QuadPart;
    memmove(PoolWithTag + 5, a2, a2[53].HighPart);
    v24 = v22[8];
    if ( v24 )
      _InterlockedAdd((volatile signed __int32 *)(v24 + 4), 1u);
    v25 = a1 + 1016;
    v26 = v22 + 3;
    v27 = *(__int64 ***)(v25 + 8);
    if ( *v27 != (__int64 *)v25 )
      __fastfail(3u);
    *v26 = v25;
    v22[4] = v27;
    *v27 = v26;
    *(_QWORD *)(v25 + 8) = v26;
  }
  else
  {
    v23 = WdLogNewEntry5_WdAssertion(v21, v20);
    WdLogEvent5_WdAssertion(v23);
    v4 = -1073741801;
  }
LABEL_23:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
