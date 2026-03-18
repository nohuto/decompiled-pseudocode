/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A420
 * Callers:
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00AB9A0 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002410 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCEMODESET *a2,
        __int64 a3,
        __int64 a4)
{
  struct DMMVIDPNSOURCEMODESET *v4; // rbx
  __int64 v7; // r10
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v4 = a2;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((DMMVIDPNSOURCE **)v4 + 14) == this )
  {
    if ( v4 == *((struct DMMVIDPNSOURCEMODESET **)this + 15) )
    {
      v12 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v12 + 24) = v4;
      *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v12);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 120, 0LL);
      if ( *((_DWORD *)v4 + 24) != 1 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v13, a2, v14, v15);
        WdLogEvent5_WdAssertion(v16);
      }
    }
    if ( *((_DWORD *)v4 + 24) == 1
      && DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(*((_QWORD *)this + 14), (__int64)v4) )
    {
      v8 = (_QWORD *)((char *)v4 + 8);
      a2 = (struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)v4 + 1);
      v9 = (_QWORD *)*((_QWORD *)v4 + 2);
      if ( *((struct DMMVIDPNSOURCEMODESET **)a2 + 1) != (struct DMMVIDPNSOURCEMODESET *)((char *)v4 + 8)
        || (_QWORD *)*v9 != v8 )
      {
        __fastfail(3u);
      }
      *v9 = a2;
      *((_QWORD *)a2 + 1) = v9;
      *v8 = 0LL;
      *((_QWORD *)v4 + 2) = 0LL;
      --*(_QWORD *)(v7 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)v4 + 88), (__int64)a2);
    return 0LL;
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v11[3] = *((_QWORD *)v4 + 14);
    v11[4] = v4;
    v11[5] = this;
    WdLogEvent5_WdError(v11);
    return 3223192368LL;
  }
}
