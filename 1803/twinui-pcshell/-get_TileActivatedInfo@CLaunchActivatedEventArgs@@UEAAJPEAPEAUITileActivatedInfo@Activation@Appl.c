/*
 * XREFs of ?get_TileActivatedInfo@CLaunchActivatedEventArgs@@UEAAJPEAPEAUITileActivatedInfo@Activation@ApplicationModel@Windows@@@Z @ 0x1803171F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::get_TileActivatedInfo(
        CLaunchActivatedEventArgs *this,
        struct Windows::ApplicationModel::Activation::ITileActivatedInfo **a2)
{
  struct Windows::ApplicationModel::Activation::ITileActivatedInfo *v4; // rcx
  __int64 result; // rax

  v4 = (struct Windows::ApplicationModel::Activation::ITileActivatedInfo *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Activation::ITileActivatedInfo *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct Windows::ApplicationModel::Activation::ITileActivatedInfo *)*((_QWORD *)this + 7);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
