/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18004C6F0
 * Callers:
 *     _lambda_b1e4bdca0075c456ca4a487c57ae0709_::operator() @ 0x180008E28 (_lambda_b1e4bdca0075c456ca4a487c57ae0709_--operator().c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180003ECC (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FE4 (--4-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180071448 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveApp::SetMonitorInternal(RTL_SRWLOCK *a1, struct IUnknown *a2, __int64 *a3, char a4)
{
  int v8; // r15d
  __int64 Ptr; // rbx
  __int64 result; // rax
  int v11; // r12d
  BOOL v12; // esi
  __int64 (__fastcall *v13)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v14; // rcx
  char IsReportingEnabled; // al
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  void *v17[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IUnknown *v18; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-18h] BYREF
  struct IUnknown *v21; // [rsp+B8h] [rbp+48h] BYREF
  int v22; // [rsp+C8h] [rbp+58h]

  v20[1] = -2LL;
  v22 = 0;
  v8 = a4 & 8;
  Ptr = 0LL;
  v20[0] = 0LL;
  if ( (a4 & 8) != 0 )
  {
    result = (__int64)Microsoft::WRL::ComPtr<IViewWrapperInternal>::operator=(v20, &a1[78].Ptr);
    Ptr = v20[0];
  }
  else
  {
    result = (__int64)a1[77].Ptr;
    if ( result )
    {
      Ptr = (__int64)a1[77].Ptr;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(Ptr);
      v20[0] = Ptr;
    }
  }
  if ( !a2 || !Ptr )
    goto LABEL_32;
  if ( a2 != (struct IUnknown *)Ptr )
  {
    v19 = 0LL;
    v21 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v19) < 0 )
      goto LABEL_32;
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))Ptr)(
            Ptr,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v21);
    if ( v11 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
    if ( v11 < 0 || (result = (__int64)v21, v19 != v21) )
    {
LABEL_32:
      if ( (a4 & 1) == 0 || (result = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 50))(a1), !(_BYTE)result) )
      {
        v19 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
        (*((void (__fastcall **)(RTL_SRWLOCK *, struct IUnknown **))a1->Ptr + 58))(a1, &v19);
        Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=(
          (char *)a1 + (v8 != 0 ? 624LL : 616LL),
          a2);
        if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 50))(a1) && (a4 & 6) != 0 )
        {
          v12 = (a4 & 2) == 0;
          v16 = 0LL;
          if ( a3 )
          {
            v16 = *a3;
          }
          else
          {
            v17[0] = 0LL;
            v21 = 0LL;
            v22 = 2;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
            v13 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)a1[-8].Ptr + 4);
            v14 = a1 - 8;
            if ( v13 == CWRLObjectWithGITSite::GetSite )
              CWRLObjectWithGITSite::GetSite(v14, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v21);
            else
              v13(v14, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v21);
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v17);
            IAMPrivate_QueryObject(
              v21,
              (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              v17);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
            (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v17[0] + 120LL))(v17[0], &v16);
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v17);
          }
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 a2,
                                 0LL);
          (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, _QWORD, _QWORD, BOOL))a1->Ptr + 33))(
            a1,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            (unsigned int)v16,
            HIDWORD(v16),
            v12);
        }
        v18 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
        (*((void (__fastcall **)(RTL_SRWLOCK *, struct IUnknown **))a1->Ptr + 58))(a1, &v18);
        if ( !(unsigned int)SHIsSameObject(v19, v18) )
        {
          LODWORD(v17[0]) = 17;
          v17[1] = 0LL;
          CImmersiveApp::_ScheduleApplicationNotifications(a1 - 14, (const struct APP_CHANGE_INFO *const)v17, 1uLL);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
        result = Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v19);
      }
    }
  }
  if ( Ptr )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return result;
}
