/*
 * XREFs of ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180039400
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BF5F8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800EC9AC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetStreamGroupFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  const GUID *v13; // r8
  const GUID *v14; // r9
  BYTE *v16; // rbx
  __int64 v17; // [rsp+38h] [rbp-89h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-81h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+48h] [rbp-79h] BYREF
  __int128 v20; // [rsp+68h] [rbp-59h]
  __int64 v21; // [rsp+78h] [rbp-49h]
  __int128 v22; // [rsp+80h] [rbp-41h] BYREF
  unsigned int v23; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-29h] BYREF
  const char *v25; // [rsp+B8h] [rbp-9h]
  __int64 v26; // [rsp+C0h] [rbp-1h]
  __int64 *v27; // [rsp+C8h] [rbp+7h]
  __int64 v28; // [rsp+D0h] [rbp+Fh]
  struct _RTL_CRITICAL_SECTION **v29; // [rsp+D8h] [rbp+17h]
  __int64 v30; // [rsp+E0h] [rbp+1Fh]

  v21 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  v18 = v8;
  memset(&pvar, 0, sizeof(pvar));
  *a4 = 0LL;
  v20 = (__int128)*a3;
  v9 = 0;
  while ( 1 )
  {
    v10 = qword_180189130[2 * v9] - v20;
    if ( !v10 )
      v10 = qword_180189130[2 * v9 + 1] - *((_QWORD *)&v20 + 1);
    if ( !v10 )
      break;
    if ( ++v9 >= 8 )
    {
      v12 = -2147023728;
      goto LABEL_11;
    }
  }
  v22 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
  v11 = 2;
  if ( a2 == eKeywordDetectorConnector )
    v11 = 602;
  v23 = v9 + v11;
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 4) + 40LL))(
         *((_QWORD *)this + 4),
         &v22,
         &pvar,
         qword_180189130) >= 0
    && pvar.vt == 65
    && (unsigned int)IsValidWfxBlob(&pvar) )
  {
    v16 = pvar.bstrblobVal.pData;
    if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
    {
      v12 = -2004287480;
      goto LABEL_11;
    }
    v12 = CloneWaveFormat((const struct tWAVEFORMATEX *)v16, a4);
    if ( v12 < 0 )
      goto LABEL_11;
  }
  v12 = -2147023728;
  if ( *a4 )
    v12 = 0;
LABEL_11:
  PropVariantClear((PROPVARIANT *)&pvar);
  LODWORD(v18) = v12;
  LODWORD(v17) = 6512;
  if ( v12 < 0 && (unsigned int)hProvider > 3 && (byte_1801884A0 & 4) != 0 && (qword_1801884A8 & 4) == qword_1801884A8 )
  {
    v25 = "CEndpointCharacteristics::GetStreamGroupFormat";
    v26 = 47LL;
    v27 = &v17;
    v28 = 4LL;
    v29 = &v18;
    v30 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014791D, v13, v14, 5u, &pData);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v12;
}
