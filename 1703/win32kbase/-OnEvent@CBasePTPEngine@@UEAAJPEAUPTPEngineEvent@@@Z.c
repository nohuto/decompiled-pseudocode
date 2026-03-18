/*
 * XREFs of ?OnEvent@CBasePTPEngine@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C0136410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBasePTPEngine::OnEvent(CBasePTPEngine *this, struct PTPEngineEvent *a2)
{
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  else
    return (*(__int64 (__fastcall **)(CBasePTPEngine *))(*(_QWORD *)this + 64LL))(this);
}
