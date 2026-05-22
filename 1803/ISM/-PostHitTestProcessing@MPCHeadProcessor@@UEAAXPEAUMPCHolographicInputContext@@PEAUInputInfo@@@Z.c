/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180047EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054FA0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  unsigned __int64 v5; // rdi
  MPCGestureHandlerManager *Instance; // rcx
  struct MPCGestureHandlerManager *v7; // rcx
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v9; // [rsp+50h] [rbp+18h]

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a3 + 600) )
  {
    *((_DWORD *)a3 + 274) = 4;
    *((_DWORD *)a3 + 278) = *((_DWORD *)a3 + 151);
    *((_DWORD *)a3 + 279) = *((_DWORD *)a3 + 152);
    *((_OWORD *)a3 + 70) = *(_OWORD *)((char *)a3 + 612);
    *((_DWORD *)a3 + 284) = *((_DWORD *)a3 + 158);
    *((_BYTE *)a3 + 1140) = *((_BYTE *)a3 + 897) == 1;
    v9 = &v8;
    v5 = (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24);
    v8 = v5;
    if ( v5 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance);
    v9 = &v8;
    v8 = (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24);
    if ( v5 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    v7 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::OnGazeUpdate(v7, &v8);
  }
}
