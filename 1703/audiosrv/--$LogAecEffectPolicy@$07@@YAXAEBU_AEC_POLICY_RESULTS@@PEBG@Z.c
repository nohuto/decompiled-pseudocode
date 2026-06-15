/*
 * XREFs of ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180047320
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void LogAecEffectPolicy<8>()
{
  const WCHAR *v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  __int64 v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  __int64 v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  __int64 v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  __int64 v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  __int64 v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]
  int *v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]
  int *v35; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
    {
      TlgCreateWsz(&pDesc, v0);
      v9 = v1;
      v11 = v1 + 4;
      v13 = v1 + 8;
      v15 = v1 + 12;
      v17 = v1 + 16;
      v19 = v1 + 20;
      v21 = v1 + 32;
      v23 = v1 + 28;
      v25 = v1 + 24;
      v27 = v1 + 36;
      v29 = v1 + 40;
      v31 = v1 + 44;
      v5 = *(_DWORD *)(v1 + 60);
      v33 = &v5;
      v6 = *(_DWORD *)(v1 + 64);
      v35 = &v6;
      v10 = v2;
      v12 = v2;
      v14 = v2;
      v16 = v2;
      v18 = v2;
      v20 = v2;
      v22 = v2;
      v24 = v2;
      v26 = v2;
      v28 = v2;
      v30 = v2;
      v32 = 16LL;
      v34 = v2;
      v36 = v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA6D4, v3, v4, 0x11u, &pData);
    }
  }
}
