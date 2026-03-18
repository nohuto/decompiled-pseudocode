/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x14004B350
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x14004B6D4 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiBuildImageControlArea @ 0x1404BD514 (MiBuildImageControlArea.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiObtainProtoBaseFromNode @ 0x14004B468 (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdi
  KIRQL v5; // bp
  unsigned __int64 v6; // r8
  _QWORD *v7; // r10
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  int v16; // ecx
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v17);
  v5 = ExAcquireSpinLockExclusive(&dword_1403CB420);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1403CB418, a1);
    *(_QWORD *)(a1 + 24) &= ~8uLL;
    goto LABEL_20;
  }
  v7 = (_QWORD *)qword_1403CB418;
  LOBYTE(v6) = 0;
  if ( !qword_1403CB418 )
    goto LABEL_19;
  while ( 1 )
  {
    v8 = v7[3] & 7LL;
    if ( v8 > 4 )
      break;
    if ( (_DWORD)v8 )
    {
      v10 = v8 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v16 = v11 - 1;
          if ( v16 )
          {
            if ( v16 != 1 )
              break;
            v6 = v7[4];
          }
          else
          {
            v6 = v7[6];
          }
        }
        else
        {
          v12 = *(v7 - 7) + 128LL;
          v13 = 0LL;
          v6 = *(_QWORD *)(*(v7 - 7) + 136LL);
          do
          {
            v14 = *(unsigned int *)(v12 + 44);
            v12 = *(_QWORD *)(v12 + 16);
            v13 += v14;
          }
          while ( v12 );
        }
      }
      else
      {
        v6 = *(v7 - 6);
      }
    }
    else
    {
      v6 = *(v7 - 13);
    }
    if ( v4 >= v6 )
      break;
    v9 = (_QWORD *)*v7;
    if ( !*v7 )
    {
      LOBYTE(v6) = 0;
      goto LABEL_19;
    }
LABEL_8:
    v7 = v9;
  }
  v9 = (_QWORD *)v7[1];
  if ( v9 )
    goto LABEL_8;
  LOBYTE(v6) = 1;
LABEL_19:
  RtlAvlInsertNodeEx(&qword_1403CB418, v7, v6, a1);
  *(_QWORD *)(a1 + 24) |= 8uLL;
LABEL_20:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB420);
  result = v5;
  __writecr8(v5);
  return result;
}
