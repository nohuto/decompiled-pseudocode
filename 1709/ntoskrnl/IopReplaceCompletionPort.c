/*
 * XREFs of IopReplaceCompletionPort @ 0x1401FA530
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopReplaceCompletionPort(__int64 a1, void *a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  unsigned int v7; // edi
  KIRQL v8; // al
  PVOID *v9; // rcx
  KIRQL v10; // r14

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = -1073741823;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = *(PVOID **)(a1 + 176);
  v10 = v8;
  if ( v9 && *(_QWORD *)(a1 + 192) == a1 + 192 )
  {
    ObfDereferenceObjectWithTag(*v9, 0x746C6644u);
    *(_DWORD *)(a1 + 80) &= 0xF1FFFFFF;
    if ( a2 )
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      **(_QWORD **)(a1 + 176) = a2;
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL) = a3;
    }
    else
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 176), 0);
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 80) |= 0x400u;
    }
    v7 = 0;
  }
  KxReleaseSpinLock(v3);
  __writecr8(v10);
  return v7;
}
