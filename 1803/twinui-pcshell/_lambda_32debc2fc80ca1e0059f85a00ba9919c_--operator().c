/*
 * XREFs of _lambda_32debc2fc80ca1e0059f85a00ba9919c_::operator() @ 0x1801171B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::Run @ 0x180117F60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x18010E668 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_32debc2fc80ca1e0059f85a00ba9919c_::operator()(__int64 a1)
{
  unsigned __int64 i; // rbx
  void *v3; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
  {
    v3 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3);
    if ( (int)GlobalInterfaceTable::Unmarshal(
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 4 * i),
                &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
                &v3) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD, bool))(*(_QWORD *)v3 + 24LL))(v3, *(_QWORD *)a1, *(_BYTE *)(a1 + 8) != 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v3);
  }
}
