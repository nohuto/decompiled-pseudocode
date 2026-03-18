/*
 * XREFs of ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C00EC9F8
 * Callers:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EC9CC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0122B84 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall XEBRUSHOBJ::RestoreAttributes(XEBRUSHOBJ *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 2) )
  {
    v2 = *(_QWORD *)this;
    if ( *(_QWORD *)(v2 + 56) == v2 + 72 )
    {
      **(_QWORD **)(v2 + 64) = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(*(_QWORD *)this + 56LL) = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
  }
  *((_DWORD *)this + 2) = 0;
}
