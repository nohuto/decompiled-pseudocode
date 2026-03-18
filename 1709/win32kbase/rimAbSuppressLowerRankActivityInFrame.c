/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0103B04 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103B78 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103CF8 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0104090 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01050A0 (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_dDdd @ 0x1C010518C (WPP_RECORDER_SF_dDdd.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0107450 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMSetContactEndState @ 0x1C010FA20 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01155C0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0115660 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C0115794 (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r13
  __int64 **active; // rax
  _QWORD *v6; // r12
  __int64 *v7; // xmm1_8
  __int128 v8; // xmm0
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v12; // eax
  __int64 *v13; // rbx
  int v14; // ecx
  __int64 v15; // r8
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rax
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // [rsp+20h] [rbp-69h]
  __int128 v30; // [rsp+50h] [rbp-39h] BYREF
  __int128 v31; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v32; // [rsp+70h] [rbp-19h]
  char v33[24]; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v34; // [rsp+90h] [rbp+7h] BYREF
  int v35; // [rsp+F8h] [rbp+6Fh]
  __int64 v36; // [rsp+100h] [rbp+77h]

  v36 = *(_QWORD *)(a2 + 776);
  v35 = *(_DWORD *)(a2 + 748);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  active = (__int64 **)RIMCmActiveContactsBeginNoButton(v33, a2);
  v6 = (_QWORD *)(a2 + 896);
  while ( 1 )
  {
    v7 = active[2];
    v8 = *(_OWORD *)active;
    v9 = *(_DWORD *)(a2 + 904);
    v32 = v7;
    v10 = *v6 + 16LL * v9;
    v31 = v8;
    if ( (_QWORD *)v8 == v6 && DWORD2(v31) == v9 && v7 == (__int64 *)v10 )
      break;
    v12 = *((_DWORD *)v7 + 4);
    v13 = v7 - 2;
    if ( (v12 & 2) == 0 )
      __int2c();
    if ( (v12 & 4) != 0 )
      __int2c();
    if ( (v13[290] & 1) != 0 && (*((_DWORD *)v13 + 601) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v14 = *((_DWORD *)v13 + 13), (unsigned int)v4 <= v14 + 500)
        || !v14 )
      {
        if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3
          && (v15 = v13[304], v30 = *(_OWORD *)(a2 + 176), (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v30, v15)) )
        {
          WPP_RECORDER_SF_dDdd(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v17,
            v18,
            v29,
            *((_DWORD *)v7 + 594),
            *((_DWORD *)v13 + 601),
            *((_DWORD *)v13 + 608),
            *((_DWORD *)v13 + 609));
        }
        else if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, (__int64)(v13 + 299))
               && !(unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v13) )
        {
          goto LABEL_30;
        }
        RIMCmAddContactSuppressionReasons(a2, v13, 1LL);
        v21 = *((_DWORD *)v13 + 655);
        if ( (v21 & 2) != 0 )
        {
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            v20,
            v20 + 24,
            (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
            *(_DWORD *)v13,
            *((_DWORD *)v13 + 2),
            v21);
          RIMSetContactEndState(v22, (_DWORD)v13, v36, v35, 1);
        }
        else
        {
          WPP_RECORDER_SF_dDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            v20,
            26,
            (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
            *(_DWORD *)v13,
            *((_DWORD *)v13 + 2),
            v21);
          *((_DWORD *)v13 + 580) &= ~1u;
          if ( (v13[4] & 8) != 0 )
          {
            v23 = *(_QWORD *)(a2 + 920);
            if ( v23 )
            {
              *(_DWORD *)(v23 + 32) &= ~8u;
              *(_QWORD *)(a2 + 920) = 0LL;
            }
            if ( (*(_DWORD *)(a2 + 276) & 4) != 0 )
              RIMUpdatePrimaryDevice(a1, 0LL);
          }
        }
      }
    }
LABEL_30:
    active = ListTableIteratorNext(&v34, (__int64)&v31);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v26 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v27, ButtonContact, 1LL);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      v28 + 19,
      v28 + 26,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v26, v36, v35, 1);
  }
  return result;
}
