/*
 * XREFs of ??0PointerTracking@CMultitaskingViewElementBase@@QEAA@AEBU01@@Z @ 0x180289CAC
 * Callers:
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x18028AF60 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18028BE70 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CMultitaskingViewElementBase::PointerTracking *__fastcall CMultitaskingViewElementBase::PointerTracking::PointerTracking(
        CMultitaskingViewElementBase::PointerTracking *this,
        const struct CMultitaskingViewElementBase::PointerTracking *a2)
{
  __int64 *v4; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  v4 = (__int64 *)((char *)this + 32);
  *v4 = *((_QWORD *)a2 + 4);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 5);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  return this;
}
