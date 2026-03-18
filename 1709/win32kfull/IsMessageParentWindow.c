/*
 * XREFs of IsMessageParentWindow @ 0x1C0092C74
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00928E8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageParentWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 104);
  return a1 == v2;
}
