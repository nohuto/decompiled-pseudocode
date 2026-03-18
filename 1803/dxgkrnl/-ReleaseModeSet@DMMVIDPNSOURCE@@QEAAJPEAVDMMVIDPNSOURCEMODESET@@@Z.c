/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003CC4
 * Callers:
 *     ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00BAF30 (-ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNS.c)
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00C7220 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0045220 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET *a2)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((struct DMMVIDPNSOURCEMODESET ***)a2 + 14) == this )
  {
    if ( a2 == this[15] )
    {
      v7 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v7 + 24) = a2;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v7);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 15, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v9);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                            this[14],
                            a2) )
    {
      v11 = (_QWORD *)((char *)a2 + 8);
      v12 = *((_QWORD *)a2 + 1);
      if ( *(struct DMMVIDPNSOURCEMODESET **)(v12 + 8) != (struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 8)
        || (v13 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v13 != v11) )
      {
        __fastfail(3u);
      }
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v10 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v6[3] = *((_QWORD *)a2 + 14);
    v6[4] = a2;
    v6[5] = this;
    WdLogEvent5_WdError(v6);
    return 3223192368LL;
  }
}
