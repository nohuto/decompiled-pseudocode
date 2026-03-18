/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000848C
 * Callers:
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00F3F90 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0044E0C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r10
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((struct DMMVIDPNTARGETMODESET ***)a2 + 14) == this )
  {
    if ( a2 == this[14] )
    {
      v9 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v9 + 24) = a2;
      *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v9);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v14);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(this[15], a2) )
    {
      v16 = (_QWORD *)((char *)a2 + 8);
      v17 = *((_QWORD *)a2 + 1);
      v18 = (_QWORD *)*((_QWORD *)a2 + 2);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v17 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 8)
        || (_QWORD *)*v18 != v16 )
      {
        __fastfail(3u);
      }
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v15 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v8[3] = *((_QWORD *)a2 + 14);
    v8[4] = a2;
    v8[5] = this;
    WdLogEvent5_WdError(v8);
    return 3223192368LL;
  }
}
