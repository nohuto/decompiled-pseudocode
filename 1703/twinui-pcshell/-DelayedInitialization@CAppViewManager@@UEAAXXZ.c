/*
 * XREFs of ?DelayedInitialization@CAppViewManager@@UEAAXXZ @ 0x18003CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18017F850 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAppViewManager::DelayedInitialization(CAppViewManager *this)
{
  IUnknown *v2; // rbx
  __int64 *v3; // rax
  unsigned int i; // ebx
  struct IImmersiveApplication **v5; // r8
  __int64 v6; // rcx
  ApplicationViewHelpers *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rdi
  __int64 v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF
  ApplicationViewHelpers *v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  v15[0] = 0LL;
  v2 = (IUnknown *)*((_QWORD *)this + 11);
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v15);
  if ( IUnknown_QueryService(
         v2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         (void **)v3) >= 0 )
  {
    v19 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15[0] + 24LL))(v15[0], &v19) >= 0
      && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v16) >= 0 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v18 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v19 + 32LL))(
               v19,
               i,
               &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
               &v18) >= 0
          && ((*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v18 + 192LL))(v18, &v17) < 0 || !v17) )
        {
          v13 = 0LL;
          if ( ApplicationViewHelpers::GetApplicationFromView(v18, (struct IApplicationView *)&v13, v5) >= 0 )
            (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 4) + 24LL))(
              (char *)this + 32,
              v13,
              2LL);
          v6 = v13;
          if ( v13 )
          {
            v13 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
        }
        v7 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v7 + 16LL))(v7);
        }
      }
    }
    v8 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &ppvOut) >= 0 )
  {
    v9 = ppvOut;
    v10 = *((_QWORD *)this + 19);
    if ( v10 )
    {
      *((_QWORD *)this + 19) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    (*(void (__fastcall **)(void *, char *))(*(_QWORD *)v9 + 24LL))(v9, (char *)this + 152);
  }
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
