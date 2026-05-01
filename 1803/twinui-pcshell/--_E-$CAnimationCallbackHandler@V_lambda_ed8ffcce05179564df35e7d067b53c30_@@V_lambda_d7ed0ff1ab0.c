/*
 * XREFs of ??_E?$CAnimationCallbackHandler@V_lambda_ed8ffcce05179564df35e7d067b53c30_@@V_lambda_d7ed0ff1ab0fb52f1367a70480edc44d_@@@DCompThumbnailHelpers@@UEAAPEAXI@Z @ 0x1802F5DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler<_lambda_ed8ffcce05179564df35e7d067b53c30_,_lambda_d7ed0ff1ab0fb52f1367a70480edc44d_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 4);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
