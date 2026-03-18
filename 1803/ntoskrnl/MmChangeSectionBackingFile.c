/*
 * XREFs of MmChangeSectionBackingFile @ 0x1400C600C
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1400C5FC0 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // esi
  KIRQL v6; // al
  __int64 *v7; // rdi
  KIRQL v8; // r15
  __int64 v9; // rdi
  int v10; // ebx
  volatile __int64 *v11; // rcx
  unsigned __int64 v12; // rbx
  void *v13; // rcx
  int v14; // r8d
  volatile LONG *v15; // rcx

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_1403CB280);
    v7 = (__int64 *)a2[5];
    v8 = v6;
    if ( v5 )
      v9 = *v7;
    else
      v9 = v7[2];
    if ( !v9 )
    {
      v15 = &dword_1403CB280;
      goto LABEL_18;
    }
    v10 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v10 )
      break;
    __writecr8(v8);
  }
  if ( (*(_DWORD *)(v9 + 56) & 1) == 0 )
  {
    v11 = (volatile __int64 *)(v9 + 64);
    if ( !a1 )
    {
      v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v12 )
        goto LABEL_14;
      ObFastReplaceObject(v11, (ULONG_PTR)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v13 = (void *)v12;
      goto LABEL_13;
    }
    if ( (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0uLL) == a1 )
    {
      ObFastReplaceObject(v11, (ULONG_PTR)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v13 = a1;
LABEL_13:
      ObDereferenceObjectDeferDelete(v13);
    }
  }
LABEL_14:
  v14 = *(_DWORD *)(v9 + 56);
  if ( (v14 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v9 + 56) = v14 & 0xFFFFFDFF;
  v15 = (volatile LONG *)(v9 + 72);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  __writecr8(v8);
  return 0LL;
}
