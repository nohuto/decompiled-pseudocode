/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00188F0 (RIMAbandonPointerDeviceFrame.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0104090 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01050A0 (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01155C0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0115660 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0115794 (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // r12d
  LARGE_INTEGER PerformanceCounter; // rbx
  int v9; // edi
  __int64 **active; // rax
  _QWORD *v11; // r13
  __int64 *v12; // xmm1_8
  __int128 v13; // xmm0
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  __int64 ButtonContact; // rdi
  __int64 v21; // rcx
  __int64 v23; // [rsp+28h] [rbp-41h]
  unsigned __int64 v24; // [rsp+40h] [rbp-29h]
  __int128 v25; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-11h]
  char v27[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v28; // [rsp+78h] [rbp+Fh] BYREF
  int v29; // [rsp+D8h] [rbp+6Fh]
  __int64 v31; // [rsp+E8h] [rbp+7Fh]

  v6 = 1;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v31 = *(_QWORD *)(a2 + 776) + 1LL;
  v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v29 = *(_DWORD *)(a2 + 748) + 1;
  v9 = RIMGetPointerInputType(a2);
  if ( v9 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = (__int64 **)RIMCmActiveContactsBeginNoButton(v27, a2);
    v11 = (_QWORD *)(a2 + 896);
    while ( 1 )
    {
      v12 = active[2];
      v13 = *(_OWORD *)active;
      v14 = *(_DWORD *)(a2 + 904);
      v26 = v12;
      v15 = *v11 + 16LL * v14;
      v25 = v13;
      if ( (_QWORD *)v13 == v11 && DWORD2(v25) == v14 && v12 == (__int64 *)v15 )
        break;
      if ( (v12[2] & 2) == 0 )
        __int2c();
      if ( (*((_DWORD *)v12 + 651) & 2) != 0 )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v17 = *((_DWORD *)v12 + 9), (unsigned int)v24 <= v17 + 500)
          || !v17 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts((_DWORD *)v12 + 648, a2, a3, 0) )
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
            RIMCmAddContactSuppressionReasons(a2, v12 - 2, 1LL);
            WPP_RECORDER_SF_dDD(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              v19,
              16,
              (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
              *((_DWORD *)v12 - 4),
              *((_DWORD *)v12 - 2),
              *((_DWORD *)v12 + 651));
            RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), (_DWORD)v12 - 16, v31, v29, 1);
          }
        }
      }
      active = ListTableIteratorNext(&v28, (__int64)&v25);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed(a1, a2) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v21, ButtonContact, 1LL);
      if ( !v7 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x11u,
            (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
          return 0;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x12u,
          (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
        RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), ButtonContact, v31, v29, 1);
        goto LABEL_30;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x13u,
        (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
    }
    if ( v7 )
    {
LABEL_30:
      v6 = RIMCompletePointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
      LODWORD(v23) = v6;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x14u,
        (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
        v23);
    }
  }
  return v6;
}
