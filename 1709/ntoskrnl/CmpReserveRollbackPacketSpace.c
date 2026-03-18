/*
 * XREFs of CmpReserveRollbackPacketSpace @ 0x1406960D4
 * Callers:
 *     CmSnapshotRMTxArray @ 0x140569704 (CmSnapshotRMTxArray.c)
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x140696288 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall CmpReserveRollbackPacketSpace(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  char *TransientPoolWithTag; // rax
  char *v8; // rsi
  struct _PRIVILEGE_SET *v9; // rcx

  v3 = a2;
  v4 = *a1;
  v5 = 0;
  if ( a1[1] - (unsigned int)v4 < a2 )
  {
    v6 = v4 + a2;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(v4, 8LL * ((unsigned int)v4 + a2), 0x36344D43u);
    v8 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memmove(TransientPoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
      memset(&v8[8 * *a1], 0, 8 * v3);
      v9 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      if ( v9 )
        MiDeleteSubsection(v9);
      *((_QWORD *)a1 + 1) = v8;
      a1[1] = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
