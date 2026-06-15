/*
 * XREFs of ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800B62B4
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800B3FC8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800B20E4 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetSupportedDataRangeForEndpoint(
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a1,
        struct IMMDevice *a2,
        struct KSMULTIPLE_ITEM **a3)
{
  GUID *v5; // rbx
  int v6; // edi
  __int64 Data1; // r8
  __int64 v8; // rax
  int v9; // eax
  struct KSMULTIPLE_ITEM *v10; // rax
  __int64 *v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+28h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v12 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v15[0] = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 **))a2->lpVtbl->Activate)(
         a2,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL,
         0LL,
         &v12);
  if ( v6 >= 0 )
  {
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(v15);
    v5 = (GUID *)v15[0];
    if ( v15[0] )
    {
      *(_DWORD *)v15[0] = 64;
      v5[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
      v5[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      v5[2] = GUID_00000001_0000_0010_8000_00aa00389b71;
      Data1 = v5->Data1;
      v8 = *v12;
      if ( a1 == eKeywordDetectorConnector )
        v9 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, __int64 *))(v8 + 96))(
               v12,
               v5,
               Data1,
               0LL,
               &v17);
      else
        v9 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, __int64 *))(v8 + 24))(
               v12,
               v5,
               Data1,
               0LL,
               &v17);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v14);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                 v14,
                 1LL,
                 &GUID_0a129110_db5c_467d_b247_b90472feb991,
                 &v13);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 24LL))(v13, &pv);
            if ( v6 >= 0 )
            {
              v10 = (struct KSMULTIPLE_ITEM *)pv;
              pv = 0LL;
              *a3 = v10;
            }
          }
        }
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  CoTaskMemFree(v5);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return (unsigned int)v6;
}
