/*
 * XREFs of ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180010804
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180005D7C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180036690 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::GetActiveStoryboardCount(CAnimationScheduler *this)
{
  __int64 result; // rax
  __int64 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 2);
    v3 = *((unsigned int *)this + 10);
    do
    {
      v4 = *v2;
      v5 = result + 1;
      ++v2;
      if ( *(_DWORD *)(v4 + 24) == 4 )
        v5 = result;
      result = v5;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
