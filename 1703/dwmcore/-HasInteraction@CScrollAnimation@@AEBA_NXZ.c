/*
 * XREFs of ?HasInteraction@CScrollAnimation@@AEBA_NXZ @ 0x180181B40
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z @ 0x180182214 (-StartInertia@CScrollAnimation@@AEAAJMPEAVCExpressionValueStack@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScrollAnimation::HasInteraction(CScrollAnimation *this)
{
  __int64 v1; // rdx
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 29);
  result = 0;
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 8);
  else
    v3 = 0LL;
  if ( v3 )
  {
    if ( v1 )
      v4 = *(_QWORD *)(v1 + 8);
    else
      v4 = 0LL;
    return *(_QWORD *)(v4 + 520) != 0LL;
  }
  return result;
}
