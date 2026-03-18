/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003B98
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00D9970 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024DD0 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0045220 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00BE024 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET **a2)
{
  struct DMMVIDPNSOURCEMODESET **v4; // rsi
  struct DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DMMVIDPNSOURCEMODESET *v12; // r14
  __int64 v13; // r11
  _QWORD *v14; // rdx
  _QWORD *v15; // rax

  if ( a2[6] == (struct DMMVIDPNSOURCEMODESET *)(a2 + 6) )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v7);
    return 3223192328LL;
  }
  if ( a2 != (struct DMMVIDPNSOURCEMODESET **)this[15] )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v8);
    return 3223192368LL;
  }
  v4 = this + 13;
  v5 = this[13];
  if ( *((_QWORD *)v5 + 18) )
  {
    v9 = Set<DMMVIDPNSOURCEMODE>::FindByValue(a2 + 3);
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdError(v10);
      WdLogEvent5_WdError(v11);
      return 3223192338LL;
    }
    DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)a2, *(_DWORD *)(v9 + 24));
    v5 = *v4;
  }
  *((_BYTE *)v5 + 136) = 0;
  if ( (unsigned __int64)*((int *)*v4 + 24) > 1 )
  {
    v12 = *v4;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             this[14],
                             *v4) )
    {
      v14 = *(_QWORD **)(v13 + 24);
      v15 = (_QWORD *)((char *)v12 + 8);
      if ( *v14 != v13 + 16 )
        __fastfail(3u);
      *v15 = v13 + 16;
      *((_QWORD *)v12 + 2) = v14;
      *v14 = v15;
      *(_QWORD *)(v13 + 24) = v15;
      ++*(_QWORD *)(v13 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v4, a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 15, 0LL);
  return 0LL;
}
