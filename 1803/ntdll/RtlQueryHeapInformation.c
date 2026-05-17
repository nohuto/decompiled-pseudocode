/*
 * XREFs of RtlQueryHeapInformation @ 0x18005FC60
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     sub_1800F0948 @ 0x1800F0948 (sub_1800F0948.c)
 *     sub_1800FD290 @ 0x1800FD290 (sub_1800FD290.c)
 * Callees:
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060EC8 @ 0x180060EC8 (sub_180060EC8.c)
 *     sub_1800FD780 @ 0x1800FD780 (sub_1800FD780.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r10d

  if ( a2 == -2147483647 )
  {
    if ( a4 >= 8 )
    {
      *a3 = &unk_1801597B0;
      v6 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    else
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
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
          return sub_18005FD84(a3, a4, a5);
      case 4:
        return sub_180060EC8(a3, a4, a5);
      case 5:
        return sub_1800FD780(a3, a4, a5);
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
