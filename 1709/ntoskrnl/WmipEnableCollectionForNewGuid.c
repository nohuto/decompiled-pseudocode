/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x14051C2C4
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

int __fastcall WmipEnableCollectionForNewGuid(__int128 *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rax
  LARGE_INTEGER *v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // rax
  LARGE_INTEGER *v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v16[6]; // [rsp+40h] [rbp-40h] BYREF

  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v5 = (_DWORD *)GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v5[22] )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        v5[4] |= 2u;
        KeReleaseMutex(&WmipSMMutex, 0);
        memset(v16, 0, sizeof(v16));
        v7 = *a1;
        v8 = *(_QWORD *)(a2 + 64);
        v9 = v16;
        v16[0].LowPart = 48;
        *(_OWORD *)&v16[3].LowPart = v7;
        LOBYTE(v9) = 4;
        WmipSendWmiIrp(v9, *(unsigned int *)(v8 + 56), &v16[3], 48LL, v16, v15);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( v5[22] )
        {
          v5[4] &= ~2u;
        }
        else
        {
          LOBYTE(v10) = 1;
          WmipDoDisableRequest(v5, v10, 2LL);
        }
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      memset(v16, 0, sizeof(v16));
      v11 = *a1;
      v12 = *(_QWORD *)(a2 + 64);
      v13 = v16;
      v16[0].LowPart = 48;
      *(_OWORD *)&v16[3].LowPart = v11;
      LOBYTE(v13) = 6;
      WmipSendWmiIrp(v13, *(unsigned int *)(v12 + 56), &v16[3], 48LL, v16, v15);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL, 4LL);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return GEByGuid;
}
