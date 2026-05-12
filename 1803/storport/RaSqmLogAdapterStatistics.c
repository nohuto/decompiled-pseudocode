/*
 * XREFs of RaSqmLogAdapterStatistics @ 0x1C002CFCC
 * Callers:
 *     RaSqmLogStatistics @ 0x1C002D388 (RaSqmLogStatistics.c)
 * Callees:
 *     RaidGetPortData @ 0x1C000481C (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0004848 (RaidReleasePortData.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007CD0 (RaidAcquireAdapterRemoveLock.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     StorSqmAddToStream @ 0x1C004949C (StorSqmAddToStream.c)
 *     StorSqmCreateStringStreamEntry @ 0x1C0049684 (StorSqmCreateStringStreamEntry.c)
 */

void RaSqmLogAdapterStatistics()
{
  char *PortData; // rax
  char *v1; // r13
  char *v2; // r14
  char *v3; // r13
  char *v4; // r15
  int v5; // ebx
  ULONG TimeIncrement; // eax
  int v7; // ebx
  int v8; // edi
  ULONG v9; // esi
  ULONG v10; // kr00_4
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // r8d
  __int64 v14; // rcx
  int v15; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v16; // rcx
  char *v17; // [rsp+28h] [rbp-E0h]
  char *v18; // [rsp+30h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+38h] [rbp-D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[36]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v21, 0, sizeof(v21));
  PortData = RaidGetPortData();
  v18 = PortData;
  v1 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)PortData + 3, &LockHandle);
    v2 = (char *)*((_QWORD *)v1 + 1);
    v17 = v1 + 8;
    if ( v2 != v1 + 8 )
    {
      v3 = v1 + 8;
      do
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2 + 7, &v19);
        v4 = (char *)*((_QWORD *)v2 + 4);
        if ( v4 != v2 + 32 )
        {
          do
          {
            if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v4 - 64)) >= 0 )
            {
              v5 = MEMORY[0xFFFFF78000000320];
              TimeIncrement = KeQueryTimeIncrement();
              v7 = v5 - g_RaidSQMLastLogTick;
              v8 = *((_DWORD *)v4 + 1182);
              v9 = TimeIncrement;
              v10 = v8 * KeQueryTimeIncrement();
              v11 = *((_DWORD *)v4 + 1190);
              *((_DWORD *)v4 + 1189) += *((_DWORD *)v4 + 216);
              if ( v11 <= *((_DWORD *)v4 + 185) )
                v11 = *((_DWORD *)v4 + 185);
              *((_DWORD *)v4 + 1190) = v11;
              LODWORD(v21[1]) = 1;
              LODWORD(v21[0]) = 1;
              StorSqmCreateStringStreamEntry(&v21[2], *((_QWORD *)v4 + 593), v10 / 0x2710);
              v21[5] = L"(null)";
              LODWORD(v21[4]) = 2;
              LODWORD(v21[6]) = 2;
              v21[7] = L"(null)";
              StorSqmCreateStringStreamEntry(&v21[8], *((_QWORD *)v4 + 592), v12);
              LODWORD(v21[11]) = *((_DWORD *)v4 + 1176);
              LODWORD(v21[10]) = 1;
              LODWORD(v21[13]) = *((_DWORD *)v4 + 1177);
              LODWORD(v21[12]) = 1;
              LODWORD(v21[15]) = *((_DWORD *)v4 + 1178);
              LODWORD(v21[14]) = 1;
              LODWORD(v21[17]) = *((_DWORD *)v4 + 1179);
              LODWORD(v21[16]) = 1;
              LODWORD(v21[19]) = *((_DWORD *)v4 + 1180);
              LODWORD(v21[18]) = 1;
              LODWORD(v21[21]) = *((_DWORD *)v4 + 1181);
              LODWORD(v21[20]) = 1;
              LODWORD(v21[23]) = v13;
              LODWORD(v21[22]) = 1;
              LODWORD(v21[25]) = *((_DWORD *)v4 + 1183);
              LODWORD(v21[24]) = 1;
              LODWORD(v21[26]) = 1;
              LODWORD(v21[27]) = (int)(v9 * v7) / 10000;
              LODWORD(v21[29]) = *((_DWORD *)v4 + 18);
              LODWORD(v21[28]) = 1;
              LODWORD(v21[31]) = *((_DWORD *)v4 + 185);
              LODWORD(v21[30]) = 1;
              LODWORD(v21[33]) = *((_DWORD *)v4 + 216);
              LODWORD(v21[32]) = 1;
              LODWORD(v21[35]) = *((_DWORD *)v4 + 1188);
              LODWORD(v21[34]) = 1;
              StorSqmAddToStream(v14, 5463LL, 18LL, v21);
              v15 = *((_DWORD *)v4 + 224);
              v16 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v4 + 24);
              *((_QWORD *)v4 + 588) = 0LL;
              *((_QWORD *)v4 + 589) = 0LL;
              *((_QWORD *)v4 + 590) = 0LL;
              *((_QWORD *)v4 + 591) = 0LL;
              *((_DWORD *)v4 + 185) = v15;
              *((_DWORD *)v4 + 216) = 0;
              ExReleaseRundownProtectionCacheAware(v16);
            }
            v4 = *(char **)v4;
          }
          while ( v4 != v2 + 32 );
          v3 = v17;
        }
        KeReleaseInStackQueuedSpinLock(&v19);
        v2 = *(char **)v2;
      }
      while ( v2 != v3 );
      v1 = v18;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v1);
  }
}
