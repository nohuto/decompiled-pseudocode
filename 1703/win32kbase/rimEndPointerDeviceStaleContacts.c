/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C0111EAC
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C0110C68 (RIMEndAllStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0105270 (WPP_RECORDER_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C010E1D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010E78C (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0110D50 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmDeactivateContact @ 0x1C0116B14 (RIMCmDeactivateContact.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01173D0 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  int v5; // edi
  int v8; // r15d
  __int64 v9; // rax
  _DWORD *v10; // xmm1_8
  _DWORD *v11; // rbx
  __int64 v12; // rax
  int v13; // r8d
  __int128 v14; // xmm0
  _DWORD *v15; // xmm1_8
  unsigned int v16; // r11d
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v23; // [rsp+50h] [rbp-20h]
  _BYTE v24[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v5 = 0;
  DWORD2(v22) = 0;
  v8 = 0;
  v23 = *(_DWORD **)(v4 + 1560);
  *(_QWORD *)&v22 = v4 + 1560;
  v9 = ListTableIteratorNext(v24, &v22);
  v10 = *(_DWORD **)(v9 + 16);
  v22 = *(_OWORD *)v9;
  v23 = v10;
  while ( 1 )
  {
    v11 = v23;
    if ( (_QWORD)v22 == v4 + 1560
      && DWORD2(v22) == *(_DWORD *)(v4 + 1568)
      && v23 == (_DWORD *)(*(_QWORD *)(v4 + 1560) + 16LL * *(unsigned int *)(v4 + 1568)) )
    {
      break;
    }
    if ( (v23[4] & 2) == 0 )
      __int2c();
    v12 = ListTableIteratorNext(v24, &v22);
    v14 = *(_OWORD *)v12;
    v15 = *(_DWORD **)(v12 + 16);
    LODWORD(v12) = v11[7] + *(_DWORD *)(v4 + 856);
    v23 = v15;
    v22 = v14;
    if ( v16 > (unsigned int)v12 )
    {
      v17 = *(_DWORD *)(v4 + 24);
      v18 = 1;
      if ( (unsigned int)(v17 - 5) > 1 )
      {
        if ( (unsigned int)(v17 - 1) <= 3 )
          v5 = 1;
      }
      else
      {
        v5 = 2;
      }
      if ( (v11[651] & 2) != 0 )
      {
        if ( !v8 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, a3) )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              19,
              43,
              (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
            break;
          }
          v8 = 1;
        }
        LODWORD(v21) = v11[651];
        LODWORD(v20) = *(v11 - 2);
        WPP_RECORDER_SF_dDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v13,
          0x2Cu,
          (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
          *(v11 - 4),
          v20,
          v21);
        v11[576] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, v11 - 4, a3, a4, 0);
      }
      else
      {
        LODWORD(v21) = v11[651];
        LODWORD(v20) = *(v11 - 2);
        WPP_RECORDER_SF_dDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          1,
          v13,
          0x2Au,
          (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
          *(v11 - 4),
          v20,
          v21);
        RIMCmDeactivateContact(v4, v11 - 4);
      }
    }
  }
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    RIMCompletePointerDeviceFrame(a1, a2);
  }
  v19 = *(_QWORD *)(a1 + 968);
  if ( v19 )
  {
    if ( v5 )
    {
      PalmTelemetry::_ResetTelemetryData(*(PalmTelemetry **)(a1 + 968));
      if ( *(_DWORD *)v19 )
      {
        if ( v5 == 1 )
          *(_DWORD *)(v19 + 4) = 1;
        else
          *(_QWORD *)v19 = 0LL;
      }
    }
  }
}
