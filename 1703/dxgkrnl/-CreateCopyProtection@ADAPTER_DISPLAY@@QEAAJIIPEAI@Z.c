/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01702CC
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0022DC4 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7408 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int Data1; // r14d
  char *v27; // rsi
  char v28; // cl
  DXGADAPTER *i; // rax
  __int64 v30; // rax
  unsigned int v31; // ebx
  DXGCOPYPROTECTION *v32; // rax
  __int64 v33; // rcx
  DXGCOPYPROTECTION *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // esi
  DXGCOPYPROTECTION *v41; // rdx
  DXGCOPYPROTECTION **v42; // rcx
  struct _KTHREAD *v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v50[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 4343LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 4344LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
    *(_QWORD *)(v19 + 24) = 4347LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentThread = KeGetCurrentThread();
  v21 = *((_QWORD *)Current + 33);
  if ( *(struct _KTHREAD **)(v21 + 8) != CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v21, CurrentThread, v17, v18);
    *(_QWORD *)(v22 + 24) = 4348LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v50, (struct DXGFASTMUTEX *const)(this + 3), v17, v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v50);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  while ( 1 )
  {
    v23 = ExUuidCreate(&Uuid);
    if ( v23 >= 0 )
      break;
    if ( v23 != -1073741267 )
    {
      v30 = WdLogNewEntry5_WdError(v25, v24);
      v31 = -1073741801;
      *(_QWORD *)(v30 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v30);
LABEL_27:
      DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
      goto LABEL_41;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v27 = (char *)(this + 8);
  do
  {
    v28 = 1;
    for ( i = this[8]; i != (DXGADAPTER *)v27 && i; i = *(DXGADAPTER **)i )
    {
      if ( *((_DWORD *)i + 12) == Data1 )
      {
        v28 = 0;
        ++Data1;
      }
    }
  }
  while ( !v28 );
  v32 = (DXGCOPYPROTECTION *)operator new(0x40uLL, 0x4B677844u, PagedPool);
  v34 = v32;
  if ( v32 )
  {
    *((_QWORD *)v32 + 2) = this;
    *(_QWORD *)v32 = 0LL;
    *((_QWORD *)v32 + 1) = 0LL;
    *((_QWORD *)v32 + 5) = Current;
    *((_QWORD *)v32 + 3) = 0LL;
    *((_QWORD *)v32 + 4) = 0LL;
    *((_DWORD *)v32 + 12) = Data1;
    *((_DWORD *)v32 + 13) = a2;
    *((_DWORD *)v32 + 14) = a3;
  }
  else
  {
    v34 = 0LL;
  }
  if ( !v34 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v33);
    v31 = -1073741801;
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    goto LABEL_27;
  }
  v39 = *(_QWORD *)v27;
  if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 )
    __fastfail(3u);
  *(_QWORD *)v34 = v39;
  *((_QWORD *)v34 + 1) = v27;
  *(_QWORD *)(v39 + 8) = v34;
  *(_QWORD *)v27 = v34;
  v40 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v40 >= 0 )
  {
    v43 = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 33) + 8LL) != v43 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v43, v36, v37, v38);
      *(_QWORD *)(v44 + 24) = 530LL;
      WdLogEvent5_WdAssertion(v44);
    }
    v45 = (_QWORD *)((char *)Current + 248);
    v46 = (_QWORD *)((char *)v34 + 24);
    v47 = *((_QWORD *)Current + 31);
    if ( *(struct DXGPROCESS **)(v47 + 8) != (struct DXGPROCESS *)((char *)Current + 248) )
      __fastfail(3u);
    *v46 = v47;
    v46[1] = v45;
    *(_QWORD *)(v47 + 8) = v46;
    *v45 = v46;
    *a4 = Data1;
  }
  else
  {
    v41 = *(DXGCOPYPROTECTION **)v34;
    v42 = (DXGCOPYPROTECTION **)*((_QWORD *)v34 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v34 + 8LL) != v34 || *v42 != v34 )
      __fastfail(3u);
    *v42 = v41;
    *((_QWORD *)v41 + 1) = v42;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v34);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  }
  v31 = v40;
LABEL_41:
  if ( v50[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v50, v36, v37, v38);
  return v31;
}
