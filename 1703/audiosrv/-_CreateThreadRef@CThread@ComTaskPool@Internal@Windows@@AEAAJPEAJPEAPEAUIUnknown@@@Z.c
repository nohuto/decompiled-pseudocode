/*
 * XREFs of ?_CreateThreadRef@CThread@ComTaskPool@Internal@Windows@@AEAAJPEAJPEAPEAUIUnknown@@@Z @ 0x1800D7974
 * Callers:
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800D7B44 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::_CreateThreadRef(
        Windows::Internal::ComTaskPool::CThread *this,
        int *a2,
        struct IUnknown **a3)
{
  HRESULT v6; // ebx
  int v7; // eax
  struct IUnknown *v8; // rax
  IUnknown *ppunk; // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppunk = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppunk);
  v6 = SHCreateThreadRef(a2, &ppunk);
  if ( v6 >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    v7 = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))ppunk->lpVtbl->QueryInterface)(
           ppunk,
           &GUID_853513c1_37ae_4cec_b347_ec9ead33065a,
           &v11);
    *((_BYTE *)this + 120) = v7 >= 0;
    if ( v7 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *((_QWORD *)this + 14));
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    if ( v6 >= 0 )
    {
      v8 = ppunk;
      ppunk = 0LL;
      *a3 = v8;
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppunk);
  return (unsigned int)v6;
}
