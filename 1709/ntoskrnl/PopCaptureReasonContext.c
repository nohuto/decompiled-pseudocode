/*
 * XREFs of PopCaptureReasonContext @ 0x1400B54B8
 * Callers:
 *     PoCaptureReasonContext @ 0x1400B526C (PoCaptureReasonContext.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     PopSafeCopyUnicodeString @ 0x1400B572C (PopSafeCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v7; // rsi
  unsigned int v8; // r12d
  unsigned __int64 v9; // r15
  int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned __int16 *v13; // r9
  __int64 v14; // rax
  SIZE_T v15; // rdx
  SIZE_T v16; // rcx
  char *PoolWithQuotaTag; // rax
  void *v18; // r14
  unsigned __int64 v19; // rbx
  int v20; // eax
  int v21; // esi
  unsigned int v22; // ebx
  unsigned __int64 v23; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF

  *a4 = 0LL;
  v7 = 32LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_16;
  }
  if ( *(_DWORD *)a1 )
    return 3221225485LL;
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
      goto LABEL_16;
    }
    return 3221225485LL;
  }
  if ( (v10 & 2) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_16;
    return 3221225485LL;
  }
  if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 28);
  v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
  v11 = 16LL * v8;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 32);
  if ( a2 && (_DWORD)v11 )
  {
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = v9 + (unsigned int)v11;
    if ( v25 > 0x7FFFFFFF0000LL || v25 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (unsigned __int16 *)v9;
    do
    {
      v14 = -1LL;
      v15 = v7;
      v16 = v7 + *v13 + 2LL;
      if ( v16 >= v7 )
        v14 = v7 + *v13 + 2LL;
      v7 = v14;
      if ( v16 < v15 )
        return 3221225485LL;
      ++v12;
      v13 += 8;
    }
    while ( v12 < v8 );
  }
LABEL_16:
  if ( a2 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x78435250u);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x78435250u);
  v18 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *a4 = PoolWithQuotaTag;
    if ( v10 < 0 )
    {
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      return 0;
    }
    v19 = (unsigned __int64)(PoolWithQuotaTag + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)PoolWithQuotaTag + 3) = &PoolWithQuotaTag[v7 - v19];
    *(_DWORD *)v19 = v10;
    *(_QWORD *)(v19 + 8) = 32LL;
    v20 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
    v21 = v20;
    if ( (v10 & 1) != 0 )
    {
      if ( v20 >= 0 )
      {
LABEL_26:
        if ( a3 )
          *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else if ( v20 >= 0 )
    {
      *(_WORD *)(v19 + 16) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v19 + 20) = v8;
      *(_QWORD *)(v19 + 24) = 32LL;
      v22 = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          v23 = v9 + 16LL * v22;
          if ( a2 )
          {
            if ( v23 >= 0x7FFFFFFF0000LL )
              v23 = 0x7FFFFFFF0000LL;
            LODWORD(v27) = *(_DWORD *)v23;
            v26 = *(_QWORD *)(v23 + 8);
            v23 = (unsigned __int64)&v28;
            *((_QWORD *)&v27 + 1) = v26;
            v28 = v27;
          }
          v21 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v23);
          if ( v21 < 0 )
            goto LABEL_50;
          if ( ++v22 >= v8 )
            goto LABEL_26;
        }
      }
      goto LABEL_26;
    }
LABEL_50:
    ExFreePoolWithTag(v18, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v21;
  }
  return 3221225626LL;
}
