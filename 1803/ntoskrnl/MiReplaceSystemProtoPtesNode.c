/*
 * XREFs of MiReplaceSystemProtoPtesNode @ 0x14026A73C
 * Callers:
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiObtainProtoBaseFromNode @ 0x14004B468 (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiReplaceSystemProtoPtesNode(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  KIRQL v5; // bp
  bool v6; // cl
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v18);
  v5 = ExAcquireSpinLockExclusive(&dword_1403CB420);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_1403CB418, (__int64)a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  v7 = (_QWORD *)qword_1403CB418;
  if ( qword_1403CB418 )
  {
    while ( 1 )
    {
      v8 = v7[3] & 7LL;
      if ( v8 > 4 )
        goto LABEL_15;
      if ( !(_DWORD)v8 )
      {
        v12 = *(v7 - 13);
        goto LABEL_16;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v12 = *(v7 - 6);
        goto LABEL_16;
      }
      v10 = v9 - 1;
      if ( v10 )
        break;
      v13 = 0LL;
      v14 = *(v7 - 7) + 128LL;
      v12 = *(_QWORD *)(*(v7 - 7) + 136LL);
      do
      {
        v15 = *(unsigned int *)(v14 + 44);
        v14 = *(_QWORD *)(v14 + 16);
        v13 += v15;
      }
      while ( v14 );
LABEL_16:
      if ( v4 < v12 )
      {
        v16 = (_QWORD *)*v7;
        if ( !*v7 )
          goto LABEL_19;
      }
      else
      {
        v16 = (_QWORD *)v7[1];
        if ( !v16 )
        {
          v6 = 1;
          goto LABEL_19;
        }
      }
      v7 = v16;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v12 = v7[6];
      goto LABEL_16;
    }
    if ( v11 == 1 )
    {
      v12 = v7[4];
      goto LABEL_16;
    }
LABEL_15:
    v12 = 0LL;
    goto LABEL_16;
  }
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403CB418, (unsigned __int64)v7, v6, a2);
  a2[3] |= 8uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB420);
  result = v5;
  __writecr8(v5);
  return result;
}
