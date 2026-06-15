/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$7 @ 0x140040179
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ @ 0x140030748 (--1-$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 56));
  }
}
