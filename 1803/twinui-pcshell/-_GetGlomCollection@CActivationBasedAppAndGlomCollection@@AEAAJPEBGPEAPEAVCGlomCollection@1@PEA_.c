/*
 * XREFs of ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18006FD14
 * Callers:
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x180043820 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006FE70 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800F8244 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800F8340 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z @ 0x18004CDA0 (-IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::_GetGlomCollection(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2,
        struct CActivationBasedAppAndGlomCollection::CGlomCollection **a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdi
  __int64 i; // r15
  CImmersiveApp *v10; // rcx
  __int64 v11; // rbx
  bool v12; // al
  __int64 (__fastcall *v13)(LPCWCH *, const unsigned __int16 *, int *); // rax
  int v14; // eax
  CImmersiveApp *v15; // rcx
  bool v17; // [rsp+80h] [rbp+48h]
  int v19; // [rsp+90h] [rbp+58h] BYREF
  CImmersiveApp *v20; // [rsp+98h] [rbp+60h] BYREF

  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 0LL;
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v10 = 0LL;
      v20 = 0LL;
      v11 = **(_QWORD **)(i + *((_QWORD *)this + 5));
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v10 = v20;
      }
      if ( v10 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v12 = (**(int (__fastcall ***)(__int64, GUID *, CImmersiveApp **))v11)(
              v11,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              &v20) >= 0;
      v17 = v12;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v12 = v17;
      }
      if ( v12 )
      {
        v13 = *(__int64 (__fastcall **)(LPCWCH *, const unsigned __int16 *, int *))(*(_QWORD *)v20 + 88LL);
        v14 = v13 == CImmersiveApp::IsEqualByAppId
            ? CImmersiveApp::IsEqualByAppId((LPCWCH *)v20, a2, &v19)
            : v13((LPCWCH *)v20, a2, &v19);
        if ( v14 >= 0 && v19 )
          break;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      if ( ++v8 >= v7 )
        return *a3 == 0LL ? 0x80070490 : 0;
    }
    *a3 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)this + 5) + 40 * v8);
    if ( a4 )
      *a4 = v8;
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return *a3 == 0LL ? 0x80070490 : 0;
}
