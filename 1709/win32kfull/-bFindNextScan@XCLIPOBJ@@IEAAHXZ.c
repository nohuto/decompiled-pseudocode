/*
 * XREFs of ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C012F04C
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C012F1CC (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C012F478 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindNextScan(XCLIPOBJ *this)
{
  __int64 v1; // r10
  int v2; // eax
  int v4; // eax
  _DWORD *v5; // r8
  _DWORD *v6; // r8
  _DWORD *v7; // rdx
  _DWORD *v8; // r8

  v1 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v1 + 24) & 0x800000) != 0 )
  {
    while ( 1 )
    {
      v2 = *((_DWORD *)this + 22);
      if ( v2 == 1 )
        break;
      v7 = (_DWORD *)*((_QWORD *)this + 10);
      *((_DWORD *)this + 22) = v2 - 1;
      v8 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
      *((_QWORD *)this + 10) = v8;
      if ( v8[1] > *(_DWORD *)(v1 + 124) )
        break;
      if ( *v8 )
        return 1LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = *((_DWORD *)this + 22);
      if ( v4 == 1 )
        break;
      v5 = (_DWORD *)(*((_QWORD *)this + 10) - 4LL);
      *((_DWORD *)this + 22) = v4 - 1;
      v6 = (_DWORD *)((char *)v5 - (unsigned int)(4 * *v5 + 16) + 4);
      *((_QWORD *)this + 10) = v6;
      if ( v6[2] <= *(_DWORD *)(v1 + 124) )
        break;
      if ( *v6 )
        return 1LL;
    }
  }
  return 0LL;
}
