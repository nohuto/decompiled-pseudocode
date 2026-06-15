/*
 * XREFs of ?GetEndpointResourceValidity@CConstraintModelResourceManager@@AEAAJPEBGPEAH@Z @ 0x180096C50
 * Callers:
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800D9A80 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CConstraintModelResourceManager::GetEndpointResourceValidity(
        CConstraintModelResourceManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  HRESULT v5; // ebx
  PROPVARIANT pvar[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  ppv = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  memset(pvar, 0, sizeof(pvar));
  *a3 = 1;
  if ( (unsigned int)GetClassFromEndpointId(a2) )
  {
    *a3 = 0;
  }
  else if ( *a3 )
  {
    v5 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(
             ppv,
             a2,
             &v9);
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, 0LL, &v8);
        if ( v5 >= 0
          && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
               v8,
               &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
               pvar) >= 0
          && LOWORD(pvar[0]) == 72 )
        {
          *a3 = 0;
        }
      }
    }
    PropVariantClear(pvar);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
