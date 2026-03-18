/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x1404813C0
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpAddSecurityCellToCache @ 0x140475744 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckNotifyAccess @ 0x14047D900 (CmpCheckNotifyAccess.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpRemoveFromSecurityCache @ 0x14056A36C (CmpRemoveFromSecurityCache.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, unsigned int *a3)
{
  int v3; // eax
  __int16 v4; // di
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v10; // r11d
  int v11; // ecx
  int v12; // edx

  v3 = *(_DWORD *)(a1 + 3040);
  v4 = 0;
  if ( v3 )
  {
    v6 = v3 - 1;
    v7 = *(_DWORD *)(a1 + 3048);
    v8 = 0;
    if ( (v7 & 0x80000000) != 0 || v7 > v6 )
      v7 = v6 >> 1;
    v9 = *(_QWORD *)(a1 + 3056);
    v10 = -(a2 & 0x7FFFFFFF);
    if ( a2 >= 0 )
      v10 = a2 & 0x7FFFFFFF;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = -(*(_DWORD *)(v9 + 16LL * v7) & 0x7FFFFFFF);
          if ( *(int *)(v9 + 16LL * v7) >= 0 )
            v11 = *(_DWORD *)(v9 + 16LL * v7) & 0x7FFFFFFF;
          v12 = v10 - v11;
          if ( v10 == v11 )
          {
            *a3 = v7;
            *(_DWORD *)(a1 + 3048) = v7;
            return 1;
          }
          if ( v4 )
            break;
          if ( v12 >= 0 )
            v8 = v7;
          else
            v6 = v7;
          if ( v6 - v8 <= 1 )
          {
            v7 = v8;
            v4 = 1;
          }
          else
          {
            v7 = v8 + ((v6 - v8) >> 1);
          }
        }
        if ( v4 != 1 )
          break;
        if ( v12 < 0 )
          goto LABEL_24;
        if ( v8 == v6 )
          goto LABEL_26;
        v4 = 2;
        v7 = v6;
      }
    }
    while ( v4 != 2 );
    if ( v12 < 0 )
      goto LABEL_24;
LABEL_26:
    ++v7;
LABEL_24:
    *a3 = v7;
    return 0;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
