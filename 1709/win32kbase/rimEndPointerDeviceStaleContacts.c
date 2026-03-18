/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C011098C
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C010F710 (RIMEndAllStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00188F0 (RIMAbandonPointerDeviceFrame.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01050A0 (WPP_RECORDER_SF_dDD.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1C0115690 (RIMCmDeactivateContact.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01162DC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  int v5; // edi
  int v8; // r15d
  __int64 **v9; // rax
  __int64 *v10; // xmm1_8
  __int64 *v11; // rbx
  __int64 **v13; // rax
  int v14; // r8d
  int v15; // edx
  __int128 v16; // xmm0
  __int64 *v17; // xmm1_8
  unsigned int v18; // r11d
  int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-20h]
  __int64 *v25[3]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v5 = 0;
  DWORD2(v23) = 0;
  v8 = 0;
  v24 = *(__int64 **)(v4 + 896);
  *(_QWORD *)&v23 = v4 + 896;
  v9 = ListTableIteratorNext(v25, (__int64)&v23);
  v10 = v9[2];
  v23 = *(_OWORD *)v9;
  v24 = v10;
  while ( 1 )
  {
    v11 = v24;
    if ( (_QWORD)v23 == v4 + 896
      && DWORD2(v23) == *(_DWORD *)(v4 + 904)
      && v24 == (__int64 *)(*(_QWORD *)(v4 + 896) + 16LL * *(unsigned int *)(v4 + 904)) )
    {
      break;
    }
    if ( (v24[2] & 2) == 0 )
      __int2c();
    v13 = ListTableIteratorNext(v25, (__int64)&v23);
    v15 = 1;
    v16 = *(_OWORD *)v13;
    v17 = v13[2];
    LODWORD(v13) = *((_DWORD *)v11 + 7) + *(_DWORD *)(v4 + 704);
    v24 = v17;
    v23 = v16;
    if ( v18 > (unsigned int)v13 )
    {
      v19 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)(v19 - 5) > 1 )
      {
        if ( (unsigned int)(v19 - 1) <= 3 )
          v5 = 1;
      }
      else
      {
        v5 = 2;
      }
      if ( (*((_DWORD *)v11 + 651) & 2) != 0 )
      {
        if ( !v8 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, a3) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x2Cu,
              (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
            break;
          }
          v8 = 1;
        }
        LODWORD(v22) = *((_DWORD *)v11 + 651);
        LODWORD(v21) = *((_DWORD *)v11 - 2);
        WPP_RECORDER_SF_dDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          v14,
          0x2Du,
          (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
          *((_DWORD *)v11 - 4),
          v21,
          v22);
        *((_DWORD *)v11 + 576) |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, (_DWORD *)v11 - 4, a3, a4, 0);
      }
      else
      {
        LODWORD(v22) = *((_DWORD *)v11 + 651);
        LODWORD(v21) = *((_DWORD *)v11 - 2);
        WPP_RECORDER_SF_dDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          1,
          v14,
          0x2Bu,
          (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
          *((_DWORD *)v11 - 4),
          v21,
          v22);
        RIMCmDeactivateContact(v4, v11 - 2);
      }
    }
  }
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    RIMCompletePointerDeviceFrame(a1, a2);
  }
  v20 = *(_QWORD *)(a1 + 968);
  if ( v20 )
  {
    if ( v5 )
    {
      PalmTelemetry::_ResetTelemetryData(*(PalmTelemetry **)(a1 + 968));
      if ( *(_DWORD *)v20 )
      {
        if ( v5 == 1 )
          *(_DWORD *)(v20 + 4) = 1;
        else
          *(_QWORD *)v20 = 0LL;
      }
    }
  }
}
