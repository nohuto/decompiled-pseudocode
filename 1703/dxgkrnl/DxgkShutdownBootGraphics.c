/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C0098E90
 * Callers:
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0096940 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(__int64 a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rbx
  void *v7; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rbx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+40h] [rbp-10h]
  struct DXGDEVICE *v19; // [rsp+70h] [rbp+20h] BYREF
  struct DXGDEVICE *v20; // [rsp+78h] [rbp+28h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)Global + 1064), v4, v5);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v6 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 119);
  if ( v6 )
  {
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
    ExFreePoolWithTag(v6, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 119) = 0LL;
  }
  v7 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 132);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 132) = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v19 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, a2, Current, &v19);
  if ( v19 )
  {
    v9 = *((_QWORD *)v19 + 225);
    if ( v9 )
    {
      v17 = *((_QWORD *)v19 + 225);
      v18 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
      if ( *(_DWORD *)(v9 + 176) == 1 )
      {
        v10 = v19;
        if ( *((_BYTE *)v19 + 1856) )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 2288) + 408LL) + 8LL)
                                                  + 472LL))(
            *((_QWORD *)v19 + 75),
            3LL);
          *((_BYTE *)v10 + 1856) = 0;
        }
      }
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    }
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 263) = 4;
  if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v11, v12, v13);
  return 0LL;
}
