/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1802A3F90
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1802A4038 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413_____lambda_0688f707641f84dad399f01864cccda0__&___ptr64__lambda_b0b710aa7dd78fb14938fbcb95e31413__&___ptr64_IDCompBatchAnimationCallback_____ptr64_&___ptr64_ @ 0x1802A4180 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f7076.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 *a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *),
        _QWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v7; // edi
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  *a4 = 0LL;
  v9[0] = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *), __int64 *, __int64 *, __int64 *))Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413_____lambda_0688f707641f84dad399f01864cccda0______ptr64__lambda_b0b710aa7dd78fb14938fbcb95e31413______ptr64_IDCompBatchAnimationCallback_____ptr64_____ptr64_)(
    &v10,
    a2,
    a2,
    v9);
  v6 = v10;
  v7 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
    v7 = (**v10)(v10, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v7;
}
