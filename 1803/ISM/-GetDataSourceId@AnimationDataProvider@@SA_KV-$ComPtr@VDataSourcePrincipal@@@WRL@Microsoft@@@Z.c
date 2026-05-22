/*
 * XREFs of ?GetDataSourceId@AnimationDataProvider@@SA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18008F54C
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180065138 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180065378 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::GetDataSourceId(__int64 *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h]

  v2 = *(_DWORD *)(*a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 32) + 24LL) + 16LL);
  HIDWORD(v6) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3) + 28);
  LODWORD(v6) = v2;
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return v6;
}
