/*
 * XREFs of ?UpdateUMDPathsWithComponentizedLocation@ADAPTER_RENDER@@AEAAXXZ @ 0x1C015C4C4
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::UpdateUMDPathsWithComponentizedLocation(ADAPTER_RENDER *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  if ( *((_WORD *)this + 132) )
  {
    if ( **((_WORD **)this + 34) == 35 )
    {
      v1 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v1 + 1440) )
        *(_OWORD *)((char *)this + 264) = *(_OWORD *)(v1 + 1440);
    }
  }
  if ( *((_WORD *)this + 164) && **((_WORD **)this + 42) == 35 )
  {
    v2 = *((_QWORD *)this + 2);
    if ( *(_WORD *)(v2 + 1456) )
      *(_OWORD *)((char *)this + 328) = *(_OWORD *)(v2 + 1456);
  }
}
