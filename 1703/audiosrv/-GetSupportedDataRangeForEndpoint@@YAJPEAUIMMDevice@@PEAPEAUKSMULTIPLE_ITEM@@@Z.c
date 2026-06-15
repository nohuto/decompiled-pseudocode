/*
 * XREFs of ?GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800BDE58
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800BC1A4 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetSupportedDataRangeForEndpoint(struct IMMDevice *a1, struct KSMULTIPLE_ITEM **a2)
{
  GUID *v3; // rbx
  int v4; // edi
  struct KSMULTIPLE_ITEM *v5; // rax
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v9[1] = -2LL;
  v8 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v3 = 0LL;
  v9[0] = 0LL;
  v11 = 0LL;
  pv = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
         a1,
         &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
         23LL,
         0LL,
         &v8);
  if ( v4 >= 0 )
  {
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(v9);
    v3 = (GUID *)v9[0];
    if ( v9[0] )
    {
      *(_DWORD *)v9[0] = 64;
      v3[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
      v3[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      v3[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
      v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 24LL))(
             v8,
             v3,
             v3->Data1,
             0LL,
             &v7);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v12);
        if ( v4 >= 0 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 104LL))(
                 v12,
                 1LL,
                 &GUID_0a129110_db5c_467d_b247_b90472feb991,
                 &v11);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v11 + 24LL))(v11, &pv);
            if ( v4 >= 0 )
            {
              v5 = (struct KSMULTIPLE_ITEM *)pv;
              pv = 0LL;
              *a2 = v5;
            }
          }
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CoTaskMemFree(v3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v4;
}
