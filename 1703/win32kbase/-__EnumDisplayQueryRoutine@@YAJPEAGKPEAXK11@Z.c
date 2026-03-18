/*
 * XREFs of ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0090740
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall __EnumDisplayQueryRoutine(unsigned __int16 *a1, int a2, void *a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v5; // edi
  size_t v6; // rbx
  void *v9; // rax
  unsigned int v10; // r14d
  void *v11; // rax

  v5 = 0;
  v6 = a4;
  if ( a4 > 2 )
  {
    if ( a2 == 1 )
    {
      if ( a5[27] )
        return v5;
      v9 = PALLOCMEM2(a4, 1936876615LL, 0);
      a5[27] = v9;
      if ( v9 )
      {
        memmove(v9, a3, v6);
        *((_DWORD *)a5 + 71) = v6;
        return v5;
      }
      return (unsigned int)-1073741670;
    }
    if ( a2 == 3 && !a5[27] )
    {
      v10 = a4 + 2;
      v11 = PALLOCMEM2(a4 + 2, 1936876615LL, 0);
      a5[27] = v11;
      if ( v11 )
      {
        memmove(v11, a3, v6);
        *(_WORD *)(v6 + a5[27]) = 0;
        *((_DWORD *)a5 + 71) = v10;
        return v5;
      }
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
