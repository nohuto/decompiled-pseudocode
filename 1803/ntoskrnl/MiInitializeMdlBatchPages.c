/*
 * XREFs of MiInitializeMdlBatchPages @ 0x140051D48
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x14004FBC4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall MiInitializeMdlBatchPages(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // r15d
  _BYTE *PoolWithTag; // rdi
  volatile signed __int32 *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  volatile signed __int32 *v13; // r13
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rax
  __int64 v22; // r9
  volatile signed __int32 *v23; // [rsp+20h] [rbp-78h]
  _DWORD *v24; // [rsp+28h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-68h]
  volatile signed __int32 *v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  _BYTE v28[80]; // [rsp+48h] [rbp-50h] BYREF
  int v29; // [rsp+A0h] [rbp+8h]
  volatile signed __int32 *v31; // [rsp+B8h] [rbp+20h]

  v4 = *(unsigned int *)(a1 + 40);
  v5 = dword_1403CB6DC;
  PoolWithTag = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v8 = (_QWORD *)(a1 + 48);
  v9 = a3;
  v10 = 0LL;
  v11 = v4 >> 12;
  v12 = 0LL;
  v24 = v8;
  v13 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  if ( !v11 )
    return;
  v14 = a2 & 1;
  v29 = v14;
  do
  {
    v15 = 0;
    v27 = v12;
    v26 = v7;
    v16 = 48LL * *v8 - 0x58000000000LL;
    if ( !v14 )
    {
      if ( (unsigned int)MiPfnZeroingNeeded(v16, (unsigned int)v9) )
      {
        if ( !PoolWithTag )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * v5, 0x6C646D4Du);
          if ( !PoolWithTag )
          {
            v5 = 1;
            PoolWithTag = v28;
          }
          if ( v5 )
          {
            v17 = PoolWithTag + 8;
            v18 = v5;
            do
            {
              *v17 = 0LL;
              v17[1] = 0xFFFFFFFFFLL;
              v17 += 3;
              --v18;
            }
            while ( v18 );
          }
        }
        ++v25;
        if ( v5 == 1 )
          v19 = 0LL;
        else
          v19 = *v24 & dword_1403CB6D8 | (((*(_QWORD *)(v16 + 40) >> 36) & 3) << byte_1403CB69A) | ((unsigned __int16)(*(_QWORD *)(v16 + 40) >> 58) << byte_1403CB699);
        v20 = 3 * v19;
        v15 = 1;
        *(_QWORD *)v16 = *(_QWORD *)&PoolWithTag[24 * v19 + 16];
        ++*(_QWORD *)&PoolWithTag[8 * v20 + 8];
        *(_QWORD *)&PoolWithTag[8 * v20 + 16] = v16;
        goto LABEL_17;
      }
      v10 = v31;
    }
    if ( *(unsigned __int8 *)(v16 + 34) >> 6 == (_DWORD)v9 )
      goto LABEL_29;
LABEL_17:
    if ( (_DWORD)v9 == 3 && v15 == 1 )
    {
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16, 1) == 1 )
      {
        v12 = (__int64)v23;
        v7 = (volatile signed __int32 *)v16;
        v21 = v26;
      }
      else
      {
        v21 = (volatile signed __int32 *)v27;
        v12 = v16;
        v23 = (volatile signed __int32 *)v16;
      }
      *(_QWORD *)(v16 + 16) = v21;
      goto LABEL_28;
    }
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16, v9) != 1 )
      goto LABEL_27;
    if ( v15 && dword_1403CB710[4 * ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) >> 6) + v9] != (_DWORD)v9 )
    {
      *(_QWORD *)(v16 + 16) = v13;
      v13 = (volatile signed __int32 *)v16;
LABEL_27:
      v12 = (__int64)v23;
LABEL_28:
      v10 = v31;
      goto LABEL_29;
    }
    v10 = (volatile signed __int32 *)v16;
    v12 = (__int64)v23;
    *(_QWORD *)(v16 + 16) = v31;
    v31 = (volatile signed __int32 *)v16;
LABEL_29:
    v14 = v29;
    v8 = v24 + 2;
    v24 += 2;
    --v11;
  }
  while ( v11 );
  if ( v10 )
    MiChangePageAttributeBatch(v10, (unsigned int)v9, 0LL, a4);
  if ( v7 )
    MiChangePageAttributeBatch(v7, 1LL, -1LL, a4);
  if ( v25 )
  {
    MiZeroInParallel(PoolWithTag, v5, a2);
    if ( PoolWithTag != v28 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v7 )
      MiChangePageAttributeBatch(v7, 3LL, 0LL, v22);
    if ( v23 )
      MiChangePageAttributeBatch(v23, 3LL, 0LL, v22);
    if ( v13 )
      MiChangePageAttributeBatch(v13, (unsigned int)v9, 0LL, v22);
  }
  else if ( PoolWithTag && PoolWithTag != v28 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
