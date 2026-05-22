/*
 * XREFs of ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180046650
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054C5C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCProcessor::PostHitTestProcessing(
        MPCProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  struct MPCGestureHandlerManager *Instance; // rcx
  int v6; // ecx
  int v7; // eax
  MPCGestureHandlerManager *v8; // rcx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v10; // [rsp+50h] [rbp+18h]

  if ( !MPCInputProviderBase::IsPrimary(this) )
    return;
  if ( *((_BYTE *)a3 + 600) )
    goto LABEL_6;
  v10 = &v9;
  v9 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
  if ( v9 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24))
                                             + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
  Instance = MPCGestureHandlerManager::GetInstance();
  if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(Instance, &v9) )
  {
LABEL_6:
    v6 = 0;
    v7 = *((_DWORD *)a3 + 130);
    if ( v7 == 1 )
      goto LABEL_11;
    if ( v7 == 2 )
    {
      v6 = 1;
      goto LABEL_12;
    }
    if ( v7 > 2 )
    {
      if ( v7 <= 4 )
      {
        v6 = 2;
        goto LABEL_12;
      }
      if ( v7 == 7 )
LABEL_11:
        v6 = 3;
    }
LABEL_12:
    *((_DWORD *)a3 + 274) = v6;
    *((_DWORD *)a3 + 278) = *((_DWORD *)a3 + 151);
    *((_DWORD *)a3 + 279) = *((_DWORD *)a3 + 152);
    *((_OWORD *)a3 + 70) = *(_OWORD *)((char *)a3 + 612);
    *((_DWORD *)a3 + 284) = *((_DWORD *)a3 + 158);
    *((_BYTE *)a3 + 1140) = *((_BYTE *)a3 + 897) == 1;
    v10 = &v9;
    v9 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24))
                                               + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v8 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v8);
  }
  if ( (unsigned int)(*((_DWORD *)a3 + 130) - 2) <= 4 )
  {
    if ( *((_DWORD *)a3 + 286) )
      *((_DWORD *)a3 + 269) = *((_DWORD *)a3 + 298);
    else
      *((_DWORD *)a3 + 269) = 1065353216;
  }
}
