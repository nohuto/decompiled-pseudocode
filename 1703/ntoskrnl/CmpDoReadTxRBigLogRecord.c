/*
 * XREFs of CmpDoReadTxRBigLogRecord @ 0x14066BDCC
 * Callers:
 *     CmpRmReDoPhase @ 0x14066C234 (CmpRmReDoPhase.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpVerifyBigLogRecordChunk @ 0x14041C55C (CmpVerifyBigLogRecordChunk.c)
 */

__int64 __fastcall CmpDoReadTxRBigLogRecord(
        void *a1,
        unsigned int *a2,
        ULONG a3,
        struct _PRIVILEGE_SET **a4,
        _DWORD *a5)
{
  unsigned int *v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  SIZE_T v8; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v10; // rsi
  int v11; // r12d
  struct _PRIVILEGE_SET *v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // r14
  unsigned int v16; // [rsp+40h] [rbp-78h]
  PVOID ppvBuffer; // [rsp+48h] [rbp-70h] BYREF
  CLFS_LSN plsnRecord; // [rsp+50h] [rbp-68h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+58h] [rbp-60h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+60h] [rbp-58h] BYREF
  ULONG pcbBuffer; // [rsp+C8h] [rbp+10h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+D0h] [rbp+18h] BYREF
  struct _PRIVILEGE_SET **v24; // [rsp+D8h] [rbp+20h]

  v24 = a4;
  v5 = a2;
  ppvBuffer = a2;
  pcbBuffer = a3;
  v7 = CmpVerifyBigLogRecordChunk((int *)a2, a3);
  if ( v7 >= 0 )
  {
    v8 = v5[1];
    v16 = v5[12];
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v6, v8, 0x20204D43u);
    v10 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v8);
      v11 = 0;
      v12 = v10;
      v13 = v8;
      while ( 1 )
      {
        if ( v5[13] != v11 )
          goto LABEL_10;
        v14 = v5[14];
        if ( (unsigned int)v14 > v13 )
          goto LABEL_10;
        memmove(v12, v5 + 16, (unsigned int)v14);
        v12 = (struct _PRIVILEGE_SET *)((char *)v12 + v14);
        v13 -= v14;
        if ( ++v11 >= v16 )
          break;
        peRecordType = 1;
        v7 = ClfsReadNextLogRecord(
               a1,
               &ppvBuffer,
               &pcbBuffer,
               &peRecordType,
               0LL,
               &plsnUndoNext,
               &plsnPrevious,
               &plsnRecord);
        if ( v7 >= 0 )
        {
          v5 = (unsigned int *)ppvBuffer;
          v7 = CmpVerifyBigLogRecordChunk((int *)ppvBuffer, pcbBuffer);
          if ( v7 >= 0 )
            continue;
        }
        goto LABEL_11;
      }
      if ( v13 )
      {
LABEL_10:
        v7 = -1073741762;
        goto LABEL_11;
      }
      *v24 = v10;
      v10 = 0LL;
      v7 = 0;
      *a5 = v8;
LABEL_11:
      if ( v10 )
        MiDeleteSubsection(v10);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
