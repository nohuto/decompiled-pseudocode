/*
 * XREFs of MmChangeSectionBackingFile @ 0x140118718
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x14014A800 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // edi
  KIRQL v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rdi
  void *v10; // rcx
  int v11; // edx
  volatile LONG *v12; // rcx

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_14036BE00);
    if ( v5 )
      v7 = *(_QWORD *)a2[5];
    else
      v7 = *(_QWORD *)(a2[5] + 16LL);
    if ( !v7 )
    {
      v12 = &dword_14036BE00;
      goto LABEL_18;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72)) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  if ( (*(_DWORD *)(v7 + 56) & 1) == 0 )
  {
    v8 = (_QWORD *)(v7 + 64);
    if ( !a1 )
    {
      v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v9 )
        goto LABEL_14;
      ObFastReplaceObject(v8, a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = (void *)v9;
      goto LABEL_13;
    }
    if ( (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL) == a1 )
    {
      ObFastReplaceObject(v8, a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = a1;
LABEL_13:
      ObDereferenceObjectDeferDeleteWithTag(v10, 0x746C6644u);
    }
  }
LABEL_14:
  v11 = *(_DWORD *)(v7 + 56);
  if ( (v11 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v7 + 56) = v11 & 0xFFFFFDFF;
  v12 = (volatile LONG *)(v7 + 72);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  __writecr8(v6);
  return 0LL;
}
