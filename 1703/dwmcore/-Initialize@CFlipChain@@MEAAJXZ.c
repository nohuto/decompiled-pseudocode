/*
 * XREFs of ?Initialize@CFlipChain@@MEAAJXZ @ 0x180163F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::Initialize(CFlipChain *this)
{
  if ( !*((_BYTE *)this + 265) )
  {
    *((_QWORD *)this + 32) = 0LL;
    *((_BYTE *)this + 265) = 1;
  }
  return 0LL;
}
