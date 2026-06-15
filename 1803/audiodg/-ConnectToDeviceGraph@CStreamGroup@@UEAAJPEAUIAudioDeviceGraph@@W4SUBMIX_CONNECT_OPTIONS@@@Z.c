/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140002170
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140004D40 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015380 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x14002FE24 (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD); // rax
  int v12; // eax
  __int64 v14; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v16; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v18; // [rsp+40h] [rbp+10h] BYREF

  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 160);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = *a2;
  v18 = 0LL;
  v7 = *v6;
  if ( (char *)v7 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
    v8 = ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v18);
  else
    v8 = v7(a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 231LL;
  }
  else if ( *(_QWORD *)(a1 + 288) )
  {
    v9 = -2005139410;
    v14 = 234LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 297) )
    {
      wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(a1 + 288, v18);
LABEL_9:
      v9 = 0;
      goto LABEL_10;
    }
    v10 = a1 + 24;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 24) + 216LL);
    if ( v11 == CSubmixImpl::ConnectToRightSubmix )
      v12 = CSubmixImpl::ConnectToRightSubmix(v10, v18, a3);
    else
      v12 = v11(v10, v18, a3);
    v9 = v12;
    if ( v12 >= 0 )
      goto LABEL_9;
    v14 = 239LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)v9,
    (int)lpCriticalSection);
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
