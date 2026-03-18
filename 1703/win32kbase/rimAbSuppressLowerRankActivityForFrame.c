/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103CF8 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0104000 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0105270 (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C010E1D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010E78C (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0110D50 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0116AE4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0116C18 (RIMCmGetButtonContact.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  int v7; // r12d
  LARGE_INTEGER PerformanceCounter; // rbx
  int v9; // edi
  __int64 active; // rax
  _QWORD *v11; // r13
  _DWORD *v12; // xmm1_8
  __int128 v13; // xmm0
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  __int64 ButtonContact; // rdi
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edx
  __int64 v24; // [rsp+28h] [rbp-41h]
  unsigned __int64 v25; // [rsp+40h] [rbp-29h]
  __int128 v26; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v27; // [rsp+58h] [rbp-11h]
  _BYTE v28[24]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v29[72]; // [rsp+78h] [rbp+Fh] BYREF
  int v30; // [rsp+D8h] [rbp+6Fh]
  __int64 v32; // [rsp+E8h] [rbp+7Fh]

  v6 = 1;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v32 = *(_QWORD *)(a2 + 1440) + 1LL;
  v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v30 = *(_DWORD *)(a2 + 1412) + 1;
  v9 = RIMGetPointerInputType(a2);
  if ( v9 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(v28, a2);
    v11 = (_QWORD *)(a2 + 1560);
    while ( 1 )
    {
      v12 = *(_DWORD **)(active + 16);
      v13 = *(_OWORD *)active;
      v14 = *(_DWORD *)(a2 + 1568);
      v27 = v12;
      v15 = *v11 + 16LL * v14;
      v26 = v13;
      if ( (_QWORD *)v13 == v11 && DWORD2(v26) == v14 && v12 == (_DWORD *)v15 )
        break;
      if ( (v12[4] & 2) == 0 )
        __int2c();
      if ( (v12[651] & 2) != 0 )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v16 = v12[9], (unsigned int)v25 <= v16 + 500)
          || !v16 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v12 + 648, a2, a3, 0) )
          {
            if ( !v7 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v7 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v12 - 4, 1LL);
            WPP_RECORDER_SF_dDD(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              v18,
              16,
              (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
              *(v12 - 4),
              *(v12 - 2),
              v12[651]);
            RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), (_DWORD)v12 - 16, v32, v30, 1);
          }
        }
      }
      active = ListTableIteratorNext(v29, &v26);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed(a1, a2) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v20, ButtonContact, 1LL);
      if ( !v7 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v22,
            20,
            17,
            (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
          return 0;
        }
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          20,
          18,
          (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
        RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), ButtonContact, v32, v30, 1);
        goto LABEL_28;
      }
      LOBYTE(v21) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        20,
        19,
        (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
    }
    if ( v7 )
    {
LABEL_28:
      v6 = RIMCompletePointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
      LODWORD(v24) = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x14u,
        (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
        v24);
    }
  }
  return v6;
}
