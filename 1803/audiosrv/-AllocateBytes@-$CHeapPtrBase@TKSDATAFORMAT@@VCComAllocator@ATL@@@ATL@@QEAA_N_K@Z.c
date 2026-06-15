/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800E9CF0
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180063DC4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E7E64 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E83B8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800EBEBC (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(_QWORD *a1)
{
  LPVOID v2; // rax

  v2 = CoTaskMemAlloc(0x68uLL);
  *a1 = v2;
  return v2 != 0LL;
}
