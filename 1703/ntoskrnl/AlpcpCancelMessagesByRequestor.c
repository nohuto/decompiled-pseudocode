/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x140474350
 * Callers:
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpTransferQuotaMessage @ 0x1404301C0 (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x14043054C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140430600 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x140456218 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4, __int64 a5)
{
  int v6; // ebp
  int v9; // eax
  BOOL v11; // ecx
  unsigned int v12; // r12d
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // rdi
  volatile signed __int64 *v15; // rdi
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rbp
  ULONG_PTR v24; // rcx
  ULONG_PTR *i; // rax
  ULONG_PTR v26; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+88h] [rbp+20h]

  v6 = 0;
  v9 = *(_DWORD *)(a2 + 416);
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
  {
    v11 = (v9 & 6) != 4;
    goto LABEL_3;
  }
  if ( (v9 & 6) == 2 )
  {
    v11 = 0;
LABEL_3:
    if ( !v11 )
      goto LABEL_5;
  }
  if ( a4 == 3 )
  {
    v27 = 1;
    v12 = 0;
LABEL_20:
    v13 = a2 + 176;
    goto LABEL_7;
  }
LABEL_5:
  v27 = 0;
  v12 = 0;
  if ( a4 > 2 )
  {
    if ( a4 != 3 )
    {
      v13 = a2 + 200;
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  v13 = a2 + 136;
LABEL_7:
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  v14 = *a3;
  while ( (ULONG_PTR *)v14 != a3 )
  {
    v26 = v14;
    if ( *(_QWORD *)(v14 + 24) == a1 || (*(_DWORD *)(v14 + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(v14);
      if ( AlpcpTryLockForCachedReferenceBlob(v14) )
      {
        if ( *(_QWORD *)(v14 + 24) != a1 )
        {
          --*(_WORD *)(v14 - 30);
          AlpcpUnlockMessage(v14);
          goto LABEL_16;
        }
LABEL_28:
        if ( *(_QWORD *)(v14 + 64) )
          goto LABEL_33;
        v18 = *(_DWORD *)(v14 + 40);
        if ( (v18 & 0x80u) != 0 )
          goto LABEL_33;
        v19 = *(_QWORD *)(v14 + 32);
        v20 = v18 | 0x80;
        *(_BYTE *)(v14 + 244) = 0;
        *(_WORD *)(v14 + 244) |= 0xCu;
        *(_DWORD *)(v14 + 40) = v20;
        *(_DWORD *)(v14 + 240) = 2621440;
        if ( v19 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v19 + 1752), 0LL) == v14 )
          {
            KeReleaseSemaphoreEx(*(_QWORD *)(v14 + 32) + 1608LL, 1, 1, v17, 2);
            *(_QWORD *)(v14 + 32) = 0LL;
            *(_WORD *)(v14 - 30) -= 3;
            goto LABEL_33;
          }
        }
        else if ( (v20 & 0x200) == 0 )
        {
          *(_QWORD *)(v14 + 88) = *(_QWORD *)(a5 + 8);
          *(_QWORD *)(v14 + 80) = a5;
          **(_QWORD **)(a5 + 8) = v14 + 80;
          *(_QWORD *)(a5 + 8) = v14 + 80;
LABEL_33:
          AlpcpReleaseMessageAttributesOnCancel(v14, v27);
          *(_DWORD *)(v14 + 40) |= 0x200u;
          *(_WORD *)(v14 + 244) &= ~0x2000u;
          AlpcpClearOwnerPortMessage(v14);
          AlpcpTransferQuotaMessage(v14);
          v21 = *(_QWORD *)(v14 + 208);
          if ( v21 )
          {
            PsReleaseProcessWakeCounter(v21, *(_DWORD *)(v14 + 264));
            *(_QWORD *)(v14 + 208) = 0LL;
          }
          v22 = *(_QWORD *)(v14 + 216);
          if ( v22 )
          {
            PsReleaseProcessWakeCounter(v22, *(_DWORD *)(v14 + 264));
            *(_QWORD *)(v14 + 216) = 0LL;
          }
          if ( v6 )
            v14 = *a3;
          else
            v14 = *(_QWORD *)v14;
          AlpcpUnlockMessage(v26);
          goto LABEL_40;
        }
        --*(_WORD *)(v14 - 30);
        goto LABEL_33;
      }
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v23 = (volatile signed __int64 *)(a2 + 176);
        else
          v23 = (volatile signed __int64 *)(a2 + 200);
      }
      else
      {
        v23 = (volatile signed __int64 *)(a2 + 136);
      }
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v12 = 1;
      AlpcpLockForCachedReferenceBlob(v14);
      if ( a4 > 2 )
      {
        if ( a4 == 3 )
          v24 = a2 + 176;
        else
          v24 = a2 + 200;
      }
      else
      {
        v24 = a2 + 136;
      }
      ExAcquirePushLockExclusiveEx(v24, 0LL);
      if ( *(_QWORD *)(v14 + 24) == a1 )
      {
        for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
        {
          if ( i == (ULONG_PTR *)v14 )
          {
            v6 = 1;
            goto LABEL_28;
          }
        }
      }
      --*(_WORD *)(v14 - 30);
      AlpcpUnlockMessage(v14);
      v14 = *a3;
LABEL_40:
      v6 = 0;
    }
    else
    {
LABEL_16:
      v14 = *(_QWORD *)v14;
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v15 = (volatile signed __int64 *)(a2 + 176);
    else
      v15 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v15 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  return v12;
}
