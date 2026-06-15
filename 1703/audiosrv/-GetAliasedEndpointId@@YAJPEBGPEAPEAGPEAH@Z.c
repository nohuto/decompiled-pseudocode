/*
 * XREFs of ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x180004220
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAliasedEndpointId(const unsigned __int16 *a1, unsigned __int16 **a2, int *a3)
{
  int v6; // ebx
  unsigned int v7; // r15d
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF
  __int64 v13; // [rsp+90h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  v7 = -2147023728;
  ppv = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  pvar = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v13) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v12) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
           v12,
           &PKEY_Aliased_EndpointId,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && PropVariantToStringAlloc(&pvar, a2) >= 0 )
    {
      v7 = 0;
    }
    if ( a3 )
    {
      PropVariantClear(&pvar);
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
             v12,
             &PKEY_Endpoint_IsAliased,
             &pvar) >= 0
        && (_WORD)pvar == 11
        && (_WORD)v10 == 0xFFFF )
      {
        v6 = 1;
      }
      *a3 = v6;
    }
  }
  PropVariantClear(&pvar);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v7;
}
