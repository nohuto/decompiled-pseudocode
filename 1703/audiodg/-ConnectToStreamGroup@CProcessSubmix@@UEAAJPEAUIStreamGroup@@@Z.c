/*
 * XREFs of ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140002490
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008CE0 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140008DE0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::ConnectToStreamGroup(
        CProcessSubmix *this,
        __int64 (__fastcall ***a2)(struct IStreamGroup *, GUID *, void **))
{
  __int64 (__fastcall **v4)(struct IStreamGroup *, GUID *, void **); // rax
  __int64 (__fastcall *v5)(struct IStreamGroup *, GUID *, void **); // rax
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rcx
  __int64 (__fastcall *v9)(char *, void *, _QWORD); // rax
  int v10; // eax
  void (*v11)(void); // rax
  __int64 v13; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *Block; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 152);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *a2;
  Block = 0LL;
  v5 = *v4;
  if ( (char *)v5 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
    v6 = ATL::CComObject<CStreamGroup>::QueryInterface(a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &Block);
  else
    v6 = v5((struct IStreamGroup *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &Block);
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = 84LL;
  }
  else
  {
    v8 = (char *)this + 16;
    v9 = *(__int64 (__fastcall **)(char *, void *, _QWORD))(*((_QWORD *)this + 2) + 216LL);
    if ( (char *)v9 == (char *)CSubmixImpl::ConnectToRightSubmix )
      v10 = CSubmixImpl::ConnectToRightSubmix(v8, Block, 0LL);
    else
      v10 = v9(v8, Block, 0LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v13 = 86LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)v7,
    (int)lpCriticalSection);
LABEL_8:
  if ( Block )
  {
    v11 = *(void (**)(void))(*(_QWORD *)Block + 16LL);
    if ( (char *)v11 == (char *)ATL::CComObject<CStreamGroup>::Release )
      ATL::CComObject<CStreamGroup>::Release(Block);
    else
      v11();
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
