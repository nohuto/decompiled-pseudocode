/*
 * XREFs of ??_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180072E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreativeFramework::Actions::AppInstallService::`scalar deleting destructor'(void **this, char a2)
{
  if ( (unsigned __int64)this[25] >= 8 )
    operator delete(this[22]);
  this[25] = (void *)7;
  this[24] = 0LL;
  *((_WORD *)this + 88) = 0;
  if ( (unsigned __int64)this[21] >= 8 )
    operator delete(this[18]);
  this[21] = (void *)7;
  this[20] = 0LL;
  *((_WORD *)this + 72) = 0;
  if ( (unsigned __int64)this[17] >= 8 )
    operator delete(this[14]);
  this[17] = (void *)7;
  this[16] = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( (unsigned __int64)this[13] >= 8 )
    operator delete(this[10]);
  this[13] = (void *)7;
  this[12] = 0LL;
  *((_WORD *)this + 40) = 0;
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
