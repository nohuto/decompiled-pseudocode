/*
 * XREFs of EtwpApplyTransientFilters @ 0x14045E770
 * Callers:
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1405533E4 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x140712764 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140712820 (EtwpApplyPackageIdFilter.c)
 */

char __fastcall EtwpApplyTransientFilters(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  char v9; // r10
  __int64 v10; // rdx
  _DWORD *v12; // rcx
  unsigned int v13; // edx

  v5 = 0;
  v9 = 1;
  if ( !*a4 || (v9 = EtwpApplyExeFilter()) != 0 )
  {
    v10 = a4[1];
    if ( v10 || a4[2] )
      v9 = EtwpApplyPackageIdFilter(a1, v10, a4[2]);
    if ( v9 )
    {
      if ( a3 )
      {
        v9 = 0;
        v12 = (_DWORD *)(a2 + *(_QWORD *)a3);
        v13 = *(_DWORD *)(a3 + 8) >> 2;
        if ( v13 )
        {
          while ( *v12 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 736LL) )
          {
            ++v5;
            ++v12;
            if ( v5 >= v13 )
              return v9;
          }
          return 1;
        }
      }
    }
  }
  return v9;
}
