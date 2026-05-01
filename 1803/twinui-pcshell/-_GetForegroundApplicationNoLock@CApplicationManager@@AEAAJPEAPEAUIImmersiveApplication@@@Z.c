/*
 * XREFs of ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18010F7DC
 * Callers:
 *     _lambda_8d0ab586cd065271f427bd7ab75519d7_::operator() @ 0x180104B84 (_lambda_8d0ab586cd065271f427bd7ab75519d7_--operator().c)
 *     ?GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1801076B0 (-GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetForegroundApplicationNoLock(
        CApplicationManager *this,
        struct IImmersiveApplication **a2)
{
  unsigned int i; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 71) + 24LL))(*((_QWORD *)this + 71), &v8);
  for ( i = 0; i < v8; ++i )
  {
    v10 = 0LL;
    v5 = *((_QWORD *)this + 71);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL))(
           v5,
           i,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &v10) >= 0 )
    {
      v9 = 0LL;
      v6 = v10;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v9) >= 0
        && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 280LL))(v9) & 2) != 0 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v9)(
          v9,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          a2);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        return *a2 == 0LL ? 0x8002802B : 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  return *a2 == 0LL ? 0x8002802B : 0;
}
