/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001D670
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B0C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBa.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18001D384 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800978D0 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180097C78 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x18013E18C (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  int v5; // r15d
  RTL_SRWLOCK *v6; // rdi
  RTL_SRWLOCK *v7; // rbx
  __int64 *v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  CWinRTApplicationView **v12; // r13
  __int64 v13; // rax
  CWinRTApplicationView **v14; // rdi
  bool v15; // si
  char v16; // bl
  RTL_SRWLOCK *v17; // rbx
  __int64 v18; // rbx
  unsigned int (__fastcall *v19)(__int64); // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  ULONGLONG TickCount64; // r14
  RTL_SRWLOCK *v23; // rsi
  int v24; // edi
  char *Ptr; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  int v31; // [rsp+28h] [rbp-89h]
  RTL_SRWLOCK *SRWLock; // [rsp+38h] [rbp-79h]
  __int64 v33; // [rsp+40h] [rbp-71h] BYREF
  int v34; // [rsp+48h] [rbp-69h]
  _QWORD v35[2]; // [rsp+50h] [rbp-61h] BYREF
  __int128 v36; // [rsp+60h] [rbp-51h] BYREF
  __int64 v37; // [rsp+70h] [rbp-41h]
  __int64 v38; // [rsp+78h] [rbp-39h]
  __int64 v39; // [rsp+80h] [rbp-31h]
  RTL_SRWLOCK *v40; // [rsp+88h] [rbp-29h]
  __int64 v41; // [rsp+90h] [rbp-21h]
  char v42[32]; // [rsp+98h] [rbp-19h] BYREF
  char v43[80]; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v39 = -2LL;
  v5 = a3;
  v6 = a1;
  v7 = a1 + 13;
  SRWLock = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v40 = v7;
  if ( !v5 )
  {
    v38 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v8 = (__int64 *)&v6[8];
    v9 = 0LL;
    v10 = 0LL;
    if ( v8[1] )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = (CWinRTApplicationView **)ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                                          (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v42,
                                          (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v36);
        v31 = (int)v12;
        v13 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v43,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)(v11 + *v8));
        v14 = (CWinRTApplicationView **)v13;
        v41 = v13;
        v15 = *(_DWORD *)(v13 + 8) == 1 && (unsigned int)SHIsSameObject(*(struct IUnknown **)v13, (struct IUnknown *)a2);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14 + 2);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12 + 2);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v12);
        if ( v15 )
          break;
        ++v10;
        v11 += 32LL;
        if ( v10 >= v8[1] )
        {
          v9 = 0LL;
          goto LABEL_11;
        }
      }
      v9 = v10;
      v16 = 1;
    }
    else
    {
LABEL_11:
      v16 = 0;
    }
    if ( (_QWORD)v36 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36 + 16LL))(v36);
    if ( v16 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        v8,
        v9);
      v17 = a1;
      if ( !v9 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a1[21]);
      goto LABEL_47;
    }
    v6 = a1;
    v5 = a3;
  }
  v18 = a2;
  v33 = a2;
  if ( a2 )
  {
    v19 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL);
    if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
    {
      v20 = *(_QWORD *)(a2 + 192);
      while ( v20 >= 0 )
      {
        if ( (_DWORD)v20 != 0x7FFFFFFF )
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 192), v20 + 1, v20);
          if ( v21 != v20 )
            continue;
        }
        v18 = v33;
        goto LABEL_30;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v20 + 16));
      v18 = v33;
    }
    else if ( v19 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef(a2);
    }
    else
    {
      v19(a2);
    }
  }
LABEL_30:
  v34 = v5;
  v35[0] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v35[1] = TickCount64;
  v23 = v6 + 8;
  v24 = 0;
  Ptr = (char *)v23[1].Ptr;
  if ( Ptr != v23[3].Ptr
    || (v24 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                v23,
                Ptr + 1),
        v24 >= 0) )
  {
    v26 = (__int64)v23->Ptr + 32 * (__int64)v23[1].Ptr++;
    if ( v26 )
    {
      *(_QWORD *)v26 = 0LL;
      if ( (__int64 *)v26 != &v33 )
      {
        *(_QWORD *)v26 = v18;
        v18 = 0LL;
      }
      *(_DWORD *)(v26 + 8) = v5;
      *(_QWORD *)(v26 + 16) = 0LL;
      if ( (_QWORD *)(v26 + 16) != v35 )
      {
        *(_QWORD *)(v26 + 16) = a4;
        a4 = 0LL;
      }
      *(_QWORD *)(v26 + 24) = TickCount64;
    }
  }
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v24 < 0 )
  {
    v27 = (unsigned int)v24;
    v28 = 233LL;
    goto LABEL_49;
  }
  v17 = a1;
LABEL_47:
  v29 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)&v17[-1]);
  v24 = v29;
  if ( v29 >= 0 )
    goto LABEL_50;
  v27 = (unsigned int)v29;
  v28 = 235LL;
LABEL_49:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)v27,
    v31);
LABEL_50:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v24;
}
