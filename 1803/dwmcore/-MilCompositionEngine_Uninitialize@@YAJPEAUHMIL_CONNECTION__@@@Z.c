/*
 * XREFs of ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180143580
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180143824 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall MilCompositionEngine_Uninitialize(struct HMIL_CONNECTION__ *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( this )
  {
    CConnection::Disconnect(this);
    CMILRefCountBase::Release(this);
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x48u);
  }
  return v1;
}
