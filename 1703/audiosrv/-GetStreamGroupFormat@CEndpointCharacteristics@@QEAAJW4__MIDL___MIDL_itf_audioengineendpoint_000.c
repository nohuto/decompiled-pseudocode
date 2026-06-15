/*
 * XREFs of ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D600
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetStreamGroupFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  BYTE *v13; // rbx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // [rsp+30h] [rbp-99h] BYREF
  int v17; // [rsp+38h] [rbp-91h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-89h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-71h] BYREF
  __int128 v20; // [rsp+60h] [rbp-69h]
  __int64 v21; // [rsp+70h] [rbp-59h]
  __int128 v22; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v23; // [rsp+88h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-19h] BYREF
  int *v26; // [rsp+C0h] [rbp-9h]
  __int64 v27; // [rsp+C8h] [rbp-1h]
  int *v28; // [rsp+D0h] [rbp+7h]
  __int64 v29; // [rsp+D8h] [rbp+Fh]

  v21 = -2LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 1624, (__int64)&lpCriticalSection);
  memset(&pvar, 0, sizeof(pvar));
  *a4 = 0LL;
  v20 = (__int128)*a3;
  v8 = 0;
  while ( 1 )
  {
    v9 = qword_18012AB90[2 * v8] - v20;
    if ( !v9 )
      v9 = qword_18012AB90[2 * v8 + 1] - *((_QWORD *)&v20 + 1);
    if ( !v9 )
      break;
    if ( ++v8 >= 8 )
    {
      v11 = -2147023728;
      goto LABEL_11;
    }
  }
  v22 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
  if ( a2 == eKeywordDetectorConnector )
    v10 = 602;
  else
    v10 = 2;
  v23 = v8 + v10;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &v22,
         &pvar,
         qword_18012AB90) >= 0
    && pvar.vt == 65
    && (unsigned int)IsValidWfxBlob(&pvar) )
  {
    v13 = pvar.bstrblobVal.pData;
    if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
    {
      v11 = -2004287480;
      goto LABEL_11;
    }
    v11 = CloneWaveFormat((const struct tWAVEFORMATEX *)v13, a4);
    if ( v11 < 0 )
      goto LABEL_11;
  }
  v11 = -2147023728;
  if ( *a4 )
    v11 = 0;
LABEL_11:
  PropVariantClear((PROPVARIANT *)&pvar);
  v17 = v11;
  v16 = 6370;
  if ( v11 < 0 && (unsigned int)hProvider > 3 && (byte_18012A380 & 4) != 0 && (qword_18012A388 & 4) == qword_18012A388 )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetStreamGroupFormat");
    v26 = &v16;
    v27 = 4LL;
    v28 = &v17;
    v29 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA8C5, v14, v15, 5u, &pData);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
