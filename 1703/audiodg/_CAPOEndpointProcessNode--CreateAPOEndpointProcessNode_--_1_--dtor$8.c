/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$8 @ 0x14004019F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ @ 0x140030748 (--1-$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 64));
  }
}
