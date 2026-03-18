/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C00069D0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 8LL * a1;
  v7 = *(_QWORD *)(v6 + a2);
  if ( !a5 )
    goto LABEL_10;
  v8 = *(unsigned int *)(v7 + 40);
  if ( (_DWORD)v8 == 4 )
    goto LABEL_3;
  if ( (_DWORD)v8 )
  {
    v13 = v8 - 1;
    if ( !v13 )
    {
      v19 = *(_DWORD *)(v7 + 56);
      if ( v19 >= *(_DWORD *)(v7 + 52) )
      {
        v20 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v20 + 24) = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdWarning(v20);
      }
      else
      {
        *(_DWORD *)(v7 + 56) = v19 + 1;
      }
      goto LABEL_10;
    }
    v8 = (unsigned int)(v13 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 3 )
        goto LABEL_10;
LABEL_3:
      if ( *(_BYTE *)(v7 + 28) )
      {
LABEL_10:
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
        return;
      }
      if ( (a3 & 4) != 0 )
        goto LABEL_8;
      v9 = (_QWORD *)(v6 + a4);
      v10 = *(_QWORD *)(v6 + a4);
      v11 = *(_QWORD *)(v7 + 80);
      if ( *(_BYTE *)(v7 + 29) )
      {
        if ( v10 >= v11 )
        {
          if ( v10 != v11 )
            goto LABEL_8;
          v23 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v23 + 24) = v10;
          goto LABEL_38;
        }
        v22 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v22 + 24) = v10;
        *(_QWORD *)(v22 + 32) = v11;
      }
      else
      {
        if ( (int)v11 - (int)v10 <= 0 )
        {
          if ( (_DWORD)v11 != (_DWORD)v10 )
          {
LABEL_8:
            v9 = (_QWORD *)(v6 + a4);
            *(_QWORD *)(v7 + 80) = *(_QWORD *)(v6 + a4);
LABEL_9:
            v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, a2);
            v12[3] = v7;
            v12[4] = **(_QWORD **)(v7 + 56);
            v12[5] = *v9;
            v12[6] = *(unsigned __int8 *)(v7 + 28);
            WdLogEvent5_WdEvent(v12);
            goto LABEL_10;
          }
          v23 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v23 + 24) = (unsigned int)v10;
LABEL_38:
          WdLogEvent5_WdWarning(v23);
          goto LABEL_8;
        }
        v22 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v22 + 24) = (unsigned int)v10;
        *(_QWORD *)(v22 + 32) = (unsigned int)v11;
      }
      WdLogEvent5_WdWarning(v22);
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning();
      v24[3] = *(_QWORD *)(v7 + 16);
      v24[4] = *(_QWORD *)(v7 + 80);
      v24[5] = *v9;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v7 + 27) )
    {
      v16 = *(_QWORD *)(v7 + 184);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 8), &LockHandle);
      v17 = *(_QWORD *)(v6 + a4);
      if ( *(_QWORD *)(v16 + 40) >= v17 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning();
        v18[3] = *(_QWORD *)(v7 + 16);
        v18[4] = *(_QWORD *)(v16 + 40);
        v18[5] = *(_QWORD *)(v6 + a4);
        WdLogEvent5_WdWarning(v18);
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v17;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_10;
    }
    v14 = *(_QWORD *)(v6 + a4);
    if ( *(_QWORD *)(v7 + 56) >= v14 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning();
      v15[3] = *(_QWORD *)(v7 + 16);
      v15[4] = *(_QWORD *)(v7 + 56);
      v15[5] = *(_QWORD *)(v6 + a4);
      WdLogEvent5_WdWarning(v15);
    }
    else
    {
      *(_QWORD *)(v7 + 56) = v14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 56) )
    {
      v21 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v21 + 24) = *(_QWORD *)(v7 + 16);
      WdLogEvent5_WdWarning(v21);
    }
    *(_QWORD *)(v7 + 56) = 0LL;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
  }
}
