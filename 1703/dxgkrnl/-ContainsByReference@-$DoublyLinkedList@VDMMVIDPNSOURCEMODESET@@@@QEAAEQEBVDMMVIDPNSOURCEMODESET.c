/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002410
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000A2B0 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A420 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C009B670 (-ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(__int64 a1, __int64 a2)
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
