/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$5 @ 0x14003EA5A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ @ 0x14002F2BC (--1-$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 64));
  }
}
