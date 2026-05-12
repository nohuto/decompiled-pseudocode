/*
 * XREFs of RaidBusEnumeratorGetLunListFromTarget @ 0x1C001489C
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0014A40 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C0015AEC (RaidSelectDeviceDumpCollectionMode.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003040C (WPP_SF_qD.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 *     WPP_SF_qddd @ 0x1C00307E8 (WPP_SF_qddd.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunListFromTarget(_QWORD *a1, int a2, int a3, _BYTE *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // r9
  PDEVICE_OBJECT v15; // rcx
  unsigned __int8 *v16; // rdi
  unsigned __int16 v17; // bx
  unsigned __int16 i; // bx
  int v19; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 *v20; // [rsp+48h] [rbp-30h] BYREF

  v19 = 16;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qddd(
      WPP_GLOBAL_Control->AttachedDevice,
      15LL,
      &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids,
      *a1,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
  }
  v8 = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v19, (__int64)&v20);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LOWORD(v11) = 0;
LABEL_9:
    memset(a4, 0, 0xFFuLL);
    v12 = v20;
    v13 = (unsigned int)(v20[3] | ((v20[2] | ((v20[1] | (*v20 << 8)) << 8)) << 8)) >> 3;
    RaidSelectDeviceDumpCollectionMode(*a1);
    v15 = WPP_GLOBAL_Control;
    if ( v13 )
    {
      v16 = v12 + 9;
      v11 = v13;
      do
      {
        v17 = _byteswap_ushort(*(_WORD *)(v16 - 1)) & 0x3FFF;
        if ( v17 >= 0xFFu )
        {
          if ( v15 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          {
            if ( (HIDWORD(v15->Timer) & 0x4000) != 0 && BYTE1(v15->Timer) >= 3u )
            {
              WPP_SF_qD(v15->AttachedDevice, 17LL, &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids, *a1, v17);
              v15 = WPP_GLOBAL_Control;
            }
            if ( v15 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(v15->Timer) & 0x4000) != 0
              && BYTE1(v15->Timer) >= 3u )
            {
              WPP_SF_D(v15->AttachedDevice, 18LL, &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids, v17);
              v15 = WPP_GLOBAL_Control;
            }
          }
        }
        else
        {
          a4[v17] = 1;
        }
        v16 += 8;
        --v11;
      }
      while ( v11 );
    }
    if ( v15 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(v15->Timer) & 0x4000) != 0 && BYTE1(v15->Timer) >= 4u )
      {
        WPP_SF_q(v15->AttachedDevice, 19LL, &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids, *a1);
        v15 = WPP_GLOBAL_Control;
      }
      if ( v15 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v15->Timer) & 0x4000) != 0 && BYTE1(v15->Timer) >= 5u )
      {
        WPP_SF_(v15->AttachedDevice, 20LL, &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids, v14);
        v15 = WPP_GLOBAL_Control;
      }
    }
    for ( i = v11; i < 0xFFu; ++i )
    {
      if ( *a4 != (_BYTE)v11
        && v15 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(v15->Timer) & 0x4000) != 0
        && BYTE1(v15->Timer) >= 5u )
      {
        WPP_SF_D(v15->AttachedDevice, 21LL, &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids, i);
        v15 = WPP_GLOBAL_Control;
      }
      ++a4;
    }
    return 0LL;
  }
  if ( v8 != -1073741789 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        16LL,
        &WPP_92cda79a5bec3e9b654e28582cab3340_Traceguids,
        (unsigned int)v8);
    }
    return v9;
  }
  result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v19, (__int64)&v20);
  if ( (_DWORD)result == -1073741789 )
  {
    v19 = 8 * *(unsigned __int8 *)(*a1 + 450LL) + 8;
    result = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, a3, (unsigned int)&v19, (__int64)&v20);
  }
  LOWORD(v11) = 0;
  if ( (int)result >= 0 )
    goto LABEL_9;
  return result;
}
