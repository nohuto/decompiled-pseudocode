/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x1404DB380
 * Callers:
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpTransferQuotaMessage @ 0x1404DED94 (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404DF100 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1404DF1B4 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14057C76C (AlpcpTryLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4, __int64 a5)
{
  int v5; // r10d
  __int64 v6; // rsi
  BOOL v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rdi
  unsigned int v16; // r12d
  volatile signed __int64 *v17; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rcx
  volatile signed __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  ULONG_PTR *i; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h]
  unsigned int v37; // [rsp+88h] [rbp+20h]

  v5 = *(_DWORD *)(a2 + 416) & 6;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
  {
    v10 = v5 != 4;
    goto LABEL_3;
  }
  if ( v5 == 2 )
  {
    v10 = 0;
LABEL_3:
    if ( !v10 )
      goto LABEL_5;
  }
  if ( a4 == 3 )
  {
    v37 = 1;
LABEL_16:
    v11 = 176LL;
    goto LABEL_7;
  }
LABEL_5:
  v37 = 0;
  if ( a4 <= 2 )
  {
    v11 = 136LL;
    goto LABEL_7;
  }
  if ( a4 == 3 )
    goto LABEL_16;
  v11 = 200LL;
LABEL_7:
  ExAcquirePushLockExclusiveEx(v11 + a2, 0LL);
  v15 = *a3;
  v16 = 0;
  while ( (ULONG_PTR *)v15 != a3 )
  {
    BugCheckParameter2 = v15;
    if ( *(_QWORD *)(v15 + 24) == v6 || (*(_DWORD *)(v15 + 40) & 0x8000) != 0 )
    {
      AlpcpReferenceBlob(v15);
      if ( !(unsigned __int8)AlpcpTryLockForCachedReferenceBlob(v15) )
      {
        if ( a4 <= 2 )
        {
          v30 = (volatile signed __int64 *)(a2 + 136);
        }
        else if ( a4 == 3 )
        {
          v30 = (volatile signed __int64 *)(a2 + 176);
        }
        else
        {
          v30 = (volatile signed __int64 *)(a2 + 200);
        }
        if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v30, 0LL, v19, v20);
        KeAbPostRelease((ULONG_PTR)v30);
        v16 = 1;
        AlpcpLockForCachedReferenceBlob(v15);
        if ( a4 <= 2 )
        {
          v31 = 136LL;
        }
        else
        {
          v31 = 176LL;
          if ( a4 != 3 )
            v31 = 200LL;
        }
        ExAcquirePushLockExclusiveEx(v31 + a2, 0LL);
        v6 = a1;
        if ( *(_QWORD *)(v15 + 24) == a1 )
        {
          for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
          {
            if ( i == (ULONG_PTR *)v15 )
            {
              v21 = 1;
              goto LABEL_30;
            }
          }
        }
        --*(_WORD *)(v15 - 30);
        AlpcpUnlockMessage(v15, v32, v33, v20);
        v15 = *a3;
        continue;
      }
      if ( *(_QWORD *)(v15 + 24) == v6 )
      {
        v21 = 0;
LABEL_30:
        if ( *(_QWORD *)(v15 + 64) )
          goto LABEL_35;
        v22 = *(_DWORD *)(v15 + 40);
        if ( (v22 & 0x80u) != 0 )
          goto LABEL_35;
        v23 = *(_QWORD *)(v15 + 32);
        v24 = v22 | 0x80;
        *(_BYTE *)(v15 + 244) = 0;
        *(_WORD *)(v15 + 244) |= 0xCu;
        *(_DWORD *)(v15 + 40) = v24;
        *(_DWORD *)(v15 + 240) = 2621440;
        if ( v23 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v23 + 1760), 0LL) == v15 )
          {
            KeReleaseSemaphoreEx(*(_QWORD *)(v15 + 32) + 1608LL, 1, 1, v20, 2);
            *(_QWORD *)(v15 + 32) = 0LL;
            *(_WORD *)(v15 - 30) -= 3;
            goto LABEL_35;
          }
        }
        else if ( (v24 & 0x200) == 0 )
        {
          *(_QWORD *)(v15 + 88) = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(v15 + 80) = a5;
          **(_QWORD **)(a5 + 8) = v15 + 80;
          *(_QWORD *)(a5 + 8) = v15 + 80;
LABEL_35:
          AlpcpReleaseMessageAttributesOnCancel(v15, v37);
          *(_DWORD *)(v15 + 40) |= 0x200u;
          *(_WORD *)(v15 + 244) &= ~0x2000u;
          AlpcpClearOwnerPortMessage(v15);
          AlpcpTransferQuotaMessage(v15);
          v28 = *(_QWORD *)(v15 + 208);
          if ( v28 )
          {
            PsReleaseProcessWakeCounter(v28, *(unsigned int *)(v15 + 264));
            *(_QWORD *)(v15 + 208) = 0LL;
          }
          v29 = *(_QWORD *)(v15 + 216);
          if ( v29 )
          {
            PsReleaseProcessWakeCounter(v29, *(unsigned int *)(v15 + 264));
            *(_QWORD *)(v15 + 216) = 0LL;
          }
          if ( v21 )
            v15 = *a3;
          else
            v15 = *(_QWORD *)v15;
          AlpcpUnlockMessage(BugCheckParameter2, v25, v26, v27);
          v6 = a1;
          continue;
        }
        --*(_WORD *)(v15 - 30);
        goto LABEL_35;
      }
      --*(_WORD *)(v15 - 30);
      AlpcpUnlockMessage(v15, 0LL, v19, v20);
    }
    v15 = *(_QWORD *)v15;
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v17 = (volatile signed __int64 *)(a2 + 176);
    else
      v17 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v17 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v17, v12, v13, v14);
  KeAbPostRelease((ULONG_PTR)v17);
  return v16;
}
