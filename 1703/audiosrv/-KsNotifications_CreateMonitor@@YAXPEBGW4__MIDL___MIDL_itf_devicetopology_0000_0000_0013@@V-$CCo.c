/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x180040FC0
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180040E90 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddRef@CKsNotificationsMonitor@@UEAAKXZ @ 0x18002EFE0 (-AddRef@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x180041380 (-Release@CKsNotificationsMonitor@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall KsNotifications_CreateMonitor(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall ***v7)(_QWORD, GUID *, struct _RTL_CRITICAL_SECTION **); // r10
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  CKsNotificationsMonitor *v9; // rax
  CKsNotificationsMonitor *v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  SIZE_T v14; // rbx
  _WORD *v15; // rax
  SIZE_T v16; // rbx
  SIZE_T v17; // rdx
  __int64 v18; // rdi
  __int16 v19; // cx
  LPCRITICAL_SECTION v20; // rcx
  LPCRITICAL_SECTION v21; // rbx
  int v22; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v24; // rax
  __int64 (__fastcall *v25)(CKsNotificationsMonitor *); // rax
  unsigned int (__fastcall *v26)(CKsNotificationsMonitor *__hidden); // rax
  __int64 v27; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v29; // [rsp+38h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v31[3]; // [rsp+48h] [rbp-18h] BYREF

  v31[1] = -2LL;
  v7 = (void (__fastcall ***)(_QWORD, GUID *, struct _RTL_CRITICAL_SECTION **))*a3;
  v8 = 0LL;
  v30 = 0LL;
  if ( v7 )
  {
    (**v7)(v7, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v30);
    v8 = v30;
  }
  if ( v8 )
  {
    v9 = (CKsNotificationsMonitor *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    v31[0] = v9;
    if ( !v9 )
    {
LABEL_47:
      v8 = v30;
      goto LABEL_48;
    }
    memset(v9, 0, 0x28uLL);
    *((_DWORD *)v10 + 3) = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_DWORD *)v10 + 6) = 1;
    *((_QWORD *)v10 + 4) = 0LL;
    ++CKsNotificationsMonitor::m_cRefAll;
    *(_QWORD *)v10 = &CKsSoftwareNotificationsMonitor::`vftable';
    v31[0] = 0LL;
    if ( ((int (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64, GUID *, _QWORD *))v30->DebugInfo[2].CriticalSection)(
           v30,
           23LL,
           &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
           v31) >= 0
      && (*(int (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)v31[0] + 24LL))(
           v31[0],
           &gConnectorEnablingInfo,
           2LL) < 0 )
    {
      v27 = v31[0];
      if ( !v31[0] )
        goto LABEL_47;
      goto LABEL_46;
    }
    v11 = v30;
    lpCriticalSection = 0LL;
    if ( *((struct _RTL_CRITICAL_SECTION **)v10 + 4) != v30 )
    {
      if ( v30 )
        ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v30->DebugInfo->CriticalSection)(v30);
      v12 = *((_QWORD *)v10 + 4);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *((_QWORD *)v10 + 4) = v11;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a1 + 2 * v13) );
    v14 = 2 * v13 + 2;
    v15 = CoTaskMemAlloc(v14);
    *((_QWORD *)v10 + 2) = v15;
    if ( !v15 )
    {
      v22 = -2147024882;
      goto LABEL_33;
    }
    v16 = v14 >> 1;
    if ( v16 - 1 > 0x7FFFFFFE )
    {
      if ( !v16 )
        goto LABEL_24;
    }
    else
    {
      v17 = 2147483646 - v16;
      v18 = a1 - (_QWORD)v15;
      while ( v16 + v17 )
      {
        v19 = *(_WORD *)((char *)v15 + v18);
        if ( !v19 )
          break;
        *v15++ = v19;
        if ( !--v16 )
          goto LABEL_59;
      }
      if ( v16 )
        goto LABEL_23;
LABEL_59:
      --v15;
    }
LABEL_23:
    *v15 = 0;
LABEL_24:
    v20 = lpCriticalSection;
    if ( lpCriticalSection != v11 )
    {
      v21 = lpCriticalSection;
      v20 = 0LL;
      lpCriticalSection = 0LL;
      if ( v11 )
      {
        ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, LPCRITICAL_SECTION *))v11->DebugInfo->Type)(
          v11,
          &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
          &lpCriticalSection);
        v20 = lpCriticalSection;
      }
      if ( v21 )
      {
        ((void (__fastcall *)(LPCRITICAL_SECTION))v21->DebugInfo->ProcessLocksList.Flink)(v21);
        v20 = lpCriticalSection;
      }
    }
    v22 = (*(__int64 (__fastcall **)(LPCRITICAL_SECTION, __int64))&v20->DebugInfo->EntryCount)(v20, (__int64)v10 + 8);
    if ( v22 >= 0 )
    {
      v22 = ((__int64 (__fastcall *)(LPCRITICAL_SECTION, char *))lpCriticalSection->DebugInfo->ProcessLocksList.Blink)(
              lpCriticalSection,
              (char *)v10 + 28);
      if ( v22 >= 0 )
      {
        v22 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, CKsNotificationsMonitor *))v11->DebugInfo[2].ProcessLocksList.Flink)(
                v11,
                &CKsNotificationsMonitor::m_ctx,
                v10);
        if ( v22 >= 0 )
          *((_DWORD *)v10 + 3) = 1;
      }
    }
LABEL_33:
    if ( lpCriticalSection )
      ((void (__fastcall *)(LPCRITICAL_SECTION))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(lpCriticalSection);
    if ( v22 >= 0 )
    {
      lpCriticalSection = &g_csKsNotificationMonitors;
      v29 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      ProcessHeap = GetProcessHeap();
      v24 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
      if ( v24 )
      {
        *v24 = 0LL;
        v24[1] = 0LL;
        v24[2] = v10;
        v24[1] = qword_18012C430;
        *v24 = 0LL;
        if ( qword_18012C430 )
          *(_QWORD *)qword_18012C430 = v24;
        else
          g_lstKsNotificationMonitors = v24;
        qword_18012C430 = (__int64)v24;
        ++dword_18012C438;
        v25 = *(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 8LL);
        if ( v25 == CKsNotificationsMonitor::AddRef )
          CKsNotificationsMonitor::AddRef(v10);
        else
          v25(v10);
      }
      if ( v29 )
        LeaveCriticalSection(lpCriticalSection);
    }
    v26 = *(unsigned int (__fastcall **)(CKsNotificationsMonitor *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v26 == CKsNotificationsMonitor::Release )
      CKsNotificationsMonitor::Release(v10);
    else
      v26(v10);
    v27 = v31[0];
    if ( !v31[0] )
      goto LABEL_47;
LABEL_46:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    goto LABEL_47;
  }
LABEL_48:
  if ( v8 )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v8->DebugInfo->ProcessLocksList.Flink)(v8);
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
}
