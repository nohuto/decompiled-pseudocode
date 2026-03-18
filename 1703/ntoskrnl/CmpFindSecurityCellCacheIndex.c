/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x14048E4D4
 * Callers:
 *     CmpRemoveFromSecurityCache @ 0x14044EDA0 (CmpRemoveFromSecurityCache.c)
 *     CmpCheckNotifyAccess @ 0x14048E404 (CmpCheckNotifyAccess.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpAddSecurityCellToCache @ 0x1404BFB50 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpCreateEmptyKey @ 0x140666F54 (CmpCreateEmptyKey.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, unsigned int *a3)
{
  int v3; // r10d
  __int16 v5; // di
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  __int64 v9; // rbp
  int v10; // esi
  int v11; // eax
  int v12; // edx
  char result; // al

  v3 = *(_DWORD *)(a1 + 3040);
  v5 = 0;
  if ( v3 )
  {
    v6 = *(_DWORD *)(a1 + 3048);
    v7 = v3 - 1;
    v8 = 0;
    if ( (v6 & 0x80000000) != 0 || v6 > v7 )
      v6 = v7 >> 1;
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
          v11 = -(*(_DWORD *)(v9 + 16LL * v6) & 0x7FFFFFFF);
          if ( *(int *)(v9 + 16LL * v6) >= 0 )
            v11 = *(_DWORD *)(v9 + 16LL * v6) & 0x7FFFFFFF;
          v12 = v10 - v11;
          if ( v10 == v11 )
          {
            *(_DWORD *)(a1 + 3048) = v6;
            result = 1;
LABEL_15:
            *a3 = v6;
            return result;
          }
          if ( v5 )
            break;
          if ( v12 >= 0 )
            v8 = v6;
          else
            v7 = v6;
          if ( v7 - v8 <= 1 )
          {
            v6 = v8;
            v5 = 1;
          }
          else
          {
            v6 = v8 + ((v7 - v8) >> 1);
          }
        }
        if ( v5 != 1 )
          break;
        if ( v12 < 0 )
          goto LABEL_24;
        if ( v8 == v7 )
          goto LABEL_26;
        v5 = 2;
        v6 = v7;
      }
    }
    while ( v5 != 2 );
    if ( v12 < 0 )
    {
LABEL_24:
      result = 0;
      goto LABEL_15;
    }
LABEL_26:
    *a3 = v6 + 1;
  }
  else
  {
    *a3 = 0;
  }
  return 0;
}
