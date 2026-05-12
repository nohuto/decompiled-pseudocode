/*
 * XREFs of StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001390
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0003A5C (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitSmartAttributesMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // rdx
  __int16 *v5; // r10
  const WCHAR *v6; // r8
  int v7; // eax
  int *v8; // rcx
  LPCSTR v9; // r11
  __int64 v10; // r11
  __int64 v11; // r10
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  bool v17; // [rsp+33h] [rbp-CDh] BYREF
  char v18; // [rsp+34h] [rbp-CCh] BYREF
  char v19; // [rsp+35h] [rbp-CBh] BYREF
  char v20; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  char *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  char *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+160h] [rbp+60h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  bool *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  char *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  char *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  __int16 *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  __int16 *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  int *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  __int16 *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  char *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  unsigned __int64 *p_KeywordAny; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]
  unsigned __int64 *p_KeywordAll; // [rsp+230h] [rbp+130h]
  __int64 v74; // [rsp+238h] [rbp+138h]
  unsigned __int64 *p_RegHandle; // [rsp+240h] [rbp+140h]
  __int64 v76; // [rsp+248h] [rbp+148h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+250h] [rbp+150h]
  __int64 v78; // [rsp+258h] [rbp+158h]
  void **p_CallbackContext; // [rsp+260h] [rbp+160h]
  __int64 v80; // [rsp+268h] [rbp+168h]
  void (**p_AnnotationFunc)(...); // [rsp+270h] [rbp+170h]
  __int64 v82; // [rsp+278h] [rbp+178h]
  __int64 *v83; // [rsp+280h] [rbp+180h]
  __int64 v84; // [rsp+288h] [rbp+188h]
  __int64 *v85; // [rsp+290h] [rbp+190h]
  __int64 v86; // [rsp+298h] [rbp+198h]
  __int64 *v87; // [rsp+2A0h] [rbp+1A0h]
  __int64 v88; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v89; // [rsp+2B0h] [rbp+1B0h]
  __int64 v90; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v91; // [rsp+2C0h] [rbp+1C0h]
  __int64 v92; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v93; // [rsp+2D0h] [rbp+1D0h]
  __int64 v94; // [rsp+2D8h] [rbp+1D8h]
  __int64 v95; // [rsp+2E0h] [rbp+1E0h]
  __int64 v96; // [rsp+2E8h] [rbp+1E8h] BYREF

  if ( (unsigned int)dword_1C0056060 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v4 = *(_QWORD *)(v1 + 24);
      v5 = *(__int16 **)(v3 + 40);
      v24 = *(_DWORD *)(v4 + 56);
      v14 = *(_BYTE *)(v1 + 88);
      v15 = *(_BYTE *)(v1 + 89);
      v16 = *(_BYTE *)(v1 + 90);
      v6 = *(const WCHAR **)(v4 + 4800);
      *(_QWORD *)&hProvider.LevelPlus1 = WPP_MAIN_CB.SecurityDescriptor;
      v7 = *(_DWORD *)(v1 + 1736);
      v8 = *(int **)(v3 + 32);
      v17 = (v7 & 0x10) != 0;
      v25 = *v8;
      v18 = *((_BYTE *)v8 + 4);
      v19 = *((_BYTE *)v8 + 5);
      v21 = *v5;
      v22 = *(_WORD *)(v3 + 48);
      v26 = *(_DWORD *)(v3 + 52);
      v23 = *(_WORD *)(v3 + 56);
      v20 = *(_BYTE *)(v3 + 58);
      hProvider.ProviderMetadataPtr = *(const unsigned __int16 **)(v3 + 64);
      hProvider.KeywordAny = *(_QWORD *)(v3 + 72);
      hProvider.KeywordAll = *(_QWORD *)(v3 + 80);
      hProvider.RegHandle = *(_QWORD *)(v3 + 88);
      hProvider.EnableCallback = *(void (__fastcall **)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))(v3 + 96);
      hProvider.CallbackContext = *(void **)(v3 + 104);
      hProvider.AnnotationFunc = *(void (**)(...))(v3 + 112);
      v28 = *(_QWORD *)(v3 + 120);
      v29 = *(_QWORD *)(v3 + 128);
      v30 = *(_QWORD *)(v3 + 136);
      v31 = *(_QWORD *)(v3 + 144);
      v32 = *(_QWORD *)(v3 + 152);
      v34 = v4 + 5192;
      v35 = 16LL;
      v36 = v2 + 1720;
      v38 = &v24;
      v40 = &v14;
      v42 = &v15;
      v44 = &v16;
      v37 = 16LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 1LL;
      v45 = 1LL;
      TlgCreateWsz(&pDesc, v6);
      TlgCreateSz(&v47, v9);
      TlgCreateSz(&v48, (LPCSTR)(v10 + 9));
      v50 = 8LL;
      v51 = &v17;
      p_hProvider = &hProvider;
      v53 = &v25;
      v55 = &v18;
      v57 = &v19;
      v59 = &v21;
      v61 = &v22;
      v63 = &v26;
      v65 = &v23;
      v67 = &v20;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      p_KeywordAny = &hProvider.KeywordAny;
      p_KeywordAll = &hProvider.KeywordAll;
      p_RegHandle = &hProvider.RegHandle;
      p_EnableCallback = &hProvider.EnableCallback;
      p_CallbackContext = &hProvider.CallbackContext;
      p_AnnotationFunc = &hProvider.AnnotationFunc;
      v83 = &v28;
      v85 = &v29;
      v87 = &v30;
      v89 = &v31;
      v91 = &v32;
      v93 = &v96;
      v52 = 1LL;
      v54 = 4LL;
      v56 = 1LL;
      v58 = 1LL;
      v60 = 2LL;
      v62 = 2LL;
      v64 = 4LL;
      v66 = 2LL;
      v68 = 1LL;
      v70 = 8LL;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 8LL;
      v86 = 8LL;
      v88 = 8LL;
      v90 = 8LL;
      v92 = 8LL;
      v94 = 2LL;
      v95 = v11;
      v96 = 512LL;
      TlgWrite(&hProvider, &unk_1C004C505, v12, v13, 0x23u, &pData);
    }
  }
}
