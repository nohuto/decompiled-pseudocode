/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x140093E50
 * Callers:
 *     SepGetAnonymousToken @ 0x14003D7D8 (SepGetAnonymousToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x1406F9644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140065C2C (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140065C78 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140094180 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1402638F0 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // r15
  char v4; // r12
  POOL_TYPE v6; // ecx
  PVOID PoolWithTag; // rax
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned __int16 v10; // cx
  const void *v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 *i; // rdi
  POOL_TYPE v17; // ecx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 **v20; // rcx
  __int64 *v21; // rax
  unsigned int v22; // esi
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rdx
  char v27; // al
  __int64 *v29; // rdi
  char *SecurityAttributeValue; // rax
  char *v31; // rbx
  __int64 **v32; // rcx
  __int64 *v33; // rax
  __int64 *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rbp
  void *v37; // rcx
  unsigned int v38; // eax
  __int64 *v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rbp
  char v42; // [rsp+70h] [rbp+18h]
  __int64 *v43; // [rsp+78h] [rbp+20h]

  v42 = a3;
  v3 = *(__int64 **)(a1 + 8);
  v4 = 0;
  v43 = (__int64 *)(a1 + 8);
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_24:
    v22 = 0;
    v4 = 1;
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( a3 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_23;
    v6 = PagedPool;
    if ( KeGetCurrentIrql() >= 2u )
      v6 = NonPagedPoolNx;
    PoolWithTag = ExAllocatePoolWithTag(v6, *((unsigned __int16 *)v3 + 16) + 112LL, 0x74416553u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_42;
    memset(PoolWithTag, 0, 0x70uLL);
    *(_WORD *)(v8 + 32) = 0;
    *(_WORD *)(v8 + 34) = *((_WORD *)v3 + 16);
    *(_QWORD *)(v8 + 40) = v8 + 112;
    v9 = *((unsigned __int16 *)v3 + 16);
    v10 = *(_WORD *)(v8 + 34);
    v11 = (const void *)v3[5];
    if ( (unsigned __int16)v9 > v10 )
      v9 = v10;
    *(_WORD *)(v8 + 32) = v9;
    v12 = v9;
    memmove((void *)(v8 + 112), v11, v9);
    if ( (unsigned __int64)*(unsigned __int16 *)(v8 + 32) + 2 <= *(unsigned __int16 *)(v8 + 34) )
      *(_WORD *)(v8 + 112 + 2 * (v12 >> 1)) = 0;
    v13 = v8 + 96;
    *(_QWORD *)(v8 + 80) = v8 + 72;
    *(_QWORD *)(v8 + 72) = v8 + 72;
    *(_QWORD *)(v8 + 104) = v8 + 96;
    *(_QWORD *)(v8 + 96) = v8 + 96;
    *(_DWORD *)(v8 + 52) = *((_DWORD *)v3 + 13);
    *(_WORD *)(v8 + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(v8 + 56) & 2) == 0 )
    {
      v14 = *(_QWORD **)(a2 + 40);
      v15 = (_QWORD *)(v8 + 16);
      if ( *v14 != a2 + 32 )
        __fastfail(3u);
      *v15 = a2 + 32;
      *(_QWORD *)(v8 + 24) = v14;
      *v14 = v15;
      *(_QWORD *)(a2 + 40) = v15;
      *(_DWORD *)(v8 + 56) |= 2u;
      ++*(_DWORD *)(a2 + 24);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_14:
    for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
    {
      v17 = PagedPool;
      if ( KeGetCurrentIrql() >= 2u )
        v17 = NonPagedPoolNx;
      v18 = ExAllocatePoolWithTag(v17, 0x40uLL, 0x74416553u);
      v19 = v18;
      if ( !v18 )
        goto LABEL_42;
      memset(v18, 0, 0x40uLL);
      v19[5] = i[5];
      if ( (v19[4] & 2) == 0 )
      {
        v20 = *(__int64 ***)(v8 + 104);
        v21 = v19 + 2;
        if ( *v20 != (__int64 *)v13 )
          __fastfail(3u);
        *v21 = v13;
        v19[3] = v20;
        *v20 = v21;
        *(_QWORD *)(v8 + 104) = v21;
        *((_DWORD *)v19 + 8) |= 2u;
        ++*(_DWORD *)(v8 + 88);
      }
    }
LABEL_22:
    a3 = v42;
LABEL_23:
    v3 = (__int64 *)*v3;
    if ( v3 == v43 )
      goto LABEL_24;
  }
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_14;
    case 3:
      v29 = (__int64 *)v3[9];
      if ( v29 == v3 + 9 )
        goto LABEL_22;
      while ( 1 )
      {
        SecurityAttributeValue = (char *)AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v29 + 20));
        v31 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_42;
        *((_WORD *)SecurityAttributeValue + 20) = 0;
        *((_WORD *)SecurityAttributeValue + 21) = *((_WORD *)v29 + 20);
        *((_QWORD *)SecurityAttributeValue + 6) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v29 + 5));
        if ( (*((_DWORD *)v31 + 8) & 2) == 0 )
        {
          v32 = *(__int64 ***)(v8 + 104);
          v33 = (__int64 *)(v31 + 16);
          if ( *v32 != (__int64 *)v13 )
            __fastfail(3u);
          *v33 = v13;
          *((_QWORD *)v31 + 3) = v32;
          *v32 = v33;
          *(_QWORD *)(v8 + 104) = v33;
          *((_DWORD *)v31 + 8) |= 2u;
          ++*(_DWORD *)(v8 + 88);
        }
        v29 = (__int64 *)*v29;
        if ( v29 == v3 + 9 )
          goto LABEL_22;
      }
    case 4:
      v34 = (__int64 *)v3[9];
      if ( v34 == v3 + 9 )
        goto LABEL_22;
      while ( 1 )
      {
        v35 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v34 + 24));
        v36 = (__int64)v35;
        if ( !v35 )
          goto LABEL_42;
        v37 = v35 + 8;
        v35[5] = v34[5];
        v38 = *((unsigned __int16 *)v34 + 24);
        *(_WORD *)(v36 + 48) = v38;
        *(_QWORD *)(v36 + 56) = v36 + 64;
        memmove(v37, (const void *)v34[7], v38);
        AuthzBasepAddSecurityAttributeValueToLists(v8, v36, 0, 1);
        v34 = (__int64 *)*v34;
        if ( v34 == v3 + 9 )
          goto LABEL_22;
      }
    case 5:
    case 0x10:
      v39 = (__int64 *)v3[9];
      if ( v39 == v3 + 9 )
        goto LABEL_22;
      break;
    default:
      v22 = -1073741811;
      goto LABEL_25;
  }
  while ( 1 )
  {
    v40 = AuthzBasepAllocateSecurityAttributeValue(*((_DWORD *)v39 + 12));
    v41 = (__int64)v40;
    if ( !v40 )
      break;
    v40[5] = v40 + 8;
    *((_DWORD *)v40 + 12) = *((_DWORD *)v39 + 12);
    memmove(v40 + 8, (const void *)v39[5], *((unsigned int *)v39 + 12));
    AuthzBasepAddSecurityAttributeValueToLists(v8, v41, 0, 1);
    v39 = (__int64 *)*v39;
    if ( v39 == v3 + 9 )
      goto LABEL_22;
  }
LABEL_42:
  v22 = -1073741670;
LABEL_25:
  v23 = (_QWORD *)(a2 + 32);
  while ( 1 )
  {
    v24 = (_QWORD *)*v23;
    if ( (_QWORD *)*v23 == v23 )
      break;
    v25 = v24 - 2;
    v26 = v24 - 2;
    if ( v4 )
      v27 = AuthzBasepCommitSecurityAttributeChanges(a2, v26);
    else
      v27 = AuthzBasepRollbackSecurityAttributeChanges(a2, v26);
    if ( v27 )
      ExFreePoolWithTag(v25, 0);
  }
  return v22;
}
