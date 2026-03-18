/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0173978
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0020C8C (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACAF4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  unsigned int Data1; // r14d
  char *v20; // rsi
  char v21; // cl
  DXGADAPTER *i; // rax
  __int64 v23; // rax
  unsigned int v24; // ebx
  DXGCOPYPROTECTION *v25; // rax
  __int64 v26; // rcx
  DXGCOPYPROTECTION *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // esi
  DXGCOPYPROTECTION *v31; // rcx
  DXGCOPYPROTECTION **v32; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v40[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 4905LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 4906LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v14 + 24) = 4909LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)Current + 37);
  if ( *(struct _KTHREAD **)(v15 + 8) != KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 4910LL;
    WdLogEvent5_WdAssertion(v16);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  while ( 1 )
  {
    v17 = ExUuidCreate(&Uuid);
    if ( v17 >= 0 )
      break;
    if ( v17 != -1073741267 )
    {
      v23 = WdLogNewEntry5_WdError(v18);
      v24 = -1073741801;
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v23);
LABEL_27:
      DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
      goto LABEL_41;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v20 = (char *)(this + 8);
  do
  {
    v21 = 1;
    for ( i = this[8]; i != (DXGADAPTER *)v20 && i; i = *(DXGADAPTER **)i )
    {
      if ( *((_DWORD *)i + 12) == Data1 )
      {
        v21 = 0;
        ++Data1;
      }
    }
  }
  while ( !v21 );
  v25 = (DXGCOPYPROTECTION *)operator new(0x40uLL, 0x4B677844u, PagedPool);
  v27 = v25;
  if ( v25 )
  {
    *((_QWORD *)v25 + 2) = this;
    *(_QWORD *)v25 = 0LL;
    *((_QWORD *)v25 + 1) = 0LL;
    *((_QWORD *)v25 + 5) = Current;
    *((_QWORD *)v25 + 3) = 0LL;
    *((_QWORD *)v25 + 4) = 0LL;
    *((_DWORD *)v25 + 12) = Data1;
    *((_DWORD *)v25 + 13) = a2;
    *((_DWORD *)v25 + 14) = a3;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdLowResource(v26);
    v24 = -1073741801;
    *(_QWORD *)(v28 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
    goto LABEL_27;
  }
  v29 = *(_QWORD *)v20;
  if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
    __fastfail(3u);
  *(_QWORD *)v27 = v29;
  *((_QWORD *)v27 + 1) = v20;
  *(_QWORD *)(v29 + 8) = v27;
  *(_QWORD *)v20 = v27;
  v30 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v30 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 37) + 8LL) != CurrentThread )
    {
      v34 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v34 + 24) = 544LL;
      WdLogEvent5_WdAssertion(v34);
    }
    v35 = (_QWORD *)((char *)Current + 280);
    v36 = (_QWORD *)((char *)v27 + 24);
    v37 = *((_QWORD *)Current + 35);
    if ( *(struct DXGPROCESS **)(v37 + 8) != (struct DXGPROCESS *)((char *)Current + 280) )
      __fastfail(3u);
    *v36 = v37;
    v36[1] = v35;
    *(_QWORD *)(v37 + 8) = v36;
    *v35 = v36;
    *a4 = Data1;
  }
  else
  {
    v31 = *(DXGCOPYPROTECTION **)v27;
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v27 + 8LL) != v27
      || (v32 = (DXGCOPYPROTECTION **)*((_QWORD *)v27 + 1), *v32 != v27) )
    {
      __fastfail(3u);
    }
    *v32 = v31;
    *((_QWORD *)v31 + 1) = v32;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v27);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  }
  v24 = v30;
LABEL_41:
  if ( v40[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
  return v24;
}
