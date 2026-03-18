/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C000834C
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00F4750 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0007988 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0044E0C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00DE500 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(__int64 a1, DMMVIDPNTARGETMODESET **a2)
{
  DMMVIDPNTARGETMODESET *v2; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rdx
  DMMVIDPNTARGETMODESET *v7; // rdx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  _QWORD *v15; // rdx
  _QWORD *v16; // rax

  v2 = *a2;
  if ( *((DMMVIDPNTARGETMODESET **)*a2 + 6) == (DMMVIDPNTARGETMODESET *)((char *)*a2 + 48) )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = *a2;
    *(_QWORD *)(v9 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v9);
    v10 = -1071774967;
LABEL_10:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
    return v10;
  }
  if ( v2 != *(DMMVIDPNTARGETMODESET **)(a1 + 112) )
  {
    v11 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v11 + 24) = *a2;
    *(_QWORD *)(v11 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v11);
    v10 = -1071774928;
    goto LABEL_10;
  }
  v5 = (_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL);
  if ( !v6 )
    goto LABEL_4;
  v12 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v2 + 24, v6);
  if ( !v12 )
  {
    v10 = -1071774958;
    goto LABEL_10;
  }
  DMMVIDPNTARGETMODESET::PinMode(v2, *(_DWORD *)(v12 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136LL) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96LL) > 1
    && !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(*(_QWORD *)(a1 + 120), *v5) )
  {
    v15 = *(_QWORD **)(v13 + 24);
    v16 = (_QWORD *)(v14 + 8);
    if ( *v15 != v13 + 16 )
      __fastfail(3u);
    *v16 = v13 + 16;
    *(_QWORD *)(v14 + 16) = v15;
    *v15 = v16;
    *(_QWORD *)(v13 + 24) = v16;
    ++*(_QWORD *)(v13 + 32);
  }
  v7 = *a2;
  *a2 = 0LL;
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, v7);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a1 + 112, 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
  return 0LL;
}
