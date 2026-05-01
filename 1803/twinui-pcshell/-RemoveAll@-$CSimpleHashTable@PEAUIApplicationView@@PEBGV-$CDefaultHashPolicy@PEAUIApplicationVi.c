/*
 * XREFs of ?RemoveAll@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x1802E5FE4
 * Callers:
 *     ??1AppResizeAcc@@EEAA@XZ @ 0x1802E5874 (--1AppResizeAcc@@EEAA@XZ.c)
 *     ??1CDragVisualAcc@@EEAA@XZ @ 0x1802F818C (--1CDragVisualAcc@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(
        __int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rdx
  _DWORD *v4; // r8
  HLOCAL result; // rax

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 4) )
    {
      v4 = v2;
      do
      {
        if ( v2[6 * v3] == 1 )
        {
          v2[6 * v3] = 2;
          ++*(_DWORD *)(a1 + 8);
          v2 = *(_DWORD **)(a1 + 16);
          --*(_DWORD *)a1;
          v4 = v2;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *(_DWORD *)(a1 + 4) );
      v2 = v4;
    }
    result = LocalFree(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
