/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0007364 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0103A00 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103AF8 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103C78 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0105270 (WPP_RECORDER_SF_dDD.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0116C5C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0116C7C (RIMCmRemoveContactSuppressionReasons.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v5; // r12
  __int64 i; // rax
  __int64 v7; // rdx
  __int64 v8; // xmm1_8
  __int128 v9; // xmm0
  unsigned int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // edx
  int v17; // edx
  int v18; // r8d
  int v19; // ecx
  const wchar_t *v20; // rax
  LPCGUID v21; // r9
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int128 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int128 v28[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[24]; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h]
  int v35; // [rsp+108h] [rbp+8h]
  int v36; // [rsp+10Ch] [rbp+Ch]
  __int64 v37; // [rsp+110h] [rbp+10h]
  int v38; // [rsp+118h] [rbp+18h]
  int v39; // [rsp+11Ch] [rbp+1Ch]
  __int64 v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+12Ch] [rbp+2Ch]

  v2 = *(_QWORD *)(a2 + 472);
  v26 = 0;
  v5 = (_QWORD *)(v2 + 1560);
  v27 = *(_QWORD *)(v2 + 1560);
  v25 = v2 + 1560;
  for ( i = ListTableIteratorNext(v29, &v25); ; i = ListTableIteratorNext(v30, &v23) )
  {
    v8 = *(_QWORD *)(i + 16);
    v9 = *(_OWORD *)i;
    v10 = *(_DWORD *)(v2 + 1568);
    v24 = v8;
    result = *v5 + 16LL * v10;
    v23 = v9;
    if ( (_QWORD *)v9 == v5 && DWORD2(v23) == v10 && v8 == result )
      break;
    v12 = v8 - 16;
    if ( (*(_DWORD *)(v8 + 2304) & 1) == 0 )
      continue;
    v13 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v13 - 5) > 1 )
    {
      if ( (unsigned int)(v13 - 1) <= 3 )
      {
        v15 = *(_QWORD *)(v12 + 72);
        v28[0] = *(_OWORD *)(*(_QWORD *)(a2 + 472) + 156LL);
        if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, v28, v15) )
        {
          LOBYTE(v16) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            20,
            22,
            (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
          *(_DWORD *)(a1 + 632) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                + 250;
        }
      }
    }
    else if ( (*(_DWORD *)(v12 + 2404) & 2) != 0 )
    {
      if ( *(_DWORD *)(a1 + 620) )
      {
        *(_DWORD *)(a1 + 620) = 0;
        *(_DWORD *)(a1 + 632) = 0;
        *(_QWORD *)(a1 + 624) = 0LL;
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          20,
          21,
          (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
      }
    }
    else
    {
      v14 = *(_QWORD *)(v12 + 72);
      v28[1] = *(_OWORD *)(v2 + 156);
      rimAbCreateGlobalPenDeadzone(a1, v7, v14);
    }
    if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12) )
    {
      v19 = *(_DWORD *)(v12 + 2404);
      if ( (v19 & 2) != 0 && (unsigned int)(*(_DWORD *)(v2 + 24) - 5) <= 1 )
      {
        if ( (v19 & 4) != 0 )
          goto LABEL_20;
        if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v2, v12 + 2392) )
        {
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            20,
            23,
            (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
LABEL_20:
          RIMCmRemoveContactSuppressionReasons(v2, v12, 1LL);
          continue;
        }
      }
      LODWORD(v22) = *(_DWORD *)(v12 + 2620);
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        v18,
        24,
        (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
        *(_DWORD *)v12,
        *(_DWORD *)(v12 + 8),
        v22,
        (_QWORD)v23);
      if ( (unsigned int)dword_1C0188840 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
        {
          v20 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v20);
          TlgCreateWsz(&v33, *(LPCWSTR *)(a2 + 216));
          v36 = 0;
          v39 = 0;
          v42 = 0;
          v35 = 4;
          v38 = 4;
          v41 = 4;
          v34 = v8 - 16;
          v37 = v12 + 8;
          v40 = v12 + 2620;
          TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A268, 0LL, v21, 7u, &pData);
        }
      }
LABEL_28:
      *(_DWORD *)(v12 + 2320) &= ~1u;
      continue;
    }
    if ( *(_DWORD *)(v12 + 8) && (*(_DWORD *)(v12 + 2620) & 2) == 0 && (*(_DWORD *)(v12 + 2404) & 0x2000000) == 0 )
      goto LABEL_28;
  }
  return result;
}
