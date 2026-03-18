/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000AF08
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00D3580 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000B5A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C001DFF8 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D701C (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(__int64 a1, DMMVIDPNSOURCEMODESET **a2)
{
  DMMVIDPNSOURCEMODESET *v4; // rcx
  _QWORD *v5; // rsi
  DMMVIDPNSOURCEMODESET *v6; // rdx
  __int64 v8; // r10
  __int64 v9; // r11
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v4 = *a2;
  if ( *((DMMVIDPNSOURCEMODESET **)*a2 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)*a2 + 48) )
  {
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = *a2;
    *(_QWORD *)(v12 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v12);
    v13 = -1071774968;
LABEL_13:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(a2, 0LL);
    return v13;
  }
  if ( v4 != *(DMMVIDPNSOURCEMODESET **)(a1 + 120) )
  {
    v14 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v14 + 24) = *a2;
    *(_QWORD *)(v14 + 32) = *(unsigned int *)(a1 + 24);
    WdLogEvent5_WdError(v14);
    v13 = -1071774928;
    goto LABEL_13;
  }
  v5 = (_QWORD *)(a1 + 104);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 144LL) )
    goto LABEL_4;
  v15 = Set<DMMVIDPNSOURCEMODE>::FindByValue((char *)v4 + 24);
  if ( !v15 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    WdLogEvent5_WdError(v17);
    v13 = -1071774958;
    goto LABEL_13;
  }
  DMMVIDPNSOURCEMODESET::PinMode(*a2, *(_DWORD *)(v15 + 24));
LABEL_4:
  *(_BYTE *)(*v5 + 136LL) = 0;
  if ( (unsigned __int64)*(int *)(*v5 + 96LL) > 1
    && !(unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
                           *(_QWORD *)(a1 + 112),
                           *v5) )
  {
    v10 = *(_QWORD **)(v8 + 24);
    v11 = (_QWORD *)(v9 + 8);
    if ( *v10 != v8 + 16 )
      __fastfail(3u);
    *v11 = v8 + 16;
    *(_QWORD *)(v9 + 16) = v10;
    *v10 = v11;
    *(_QWORD *)(v8 + 24) = v11;
    ++*(_QWORD *)(v8 + 32);
  }
  v6 = *a2;
  *a2 = 0LL;
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(a1 + 104, v6);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(a1 + 120, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(a2, 0LL);
  return 0LL;
}
