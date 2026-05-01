/*
 * XREFs of ?DelayedInitialization@CAppViewManager@@UEAAXXZ @ 0x18003DE80
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x1801CD1F4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAppViewManager::DelayedInitialization(CAppViewManager *this)
{
  IUnknown *v2; // rbx
  __int64 *v3; // rax
  unsigned int i; // esi
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rax
  struct IImmersiveApplication **v8; // r8
  __int64 v9; // rcx
  ApplicationViewHelpers *v10; // rcx
  __int64 *v11; // rcx
  void *v12; // rdi
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+38h] BYREF
  int v20; // [rsp+98h] [rbp+40h] BYREF
  ApplicationViewHelpers *v21; // [rsp+A0h] [rbp+48h] BYREF
  __int64 *v22; // [rsp+A8h] [rbp+50h] BYREF

  v18[1] = -2LL;
  v18[0] = 0LL;
  v2 = (IUnknown *)*((_QWORD *)this + 11);
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v18);
  if ( IUnknown_QueryService(
         v2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         (void **)v3) >= 0 )
  {
    v22 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v18[0] + 24LL))(v18[0], &v22) >= 0
      && (*(int (__fastcall **)(__int64 *, unsigned int *))(*v22 + 24))(v22, &v19) >= 0 )
    {
      for ( i = 0; i < v19; ++i )
      {
        v21 = 0LL;
        v5 = v22;
        v6 = *v22;
        v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v6 + 32))(
               v5,
               i,
               &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
               v7) >= 0
          && ((*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v21 + 192LL))(v21, &v20) < 0 || !v20) )
        {
          v16 = 0LL;
          if ( ApplicationViewHelpers::GetApplicationFromView(v21, (struct IApplicationView *)&v16, v8) >= 0 )
            (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 4) + 24LL))(
              (char *)this + 32,
              v16,
              2LL);
          v9 = v16;
          if ( v16 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        v10 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
    }
  }
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &ppvOut) >= 0 )
  {
    v12 = ppvOut;
    v13 = *((_QWORD *)this + 19);
    if ( v13 )
    {
      *((_QWORD *)this + 19) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(void *, char *))(*(_QWORD *)v12 + 24LL))(v12, (char *)this + 152);
  }
  v14 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
}
