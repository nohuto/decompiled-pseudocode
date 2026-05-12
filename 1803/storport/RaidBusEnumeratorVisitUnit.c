/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C0012FEC
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C00133A0 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0029428 (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003CDF0 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidRemoveTrailingBlanks @ 0x1C00076B4 (RaidRemoveTrailingBlanks.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00136B8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0013AEC (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0014224 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0014958 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     WPP_SF_D @ 0x1C002C028 (WPP_SF_D.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r14d
  int v7; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  _OWORD *Pool; // rax
  int v11; // r8d
  int v12; // r8d
  char v13; // dl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  _OWORD v17[14]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v17, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v17);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_f0a7e80c00373f324f5040e12af5bb70_Traceguids,
      BYTE1(v17[0]),
      BYTE2(v17[0]),
      BYTE3(v17[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiryCallback, (_DWORD)a1, a2, (unsigned int)v17, 36);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_f0a7e80c00373f324f5040e12af5bb70_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = 255;
    v7 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           (_DWORD)a1,
           a2,
           (unsigned int)v17,
           255);
    v5 = v7;
    if ( v7 == -1073741801 )
      goto LABEL_25;
    if ( v7 == -1073741670 )
      goto LABEL_25;
    if ( (v17[0] & 1) != 0 )
    {
      v14 = RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumDeviceIdCallback,
              (_DWORD)a1,
              a2,
              (unsigned int)v17,
              255);
      v5 = v14;
      if ( v14 == -1073741801 || v14 == -1073741670 )
        goto LABEL_25;
    }
    if ( (v17[0] & 2) != 0 )
    {
      v15 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumSerialNumber, (_DWORD)a1, a2, (unsigned int)v17, 255);
      v5 = v15;
      if ( v15 == -1073741801 || v15 == -1073741670 )
        goto LABEL_25;
    }
    if ( (**(_BYTE **)&v17[2] & 0x1F) == 0 || (**(_BYTE **)&v17[2] & 0x1F) == 0x14 )
    {
      v8 = *(_BYTE *)(*(_QWORD *)&v17[2] + 4LL);
      if ( v8 >= 0x37u )
      {
        if ( (unsigned __int64)v8 + 5 <= 0xFF )
          v6 = v8 + 5;
        RaidBusEnumeratorGenericInquiry(
          (unsigned int)&RaidEnumInquiry1667Callback,
          (_DWORD)a1,
          a2,
          (unsigned int)v17,
          v6);
      }
    }
    if ( (v17[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumAtaInformation, (_DWORD)a1, a2, (unsigned int)v17, 572);
    }
    else if ( *((_QWORD *)&v17[0] + 1) && RaidIsUnitControlSupported(*((__int64 *)&v17[0] + 1), 11) )
    {
      memset(&v17[6], 0, 0x78uLL);
      v9 = *a1;
      *(_QWORD *)&v17[6] = 0x7800000002LL;
      *(_QWORD *)&v17[13] = *((_QWORD *)&v17[0] + 1) + 80LL;
      v5 = RaCallMiniportUnitControl(v9 + 296, 11LL);
      if ( v5 < 0 )
      {
        v16 = *a1 + 296;
        *(_QWORD *)&v17[6] = 0x6C00000001LL;
        v5 = RaCallMiniportUnitControl(v16, 11LL);
      }
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*a1 + 8));
        *(_QWORD *)&v17[5] = Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_25;
        }
        *Pool = v17[6];
        Pool[1] = v17[7];
        Pool[2] = v17[8];
        Pool[3] = v17[9];
        Pool[4] = v17[10];
        Pool[5] = v17[11];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v17[12];
        *((_DWORD *)Pool + 26) = DWORD2(v17[12]);
        RaidRemoveTrailingBlanks(*(_QWORD *)&v17[5] + 8LL, 17);
        RaidRemoveTrailingBlanks(*(_QWORD *)&v17[5] + 25LL, v11 + 48);
        RaidRemoveTrailingBlanks(*(_QWORD *)&v17[5] + 90LL, v12);
      }
    }
    v13 = **(_BYTE **)&v17[2] & 0x1F;
    if ( v13 == 20 )
    {
      BYTE9(v17[3]) = 1;
    }
    else if ( (v17[0] & 0x18) == 24 && v13 == 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumBlockDeviceCharacteristics,
        (_DWORD)a1,
        a2,
        (unsigned int)v17,
        64);
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v17);
LABEL_25:
  RaidBusEnumeratorReleaseUnit(a1, v17);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
