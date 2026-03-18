/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x14047A4EC (AlpcpRestoreWriteAccess.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpLocateView @ 0x14047BAE4 (AlpcpLocateView.c)
 *     AlpcpDeleteView @ 0x14047BCF4 (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(PVOID Object, __int64 a2)
{
  ULONG_PTR v2; // rbx
  int v5; // ebp
  ULONG_PTR i; // rsi
  _QWORD *View; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  _QWORD *v12; // [rsp+20h] [rbp-68h]
  $5BC46E0569261879018906DEC3127961 v13; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  v5 = 0;
  for ( i = *(_QWORD *)(v2 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, (__int64)Object);
    v12 = View;
    v8 = (ULONG_PTR)View;
    if ( !View || AlpcpReferenceBlob((ULONG_PTR)View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v8 == *(_QWORD *)(i + 80) )
    {
LABEL_10:
      *(_DWORD *)(a2 + 40) |= 0x8000u;
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_11;
    }
    if ( v8 && v8 == *(_QWORD *)(i + 72) )
    {
      v11 = MmSecureVirtualMemoryAgainstWrites(*(_KPROCESS **)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
      if ( v11 )
      {
        *(_DWORD *)(v2 + 72) &= ~1u;
        *(_QWORD *)(v2 + 64) = v11;
        AlpcpReferenceBlob(v2);
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)&v13);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess(&v13, 0LL);
        *(_DWORD *)(v8 + 72) |= 1u;
        *(_QWORD *)(v8 + 64) = 0LL;
        *(_QWORD *)(i + 72) = v2;
        *(_QWORD *)(i + 80) = v8;
        AlpcpDereferenceBlobEx(v8);
      }
      else
      {
        KiStackAttachProcess(*(_KPROCESS **)(v8 + 32), 0, (__int64)&v13);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess(&v13, 0LL);
        *(_DWORD *)(v8 + 72) |= 1u;
        *(_QWORD *)(v8 + 64) = 0LL;
        AlpcpDereferenceBlobEx(v8);
        *(_QWORD *)(i + 72) = 0LL;
        *(_QWORD *)(i + 80) = 0LL;
        *(_DWORD *)(i + 48) &= ~1u;
      }
      goto LABEL_10;
    }
    v9 = MmSecureVirtualMemoryAgainstWrites(*(_KPROCESS **)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v9 )
    {
      *(_DWORD *)(v2 + 72) &= ~1u;
      *(_QWORD *)(v2 + 64) = v9;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v2;
      if ( v8 )
      {
        *(_QWORD *)(i + 80) = v8;
        goto LABEL_10;
      }
      v5 = AlpcpCreateView(i, Object);
      if ( v5 >= 0 )
        goto LABEL_9;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_26;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v8 )
  {
    goto LABEL_10;
  }
  v5 = AlpcpCreateView(i, Object);
  if ( v5 >= 0 )
  {
LABEL_9:
    v8 = (ULONG_PTR)v12;
    goto LABEL_10;
  }
LABEL_26:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_11:
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
