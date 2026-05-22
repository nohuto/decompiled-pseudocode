/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180054F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        MPCClickerProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v5; // edx
  int v6; // eax
  MPCGestureHandlerManager *Instance; // rcx
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v9; // [rsp+58h] [rbp+20h]

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a3 + 776) )
  {
    v5 = 0;
    v6 = *((_DWORD *)a3 + 175);
    if ( v6 == 2 )
    {
      v5 = 1;
    }
    else if ( (unsigned int)(v6 - 4) <= 1 )
    {
      v5 = 2;
    }
    *((_DWORD *)a3 + 318) = v5;
    *((_DWORD *)a3 + 322) = *((_DWORD *)a3 + 195);
    *((_DWORD *)a3 + 323) = *((_DWORD *)a3 + 196);
    *((_OWORD *)a3 + 81) = *(_OWORD *)((char *)a3 + 788);
    *((_DWORD *)a3 + 328) = *((_DWORD *)a3 + 202);
    *((_BYTE *)a3 + 1316) = *((_BYTE *)a3 + 1073) != 0;
    v9 = &v8;
    v8 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
    if ( v8 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24))
                                               + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance);
  }
}
