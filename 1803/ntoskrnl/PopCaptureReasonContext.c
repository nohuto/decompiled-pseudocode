/*
 * XREFs of PopCaptureReasonContext @ 0x140076BDC
 * Callers:
 *     PoCaptureReasonContext @ 0x14007698C (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x140076ECC (PopSafeCopyUnicodeString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v8; // rbx
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  char *PoolWithQuotaTag; // rax
  void *v15; // rsi
  unsigned __int64 v16; // r14
  int v17; // eax
  int v18; // ebx
  unsigned int v19; // ebp
  unsigned __int16 *v21; // r9
  __int64 v22; // rax
  SIZE_T v23; // rdx
  SIZE_T v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-68h]
  __int128 v29; // [rsp+30h] [rbp-58h] BYREF

  *a4 = 0LL;
  v8 = 32LL;
  if ( a3 )
    *a3 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
      return 3221225485LL;
    v11 = *(_DWORD *)(a1 + 4);
    if ( (v11 & 1) != 0 )
    {
      if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) != 0 )
        return 3221225485LL;
      v8 = *(unsigned __int16 *)(a1 + 8) + 66LL;
    }
    else
    {
      if ( (v11 & 2) != 0 )
      {
        if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) == 0 )
        {
          v9 = *(_DWORD *)(a1 + 28);
          v8 = *(unsigned __int16 *)(a1 + 8) + 66LL;
          v12 = 16LL * v9;
          if ( v12 <= 0xFFFFFFFF )
          {
            v10 = *(_QWORD *)(a1 + 32);
            if ( a2 && (_DWORD)v12 )
            {
              if ( (v10 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v26 = v10 + (unsigned int)v12;
              if ( v26 > 0x7FFFFFFF0000LL || v26 < v10 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v13 = 0;
            if ( !v9 )
              goto LABEL_12;
            v21 = (unsigned __int16 *)v10;
            while ( 1 )
            {
              v22 = -1LL;
              v23 = v8;
              v24 = v8 + *v21 + 2LL;
              if ( v24 >= v8 )
                v22 = v8 + *v21 + 2LL;
              v8 = v22;
              if ( v24 < v23 )
                break;
              ++v13;
              v21 += 8;
              if ( v13 >= v9 )
                goto LABEL_12;
            }
          }
        }
        return 3221225485LL;
      }
      if ( v11 >= 0 )
        return 3221225485LL;
    }
  }
  else
  {
    v11 = 0x80000000;
  }
LABEL_12:
  if ( a2 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x78435250u);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(PagedPool, v8, 0x78435250u);
  v15 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *a4 = PoolWithQuotaTag;
    if ( v11 < 0 )
    {
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      return 0;
    }
    v16 = (unsigned __int64)(PoolWithQuotaTag + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)PoolWithQuotaTag + 3) = &PoolWithQuotaTag[v8 - v16];
    *(_DWORD *)v16 = v11;
    *(_QWORD *)(v16 + 8) = 32LL;
    v17 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
    v18 = v17;
    v19 = v11 & 1;
    if ( v19 )
    {
      if ( v17 >= 0 )
      {
LABEL_19:
        if ( a3 )
          *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else if ( v17 >= 0 )
    {
      *(_WORD *)(v16 + 16) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v16 + 20) = v9;
      *(_QWORD *)(v16 + 24) = 32LL;
      if ( !v9 )
        goto LABEL_19;
      while ( 1 )
      {
        v25 = v10 + 16LL * v19;
        if ( a2 )
        {
          if ( v25 >= 0x7FFFFFFF0000LL )
            v25 = 0x7FFFFFFF0000LL;
          LODWORD(v28) = *(_DWORD *)v25;
          v27 = *(_QWORD *)(v25 + 8);
          v25 = (unsigned __int64)&v29;
          *((_QWORD *)&v28 + 1) = v27;
          v29 = v28;
        }
        v18 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v25);
        if ( v18 < 0 )
          break;
        if ( ++v19 >= v9 )
          goto LABEL_19;
      }
    }
    ExFreePoolWithTag(v15, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v18;
  }
  return 3221225626LL;
}
