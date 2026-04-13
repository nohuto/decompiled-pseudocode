/*
 * XREFs of ??_EPublishSystemStateService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x18007DB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreativeFramework::Actions::PublishSystemStateService::`vector deleting destructor'(
        void **this,
        char a2)
{
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
