/*
 * XREFs of MiAddRangeToPartitionTree @ 0x140236734
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x140236664 (MiAddMdlToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406EE0EC (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_BOOL8 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r8
  int v7; // r12d
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 *PoolWithTag; // rsi
  PVOID v17; // rbx
  __int64 v18; // r15
  unsigned __int64 *v19; // rbx
  __int64 v20; // rax
  bool v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  __int64 v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+90h] [rbp+18h]
  int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v4 = a2;
  v6 = a2;
  v7 = 0;
  v8 = a1;
  v9 = 0LL;
  v10 = v6 & 0x7FFFFFFFFFFC0000LL;
  v28 = v6 & 0x7FFFFFFFFFFC0000LL;
LABEL_2:
  v4 = v10 | v4 & 0x8000000000000000uLL;
  v11 = v6;
  v12 = (v6 - (v4 & 0x7FFFFFFFFFFFFFFFLL) + a3 + 0x3FFFF) >> 18;
LABEL_3:
  v31 = v11;
  if ( v12 )
  {
    v13 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_11;
    v14 = v4 & 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v15 = v13[3] & 0x7FFFFFFFFFFFFFFFLL;
      if ( v14 < v15 )
      {
        v13 = (_QWORD *)*v13;
      }
      else
      {
        if ( v14 <= v15 )
        {
          if ( v13 )
          {
            v18 = (__int64)(v13 + 4);
            v19 = v13 + 3;
            if ( (__int64)v13[3] >= 0 || a4 != 1 )
              *v19 = v15;
            goto LABEL_27;
          }
LABEL_11:
          PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x7070694Du);
          if ( PoolWithTag )
          {
            v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x8000uLL, 0x6270694Du);
            if ( v17 )
            {
              memset(PoolWithTag, 0, 0x30uLL);
              memset(v17, 0, 0x8000uLL);
              v18 = (__int64)(PoolWithTag + 4);
              PoolWithTag[5] = (unsigned __int64)v17;
              v19 = PoolWithTag + 3;
              PoolWithTag[4] = 0x40000LL;
              v20 = PoolWithTag[3] ^ (PoolWithTag[3] ^ v4) & 0x7FFFFFFFFFFFFFFFLL;
              PoolWithTag[3] = v20;
              if ( v32 == 1 )
                *v19 = v20 | 0x8000000000000000uLL;
              v21 = 0;
              v22 = (_QWORD *)*a1;
              if ( *a1 )
              {
                while ( 1 )
                {
                  if ( (*v19 & 0x7FFFFFFFFFFFFFFFLL) < (v22[3] & 0x7FFFFFFFFFFFFFFFuLL) )
                  {
                    v23 = (_QWORD *)*v22;
                    if ( !*v22 )
                    {
                      v21 = 0;
                      break;
                    }
                  }
                  else
                  {
                    v23 = (_QWORD *)v22[1];
                    if ( !v23 )
                    {
                      v21 = 1;
                      break;
                    }
                  }
                  v22 = v23;
                }
              }
              RtlAvlInsertNodeEx(a1, (unsigned __int64)v22, v21, (unsigned __int64)PoolWithTag);
              v11 = v31;
LABEL_27:
              v24 = *v19 & 0x7FFFFFFFFFFFFFFFLL;
              v25 = v24 - v11 + 0x40000;
              if ( v25 > a3 )
                v25 = a3;
              v26 = v11 - v24;
              if ( v7 )
              {
                RtlClearBitsEx(v18, v26, v25);
              }
              else
              {
                RtlSetBitsEx(v18, v26, v25);
                v9 += v25;
              }
              v8 = a1;
              a4 = v32;
              v11 += v25;
              a3 -= v25;
              --v12;
              v4 ^= (v4 ^ (v4 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_3;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
          v7 = 1;
          if ( v9 )
          {
            v8 = a1;
            a3 = v9;
            v10 = v28;
            v6 = a2;
            a4 = v32;
            goto LABEL_2;
          }
          return 0LL;
        }
        v13 = (_QWORD *)v13[1];
      }
      if ( !v13 )
        goto LABEL_11;
    }
  }
  return v7 != 1;
}
