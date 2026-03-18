/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x140464F28
 * Callers:
 *     AlpcpDisconnectPort @ 0x140464BE0 (AlpcpDisconnectPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140462A78 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpTransferQuotaMessage @ 0x140463000 (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404636D8 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x14058FEE0 (AlpcpTryLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4, __int64 a5)
{
  int v6; // eax
  __int64 v9; // r14
  BOOL v10; // ecx
  ULONG_PTR v11; // rcx
  ULONG_PTR v12; // rdi
  unsigned int v13; // r12d
  volatile signed __int64 *v14; // rdi
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  volatile signed __int64 *v22; // r14
  ULONG_PTR v23; // rcx
  ULONG_PTR *i; // rax
  ULONG_PTR v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  v6 = *(_DWORD *)(a2 + 416);
  v9 = a1;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
  {
    v10 = (v6 & 6) != 4;
    goto LABEL_3;
  }
  if ( (v6 & 6) == 2 )
  {
    v10 = 0;
LABEL_3:
    if ( !v10 )
      goto LABEL_5;
  }
  if ( a4 == 3 )
  {
    v27 = 1;
LABEL_16:
    v11 = a2 + 176;
    goto LABEL_7;
  }
LABEL_5:
  v27 = 0;
  if ( a4 <= 2 )
  {
    v11 = a2 + 136;
    goto LABEL_7;
  }
  if ( a4 == 3 )
    goto LABEL_16;
  v11 = a2 + 200;
LABEL_7:
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = *a3;
  v13 = 0;
  while ( (ULONG_PTR *)v12 != a3 )
  {
    v26 = v12;
    if ( *(_QWORD *)(v12 + 24) == v9 || (*(_DWORD *)(v12 + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(v12);
      if ( !(unsigned __int8)AlpcpTryLockForCachedReferenceBlob(v12) )
      {
        if ( a4 > 2 )
        {
          if ( a4 == 3 )
            v22 = (volatile signed __int64 *)(a2 + 176);
          else
            v22 = (volatile signed __int64 *)(a2 + 200);
        }
        else
        {
          v22 = (volatile signed __int64 *)(a2 + 136);
        }
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        v13 = 1;
        AlpcpLockForCachedReferenceBlob(v12);
        if ( a4 > 2 )
        {
          if ( a4 == 3 )
            v23 = a2 + 176;
          else
            v23 = a2 + 200;
        }
        else
        {
          v23 = a2 + 136;
        }
        ExAcquirePushLockExclusiveEx(v23, 0LL);
        v9 = a1;
        if ( *(_QWORD *)(v12 + 24) == a1 )
        {
          for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
          {
            if ( i == (ULONG_PTR *)v12 )
            {
              v16 = 1;
              goto LABEL_30;
            }
          }
        }
        --*(_WORD *)(v12 - 30);
        AlpcpUnlockMessage(v12);
        v12 = *a3;
        continue;
      }
      if ( *(_QWORD *)(v12 + 24) == v9 )
      {
        v16 = 0;
LABEL_30:
        if ( *(_QWORD *)(v12 + 64) )
          goto LABEL_35;
        v17 = *(_DWORD *)(v12 + 40);
        if ( (v17 & 0x80u) != 0 )
          goto LABEL_35;
        v18 = *(_QWORD *)(v12 + 32);
        v19 = v17 | 0x80;
        *(_BYTE *)(v12 + 244) = 0;
        *(_WORD *)(v12 + 244) |= 0xCu;
        *(_DWORD *)(v12 + 40) = v19;
        *(_DWORD *)(v12 + 240) = 2621440;
        if ( v18 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v18 + 1760), 0LL) == v12 )
          {
            KeReleaseSemaphoreEx(*(_QWORD *)(v12 + 32) + 1608LL, 1, 1);
            *(_QWORD *)(v12 + 32) = 0LL;
            *(_WORD *)(v12 - 30) -= 3;
            goto LABEL_35;
          }
        }
        else if ( (v19 & 0x200) == 0 )
        {
          *(_QWORD *)(v12 + 88) = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(v12 + 80) = a5;
          **(_QWORD **)(a5 + 8) = v12 + 80;
          *(_QWORD *)(a5 + 8) = v12 + 80;
LABEL_35:
          AlpcpReleaseMessageAttributesOnCancel(v12, v27);
          *(_DWORD *)(v12 + 40) |= 0x200u;
          *(_WORD *)(v12 + 244) &= ~0x2000u;
          AlpcpClearOwnerPortMessage(v12);
          AlpcpTransferQuotaMessage(v12);
          v20 = *(_QWORD *)(v12 + 208);
          if ( v20 )
          {
            PsReleaseProcessWakeCounter(v20, *(unsigned int *)(v12 + 264));
            *(_QWORD *)(v12 + 208) = 0LL;
          }
          v21 = *(_QWORD *)(v12 + 216);
          if ( v21 )
          {
            PsReleaseProcessWakeCounter(v21, *(unsigned int *)(v12 + 264));
            *(_QWORD *)(v12 + 216) = 0LL;
          }
          if ( v16 )
            v12 = *a3;
          else
            v12 = *(_QWORD *)v12;
          AlpcpUnlockMessage(v26);
          v9 = a1;
          continue;
        }
        --*(_WORD *)(v12 - 30);
        goto LABEL_35;
      }
      --*(_WORD *)(v12 - 30);
      AlpcpUnlockMessage(v12);
    }
    v12 = *(_QWORD *)v12;
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v14 = (volatile signed __int64 *)(a2 + 176);
    else
      v14 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v14 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  return v13;
}
