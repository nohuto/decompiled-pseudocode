/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x140461730
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AlpcpDeleteView @ 0x1404618AC (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     AlpcpLocateView @ 0x1404625A8 (AlpcpLocateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404625C8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 *     AlpcpRestoreWriteAccess @ 0x140540BA0 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(PVOID Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // ebp
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  ULONG_PTR v12; // [rsp+20h] [rbp-68h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v13; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v12 = View;
    v8 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v8 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x8000u;
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_13;
    }
    if ( v8 && v8 == *(_QWORD *)(i + 72) )
    {
      if ( (*(_DWORD *)(v2 + 72) & 8) == 0 )
      {
        v11 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v11 )
        {
          if ( *(_QWORD *)(v8 + 64) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)&v13);
            MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
            KiUnstackDetachProcess(&v13, 0LL);
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          *(_DWORD *)(v8 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v8);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v11;
      }
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v8 + 64) )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)&v13);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess(&v13, 0LL);
        *(_QWORD *)(v8 + 64) = 0LL;
      }
      *(_DWORD *)(v8 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v8;
      AlpcpDereferenceBlobEx(v8);
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(v2 + 72) & 8) != 0 )
      goto LABEL_9;
    v9 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v9 )
    {
      *(_QWORD *)(v2 + 64) = v9;
LABEL_9:
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v8 )
      {
        *(_QWORD *)(i + 80) = v8;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(i, Object);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_34;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v8 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object);
  if ( v5 >= 0 )
  {
LABEL_11:
    v8 = v12;
    goto LABEL_12;
  }
LABEL_34:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v2);
  return (unsigned int)v5;
}
