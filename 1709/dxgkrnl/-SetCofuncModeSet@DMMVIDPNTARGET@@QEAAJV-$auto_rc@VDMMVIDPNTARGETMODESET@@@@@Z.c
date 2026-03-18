/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0004E68
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00D49B0 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005130 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00A3448 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(__int64 a1, DMMVIDPNTARGETMODESET **a2)
{
  DMMVIDPNTARGETMODESET *v2; // rsi
  _QWORD *v5; // r14
  DMMVIDPNTARGETMODESET *v6; // rdx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  _QWORD *v14; // rdx
  _QWORD *v15; // rax

  v2 = *a2;
  if ( *((DMMVIDPNTARGETMODESET **)*a2 + 6) == (DMMVIDPNTARGETMODESET *)((char *)*a2 + 48) )
  {
    v8 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v8 + 24) = *a2;
    *(_QWORD *)(v8 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v8);
    v9 = -1071774967;
LABEL_10:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
    return v9;
  }
  if ( v2 != *(DMMVIDPNTARGETMODESET **)(a1 + 112) )
  {
    v10 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v10 + 24) = *a2;
    *(_QWORD *)(v10 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v10);
    v9 = -1071774928;
    goto LABEL_10;
  }
  v5 = (_QWORD *)(a1 + 104);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL) )
    goto LABEL_4;
  v11 = Set<DMMVIDPNTARGETMODE>::FindByValue((char *)v2 + 24);
  if ( !v11 )
  {
    v9 = -1071774958;
    goto LABEL_10;
  }
  DMMVIDPNTARGETMODESET::PinMode(v2, *(_DWORD *)(v11 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136LL) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96LL) > 1
    && !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                           *(_QWORD *)(a1 + 120),
                           *v5) )
  {
    v14 = *(_QWORD **)(v12 + 24);
    v15 = (_QWORD *)(v13 + 8);
    if ( *v14 != v12 + 16 )
      __fastfail(3u);
    *v15 = v12 + 16;
    *(_QWORD *)(v13 + 16) = v14;
    *v14 = v15;
    *(_QWORD *)(v12 + 24) = v15;
    ++*(_QWORD *)(v12 + 32);
  }
  v6 = *a2;
  *a2 = 0LL;
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, v6);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a1 + 112, 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(a2, 0LL);
  return 0LL;
}
