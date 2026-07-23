/*
 * XREFs of SepCreateClaimAttributes @ 0x14045CE28
 * Callers:
 *     SepSetTokenClaims @ 0x14045CDB4 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x140089560 (RtlSidHashInitialize.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14014C0E0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepLengthSidAndAttributesArray @ 0x140488A68 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14077660C (AuthzBasepAllocateClaimCollectionNoLists.c)
 */

__int64 __fastcall SepCreateClaimAttributes(ULONG **a1, __int64 a2, __int64 a3, ULONG a4, void *Src)
{
  int v8; // ebx
  _DWORD *v9; // rbp
  _DWORD *v10; // rsi
  _SID_AND_ATTRIBUTES *PoolWithTag; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG *ClaimCollectionNoLists; // rdi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v17; // rax
  int v18; // ebx
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+30h] [rbp-68h]
  char v21; // [rsp+50h] [rbp-48h]
  char v22; // [rsp+51h] [rbp-47h]
  int v23; // [rsp+54h] [rbp-44h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-40h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h] BYREF

  v23 = 1;
  v21 = 0;
  v22 = 0;
  LODWORD(NumberOfBytes) = 0;
  v8 = 0;
  v25 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  PoolWithTag = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( !a2 && !a3 && !a4 )
    return 0LL;
  ClaimCollectionNoLists = (ULONG *)AuthzBasepAllocateClaimCollectionNoLists();
  if ( ClaimCollectionNoLists )
  {
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_35:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v23, a2);
      if ( v8 < 0 )
        goto LABEL_25;
      v21 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v17 = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v10 = v17;
      if ( !v17 )
        goto LABEL_37;
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)v17, &v23, a3);
      if ( v8 < 0 )
        goto LABEL_25;
      v22 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray(Src);
    if ( v8 < 0 )
    {
LABEL_25:
      if ( v9 )
      {
        if ( v21 )
          AuthzBasepFreeSecurityAttributesList(v9);
        ExFreePoolWithTag(v9, 0);
      }
      if ( v10 )
      {
        if ( v22 )
          AuthzBasepFreeSecurityAttributesList(v10);
        ExFreePoolWithTag(v10, 0);
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_35;
    }
    v18 = NumberOfBytes;
    PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64546553u);
    if ( PoolWithTag )
    {
      v8 = SeCaptureSidAndAttributesArray(Src, v18, v19, v20, (__int64)&v25, (__int64)&NumberOfBytes);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = PoolWithTag;
        RtlSidHashInitialize(PoolWithTag, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_25;
    }
LABEL_37:
    v8 = -1073741670;
    goto LABEL_25;
  }
  return (unsigned int)-1073741670;
}
