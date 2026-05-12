/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C000D328
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C000D580 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000D5B4 (StorpTelemetryConstructErrorEntry.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  int v8; // eax
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // xmm4_8
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // eax
  unsigned __int8 v15; // di
  char v16; // dl
  unsigned __int8 v17; // cl
  int v18; // ebx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  bool v28; // cc
  bool v29; // zf
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v32[40]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v33; // [rsp+B8h] [rbp+67h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v32, 0, sizeof(v32));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v32);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1928), &LockHandle);
  v8 = *(_DWORD *)(a1 + 1936);
  v9 = *(_OWORD *)(a1 + 1952);
  v10 = *(_OWORD *)(a1 + 1968);
  v33 = *(_QWORD *)(a1 + 1984);
  v11 = v33;
  v12 = *(_OWORD *)&v32[16];
  *(_OWORD *)(a1 + 1952) = *(_OWORD *)v32;
  v13 = *(_QWORD *)&v32[32];
  *(_OWORD *)(a1 + 1968) = v12;
  *(_QWORD *)(a1 + 1984) = v13;
  if ( v8 != -1 )
    *(_DWORD *)(a1 + 1936) = v8 + 1;
  LOBYTE(v14) = *(_BYTE *)(a4 + 2);
  if ( (_BYTE)v14 == 40 )
    v14 = *(_DWORD *)(a4 + 20);
  else
    v14 = (unsigned __int8)v14;
  v15 = 0;
  if ( !v14 && ((v32[5] - 8) & 0x5D) == 0 )
  {
    v26 = *(_DWORD *)(a1 + 1940);
    if ( v26 != -1 )
      *(_DWORD *)(a1 + 1940) = v26 + 1;
  }
  v17 = v32[4];
  v16 = v32[3];
  if ( v32[3] == 93 && v32[4] >= 0x10u && (v32[4] <= 0x1Cu || v32[4] == 50 || (unsigned __int8)(v32[4] - 66) <= 1u) )
  {
    v27 = *(_DWORD *)(a1 + 1944);
    if ( v27 != -1 )
      *(_DWORD *)(a1 + 1944) = v27 + 1;
  }
  if ( v32[2] == 3 )
  {
    if ( v16 != 50 )
      goto LABEL_10;
LABEL_35:
    v28 = v17 <= 1u;
    goto LABEL_37;
  }
  if ( v32[2] != 4 )
    goto LABEL_10;
  switch ( v16 )
  {
    case 3:
LABEL_50:
      v29 = v17 == 0;
LABEL_51:
      if ( v29 )
        goto LABEL_52;
      goto LABEL_10;
    case 9:
      goto LABEL_35;
    case 21:
      v29 = v17 == 1;
      goto LABEL_51;
  }
  if ( v16 != 25 )
  {
    if ( v16 != 50 )
    {
      if ( v16 != 62 )
      {
        if ( (unsigned __int8)(v16 - 65) <= 1u )
          goto LABEL_52;
        if ( v16 != 68 )
        {
          if ( v16 == 76 )
            goto LABEL_52;
          if ( v16 != 85 )
            goto LABEL_10;
        }
        goto LABEL_50;
      }
      v17 -= 3;
    }
    goto LABEL_35;
  }
  v28 = v17 <= 3u;
LABEL_37:
  if ( v28 )
  {
LABEL_52:
    v30 = *(_DWORD *)(a1 + 1948);
    if ( v30 != -1 )
      *(_DWORD *)(a1 + 1948) = v30 + 1;
  }
LABEL_10:
  v18 = *(_DWORD *)(a1 + 1936);
  if ( ((v18 + 1) & 0xFFFFFFFD) != 0 )
  {
    v19 = v18 - 1;
    if ( v19 <= 0xA )
    {
      v20 = v19 - 1;
    }
    else
    {
      LODWORD(v20) = rand() % v19;
      v11 = v33;
      v20 = (unsigned int)v20;
    }
    if ( (unsigned int)v20 < 0xA )
    {
      v24 = 5 * v20;
      *(_OWORD *)(a1 + 8 * v24 + 1992) = v9;
      *(_OWORD *)(a1 + 8 * v24 + 2008) = v10;
      *(_QWORD *)(a1 + 8 * v24 + 2024) = v11;
    }
  }
  while ( 1 )
  {
    v21 = a1 + 40LL * v15;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 1952, v21 + 2392) == 1 )
    {
      *(_DWORD *)(a1 + 40LL * v15 + 2424) = *(_DWORD *)(a1 + 8 * v22 + 2424) + 1;
      goto LABEL_17;
    }
    memset(v32, 0, sizeof(v32));
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v21 + 2392, v32) == 1 )
      break;
    if ( ++v15 >= 5u )
      goto LABEL_17;
  }
  v25 = 5LL * v15;
  *(_OWORD *)(a1 + 8 * v25 + 2392) = *(_OWORD *)(a1 + 1952);
  *(_OWORD *)(a1 + 8 * v25 + 2408) = *(_OWORD *)(a1 + 1968);
  *(_QWORD *)(a1 + 8 * v25 + 2424) = *(_QWORD *)(a1 + 1984);
  *(_DWORD *)(a1 + 8 * v25 + 2424) = 1;
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
