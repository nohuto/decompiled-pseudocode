/*
 * XREFs of ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180053830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A3B0 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCProcessor::PostHitTestProcessing(
        MPCProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  struct MPCGestureHandlerManager *Instance; // rcx
  int v6; // ecx
  int v7; // eax
  MPCGestureHandlerManager *v8; // rcx
  unsigned __int64 v9; // rdi
  struct MPCGestureHandlerManager *v10; // rcx
  MPCGestureHandlerManager *v11; // rcx
  unsigned __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 *v13; // [rsp+68h] [rbp+38h]

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    if ( !*((_BYTE *)a3 + 776) )
    {
      v13 = &v12;
      v12 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
      if ( v12 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24))
                                                 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
      Instance = MPCGestureHandlerManager::GetInstance();
      if ( !(unsigned __int8)MPCGestureHandlerManager::IsInjecting(Instance, &v12) )
        goto LABEL_19;
    }
    v6 = 0;
    v7 = *((_DWORD *)a3 + 174);
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        v6 = 1;
      }
      else if ( v7 > 2 )
      {
        if ( v7 > 4 )
        {
          if ( v7 != 7 )
          {
            if ( v7 == 8 )
              v6 = 4;
            goto LABEL_16;
          }
          goto LABEL_15;
        }
        v6 = 2;
      }
LABEL_16:
      *((_DWORD *)a3 + 318) = v6;
      *((_DWORD *)a3 + 322) = *((_DWORD *)a3 + 195);
      *((_DWORD *)a3 + 323) = *((_DWORD *)a3 + 196);
      *((_OWORD *)a3 + 81) = *(_OWORD *)((char *)a3 + 788);
      *((_DWORD *)a3 + 328) = *((_DWORD *)a3 + 202);
      *((_BYTE *)a3 + 1316) = *((_BYTE *)a3 + 1073) != 0;
      v13 = &v12;
      v12 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
      if ( v12 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24))
                                                 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
      v8 = MPCGestureHandlerManager::GetInstance();
      MPCGestureHandlerManager::DownLevelTo2D(v8);
LABEL_19:
      if ( (unsigned int)(*((_DWORD *)a3 + 174) - 2) <= 4 )
      {
        if ( *((_DWORD *)a3 + 330) )
          *((_DWORD *)a3 + 313) = *((_DWORD *)a3 + 342);
        else
          *((_DWORD *)a3 + 313) = 1065353216;
      }
      return;
    }
LABEL_15:
    v6 = 3;
    goto LABEL_16;
  }
  v13 = &v12;
  v9 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
  v12 = v9;
  if ( v9 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
  v10 = MPCGestureHandlerManager::GetInstance();
  if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v10, &v12) )
  {
    *((_DWORD *)a3 + 318) = 2;
    v13 = &v12;
    v12 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v11 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v11);
  }
}
