/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x1405FF1F0
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1405FF044 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WmipFindGEByGuid @ 0x140501D60 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x14051B374 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x1405DCF88 (WmipSendWmiIrp.c)
 *     WmipDoDisableRequest @ 0x1405F0AD4 (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140605A9C (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v13[6]; // [rsp+40h] [rbp-40h] BYREF

  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        *((_DWORD *)v5 + 4) |= 2u;
        KeReleaseMutex(&WmipSMMutex, 0);
        memset(v13, 0, sizeof(v13));
        v7 = *(_OWORD *)a1;
        v8 = *(_QWORD *)(a2 + 64);
        v13[0].LowPart = 48;
        *(_OWORD *)&v13[3].LowPart = v7;
        WmipSendWmiIrp(4u, *(_DWORD *)(v8 + 56), (UNICODE_STRING *)&v13[3], 0x30u, (__int64)v13, &v12);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *((_DWORD *)v5 + 22) )
          *((_DWORD *)v5 + 4) &= ~2u;
        else
          WmipDoDisableRequest(v5, 1, 2LL);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v13, 0, sizeof(v13));
      v9 = *(_OWORD *)a1;
      v10 = *(_QWORD *)(a2 + 64);
      v13[0].LowPart = 48;
      *(_OWORD *)&v13[3].LowPart = v9;
      WmipSendWmiIrp(6u, *(_DWORD *)(v10 + 56), (UNICODE_STRING *)&v13[3], 0x30u, (__int64)v13, &v12);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0, 4LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
