/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C001452C
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0014868 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C002F57C (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidRemoveTrailingBlanks @ 0x1C00060AC (RaidRemoveTrailingBlanks.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0014B94 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0014F80 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0015634 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0015D70 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00166F4 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 *     WPP_SF_D @ 0x1C0030E98 (WPP_SF_D.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 v10; // cl
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // rcx
  _OWORD *Pool; // rax
  int v15; // r8d
  int v16; // r8d
  char v17; // [rsp+28h] [rbp-D8h]
  char v18; // [rsp+28h] [rbp-D8h]
  char v19; // [rsp+28h] [rbp-D8h]
  _QWORD v20[12]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v21[8]; // [rsp+90h] [rbp-70h] BYREF

  memset(v20, 0, sizeof(v20));
  result = RaidBusEnumeratorGetUnit(a1, a2, v20);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_6a92be7ca9eb3b415b66b736f6ea9340_Traceguids,
      BYTE1(v20[0]),
      BYTE2(v20[0]),
      BYTE3(v20[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiryCallback, a1, a2, (unsigned int)v20, 36, v17);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_6a92be7ca9eb3b415b66b736f6ea9340_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = 255;
    v7 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           a1,
           a2,
           (unsigned int)v20,
           255,
           v18);
    v5 = v7;
    if ( v7 == -1073741801 )
      goto LABEL_27;
    if ( v7 == -1073741670 )
      goto LABEL_27;
    if ( (v20[0] & 1) != 0 )
    {
      v8 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumDeviceIdCallback, a1, a2, (unsigned int)v20, 255, v19);
      v5 = v8;
      if ( v8 == -1073741801 || v8 == -1073741670 )
        goto LABEL_27;
    }
    if ( (v20[0] & 2) != 0 )
    {
      v9 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumSerialNumber, a1, a2, (unsigned int)v20, 255, v19);
      v5 = v9;
      if ( v9 == -1073741801 || v9 == -1073741670 )
        goto LABEL_27;
    }
    if ( (*(_BYTE *)v20[4] & 0x1F) == 0 || (*(_BYTE *)v20[4] & 0x1F) == 0x14 )
    {
      v10 = *(_BYTE *)(v20[4] + 4LL);
      if ( v10 >= 0x37u )
      {
        if ( (unsigned __int64)v10 + 5 <= 0xFF )
          v6 = v10 + 5;
        RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiry1667Callback, a1, a2, (unsigned int)v20, v6, v19);
      }
    }
    if ( (v20[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumAtaInformation, a1, a2, (unsigned int)v20, 572, v19);
    }
    else if ( v20[1] && (unsigned __int8)RaidIsUnitControlSupported(v20[1], 11LL) )
    {
      memset((char *)v21 + 4, 0, 0x74uLL);
      v12 = *(_QWORD *)a1 + 296LL;
      *(_QWORD *)&v21[7] = v20[1] + 80LL;
      *(_QWORD *)&v21[0] = 0x7800000002LL;
      v5 = RaCallMiniportUnitControl(v12, 11LL, v21);
      if ( v5 < 0 )
      {
        v13 = *(_QWORD *)a1 + 296LL;
        *(_QWORD *)&v21[0] = 0x6C00000001LL;
        v5 = RaCallMiniportUnitControl(v13, 11LL, v21);
      }
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
        v20[10] = Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_27;
        }
        *Pool = v21[0];
        Pool[1] = v21[1];
        Pool[2] = v21[2];
        Pool[3] = v21[3];
        Pool[4] = v21[4];
        Pool[5] = v21[5];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v21[6];
        *((_DWORD *)Pool + 26) = DWORD2(v21[6]);
        RaidRemoveTrailingBlanks(v20[10] + 8LL, 17);
        RaidRemoveTrailingBlanks(v20[10] + 25LL, v15 + 48);
        RaidRemoveTrailingBlanks(v20[10] + 90LL, v16);
      }
    }
    v11 = *(_BYTE *)v20[4] & 0x1F;
    if ( v11 == 20 )
    {
      BYTE1(v20[7]) = 1;
    }
    else if ( (v20[0] & 0x18) == 24 && v11 == 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumBlockDeviceCharacteristics,
        a1,
        a2,
        (unsigned int)v20,
        64,
        v19);
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v20);
LABEL_27:
  RaidBusEnumeratorReleaseUnit(a1, v20);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
