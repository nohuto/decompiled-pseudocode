/*
 * XREFs of RaSqmLogAdapterStatistics @ 0x1C0030CD4
 * Callers:
 *     RaSqmLogStatistics @ 0x1C0031070 (RaSqmLogStatistics.c)
 * Callees:
 *     RaidGetPortData @ 0x1C0001D0C (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0001D80 (RaidReleasePortData.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorSqmAddToStream @ 0x1C0047EF4 (StorSqmAddToStream.c)
 *     StorSqmCreateStringStreamEntry @ 0x1C00480E4 (StorSqmCreateStringStreamEntry.c)
 */

void RaSqmLogAdapterStatistics()
{
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v1; // r14
  _QWORD *v2; // r12
  _QWORD *i; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  ULONG v8; // kr00_4
  unsigned int v9; // ecx
  int v10; // r9d
  __int64 v11; // r8
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v27; // rcx
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+20h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v30[36]; // [rsp+50h] [rbp-B0h] BYREF

  LODWORD(v30[0]) = 0;
  memset(&v30[1], 0, 0x118uLL);
  PortData = RaidGetPortData();
  v1 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock(PortData + 3, &LockHandle);
    v2 = v1 + 1;
    for ( i = (_QWORD *)v1[1]; i != v2; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v28);
      v4 = (__int64 *)i[4];
      if ( v4 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v4 - 8)) >= 0 )
          {
            v5 = MEMORY[0xFFFFF78000000320];
            v6 = (__int64)((unsigned __int128)(KeQueryTimeIncrement()
                                             * (v5 - g_RaidSQMLastLogTick)
                                             * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
            v7 = (v6 >> 63) + v6;
            v8 = *((_DWORD *)v4 + 1182) * KeQueryTimeIncrement();
            v9 = *((_DWORD *)v4 + 185);
            *((_DWORD *)v4 + 1189) += *((_DWORD *)v4 + 216);
            if ( *((_DWORD *)v4 + 1190) > v9 )
              v9 = *((_DWORD *)v4 + 1190);
            *((_DWORD *)v4 + 1190) = v9;
            LODWORD(v30[1]) = 1;
            LODWORD(v30[0]) = 1;
            StorSqmCreateStringStreamEntry(&v30[2], v4[593], v8 / 0x2710);
            v30[5] = L"(null)";
            LODWORD(v30[4]) = v10 + 1;
            LODWORD(v30[6]) = v10 + 1;
            v30[7] = L"(null)";
            StorSqmCreateStringStreamEntry(&v30[8], v4[592], v11);
            v12 = *((_DWORD *)v4 + 1176);
            LODWORD(v30[10]) = v13;
            LODWORD(v30[11]) = v12;
            v14 = *((_DWORD *)v4 + 1177);
            LODWORD(v30[12]) = v13;
            LODWORD(v30[13]) = v14;
            v15 = *((_DWORD *)v4 + 1178);
            LODWORD(v30[14]) = v13;
            LODWORD(v30[15]) = v15;
            v16 = *((_DWORD *)v4 + 1179);
            LODWORD(v30[16]) = v13;
            LODWORD(v30[17]) = v16;
            v17 = *((_DWORD *)v4 + 1180);
            LODWORD(v30[18]) = v13;
            LODWORD(v30[19]) = v17;
            v18 = *((_DWORD *)v4 + 1181);
            LODWORD(v30[20]) = v13;
            LODWORD(v30[23]) = v19;
            LODWORD(v30[22]) = v13;
            LODWORD(v30[21]) = v18;
            v20 = *((_DWORD *)v4 + 1183);
            LODWORD(v30[24]) = v13;
            LODWORD(v30[26]) = v13;
            LODWORD(v30[25]) = v20;
            LODWORD(v30[27]) = v7;
            v21 = *((_DWORD *)v4 + 18);
            LODWORD(v30[28]) = v13;
            LODWORD(v30[29]) = v21;
            v22 = *((_DWORD *)v4 + 185);
            LODWORD(v30[30]) = v13;
            LODWORD(v30[31]) = v22;
            v23 = *((_DWORD *)v4 + 216);
            LODWORD(v30[32]) = v13;
            LODWORD(v30[33]) = v23;
            v24 = *((_DWORD *)v4 + 1188);
            LODWORD(v30[34]) = v13;
            LODWORD(v30[35]) = v24;
            StorSqmAddToStream(v25, 5463LL, 18LL, v30);
            v26 = *((_DWORD *)v4 + 224);
            v27 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v4[24];
            v4[588] = 0LL;
            v4[589] = 0LL;
            v4[590] = 0LL;
            v4[591] = 0LL;
            *((_DWORD *)v4 + 185) = v26;
            *((_DWORD *)v4 + 216) = 0;
            ExReleaseRundownProtectionCacheAware(v27);
          }
          v4 = (__int64 *)*v4;
        }
        while ( v4 != i + 4 );
        v2 = v1 + 1;
      }
      KeReleaseInStackQueuedSpinLock(&v28);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v1);
  }
}
