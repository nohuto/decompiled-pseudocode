/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0151C28
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C3B3C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0027D38 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1FAC (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  char v21; // r9
  DXGADAPTER *v22; // r8
  unsigned int v23; // r11d
  int v24; // edx
  unsigned int v25; // eax
  char v26; // cl
  __int64 v27; // rax
  unsigned int v28; // ebx
  DXGCOPYPROTECTION *v29; // rax
  __int64 v30; // rcx
  DXGCOPYPROTECTION *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // esi
  DXGCOPYPROTECTION *v35; // rcx
  DXGCOPYPROTECTION **v36; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  __int64 v41; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v44[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 4911LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 4912LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v14 + 24) = 4915LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)Current + 39);
  if ( *(struct _KTHREAD **)(v15 + 8) != KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 4916LL;
    WdLogEvent5_WdAssertion(v16);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v44, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  while ( 1 )
  {
    v17 = ExUuidCreate(&Uuid);
    if ( v17 >= 0 )
      break;
    if ( v17 != -1073741267 )
    {
      v27 = WdLogNewEntry5_WdError(v18);
      v28 = -1073741801;
      *(_QWORD *)(v27 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v27);
LABEL_29:
      DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
      goto LABEL_43;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v20 = (char *)(this + 8);
  do
  {
    v21 = 1;
    v22 = this[8];
    while ( 1 )
    {
      v23 = Data1;
      if ( v22 == (DXGADAPTER *)v20 || !v22 )
        break;
      v24 = *((_DWORD *)v22 + 12);
      v25 = Data1 + 1;
      v22 = *(DXGADAPTER **)v22;
      if ( v24 != Data1 )
        v25 = Data1;
      v26 = 0;
      Data1 = v25;
      if ( v24 != v23 )
        v26 = v21;
      v21 = v26;
    }
  }
  while ( !v21 );
  v29 = (DXGCOPYPROTECTION *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v31 = v29;
  if ( v29 )
  {
    *((_QWORD *)v29 + 2) = this;
    *(_QWORD *)v29 = 0LL;
    *((_QWORD *)v29 + 1) = 0LL;
    *((_QWORD *)v29 + 5) = Current;
    *((_QWORD *)v29 + 3) = 0LL;
    *((_QWORD *)v29 + 4) = 0LL;
    *((_DWORD *)v29 + 12) = Data1;
    *((_DWORD *)v29 + 13) = a2;
    *((_DWORD *)v29 + 14) = a3;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v31 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v30);
    v28 = -1073741801;
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_29;
  }
  v33 = *(_QWORD *)v20;
  if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
    __fastfail(3u);
  *(_QWORD *)v31 = v33;
  *((_QWORD *)v31 + 1) = v20;
  *(_QWORD *)(v33 + 8) = v31;
  *(_QWORD *)v20 = v31;
  v34 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v34 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 39) + 8LL) != CurrentThread )
    {
      v38 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v38 + 24) = 534LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = (_QWORD *)((char *)Current + 296);
    v40 = (_QWORD *)((char *)v31 + 24);
    v41 = *((_QWORD *)Current + 37);
    if ( *(struct DXGPROCESS **)(v41 + 8) != (struct DXGPROCESS *)((char *)Current + 296) )
      __fastfail(3u);
    *v40 = v41;
    v40[1] = v39;
    *(_QWORD *)(v41 + 8) = v40;
    *v39 = v40;
    *a4 = Data1;
  }
  else
  {
    v35 = *(DXGCOPYPROTECTION **)v31;
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v31 + 8LL) != v31
      || (v36 = (DXGCOPYPROTECTION **)*((_QWORD *)v31 + 1), *v36 != v31) )
    {
      __fastfail(3u);
    }
    *v36 = v35;
    *((_QWORD *)v35 + 1) = v36;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v31);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  }
  v28 = v34;
LABEL_43:
  if ( v44[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
  return v28;
}
