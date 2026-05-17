/*
 * XREFs of RtlQueryHeapInformation @ 0x180005740
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 *     sub_1800F3854 @ 0x1800F3854 (sub_1800F3854.c)
 *     sub_1800FEA80 @ 0x1800FEA80 (sub_1800FEA80.c)
 * Callees:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r10d

  if ( a2 == -2147483647 )
  {
    if ( a4 < 8 )
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = &unk_1801586B0;
      v6 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    return v6;
  }
  else if ( a2 )
  {
    switch ( a2 )
    {
      case 2:
        if ( a4 < 0x58 )
          return 3221225485LL;
        else
          return sub_180005870(a3, a4, a5);
      case 4:
        return sub_180006F80(a3, a4, a5);
      case 5:
        return sub_1800FEF2C(a3, a4, a5);
      default:
        return 3221225485LL;
    }
  }
  else if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    if ( a4 >= 4 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_DWORD *)a3 = 2;
      else
        *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 387);
      if ( a5 )
        *a5 = 4LL;
      return 0LL;
    }
    else
    {
      if ( a5 )
        *a5 = 4LL;
      return 3221225507LL;
    }
  }
  else
  {
    return 3221225474LL;
  }
}
