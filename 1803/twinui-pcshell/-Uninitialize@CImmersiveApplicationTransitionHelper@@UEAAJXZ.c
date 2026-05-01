/*
 * XREFs of ?Uninitialize@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18011C100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::Uninitialize(CImmersiveApplicationTransitionHelper *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  return 0LL;
}
