/*
 * XREFs of ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x1800353C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800353F0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateC.c)
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 */

CBackgroundAccessStateChangedListener *__fastcall CBackgroundAccessStateChangedListener::`scalar deleting destructor'(
        CBackgroundAccessStateChangedListener *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
