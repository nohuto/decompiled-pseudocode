/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x140593B58
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x14051C120 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14074326C (WmipUpdateDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     WmipFindGEByGuid @ 0x14051FFE0 (WmipFindGEByGuid.c)
 *     WmipDoDisableRequest @ 0x1405D5E40 (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x1405D5ED0 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  _QWORD *GEByGuid; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rax
  LARGE_INTEGER *v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v15[6]; // [rsp+40h] [rbp-40h] BYREF

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
      memset(v15, 0, sizeof(v15));
      v6 = *(_OWORD *)a1;
      v7 = *(_QWORD *)(a2 + 64);
      v8 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v6;
      LOBYTE(v8) = 5;
      WmipSendWmiIrp((__int64)v8, *(unsigned int *)(v7 + 56), (__int64)&v15[3], 48, (__int64)v15, &v14);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 22) )
      {
        *((_DWORD *)v5 + 4) &= ~2u;
      }
      else
      {
        LOBYTE(v9) = 1;
        WmipDoDisableRequest(v5, v9, 2LL);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v15, 0, sizeof(v15));
      v10 = *(_OWORD *)a1;
      v11 = *(_QWORD *)(a2 + 64);
      v12 = v15;
      v15[0].LowPart = 48;
      *(_OWORD *)&v15[3].LowPart = v10;
      LOBYTE(v12) = 7;
      WmipSendWmiIrp((__int64)v12, *(unsigned int *)(v11 + 56), (__int64)&v15[3], 48, (__int64)v15, &v14);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL, 4LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
