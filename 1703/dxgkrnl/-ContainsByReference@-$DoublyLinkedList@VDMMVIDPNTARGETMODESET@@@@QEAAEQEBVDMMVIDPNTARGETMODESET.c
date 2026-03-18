/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0044E0C
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000834C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000848C (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C009B440 (-ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  v4 = a1 + 16;
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 == v4 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = v5 - 8;
    while ( v6 )
    {
      if ( v6 == a2 )
        break;
      v7 = *(_QWORD *)(v6 + 8);
      v6 = v7 - 8;
      if ( v7 == v4 )
        v6 = 0LL;
    }
  }
  return v6 != 0;
}
