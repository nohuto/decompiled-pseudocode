/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CD2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800CD370 (--$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<PWSLayoutPolicyManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v9 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutPolicyManager,IUnknown>(&v9);
    if ( v6 >= 0 )
      v6 = (**v9)(v9, a3, a4);
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
    }
  }
  return (unsigned int)v6;
}
