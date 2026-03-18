/*
 * XREFs of ?Destroy@CChannel@@UEAAJXZ @ 0x180121960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180120988 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x180122DE0 (-Release@CChannel@@UEAAKXZ.c)
 */

__int64 __fastcall CChannel::Destroy(CChannel *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = CConnection::DestroyChannel(*((CConnection **)this + 6), *((_DWORD *)this + 14));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x20Du);
  CChannel::Release(this);
  return v3;
}
