/*
 * XREFs of SepSddlGetAclForString @ 0x1C00DAF70
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00DAEAC (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C003D9C0 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00DADC4 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00DB2D0 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C00DB3A4 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C00DB438 (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *AclString, _ACL **Acl, wchar_t **End)
{
  wchar_t *v5; // rsi
  unsigned int SidForString; // edi
  unsigned int v7; // r14d
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  int v12; // r8d
  wchar_t *i; // rax
  unsigned int v14; // r12d
  _ACL *v15; // rax
  unsigned int v16; // r15d
  _ACL *PoolWithTag; // r14
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  const wchar_t *v20; // rbx
  wchar_t *j; // rbx
  __int64 v22; // rax
  wchar_t *v23; // rax
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  wchar_t *v26; // rax
  wchar_t *v27; // rbx
  _ACL **v28; // rbx
  wchar_t *MaskEnd; // [rsp+40h] [rbp-28h] BYREF
  wchar_t *EndLocation; // [rsp+48h] [rbp-20h] BYREF
  void *SidPtr; // [rsp+50h] [rbp-18h] BYREF
  unsigned int Mask; // [rsp+B0h] [rbp+48h] BYREF
  _ACL **v33; // [rsp+B8h] [rbp+50h]
  unsigned int AclUsed; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int AccessMask; // [rsp+C8h] [rbp+60h] BYREF

  v33 = Acl;
  *Acl = 0LL;
  v5 = AclString;
  SidPtr = 0LL;
  SidForString = 0;
  v7 = 0;
  v8 = wcschr(AclString, 0x3Au);
  *End = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *End = v11;
  v12 = 0;
  for ( i = v5; i < *End; ++i )
  {
    if ( *i == 59 )
    {
      ++v7;
    }
    else if ( *i != 32 )
    {
      v12 = 1;
    }
  }
  v14 = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && v12 )
    return (unsigned int)-1073741811;
  if ( v14 )
  {
    v16 = 48 * v14 + 8;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
    *v33 = PoolWithTag;
    if ( PoolWithTag )
    {
      AclUsed = 8;
      memset(PoolWithTag, 0, v16);
      *(_WORD *)&PoolWithTag->AclRevision = 2;
      PoolWithTag->AclSize = v16;
      v18 = 0;
      *(_DWORD *)&PoolWithTag->AceCount = 0;
      while ( 1 )
      {
        v19 = 0;
        Mask = 0;
        while ( *v5 == 32 )
          ++v5;
        v20 = v5 + 1;
        if ( *v5 != 40 )
          v20 = v5;
        while ( *v20 == 32 )
          ++v20;
        if ( _wcsnicmp(v20, L"A", 1uLL) )
          break;
        for ( j = (wchar_t *)(v20 + 2); *j == 32; ++j )
          ;
        if ( *j != 59 )
        {
          SidForString = -1073741811;
          goto LABEL_76;
        }
        do
          ++j;
        while ( *j == 32 );
        if ( *j != 59 )
        {
          do
          {
            while ( *j == 32 )
              ++j;
            if ( SepSddlLookupAccessMaskInTable(j, &AccessMask, &MaskEnd) )
            {
              v19 |= AccessMask;
              v23 = MaskEnd;
              Mask = v19;
            }
            else
            {
              SepSddlParseWideStringUlong(j, (const wchar_t **)&MaskEnd, &Mask);
              v23 = MaskEnd;
              v19 = Mask;
              if ( MaskEnd == j )
              {
                SidForString = -1073741811;
                goto LABEL_41;
              }
            }
            j = v23;
          }
          while ( *v23 != 59 );
        }
        ++j;
LABEL_41:
        if ( SidForString )
          goto LABEL_76;
        v22 = 2LL;
        do
        {
          while ( *j == 32 )
            ++j;
          if ( *j != 59 )
            SidForString = -1073741811;
          ++j;
          --v22;
        }
        while ( v22 );
        if ( SidForString )
          goto LABEL_76;
        while ( *j == 32 )
          ++j;
        SidForString = SepSddlGetSidForString(j, &SidPtr, &EndLocation);
        if ( SidForString )
          goto LABEL_76;
        v26 = EndLocation;
        if ( !EndLocation )
          goto LABEL_72;
        if ( *EndLocation == 32 )
        {
          do
            ++v26;
          while ( *v26 == 32 );
          EndLocation = v26;
        }
        if ( *v26 != 41 )
        {
LABEL_72:
          SidForString = -1073741705;
          goto LABEL_76;
        }
        v27 = v26 + 1;
        if ( SidPtr )
        {
          SidForString = SepSddlAddAceToAcl(v33, &AclUsed, v24, v25, v19, v14 - v18, SidPtr);
          if ( SidForString )
            goto LABEL_76;
        }
        ++v18;
        v5 = v27 + 1;
        if ( *v27 != 40 )
          v5 = v27;
        if ( v18 >= v14 )
          goto LABEL_75;
      }
      SidForString = -1073741811;
LABEL_75:
      if ( SidForString )
      {
LABEL_76:
        v28 = v33;
        ExFreePoolWithTag(*v33, 0);
        *v28 = 0LL;
        return SidForString;
      }
      (*v33)->AclSize = AclUsed;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v15 = (_ACL *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
  *Acl = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = (_ACL)524290LL;
  return SidForString;
}
