/*
 * XREFs of AuthzBasepDuplicateSecurityAttributes @ 0x140089720
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140017800 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025F760 (SepValidateAndCopyGlobalEntry.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x140731094 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x14001A778 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140089A00 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140089C14 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDuplicateSecurityAttributes(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v3; // r15
  __int64 *v4; // r13
  unsigned int v5; // r14d
  char v6; // r12
  _QWORD *v7; // rbp
  POOL_TYPE v8; // ecx
  PVOID PoolWithTag; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int16 v12; // cx
  const void *v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r14
  int v16; // ecx
  _QWORD *v17; // rcx
  __int64 *i; // rdi
  POOL_TYPE v19; // ecx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  __int64 **v22; // rcx
  __int64 *v23; // rax
  __int64 *v25; // rdi
  __int64 SecurityAttributeValue; // rax
  __int64 v27; // rbx
  __int64 **v28; // rcx
  __int64 *v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbp
  void *v33; // rcx
  unsigned int v34; // eax
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbp
  _QWORD *v38; // [rsp+68h] [rbp+10h]

  v38 = a2;
  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a1 + 8);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  if ( v3 == (__int64 *)(a1 + 8) )
  {
LABEL_26:
    LOBYTE(a2) = 1;
    goto LABEL_27;
  }
  while ( 1 )
  {
    if ( v6 && (*((_DWORD *)v3 + 13) & 1) != 0 )
      goto LABEL_25;
    v8 = PagedPool;
    if ( KeGetCurrentIrql() >= 2u )
      v8 = NonPagedPoolNx;
    PoolWithTag = ExAllocatePoolWithTag(v8, *((unsigned __int16 *)v3 + 16) + 112LL, 0x74416553u);
    v10 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_54;
    memset(PoolWithTag, 0, 0x70uLL);
    *(_WORD *)(v10 + 32) = 0;
    *(_WORD *)(v10 + 34) = *((_WORD *)v3 + 16);
    *(_QWORD *)(v10 + 40) = v10 + 112;
    v11 = *((unsigned __int16 *)v3 + 16);
    v12 = *(_WORD *)(v10 + 34);
    v13 = (const void *)v3[5];
    if ( (unsigned __int16)v11 > v12 )
      v11 = v12;
    *(_WORD *)(v10 + 32) = v11;
    v14 = v11;
    memmove((void *)(v10 + 112), v13, v11);
    if ( (unsigned __int64)*(unsigned __int16 *)(v10 + 32) + 2 <= *(unsigned __int16 *)(v10 + 34) )
      *(_WORD *)(v10 + 112 + 2 * (v14 >> 1)) = 0;
    v15 = v10 + 96;
    *(_QWORD *)(v10 + 80) = v10 + 72;
    *(_QWORD *)(v10 + 72) = v10 + 72;
    *(_QWORD *)(v10 + 104) = v10 + 96;
    *(_QWORD *)(v10 + 96) = v10 + 96;
    v16 = *((_DWORD *)v3 + 13);
    *(_DWORD *)(v10 + 52) = v16;
    if ( v6 && (*((_DWORD *)v3 + 13) & 0x80u) != 0 )
      *(_DWORD *)(v10 + 52) = v16 & 0xFFFFFF7E | 1;
    *(_WORD *)(v10 + 48) = *((_WORD *)v3 + 24);
    if ( (*(_DWORD *)(v10 + 56) & 2) == 0 )
    {
      a2 = (_QWORD *)v7[5];
      v17 = (_QWORD *)(v10 + 16);
      if ( (_QWORD *)*a2 != v7 + 4 )
        __fastfail(3u);
      *v17 = v7 + 4;
      *(_QWORD *)(v10 + 24) = a2;
      *a2 = v17;
      v7[5] = v17;
      *(_DWORD *)(v10 + 56) |= 2u;
      ++*((_DWORD *)v7 + 6);
    }
    if ( *((_WORD *)v3 + 24) != 2 )
      break;
LABEL_15:
    for ( i = (__int64 *)v3[9]; i != v3 + 9; i = (__int64 *)*i )
    {
      v19 = PagedPool;
      if ( KeGetCurrentIrql() >= 2u )
        v19 = NonPagedPoolNx;
      v20 = ExAllocatePoolWithTag(v19, 0x40uLL, 0x74416553u);
      v21 = v20;
      if ( !v20 )
        goto LABEL_53;
      memset(v20, 0, 0x40uLL);
      v21[5] = i[5];
      if ( (v21[4] & 2) == 0 )
      {
        v22 = *(__int64 ***)(v10 + 104);
        v23 = v21 + 2;
        if ( *v22 != (__int64 *)v15 )
          __fastfail(3u);
        *v23 = v15;
        v21[3] = v22;
        *v22 = v23;
        *(_QWORD *)(v10 + 104) = v23;
        *((_DWORD *)v21 + 8) |= 2u;
        ++*(_DWORD *)(v10 + 88);
      }
    }
LABEL_23:
    v7 = v38;
LABEL_24:
    v5 = 0;
LABEL_25:
    v3 = (__int64 *)*v3;
    if ( v3 == v4 )
      goto LABEL_26;
  }
  a2 = (_QWORD *)0x140000000LL;
  switch ( *((_WORD *)v3 + 24) )
  {
    case 1:
    case 6:
      goto LABEL_15;
    case 3:
      v25 = (__int64 *)v3[9];
      if ( v25 == v3 + 9 )
        goto LABEL_36;
      do
      {
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v25 + 20));
        v27 = SecurityAttributeValue;
        if ( !SecurityAttributeValue )
          goto LABEL_53;
        *(_WORD *)(SecurityAttributeValue + 40) = 0;
        *(_WORD *)(SecurityAttributeValue + 42) = *((_WORD *)v25 + 20);
        *(_QWORD *)(SecurityAttributeValue + 48) = SecurityAttributeValue + 64;
        RtlCopyUnicodeString((PUNICODE_STRING)(SecurityAttributeValue + 40), (PCUNICODE_STRING)(v25 + 5));
        if ( (*(_DWORD *)(v27 + 32) & 2) == 0 )
        {
          v28 = *(__int64 ***)(v10 + 104);
          v29 = (__int64 *)(v27 + 16);
          if ( *v28 != (__int64 *)v15 )
            __fastfail(3u);
          *v29 = v15;
          *(_QWORD *)(v27 + 24) = v28;
          *v28 = v29;
          *(_QWORD *)(v10 + 104) = v29;
          *(_DWORD *)(v27 + 32) |= 2u;
          ++*(_DWORD *)(v10 + 88);
        }
        v25 = (__int64 *)*v25;
      }
      while ( v25 != v3 + 9 );
      v7 = v38;
LABEL_36:
      v6 = a3;
      goto LABEL_24;
    case 4:
      v30 = (__int64 *)v3[9];
      if ( v30 == v3 + 9 )
        goto LABEL_24;
      while ( 1 )
      {
        v31 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned __int16 *)v30 + 24));
        v32 = v31;
        if ( !v31 )
          goto LABEL_53;
        v33 = (void *)(v31 + 64);
        *(_QWORD *)(v31 + 40) = v30[5];
        v34 = *((unsigned __int16 *)v30 + 24);
        *(_WORD *)(v32 + 48) = v34;
        *(_QWORD *)(v32 + 56) = v32 + 64;
        memmove(v33, (const void *)v30[7], v34);
        AuthzBasepAddSecurityAttributeValueToLists(v10, v32, 0, 1);
        v30 = (__int64 *)*v30;
        if ( v30 == v3 + 9 )
          goto LABEL_23;
      }
    case 5:
    case 0x10:
      v35 = (__int64 *)v3[9];
      if ( v35 == v3 + 9 )
        goto LABEL_24;
      break;
    default:
      v5 = -1073741811;
      goto LABEL_55;
  }
  while ( 1 )
  {
    v36 = AuthzBasepAllocateSecurityAttributeValue(*((unsigned int *)v35 + 12));
    v37 = v36;
    if ( !v36 )
      break;
    *(_QWORD *)(v36 + 40) = v36 + 64;
    *(_DWORD *)(v36 + 48) = *((_DWORD *)v35 + 12);
    memmove((void *)(v36 + 64), (const void *)v35[5], *((unsigned int *)v35 + 12));
    AuthzBasepAddSecurityAttributeValueToLists(v10, v37, 0, 1);
    v35 = (__int64 *)*v35;
    if ( v35 == v3 + 9 )
    {
      v7 = v38;
      goto LABEL_24;
    }
  }
LABEL_53:
  v7 = v38;
LABEL_54:
  v5 = -1073741670;
LABEL_55:
  a2 = 0LL;
LABEL_27:
  AuthzBasepFinaliseSecurityAttributesList(v7, a2);
  return v5;
}
