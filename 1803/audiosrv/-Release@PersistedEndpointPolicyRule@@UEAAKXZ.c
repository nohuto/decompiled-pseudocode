/*
 * XREFs of ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180059F00
 * Callers:
 *     ?Initialize@DynamicAudioEndpointManager@@AEAAJXZ @ 0x180059C94 (-Initialize@DynamicAudioEndpointManager@@AEAAJXZ.c)
 *     ?Release@DynamicAudioEndpointManager@@W7EAAKXZ @ 0x1800661A0 (-Release@DynamicAudioEndpointManager@@W7EAAKXZ.c)
 *     ??1?$CComPtr@UIPolicyRule@@@ATL@@QEAA@XZ @ 0x180098D7C (--1-$CComPtr@UIPolicyRule@@@ATL@@QEAA@XZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1800FBBCC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800FC1FC (-FreeNode@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PersistedEndpointPolicyRule::Release(PersistedEndpointPolicyRule *this)
{
  return CUnknown::Release((PersistedEndpointPolicyRule *)((char *)this + 8));
}
