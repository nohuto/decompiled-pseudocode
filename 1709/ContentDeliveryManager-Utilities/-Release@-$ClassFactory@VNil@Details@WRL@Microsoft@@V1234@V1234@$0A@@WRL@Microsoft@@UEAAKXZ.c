/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004B830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // edi
  int v2; // ebx
  bool v3; // zf

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 20) & 6) != 0 )
      return v1;
    v3 = v1 == 1;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 20);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    v3 = (v2 & 5) == 5;
  }
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v1;
}
