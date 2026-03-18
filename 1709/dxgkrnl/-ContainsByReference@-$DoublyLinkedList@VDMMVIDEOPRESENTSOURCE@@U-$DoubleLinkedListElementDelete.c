/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00131CC
 * Callers:
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0013138 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E914 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 *     ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C01F05A0 (-AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRES.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == v3 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = v4 - 8;
    while ( v5 )
    {
      if ( v5 == a2 )
        break;
      v7 = *(_QWORD *)(v5 + 8);
      v5 = v7 - 8;
      if ( v7 == v3 )
        v5 = 0LL;
    }
  }
  return v5 != 0;
}
