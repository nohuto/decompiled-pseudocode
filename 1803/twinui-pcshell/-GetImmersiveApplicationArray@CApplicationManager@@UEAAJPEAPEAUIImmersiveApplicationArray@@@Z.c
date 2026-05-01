/*
 * XREFs of ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180044B40
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008071C (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ @ 0x180080934 (-InternalRelease@-$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180080970.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800809F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainIn.c)
 *     ?AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z @ 0x180080A90 (-AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArray(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  RTL_SRWLOCK *v4; // rbx
  const struct _GUID *v5; // rcx
  int Instance; // edi
  CImmersiveAppArray *v7; // rcx
  CImmersiveAppArray *v8; // rsi
  CImmersiveAppArray *v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  struct IUnknown *v12; // rdx
  __int64 (__fastcall *v13)(CImmersiveAppArray *__hidden, struct IUnknown *); // rax
  int v14; // eax
  void (__fastcall *v15)(CImmersiveAppArray *); // rax
  __int64 (__fastcall *v16)(CImmersiveAppArray *, GUID *, struct IImmersiveApplicationArray **); // rax
  int Interface; // eax
  int v20; // [rsp+98h] [rbp+50h]
  CImmersiveAppArray *v21; // [rsp+A0h] [rbp+58h] BYREF
  PSRWLOCK v22; // [rsp+A8h] [rbp+60h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v22 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = 0LL;
  v21 = 0LL;
  Instance = CImmersiveAppArray::s_CreateInstance(v5, (void **)&v21);
  v20 = Instance;
  if ( Instance >= 0 )
  {
    v7 = v21;
    v8 = v21;
    v9 = v21;
    if ( v21 )
    {
      (*(void (__fastcall **)(CImmersiveAppArray *))(*(_QWORD *)v21 + 8LL))(v21);
      v7 = v21;
    }
    v10 = *((_QWORD *)this + 58);
    v11 = 0LL;
    if ( v10 )
    {
      do
      {
        v12 = *(struct IUnknown **)(*((_QWORD *)this + 57) + 8 * v11);
        v13 = *(__int64 (__fastcall **)(CImmersiveAppArray *__hidden, struct IUnknown *))(*(_QWORD *)v9 + 64LL);
        if ( v13 == CImmersiveAppArray::AddObject )
          v14 = CImmersiveAppArray::AddObject(v9, v12);
        else
          v14 = v13(v9, v12);
        Instance = v14;
        v20 = v14;
        if ( v14 < 0 )
          break;
        ++v11;
      }
      while ( v11 < v10 );
      v7 = v21;
      v4 = v22;
    }
    if ( v8 )
    {
      v15 = *(void (__fastcall **)(CImmersiveAppArray *))(*(_QWORD *)v8 + 16LL);
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::Release(v8);
      else
        v15(v8);
      Instance = v20;
      v7 = v21;
    }
    if ( Instance >= 0 )
    {
      v16 = **(__int64 (__fastcall ***)(CImmersiveAppArray *, GUID *, struct IImmersiveApplicationArray **))v7;
      if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
                      v7,
                      &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
                      a2);
      else
        Interface = v16(v7, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c, a2);
      Instance = Interface;
    }
  }
  Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(&v21);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)Instance;
}
