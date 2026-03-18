/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C00E87C0
 * Callers:
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00E64A0 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  char v19; // [rsp+40h] [rbp-10h]
  struct DXGDEVICE *v20; // [rsp+70h] [rbp+20h] BYREF
  struct DXGDEVICE *v21; // [rsp+80h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGGLOBAL *)((char *)Global + 1064));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v5) + 263) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal(v6) + 263) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v7 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 119);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 119) = 0LL;
  }
  v9 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)v7) + 132);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 132) = 0LL;
  }
  v20 = 0LL;
  if ( a1 )
  {
    v10 = a1;
    v20 = a1;
  }
  else
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v9, v8);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, a2, Current, &v20);
    v10 = v20;
    if ( v20 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 8);
      v10 = v20;
    }
    if ( v21 )
    {
      v9 = (void *)_InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == (void *)1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
      v10 = v20;
    }
  }
  if ( v10 )
  {
    v11 = *((_QWORD *)v10 + 209);
    if ( v11 )
    {
      v18 = *((_QWORD *)v10 + 209);
      v19 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
      v10 = v20;
      if ( *(_DWORD *)(v11 + 176) == 1 && *((_BYTE *)v20 + 1728) )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 2312) + 504LL) + 8LL) + 472LL))(
          *((_QWORD *)v20 + 75),
          3LL);
        *((_BYTE *)v10 + 1728) = 0;
      }
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v9) + 263) = 4;
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return 0LL;
}
