/*
 * XREFs of ??_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180075BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreativeFramework::Actions::SwapStartTileService::`scalar deleting destructor'(void **this, char a2)
{
  if ( (unsigned __int64)this[32] >= 8 )
    operator delete(this[29]);
  this[32] = (void *)7;
  this[31] = 0LL;
  *((_WORD *)this + 116) = 0;
  if ( (unsigned __int64)this[28] >= 8 )
    operator delete(this[25]);
  this[28] = (void *)7;
  this[27] = 0LL;
  *((_WORD *)this + 100) = 0;
  if ( (unsigned __int64)this[24] >= 8 )
    operator delete(this[21]);
  this[24] = (void *)7;
  this[23] = 0LL;
  *((_WORD *)this + 84) = 0;
  if ( (unsigned __int64)this[20] >= 8 )
    operator delete(this[17]);
  this[20] = (void *)7;
  this[19] = 0LL;
  *((_WORD *)this + 68) = 0;
  if ( (unsigned __int64)this[16] >= 8 )
    operator delete(this[13]);
  this[16] = (void *)7;
  this[15] = 0LL;
  *((_WORD *)this + 52) = 0;
  if ( (unsigned __int64)this[12] >= 8 )
    operator delete(this[9]);
  this[12] = (void *)7;
  this[11] = 0LL;
  *((_WORD *)this + 36) = 0;
  if ( (unsigned __int64)this[8] >= 8 )
    operator delete(this[5]);
  this[8] = (void *)7;
  this[7] = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( (unsigned __int64)this[4] >= 8 )
    operator delete(this[1]);
  this[4] = (void *)7;
  this[3] = 0LL;
  *((_WORD *)this + 4) = 0;
  *this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
