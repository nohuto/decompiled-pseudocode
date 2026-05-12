/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C000AE44
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C000B090 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000B0C4 (StorpTelemetryConstructErrorEntry.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int8 v4; // r14
  int v9; // eax
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v12; // xmm4_8
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  int v15; // eax
  __int16 v16; // kr00_2
  int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  bool v27; // cf
  int v28; // eax
  _BYTE v29[40]; // [rsp+38h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-21h] BYREF
  __int128 v31; // [rsp+78h] [rbp-9h]
  __int128 v32; // [rsp+88h] [rbp+7h]
  _BYTE v33[48]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+67h]

  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v29, 0, sizeof(v29));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v29);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1896), &LockHandle);
  v9 = *(_DWORD *)(a1 + 1904);
  v10 = *(_OWORD *)(a1 + 1920);
  v11 = *(_OWORD *)(a1 + 1936);
  v31 = v10;
  v34 = *(_QWORD *)(a1 + 1952);
  v12 = v34;
  v32 = v11;
  v13 = *(_OWORD *)&v29[16];
  *(_OWORD *)(a1 + 1920) = *(_OWORD *)v29;
  v14 = *(_QWORD *)&v29[32];
  *(_OWORD *)(a1 + 1936) = v13;
  *(_QWORD *)(a1 + 1952) = v14;
  if ( v9 != -1 )
    *(_DWORD *)(a1 + 1904) = v9 + 1;
  LOBYTE(v15) = *(_BYTE *)(a4 + 2);
  if ( (_BYTE)v15 == 40 )
    v15 = *(_DWORD *)(a4 + 20);
  else
    v15 = (unsigned __int8)v15;
  if ( !v15 && ((v29[5] - 8) & 0x5D) == 0 )
  {
    v24 = *(_DWORD *)(a1 + 1908);
    if ( v24 != -1 )
      *(_DWORD *)(a1 + 1908) = v24 + 1;
  }
  v16 = *(_WORD *)&v29[3];
  if ( v29[3] == 93 && v29[4] >= 0x10u && (v29[4] <= 0x1Cu || v29[4] == 50 || (unsigned __int8)(v29[4] - 66) <= 1u) )
  {
    v25 = *(_DWORD *)(a1 + 1912);
    if ( v25 != -1 )
      *(_DWORD *)(a1 + 1912) = v25 + 1;
  }
  if ( v29[2] == 3 )
  {
    if ( (_BYTE)v16 != 50 || HIBYTE(v16) >= 2u )
      goto LABEL_10;
LABEL_54:
    v28 = *(_DWORD *)(a1 + 1916);
    if ( v28 != -1 )
      *(_DWORD *)(a1 + 1916) = v28 + 1;
    goto LABEL_10;
  }
  if ( v29[2] != 4 )
    goto LABEL_10;
  if ( (_BYTE)v16 != 3 )
  {
    if ( (_BYTE)v16 != 9 )
    {
      if ( (_BYTE)v16 == 21 )
      {
        v26 = HIBYTE(v16) == 1;
        goto LABEL_53;
      }
      if ( (_BYTE)v16 == 25 )
      {
        v27 = HIBYTE(v16) < 4u;
LABEL_41:
        if ( !v27 )
          goto LABEL_10;
        goto LABEL_54;
      }
      if ( (_BYTE)v16 != 50 )
      {
        if ( (_BYTE)v16 == 62 )
        {
          if ( (unsigned __int8)(HIBYTE(v16) - 3) > 1u )
            goto LABEL_10;
          goto LABEL_54;
        }
        if ( (unsigned __int8)(v16 - 65) <= 1u )
          goto LABEL_54;
        if ( (_BYTE)v16 != 68 )
        {
          if ( (_BYTE)v16 == 76 )
            goto LABEL_54;
          if ( (_BYTE)v16 != 85 )
            goto LABEL_10;
        }
        goto LABEL_52;
      }
    }
    v27 = HIBYTE(v16) < 2u;
    goto LABEL_41;
  }
LABEL_52:
  v26 = HIBYTE(v16) == 0;
LABEL_53:
  if ( v26 )
    goto LABEL_54;
LABEL_10:
  v17 = *(_DWORD *)(a1 + 1904);
  if ( ((v17 + 1) & 0xFFFFFFFD) != 0 )
  {
    v18 = v17 - 1;
    if ( v18 <= 0xA )
    {
      v20 = v18 - 1;
    }
    else
    {
      v19 = rand();
      v10 = v31;
      v11 = v32;
      v12 = v34;
      v20 = v19 % v18;
    }
    if ( v20 < 0xA )
    {
      v22 = 5 * (v20 + 49LL);
      *(_OWORD *)(a1 + 8 * v22) = v10;
      *(_OWORD *)(a1 + 8 * v22 + 16) = v11;
      *(_QWORD *)(a1 + 8 * v22 + 32) = v12;
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 1920, a1 + 40 * (v4 + 59LL)) == 1 )
    {
      ++*(_DWORD *)(a1 + 40LL * v4 + 2392);
      goto LABEL_17;
    }
    memset(v33, 0, 0x28uLL);
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 40 * (v4 + 59LL), v33) == 1 )
      break;
    if ( ++v4 >= 5u )
      goto LABEL_17;
  }
  v23 = 5LL * v4;
  *(_OWORD *)(a1 + 8 * v23 + 2360) = *(_OWORD *)(a1 + 1920);
  *(_OWORD *)(a1 + 8 * v23 + 2376) = *(_OWORD *)(a1 + 1936);
  *(_QWORD *)(a1 + 8 * v23 + 2392) = *(_QWORD *)(a1 + 1952);
  *(_DWORD *)(a1 + 40LL * v4 + 2392) = 1;
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
