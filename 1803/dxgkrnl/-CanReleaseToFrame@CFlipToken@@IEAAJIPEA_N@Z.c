/*
 * XREFs of ?CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z @ 0x1C0024FF0
 * Callers:
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C004B700 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0024440 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CanReleaseToFrame(CFlipToken *this, unsigned int a2, bool *a3)
{
  __int64 result; // rax
  CompositionSurfaceObject *v6; // rcx
  bool v7; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    v6 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    v7 = 0;
    result = CompositionSurfaceObject::SyncIntervalSatisfied(v6, a2, &v7);
    if ( (int)result >= 0 && (v7 || !*((_DWORD *)this + 28)) )
      *a3 = 1;
  }
  return result;
}
