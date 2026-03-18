/*
 * XREFs of ?Initialize@CFlipChain@@MEAAJXZ @ 0x180165750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::Initialize(CFlipChain *this)
{
  if ( !*((_BYTE *)this + 273) )
  {
    *((_QWORD *)this + 33) = 0LL;
    *((_BYTE *)this + 273) = 1;
  }
  return 0LL;
}
