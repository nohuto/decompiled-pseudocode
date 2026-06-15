/*
 * XREFs of ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D760
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009D248 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDevicePipeFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  unsigned int v8; // edx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  BYTE *v12; // rbx
  BYTE *v13; // rsi
  __int64 v14; // rbx
  struct tWAVEFORMATEX *v15; // rax
  struct tWAVEFORMATEX *v16; // rdi
  int refreshed; // ebx
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-91h] BYREF
  int v22; // [rsp+50h] [rbp-79h] BYREF
  int v23; // [rsp+58h] [rbp-71h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-69h] BYREF
  __int128 v25; // [rsp+68h] [rbp-61h]
  __int64 v26; // [rsp+78h] [rbp-51h]
  __int128 v27; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+90h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-11h] BYREF
  int *v31; // [rsp+C8h] [rbp-1h]
  int v32; // [rsp+D0h] [rbp+7h]
  int v33; // [rsp+D4h] [rbp+Bh]
  int *v34; // [rsp+D8h] [rbp+Fh]
  int v35; // [rsp+E0h] [rbp+17h]
  int v36; // [rsp+E4h] [rbp+1Bh]

  v26 = -2LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 1624, (__int64)&lpCriticalSection);
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  v25 = (__int128)*a3;
  v8 = 0;
  while ( 1 )
  {
    v9 = &qword_18012AB90[2 * v8];
    v10 = *v9 - v25;
    if ( *v9 == (_QWORD)v25 )
      v10 = v9[1] - *((_QWORD *)&v25 + 1);
    if ( !v10 )
      break;
    if ( ++v8 >= 8 )
    {
      refreshed = -2147023728;
      goto LABEL_16;
    }
  }
  v27 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  v11 = 602;
  if ( a2 != eKeywordDetectorConnector )
    v11 = 2;
  v28 = v8 + v11;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &v27,
         &pvar) < 0
    || pvar.vt != 65
    || !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2);
    if ( refreshed < 0 )
      goto LABEL_16;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &v27,
           &pvar) < 0
      || pvar.vt != 65
      || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      goto LABEL_25;
    }
  }
  v12 = pvar.bstrblobVal.pData;
  v13 = pvar.bstrblobVal.pData;
  if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
  {
LABEL_25:
    refreshed = -2004287480;
    goto LABEL_16;
  }
  v14 = *((unsigned __int16 *)v12 + 8);
  v15 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v14 + 18);
  v16 = v15;
  if ( v15 )
  {
    memcpy_0(v15, v13, v14 + 18);
    refreshed = 0;
  }
  else
  {
    refreshed = -2147024882;
  }
  *a5 = v16;
LABEL_16:
  PropVariantClear((PROPVARIANT *)&pvar);
  v23 = refreshed;
  v22 = 6329;
  if ( refreshed < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDevicePipeFormat");
    v31 = &v22;
    v32 = (int)v19;
    v33 = 0;
    v34 = &v23;
    v35 = (int)v19;
    v36 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA8C5, v20, v19, 5u, &pData);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)refreshed;
}
