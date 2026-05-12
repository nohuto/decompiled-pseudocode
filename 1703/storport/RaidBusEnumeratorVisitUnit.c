/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C0014154
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C001441C (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C002E840 (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003D940 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C0005704 (RaidRemoveTrailingBlanks.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0014744 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0014B30 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00151E4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0015924 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_ddd @ 0x1C003036C (WPP_SF_ddd.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _OWORD *Pool; // rax
  int v14; // r11d
  int v15; // r11d
  char v16; // [rsp+28h] [rbp-D8h]
  char v17; // [rsp+28h] [rbp-D8h]
  char v18; // [rsp+28h] [rbp-D8h]
  _QWORD v19[12]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v20[8]; // [rsp+90h] [rbp-70h] BYREF

  memset(v19, 0, sizeof(v19));
  result = RaidBusEnumeratorGetUnit(a1, a2, v19);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids,
      BYTE1(v19[0]),
      BYTE2(v19[0]),
      BYTE3(v19[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumInquiryCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v19,
         36,
         v16);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           (_DWORD)a1,
           a2,
           (unsigned int)v19,
           255,
           v17);
    v5 = v6;
    if ( v6 == -1073741801 )
      goto LABEL_24;
    if ( v6 == -1073741670 )
      goto LABEL_24;
    if ( (v19[0] & 1) != 0 )
    {
      v7 = RaidBusEnumeratorGenericInquiry(
             (unsigned int)&RaidEnumDeviceIdCallback,
             (_DWORD)a1,
             a2,
             (unsigned int)v19,
             255,
             v18);
      v5 = v7;
      if ( v7 == -1073741801 || v7 == -1073741670 )
        goto LABEL_24;
    }
    if ( (v19[0] & 2) != 0 )
    {
      v8 = RaidBusEnumeratorGenericInquiry(
             (unsigned int)&RaidEnumSerialNumber,
             (_DWORD)a1,
             a2,
             (unsigned int)v19,
             255,
             v18);
      v5 = v8;
      if ( v8 == -1073741801 || v8 == -1073741670 )
        goto LABEL_24;
    }
    if ( (*(_BYTE *)v19[4] & 0x1F) == 0 )
    {
      v9 = *(_BYTE *)(v19[4] + 4LL);
      if ( v9 >= 0x37u )
      {
        v10 = v9 + 5LL;
        if ( v10 > 0xFF )
          LODWORD(v10) = 255;
        RaidBusEnumeratorGenericInquiry(
          (unsigned int)&RaidEnumInquiry1667Callback,
          (_DWORD)a1,
          a2,
          (unsigned int)v19,
          v10,
          v18);
      }
    }
    if ( (v19[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumAtaInformation,
        (_DWORD)a1,
        a2,
        (unsigned int)v19,
        572,
        v18);
    }
    else if ( v19[1] && (unsigned __int8)RaidIsUnitControlSupported(v19[1], 11LL) )
    {
      memset((char *)v20 + 4, 0, 0x74uLL);
      v11 = *a1;
      *(_QWORD *)&v20[7] = v19[1] + 80LL;
      *(_QWORD *)&v20[0] = 0x7800000002LL;
      v5 = RaCallMiniportUnitControl(v11 + 296, 11LL, v20);
      if ( v5 < 0 )
      {
        v12 = *a1 + 296;
        *(_QWORD *)&v20[0] = 0x6C00000001LL;
        v5 = RaCallMiniportUnitControl(v12, 11LL, v20);
      }
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*a1 + 8));
        v19[10] = Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_24;
        }
        *Pool = v20[0];
        Pool[1] = v20[1];
        Pool[2] = v20[2];
        Pool[3] = v20[3];
        Pool[4] = v20[4];
        Pool[5] = v20[5];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v20[6];
        *((_DWORD *)Pool + 26) = DWORD2(v20[6]);
        RaidRemoveTrailingBlanks(v19[10] + 8LL, 17);
        RaidRemoveTrailingBlanks(v19[10] + 25LL, v14 + 48);
        RaidRemoveTrailingBlanks(v19[10] + 90LL, v15);
      }
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v19);
LABEL_24:
  RaidBusEnumeratorReleaseUnit(a1, v19);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
