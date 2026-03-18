/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0007364 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0103A84 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103AF8 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103C78 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0104000 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0105270 (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_dDdd @ 0x1C010535C (WPP_RECORDER_SF_dDdd.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0106768 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0110D50 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMSetContactEndState @ 0x1C0110F58 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0116AE4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0116C18 (RIMCmGetButtonContact.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r13
  __int64 active; // rax
  _QWORD *v6; // r12
  __int64 v7; // xmm1_8
  __int128 v8; // xmm0
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r10
  const wchar_t *v23; // rax
  __int64 v24; // r10
  LPCGUID v25; // r9
  __int64 v26; // r10
  const wchar_t *v27; // rax
  __int64 v28; // r10
  LPCGUID v29; // r9
  __int64 v30; // rax
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v33; // ebx
  __int64 v34; // rcx
  int v35; // edx
  int cData; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int128 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v43[24]; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+170h] [rbp+70h] BYREF
  __int64 v56; // [rsp+180h] [rbp+80h]
  int v57; // [rsp+188h] [rbp+88h]
  int v58; // [rsp+18Ch] [rbp+8Ch]
  __int64 v59; // [rsp+190h] [rbp+90h]
  int v60; // [rsp+198h] [rbp+98h]
  int v61; // [rsp+19Ch] [rbp+9Ch]
  __int64 v62; // [rsp+1A0h] [rbp+A0h]
  int v63; // [rsp+1A8h] [rbp+A8h]
  int v64; // [rsp+1ACh] [rbp+ACh]

  v38 = *(_QWORD *)(a2 + 1440);
  v37 = *(_DWORD *)(a2 + 1412);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  active = RIMCmActiveContactsBeginNoButton(v42, a2);
  v6 = (_QWORD *)(a2 + 1560);
  while ( 1 )
  {
    v7 = *(_QWORD *)(active + 16);
    v8 = *(_OWORD *)active;
    v9 = *(_DWORD *)(a2 + 1568);
    v40 = v7;
    v10 = *v6 + 16LL * v9;
    v39 = v8;
    if ( (_QWORD *)v8 == v6 && DWORD2(v39) == v9 && v7 == v10 )
      break;
    v11 = *(_DWORD *)(v7 + 16);
    v12 = v7 - 16;
    if ( (v11 & 2) == 0 )
      __int2c();
    if ( (v11 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v12 + 2320) & 1) != 0 && (*(_DWORD *)(v12 + 2404) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v13 = *(_DWORD *)(v12 + 52), (unsigned int)v4 <= v13 + 500)
        || !v13 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3
          && (v14 = *(_QWORD *)(v12 + 2432),
              v41 = *(_OWORD *)(a2 + 156),
              (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v41, v14)) )
        {
          WPP_RECORDER_SF_dDdd(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            v16,
            v17,
            cData,
            *(_DWORD *)(v7 - 16 + 2392),
            *(_DWORD *)(v12 + 2404),
            *(_DWORD *)(v12 + 2432),
            *(_DWORD *)(v12 + 2436));
        }
        else if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v12 + 2392)
               && !(unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v12) )
        {
          goto LABEL_33;
        }
        RIMCmAddContactSuppressionReasons(a2, v12, 1LL);
        v20 = *(_DWORD *)(v12 + 2620);
        if ( (v20 & 2) != 0 )
        {
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            v19 + 24,
            (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
            *(_DWORD *)v12,
            *(_DWORD *)(v12 + 8),
            v20);
          if ( (unsigned int)dword_1C0188840 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
            {
              v23 = RimDeviceTypeToRimInputTypeString(v22, *(unsigned __int8 *)(v22 + 48));
              TlgCreateWsz(&pDesc, v23);
              TlgCreateWsz(&v46, *(LPCWSTR *)(v24 + 216));
              v47 = v7 - 16;
              v48 = 4LL;
              v49 = v12 + 8;
              v50 = 4LL;
              v51 = v12 + 2620;
              v52 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A1F2, 0LL, v25, 7u, &pData);
            }
          }
          RIMSetContactEndState(v21, v12, v38, v37, 1);
        }
        else
        {
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            26,
            (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
            *(_DWORD *)v12,
            *(_DWORD *)(v12 + 8),
            v20);
          if ( (unsigned int)dword_1C0188840 > 5
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
          {
            v27 = RimDeviceTypeToRimInputTypeString(v26, *(unsigned __int8 *)(v26 + 48));
            TlgCreateWsz(&v54, v27);
            TlgCreateWsz(&v55, *(LPCWSTR *)(v28 + 216));
            v58 = 0;
            v61 = 0;
            v64 = 0;
            v57 = 4;
            v60 = 4;
            v63 = 4;
            v56 = v7 - 16;
            v59 = v12 + 8;
            v62 = v12 + 2620;
            TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A1F2, 0LL, v29, 7u, &v53);
          }
          *(_DWORD *)(v12 + 2320) &= ~1u;
          if ( (*(_DWORD *)(v12 + 32) & 8) != 0 )
          {
            v30 = *(_QWORD *)(a2 + 1584);
            if ( v30 )
            {
              *(_DWORD *)(v30 + 32) &= ~8u;
              *(_QWORD *)(a2 + 1584) = 0LL;
            }
            if ( (*(_DWORD *)(a2 + 260) & 4) != 0 )
              RIMUpdatePrimaryDevice(a1, 0LL);
          }
        }
      }
    }
LABEL_33:
    active = ListTableIteratorNext(v43, &v39);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v33 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v34, ButtonContact, 1LL);
    LOBYTE(v35) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v35,
      20,
      27,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v33, v38, v37, 1);
  }
  return result;
}
