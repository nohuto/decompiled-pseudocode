/*
 * XREFs of ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006DE0
 * Callers:
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140006670 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x1400023A0 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x140003E80 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14001B1BC (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixDisconnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  _BOOL8 (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v6; // rcx
  unsigned int v7; // ebp
  struct ISubmixInternal ***Next; // rax
  struct ISubmixInternal **v9; // rbx
  _QWORD *i; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_BOOL8 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 136LL);
  if ( v4 == CSubmixImpl::IsActive )
    IsActive = CSubmixImpl::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)lpCriticalSection);
  }
  else
  {
    v7 = 0;
    v15 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v15 )
    {
      while ( 1 )
      {
        Next = (struct ISubmixInternal ***)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                             v6,
                                             &v15);
        v9 = *Next;
        if ( **Next == a2 )
          break;
        if ( !v15 )
          goto LABEL_10;
      }
      if ( v9 )
      {
        for ( i = (_QWORD *)*((_QWORD *)this + 10); i; i = (_QWORD *)*i )
        {
          if ( (struct ISubmixInternal **)i[2] == v9 )
            break;
        }
        ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt((char *)this + 80);
        operator delete(v9);
      }
    }
  }
LABEL_10:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
