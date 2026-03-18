/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x1404A9B50
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     CmpAddSecurityCellToCache @ 0x140516D50 (CmpAddSecurityCellToCache.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140516F4C (CmpValidateHiveSecurityDescriptors.c)
 *     CmpRemoveFromSecurityCache @ 0x14057ED50 (CmpRemoveFromSecurityCache.c)
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
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
  unsigned int v13; // eax

  v3 = *(_DWORD *)(a1 + 1864);
  v4 = 0;
  if ( v3 )
  {
    v6 = v3 - 1;
    v7 = *(_DWORD *)(a1 + 1872);
    v8 = 0;
    if ( (v7 & 0x80000000) != 0 || v7 > v6 )
      v7 = v6 >> 1;
    v9 = *(_QWORD *)(a1 + 1880);
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
            *(_DWORD *)(a1 + 1872) = v7;
            return 1;
          }
          if ( v4 )
            break;
          if ( v12 >= 0 )
          {
            v8 = v7;
            v7 = v6;
          }
          v6 = v7;
          v13 = v7 - v8;
          if ( v13 <= 1 )
          {
            v7 = v8;
            v4 = 1;
          }
          else
          {
            v7 = v8 + (v13 >> 1);
          }
        }
        if ( v4 != 1 )
          break;
        if ( v12 < 0 )
          goto LABEL_23;
        if ( v8 == v6 )
          goto LABEL_24;
        v4 = 2;
        v7 = v6;
      }
    }
    while ( v4 != 2 );
    if ( v12 < 0 )
      goto LABEL_23;
LABEL_24:
    ++v7;
LABEL_23:
    *a3 = v7;
    return 0;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
