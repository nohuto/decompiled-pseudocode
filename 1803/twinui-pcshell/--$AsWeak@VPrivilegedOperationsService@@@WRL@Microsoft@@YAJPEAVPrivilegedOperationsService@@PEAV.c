/*
 * XREFs of ??$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAVWeakRef@01@@Z @ 0x18019CEA8
 * Callers:
 *     ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x1801A068C (-RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019E48C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_18019E48C.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<PrivilegedOperationsService>(volatile int *a1, __int64 *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r9
  int CanCastTo; // eax
  int v7; // edi
  int v8; // eax
  volatile int *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, volatile int *); // rax
  __int64 (__fastcall *v13)(__int64, volatile int *); // rax
  volatile int *v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000038_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  a1 + 2,
                  v5,
                  &v15);
    a1 = v15;
    v7 = CanCastTo;
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(volatile int *, volatile int **))(*(_QWORD *)a1 + 24LL))(a1, &v15);
    v9 = v15;
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = (__int64)v15;
      if ( v15 )
      {
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v15 + 8LL))(v15);
        v9 = v15;
      }
      v11 = *a2;
      *a2 = v10;
      if ( v11 )
      {
        v12 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 16LL);
        if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
            v11,
            v9);
        else
          v12(v11, v9);
        v9 = v15;
      }
      v7 = 0;
    }
    if ( v9 )
    {
      v15 = 0LL;
      v13 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v9 + 16LL);
      if ( v13 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          (__int64)v9,
          v9);
      else
        ((void (__fastcall *)(volatile int *))v13)(v9);
    }
  }
  if ( a1 )
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)a1 + 16LL))(a1);
  return (unsigned int)v7;
}
