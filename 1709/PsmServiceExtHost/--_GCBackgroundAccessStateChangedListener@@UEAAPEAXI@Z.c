/*
 * XREFs of ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x180048960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004890C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateC.c)
 */

CBackgroundAccessStateChangedListener *__fastcall CBackgroundAccessStateChangedListener::`scalar deleting destructor'(
        CBackgroundAccessStateChangedListener *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
