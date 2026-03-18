/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x140595CB0
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1405A0CC8 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14070924C (WmipUpdateDataSource.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     WmipUnreferenceEntry @ 0x1404BECD0 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x140555288 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x140580D5C (WmipSendWmiIrp.c)
 *     WmipDoDisableRequest @ 0x140581C00 (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x1405D63E4 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v12[6]; // [rsp+40h] [rbp-40h] BYREF

  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      *((_DWORD *)v5 + 4) |= 2u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v12, 0, sizeof(v12));
      v6 = *(_OWORD *)a1;
      v7 = *(_QWORD *)(a2 + 64);
      v12[0].LowPart = 48;
      *(_OWORD *)&v12[3].LowPart = v6;
      WmipSendWmiIrp(5u, *(_DWORD *)(v7 + 56), (UNICODE_STRING *)&v12[3], 0x30u, (__int64)v12, &v11);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 22) )
        *((_DWORD *)v5 + 4) &= ~2u;
      else
        WmipDoDisableRequest(v5, 1, 2LL);
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v12, 0, sizeof(v12));
      v8 = *(_OWORD *)a1;
      v9 = *(_QWORD *)(a2 + 64);
      v12[0].LowPart = 48;
      *(_OWORD *)&v12[3].LowPart = v8;
      WmipSendWmiIrp(7u, *(_DWORD *)(v9 + 56), (UNICODE_STRING *)&v12[3], 0x30u, (__int64)v12, &v11);
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
