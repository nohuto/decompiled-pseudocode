/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C0007E70
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0032AC0 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+38h] [rbp-30h] BYREF

  v6 = 8LL * a1;
  v7 = *(_QWORD *)(v6 + a2);
  if ( !a5 )
    goto LABEL_11;
  v8 = *(unsigned int *)(v7 + 44);
  if ( (_DWORD)v8 != 4 )
  {
    if ( !(_DWORD)v8 )
    {
      if ( !*(_QWORD *)(v7 + 56) )
      {
        v20 = WdLogNewEntry5_WdWarning(v8, (unsigned int)v8);
        *(_QWORD *)(v20 + 24) = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdWarning(v20);
      }
      *(_QWORD *)(v7 + 56) = 0LL;
      goto LABEL_11;
    }
    if ( (_DWORD)v8 == 1 )
    {
      v18 = *(_DWORD *)(v7 + 56);
      if ( v18 >= *(_DWORD *)(v7 + 52) )
      {
        v19 = ((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
        *(_QWORD *)(v19 + 24) = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdWarning(v19);
      }
      else
      {
        *(_DWORD *)(v7 + 56) = v18 + 1;
      }
      goto LABEL_11;
    }
    a2 = (unsigned int)(v8 - 2);
    if ( (_DWORD)v8 == 2 )
    {
      if ( *(_BYTE *)(v7 + 27) )
      {
        v14 = *(_QWORD *)(v7 + 200);
        v15 = *(_QWORD *)(v6 + a4);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 8), &LockHandle);
        if ( *(_QWORD *)(v14 + 40) >= v15 )
        {
          v16 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
          v16[3] = *(_QWORD *)(v7 + 16);
          v16[4] = *(_QWORD *)(v14 + 40);
          v16[5] = v15;
          WdLogEvent5_WdWarning(v16);
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v15;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else
      {
        v13 = *(_QWORD *)(v6 + a4);
        if ( *(_QWORD *)(v7 + 56) >= v13 )
        {
          v17 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
          v17[3] = *(_QWORD *)(v7 + 16);
          v17[4] = *(_QWORD *)(v7 + 56);
          v17[5] = *(_QWORD *)(v6 + a4);
          WdLogEvent5_WdWarning(v17);
        }
        else
        {
          *(_QWORD *)(v7 + 56) = v13;
        }
      }
      goto LABEL_11;
    }
    if ( (_DWORD)v8 != 5 )
      goto LABEL_11;
  }
  if ( !*(_BYTE *)(v7 + 28) )
  {
    if ( !*(_BYTE *)(v7 + 27) )
    {
      if ( (a3 & 4) != 0 )
      {
LABEL_9:
        v10 = (_QWORD *)(v6 + a4);
        *(_QWORD *)(v7 + 80) = *(_QWORD *)(v6 + a4);
LABEL_10:
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, a2);
        v12[3] = v7;
        v12[4] = **(_QWORD **)(v7 + 56);
        v12[5] = *v10;
        v12[6] = *(unsigned __int8 *)(v7 + 28);
        WdLogEvent5_WdEvent(v12);
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(v6 + a4);
      v10 = (_QWORD *)(v6 + a4);
      v11 = *(_QWORD *)(v7 + 80);
      if ( *(_BYTE *)(v7 + 29) )
      {
        if ( v9 != v11 )
        {
          if ( v9 >= v11 )
            goto LABEL_9;
          v26 = WdLogNewEntry5_WdWarning(v8, a2);
          *(_QWORD *)(v26 + 24) = v9;
          *(_QWORD *)(v26 + 32) = v11;
LABEL_42:
          WdLogEvent5_WdWarning(v26);
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27);
          v29[3] = *(_QWORD *)(v7 + 16);
          v29[4] = *(_QWORD *)(v7 + 80);
          v29[5] = *v10;
          WdLogEvent5_WdWarning(v29);
          goto LABEL_10;
        }
        v30 = WdLogNewEntry5_WdWarning(v8, a2);
        *(_QWORD *)(v30 + 24) = v9;
      }
      else
      {
        if ( (int)v11 - (int)v9 > 0 )
        {
          v26 = WdLogNewEntry5_WdWarning(v8, a2);
          *(_QWORD *)(v26 + 24) = (unsigned int)v9;
          *(_QWORD *)(v26 + 32) = (unsigned int)v11;
          goto LABEL_42;
        }
        if ( (_DWORD)v11 != (_DWORD)v9 )
          goto LABEL_9;
        v30 = WdLogNewEntry5_WdWarning(v8, a2);
        *(_QWORD *)(v30 + 24) = (unsigned int)v9;
      }
      WdLogEvent5_WdWarning(v30);
      goto LABEL_9;
    }
    v21 = *(_QWORD *)(v7 + 200);
    v22 = *(_QWORD *)(v6 + a4);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 8), &v32);
    if ( *(_QWORD *)(v21 + 40) >= v22 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23);
      v25[3] = *(_QWORD *)(v7 + 16);
      v25[4] = *(_QWORD *)(v21 + 40);
      v25[5] = v22;
      WdLogEvent5_WdWarning(v25);
    }
    else
    {
      *(_QWORD *)(v21 + 40) = v22;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
  }
LABEL_11:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
}
