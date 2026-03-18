/*
 * XREFs of MmChangeSectionBackingFile @ 0x140127FAC
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140156140 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x14049C820 (MiShareExistingControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // edi
  KIRQL v6; // r14
  __int64 v7; // rbx
  volatile __int64 *v8; // rcx
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
    v6 = ExAcquireSpinLockExclusive(&dword_140388100);
    if ( v5 )
      v7 = *(_QWORD *)a2[5];
    else
      v7 = *(_QWORD *)(a2[5] + 16LL);
    if ( !v7 )
    {
      v12 = &dword_140388100;
      goto LABEL_18;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72)) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  if ( (*(_DWORD *)(v7 + 56) & 1) == 0 )
  {
    v8 = (volatile __int64 *)(v7 + 64);
    if ( !a1 )
    {
      v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v9 )
        goto LABEL_14;
      ObFastReplaceObject(v8, (__int64)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = (void *)v9;
      goto LABEL_13;
    }
    if ( (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL) == a1 )
    {
      ObFastReplaceObject(v8, (__int64)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = a1;
LABEL_13:
      ObDereferenceObjectDeferDelete(v10);
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
