/*
 * XREFs of _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$6 @ 0x140040153
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ @ 0x140030748 (--1-$CComPtr@UIAudioMediaType@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 56));
  }
}
