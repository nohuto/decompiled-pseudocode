/*
 * XREFs of ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140010D40
 * Callers:
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010740 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x140001660 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140014B10 (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixDisconnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v6; // rcx
  struct ISubmixInternal ***Next; // rax
  struct ISubmixInternal **v8; // rbx
  _QWORD *i; // rdx
  unsigned int v10; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(bool (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 136LL);
  if ( v4 == CSubmixImpl::IsActive )
    IsActive = CSubmixImpl::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x500,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)lpCriticalSection);
  }
  else
  {
    v15 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v15 )
    {
      while ( 1 )
      {
        Next = (struct ISubmixInternal ***)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                             v6,
                                             &v15);
        v8 = *Next;
        if ( **Next == a2 )
          break;
        if ( !v15 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v8 = 0LL;
    }
    if ( v8 )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 10); i && (struct ISubmixInternal **)i[2] != v8; i = (_QWORD *)*i )
        ;
      ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt((char *)this + 80);
      operator delete(v8);
    }
    v10 = 0;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
