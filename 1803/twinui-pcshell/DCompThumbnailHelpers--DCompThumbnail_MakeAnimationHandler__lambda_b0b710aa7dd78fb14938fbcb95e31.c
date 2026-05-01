/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1802A4038
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1802A408C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1802A42E8 (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1802A3F90 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864ccc.c)
 *     _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_ @ 0x1802A4390 (_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_--_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  v4 = a3;
  v5 = (__int64 *)lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_(v9, a1);
  LOBYTE(v6) = 0;
  LODWORD(v4) = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                  v6,
                  v5,
                  v7,
                  v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return (unsigned int)v4;
}
