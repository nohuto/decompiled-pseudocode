/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800BC1A4
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004BC5C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BA638 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BAB88 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800BDE58 (-GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z.c)
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
