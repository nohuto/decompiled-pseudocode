/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpLocateView @ 0x1404D52C0 (AlpcpLocateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpRestoreWriteAccess @ 0x1404D7A24 (AlpcpRestoreWriteAccess.c)
 *     AlpcpDeleteView @ 0x1404D9E8C (AlpcpDeleteView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(_QWORD *Object, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // ebp
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rax
  ULONG_PTR v17; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[48]; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i, v8, v9, v10) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v17 = View;
    v11 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v11 == *(_QWORD *)(i + 80) )
    {
LABEL_12:
      *(_DWORD *)(a2 + 40) |= 0x4000u;
      *(_QWORD *)(a2 + 144) = v11;
      ++*(_DWORD *)(v11 + 76);
      goto LABEL_13;
    }
    if ( v11 && v11 == *(_QWORD *)(i + 72) )
    {
      v15 = *(_DWORD *)(v2 + 72);
      if ( (v15 & 8) == 0 )
      {
        v16 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v16 )
        {
          if ( *(_QWORD *)(v11 + 64) )
          {
            KiStackAttachProcess(*(_KPROCESS **)(v11 + 32), 0, (__int64)v18);
            MmUnsecureVirtualMemory(*(HANDLE *)(v11 + 64));
            KiUnstackDetachProcess((__int64)v18, 0LL);
            *(_QWORD *)(v11 + 64) = 0LL;
          }
          *(_DWORD *)(v11 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v11, 1);
          *(_QWORD *)(i + 72) = 0LL;
          *(_QWORD *)(i + 80) = 0LL;
          *(_DWORD *)(i + 48) &= ~1u;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v16;
        v15 = *(_DWORD *)(v2 + 72);
      }
      *(_DWORD *)(v2 + 72) = v15 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v11 + 64) )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v11 + 32), 0, (__int64)v18);
        MmUnsecureVirtualMemory(*(HANDLE *)(v11 + 64));
        KiUnstackDetachProcess((__int64)v18, 0LL);
        *(_QWORD *)(v11 + 64) = 0LL;
      }
      *(_DWORD *)(v11 + 72) |= 1u;
      *(_QWORD *)(i + 72) = v2;
      *(_QWORD *)(i + 80) = v11;
      AlpcpDereferenceBlobEx(v11, 1);
      goto LABEL_12;
    }
    v12 = *(_DWORD *)(v2 + 72);
    if ( (v12 & 8) != 0 )
      goto LABEL_9;
    v13 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v13 )
    {
      *(_QWORD *)(v2 + 64) = v13;
      v12 = *(_DWORD *)(v2 + 72);
LABEL_9:
      *(_DWORD *)(v2 + 72) = v12 & 0xFFFFFFFE;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v11 )
      {
        *(_QWORD *)(i + 80) = v11;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(i, Object, &v17);
      if ( v5 >= 0 )
        goto LABEL_11;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2, 1);
      goto LABEL_35;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v11 )
  {
    goto LABEL_12;
  }
  v5 = AlpcpCreateView(i, Object, &v17);
  if ( v5 >= 0 )
  {
LABEL_11:
    v11 = v17;
    goto LABEL_12;
  }
LABEL_35:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(i, v8, v9, v10);
  AlpcpDereferenceBlobEx(v2, 1);
  return (unsigned int)v5;
}
