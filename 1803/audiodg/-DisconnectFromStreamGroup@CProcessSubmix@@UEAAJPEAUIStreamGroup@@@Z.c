/*
 * XREFs of ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002390
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140004BF0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015040 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015140 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::DisconnectFromStreamGroup(
        CProcessSubmix *this,
        __int64 (__fastcall ***a2)(struct IStreamGroup *, GUID *, struct ISubmix **))
{
  __int64 (__fastcall **v4)(struct IStreamGroup *, GUID *, struct ISubmix **); // rax
  __int64 (__fastcall *v5)(struct IStreamGroup *, GUID *, struct ISubmix **); // rax
  int v6; // eax
  unsigned int v7; // ebx
  CSubmixImpl *v8; // rcx
  void (__fastcall *v9)(CSubmixImpl *__hidden, struct ISubmix *); // rax
  void (*v10)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISubmix *v15; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 152);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *a2;
  v15 = 0LL;
  v5 = *v4;
  if ( (char *)v5 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
    v6 = ATL::CComObject<CStreamGroup>::QueryInterface(a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v15);
  else
    v6 = v5((struct IStreamGroup *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)v6,
      (int)lpCriticalSection);
  }
  else
  {
    v8 = (CProcessSubmix *)((char *)this + 16);
    v9 = *(void (__fastcall **)(CSubmixImpl *__hidden, struct ISubmix *))(*((_QWORD *)this + 2) + 112LL);
    if ( v9 == CSubmixImpl::DisconnectFromRightSubmix )
      CSubmixImpl::DisconnectFromRightSubmix(v8, v15);
    else
      v9(v8, v15);
    v7 = 0;
  }
  if ( v15 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v10 == (char *)ATL::CComObject<CStreamGroup>::Release )
      ATL::CComObject<CStreamGroup>::Release(v15);
    else
      v10();
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
