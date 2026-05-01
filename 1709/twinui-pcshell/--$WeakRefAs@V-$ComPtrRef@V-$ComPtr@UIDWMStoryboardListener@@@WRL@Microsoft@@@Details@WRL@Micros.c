/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801DB630
 * Callers:
 *     ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1801DB070 (-v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v12 = 0LL;
  if ( !v2 )
    goto LABEL_7;
  v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v12);
  v3 = v12;
  v8 = v5;
  if ( v5 < 0 )
    goto LABEL_8;
  if ( v12 )
  {
    v9 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v6, v7, v3);
      v3 = v12;
    }
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v3)(
            v3,
            &GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e,
            a2);
    v3 = v12;
    v8 = v10;
  }
  else
  {
LABEL_7:
    v8 = -2147467259;
  }
LABEL_8:
  if ( v3 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v8;
}
