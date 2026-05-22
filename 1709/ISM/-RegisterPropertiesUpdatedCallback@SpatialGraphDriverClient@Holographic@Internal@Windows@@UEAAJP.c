/*
 * XREFs of ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1800B5350
 * Callers:
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1800BF480 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800112EC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x1800B178C (-RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RegisterPropertiesUpdatedCallback(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *a2)
{
  int v4; // ebx
  RTL_SRWLOCK *v5; // r12
  __int64 v6; // rcx
  __int64 (__fastcall **v7)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *, GUID *, struct _FILETIME *); // rax
  int v8; // eax
  struct _FILETIME v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct _FILETIME v14; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v16; // r9
  __int64 v17; // rdx
  char *Thread; // rbx
  void **v19; // r15
  void *v20; // r13
  DWORD LastError; // edi
  struct _TP_TIMER *v22; // rcx
  __int64 v23; // rbx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  char v27; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp+48h] BYREF
  __int64 v30; // [rsp+90h] [rbp+50h] BYREF

  if ( !a2 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v4;
  }
  v5 = (RTL_SRWLOCK *)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  if ( *((_QWORD *)this + 16) )
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_47;
  }
  (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(__int64 (__fastcall ***)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *, GUID *, struct _FILETIME *))a2;
  pftDueTime = 0LL;
  v8 = (*v7)(a2, &GUID_00000038_0000_0000_c000_000000000046, &pftDueTime);
  v9 = pftDueTime;
  v4 = v8;
  if ( v8 < 0 )
    goto LABEL_8;
  v30 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct _FILETIME, __int64 *))(**(_QWORD **)&pftDueTime + 24LL))(pftDueTime, &v30);
  if ( v4 < 0 )
  {
    v10 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v9 = pftDueTime;
LABEL_8:
    if ( v9 )
    {
      pftDueTime = 0LL;
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v9 + 16LL))(v9);
    }
    goto LABEL_23;
  }
  v11 = v30;
  v12 = v30;
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    v11 = v30;
  }
  v13 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = v12;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v11 = v30;
  }
  if ( v11 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v14 = pftDueTime;
  if ( pftDueTime )
  {
    pftDueTime = 0LL;
    (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v14 + 16LL))(v14);
  }
  v4 = 0;
LABEL_23:
  if ( v4 >= 0 )
  {
    if ( *((_BYTE *)this + 98)
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)Windows::Internal::Holographic::SpatialGraphDriverClient::StaticNodesChangeIdTimerCallback,
                              (char *)this - 8,
                              0LL),
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
            (struct _TP_TIMER **)this + 17,
            ThreadpoolTimer),
          *((_QWORD *)this + 17)) )
    {
      if ( !*((_BYTE *)this + 96) || !*((_BYTE *)this + 97) && !*((_BYTE *)this + 98) )
        goto LABEL_40;
      Thread = (char *)CreateThread(
                         0LL,
                         0LL,
                         (LPTHREAD_START_ROUTINE)Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2Static,
                         (char *)this - 8,
                         0,
                         0LL);
      v19 = (void **)((char *)this + 120);
      if ( (char *)this + 120 != &v27 )
      {
        v20 = *v19;
        if ( (char *)*v19 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        {
          LastError = GetLastError();
          CloseHandle(v20);
          SetLastError(LastError);
        }
        *v19 = Thread;
        Thread = 0LL;
      }
      if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(Thread);
      if ( *v19 )
      {
LABEL_40:
        v22 = (struct _TP_TIMER *)*((_QWORD *)this + 17);
        if ( v22 )
        {
          pftDueTime = 0LL;
          SetThreadpoolTimer(v22, &pftDueTime, 0x10u, 0);
        }
        v23 = *((_QWORD *)this + 16);
        v24 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v24 && *v24 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::RegisterPropertiesUpdateCallback_(v25, 0, (char *)this - 8, a2, v23);
        }
        v4 = 0;
        goto LABEL_46;
      }
      v17 = 413LL;
    }
    else
    {
      v17 = 399LL;
    }
    v4 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v17,
           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
           v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x189,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_46:
  (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *))(*(_QWORD *)a2 + 16LL))(a2);
LABEL_47:
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return (unsigned int)v4;
}
