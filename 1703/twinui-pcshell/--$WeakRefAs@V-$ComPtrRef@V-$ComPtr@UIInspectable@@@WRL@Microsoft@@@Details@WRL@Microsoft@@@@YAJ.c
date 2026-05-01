/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006FF40
 * Callers:
 *     ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x18006F8C0 (-OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  if ( !*a1 )
    goto LABEL_7;
  v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
         *a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v11);
  v4 = v11;
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_8;
  if ( v11 )
  {
    v7 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v4 = v11;
    }
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
           v4,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a2);
    v4 = v11;
    v6 = v8;
  }
  else
  {
LABEL_7:
    v6 = -2147467259;
  }
LABEL_8:
  if ( v4 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v9 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
