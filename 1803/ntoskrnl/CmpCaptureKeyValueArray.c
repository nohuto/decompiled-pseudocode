/*
 * XREFs of CmpCaptureKeyValueArray @ 0x1404A45C4
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x1404A4878 (CmpDoesBufferRequireCapturing.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        _QWORD *a5)
{
  unsigned int v6; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  unsigned __int64 v9; // rcx
  SIZE_T v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rdx
  unsigned __int16 v14; // bx
  unsigned __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // ebx
  __int128 v18; // xmm0
  char *v19; // r14
  __int64 v20; // r13
  unsigned int i; // r12d
  unsigned __int16 *v22; // r15
  int v24; // [rsp+20h] [rbp-98h]
  unsigned __int16 v25; // [rsp+24h] [rbp-94h]
  SIZE_T v26; // [rsp+30h] [rbp-88h]
  ULONG *Src; // [rsp+38h] [rbp-80h]
  void *Srca; // [rsp+38h] [rbp-80h]
  __int128 v29; // [rsp+50h] [rbp-68h]

  v6 = a2;
  TransientPoolWithQuotaTag = 0LL;
  if ( !a2 )
    goto LABEL_37;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(a1, 32LL * a2, 0x33384D43u);
  if ( !TransientPoolWithQuotaTag )
    goto LABEL_41;
  v10 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v24 = 0;
  while ( (unsigned int)v11 < v6 )
  {
    Src = &TransientPoolWithQuotaTag->PrivilegeCount + 8 * v11;
    v9 = a1 + 24LL * (unsigned int)v11;
    v12 = *(_QWORD *)v9;
    if ( a3 )
    {
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      LODWORD(v29) = *(_DWORD *)v12;
      *((_QWORD *)&v29 + 1) = *(_QWORD *)(v12 + 8);
      v13 = (char *)TransientPoolWithQuotaTag + 32 * v11;
      *(_OWORD *)Src = v29;
      v14 = *(_WORD *)Src;
      if ( *(_WORD *)Src )
      {
        v9 = *((_QWORD *)Src + 1);
        if ( (v9 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = v9 + v14;
        if ( v15 > 0x7FFFFFFF0000LL || v15 < v9 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v14 = *(_WORD *)Src;
        }
      }
      if ( (v14 & 1) != 0 )
      {
        v17 = -1073741811;
        goto LABEL_38;
      }
    }
    else
    {
      v18 = *(_OWORD *)v12;
      v13 = (char *)TransientPoolWithQuotaTag + 32 * v11;
      *(_OWORD *)Src = v18;
      v14 = *(_WORD *)Src;
    }
    if ( !v14 )
    {
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 0;
LABEL_24:
      v10 = v26;
      goto LABEL_18;
    }
    if ( !(unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, *((_QWORD *)v13 + 1)) )
      goto LABEL_24;
    v10 = v26 + v14;
    if ( v10 < v26 )
    {
      v10 = -1LL;
      v16 = -1073741675;
    }
    else
    {
      v16 = 0;
    }
    v26 = v10;
    if ( v16 < 0 )
    {
      v17 = -1073741670;
      goto LABEL_38;
    }
LABEL_18:
    v11 = (unsigned int)++v24;
    v6 = a2;
  }
  if ( !v10 )
  {
    *a4 = TransientPoolWithQuotaTag;
    TransientPoolWithQuotaTag = 0LL;
    goto LABEL_37;
  }
  v19 = (char *)CmpAllocateTransientPoolWithQuotaTag(v9, v10, 0x33384D43u);
  if ( !v19 )
  {
LABEL_41:
    v17 = -1073741670;
    goto LABEL_38;
  }
  v20 = 0LL;
  for ( i = 0; i < v6; ++i )
  {
    v22 = (unsigned __int16 *)((char *)TransientPoolWithQuotaTag + 32 * i);
    v25 = *v22;
    if ( *v22 )
    {
      Srca = (void *)*((_QWORD *)v22 + 1);
      if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, Srca) )
      {
        memmove(&v19[v20], Srca, v25);
        *((_QWORD *)v22 + 1) = &v19[v20];
        v22[1] = *v22;
        v20 += *v22;
        v6 = a2;
      }
    }
  }
  *a4 = TransientPoolWithQuotaTag;
  TransientPoolWithQuotaTag = 0LL;
  *a5 = v19;
LABEL_37:
  v17 = 0;
LABEL_38:
  if ( TransientPoolWithQuotaTag )
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  return v17;
}
