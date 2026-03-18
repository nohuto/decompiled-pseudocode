/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8
 * Callers:
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00D9040 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET *a2)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((struct DMMVIDPNTARGETMODESET ***)a2 + 14) == this )
  {
    if ( a2 == this[14] )
    {
      v7 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v7 + 24) = a2;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v7);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v9);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                            this[15],
                            a2) )
    {
      v11 = (_QWORD *)((char *)a2 + 8);
      v12 = *((_QWORD *)a2 + 1);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v12 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 8)
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
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError();
    v6[3] = *((_QWORD *)a2 + 14);
    v6[4] = a2;
    v6[5] = this;
    WdLogEvent5_WdError(v6);
    return 3223192368LL;
  }
}
