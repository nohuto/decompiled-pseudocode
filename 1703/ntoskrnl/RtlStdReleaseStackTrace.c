/*
 * XREFs of RtlStdReleaseStackTrace @ 0x14023B590
 * Callers:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1401526A0 (ExpInitializeResource.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebp
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  _QWORD *v7; // rbx
  KSPIN_LOCK *v8; // r14
  __int16 v9; // cx
  __int16 v10; // ax
  _QWORD *v11; // rax
  unsigned __int64 v12; // rbx

  v2 = a1;
  LOWORD(a1) = *(_WORD *)(a2 + 14);
  v4 = 0;
  v5 = 0;
  if ( (_WORD)a1 )
  {
    v6 = (_DWORD *)(a2 + 16);
    a1 = (unsigned __int16)a1;
    do
    {
      v5 += *v6;
      v6 += 2;
      --a1;
    }
    while ( a1 );
  }
  v7 = (_QWORD *)(v2 + 8 * (v5 % *(_DWORD *)(v2 + 720) + 2LL * (v5 % *(_DWORD *)(v2 + 720)) + 91));
  v8 = v7 + 1;
  *((_BYTE *)v7 + 16) = KeAcquireSpinLockRaiseToDpc(v7 + 1);
  v9 = *(_WORD *)(a2 + 8);
  if ( (v9 & 0x7FF) != 0x7FF )
  {
    v10 = v9 ^ (v9 ^ (v9 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v10;
    if ( (v10 & 0x7FF) == 0 )
    {
      if ( *v7 )
      {
        while ( 1 )
        {
          v11 = (_QWORD *)*v7;
          if ( *v7 == a2 )
            break;
          v7 = (_QWORD *)*v7;
          if ( !*v11 )
            goto LABEL_9;
        }
        *v7 = *(_QWORD *)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v4 = 1;
    }
  }
  v12 = *((unsigned __int8 *)v8 + 8);
  KxReleaseSpinLock(v8);
  __writecr8(v12);
  if ( v4 )
  {
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(v2 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
      (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(v2 + 196), 1u);
  }
}
