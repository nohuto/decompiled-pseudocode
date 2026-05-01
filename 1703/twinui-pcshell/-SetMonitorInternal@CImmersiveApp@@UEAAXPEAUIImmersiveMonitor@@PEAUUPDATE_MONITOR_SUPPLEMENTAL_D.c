/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180051DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180050130 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::SetMonitorInternal(
        _QWORD *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        char a4)
{
  bool v8; // di
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rax
  __int64 v12; // rcx
  BOOL v13; // r15d
  struct IUnknown *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  PSRWLOCK v18; // rdi
  PVOID Ptr; // rcx
  bool v20; // zf
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-30h] BYREF
  int (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-28h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-20h]
  _QWORD v28[3]; // [rsp+58h] [rbp-18h] BYREF

  v28[2] = -2LL;
  v8 = (a4 & 8) != 0;
  v9 = 0LL;
  v27 = 0LL;
  if ( (a4 & 8) != 0 )
    v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[76];
  else
    v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[75];
  if ( v10 )
  {
    v9 = v10;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[1])(v10);
    v27 = v9;
  }
  if ( !(unsigned int)SHIsSameObject(a2, v9)
    && ((a4 & 1) == 0 || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1) == 0) )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(_QWORD *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*a1 + 464LL))(a1, &v26);
    if ( v8 )
    {
      if ( (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[76] != a2 )
      {
        if ( a2 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
        v12 = a1[76];
        a1[76] = a2;
LABEL_20:
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    else if ( (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[75] != a2 )
    {
      if ( a2 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
      v12 = a1[75];
      a1[75] = a2;
      goto LABEL_20;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 400LL))(a1) && (a4 & 6) != 0 )
    {
      v13 = (a4 & 2) == 0;
      v23 = 0LL;
      if ( a3 )
      {
        v23 = *a3;
      }
      else
      {
        v24 = 0LL;
        v14 = (struct IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)(a1 - 6), v28);
        v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
        IAMPrivate_QueryObject(
          v14,
          (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          (void **)v15);
        v16 = v28[0];
        if ( v28[0] )
        {
          v28[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 112LL))(v24, &v23);
        v17 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      v18 = CApplicationManagerUtility::g_pIAMGlobals;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
      if ( Ptr )
      {
        v20 = *((_DWORD *)CApplicationManagerUtility::g_pIAMGlobals[1].Ptr + (_QWORD)Ptr - 1) == 1;
      }
      else if ( LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr)
             && (unsigned int)SHIsSameObject(
                                a2,
                                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[6].Ptr) )
      {
        v20 = LODWORD(v18[5].Ptr) == 1;
      }
      else
      {
        v20 = HIDWORD(v18[5].Ptr) == 1;
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, BOOL))(*a1 + 264LL))(
        a1,
        (unsigned int)v20 + 1,
        (unsigned int)v23,
        HIDWORD(v23),
        v13);
    }
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*a1 + 464LL))(a1, &v25);
    if ( !(unsigned int)SHIsSameObject(v26, v25) )
    {
      LODWORD(v28[0]) = 17;
      v28[1] = 0LL;
      CImmersiveApp::_ScheduleApplicationNotifications(
        (CImmersiveApp *)(a1 - 11),
        (const struct APP_CHANGE_INFO *const)v28,
        1uLL);
    }
    v21 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
    }
    v22 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v22)[2])(v22);
    }
  }
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
}
