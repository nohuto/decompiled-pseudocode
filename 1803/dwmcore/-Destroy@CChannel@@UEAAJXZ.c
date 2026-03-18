/*
 * XREFs of ?Destroy@CChannel@@UEAAJXZ @ 0x180144210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x180087BF0 (-Release@CChannel@@UEAAKXZ.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180143724 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::Destroy(CChannel *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CConnection::DestroyChannel(*((CConnection **)this + 6), *((_DWORD *)this + 14));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x20Cu);
  CChannel::Release(this);
  return v3;
}
