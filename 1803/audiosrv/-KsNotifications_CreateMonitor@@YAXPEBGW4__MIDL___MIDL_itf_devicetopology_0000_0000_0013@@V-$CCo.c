/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x1800554DC
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x1800553AC (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ?AddRef@CKsNotificationsMonitor@@UEAAKXZ @ 0x180018360 (-AddRef@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x1800556F0 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x180055850 (-Release@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x1800558DC (-AddTail@-$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall KsNotifications_CreateMonitor(unsigned __int16 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall ***v7)(_QWORD, GUID *, struct IPart **); // r10
  struct IPart *v8; // rcx
  void **v9; // rax
  CKsNotificationsMonitor *v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(CKsNotificationsMonitor *); // rax
  unsigned int (__fastcall *v13)(CKsNotificationsMonitor *__hidden); // rax
  struct IPart *v15; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v18; // [rsp+50h] [rbp-10h]

  v16[1] = -2LL;
  v7 = (void (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v8 = 0LL;
  v15 = 0LL;
  if ( v7 )
  {
    (**v7)(v7, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v15);
    v8 = v15;
  }
  LOBYTE(v9) = v8 != 0LL;
  if ( v8 )
  {
    v9 = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (CKsNotificationsMonitor *)v9;
    v16[0] = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x28uLL);
      *((_DWORD *)v10 + 3) = 0;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_DWORD *)v10 + 6) = 1;
      *((_QWORD *)v10 + 4) = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      v9 = &CKsSoftwareNotificationsMonitor::`vftable';
      *(_QWORD *)v10 = &CKsSoftwareNotificationsMonitor::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v16[0] = 0LL;
      if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, _QWORD *))v15->lpVtbl->Activate)(
             v15,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             v16) < 0
        || (LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)v16[0] + 24LL))(
                            v16[0],
                            &gConnectorEnablingInfo,
                            2LL),
            (int)v9 >= 0) )
      {
        if ( CKsNotificationsMonitor::Initialize(v10, v15, a1) >= 0 )
        {
          lpCriticalSection = &g_csKsNotificationMonitors;
          v18 = 0;
          ATL::CCritSecLock::Lock(&lpCriticalSection);
          if ( TList<CKsNotificationsMonitor>::AddTail(v11, v10) )
          {
            v12 = *(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 8LL);
            if ( v12 == CKsNotificationsMonitor::AddRef )
              CKsNotificationsMonitor::AddRef(v10);
            else
              v12(v10);
          }
          if ( v18 )
            LeaveCriticalSection(lpCriticalSection);
        }
        v13 = *(unsigned int (__fastcall **)(CKsNotificationsMonitor *__hidden))(*(_QWORD *)v10 + 16LL);
        if ( v13 == CKsNotificationsMonitor::Release )
          LOBYTE(v9) = CKsNotificationsMonitor::Release(v10);
        else
          LOBYTE(v9) = v13(v10);
      }
      if ( v16[0] )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
    }
    v8 = v15;
  }
  if ( v8 )
    LOBYTE(v9) = ((__int64 (__fastcall *)(struct IPart *))v8->lpVtbl->Release)(v8);
  if ( *a3 )
    LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    LOBYTE(v9) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return (char)v9;
}
