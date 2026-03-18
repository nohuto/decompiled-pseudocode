/*
 * XREFs of ?HasInteraction@CScrollAnimation@@AEBA_NXZ @ 0x180188EB0
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x18018929C (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScrollAnimation::HasInteraction(CScrollAnimation *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 35);
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 8);
  else
    v2 = 0LL;
  if ( !v2 )
    return 0;
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 8);
  else
    v3 = 0LL;
  return *(_QWORD *)(v3 + 552) != 0LL;
}
