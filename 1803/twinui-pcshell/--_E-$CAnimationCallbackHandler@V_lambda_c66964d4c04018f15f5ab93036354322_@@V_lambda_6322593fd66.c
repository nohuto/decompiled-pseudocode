/*
 * XREFs of ??_E?$CAnimationCallbackHandler@V_lambda_c66964d4c04018f15f5ab93036354322_@@V_lambda_6322593fd6617ded31d0a35e6b081f9a_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x1802F0820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_c66964d4c04018f15f5ab93036354322_,_lambda_6322593fd6617ded31d0a35e6b081f9a_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
