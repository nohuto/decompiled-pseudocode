/*
 * XREFs of CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x1802D984C
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1802DA8D0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc__&___ptr64_ @ 0x1802D997C (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc2.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v5; // edi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc______ptr64_(
    &v7,
    a1);
  v4 = v7;
  v5 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    v5 = (**v7)(v7, &GUID_53204493_9170_4f30_be0e_211392a4618e, a2);
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
  return v5;
}
