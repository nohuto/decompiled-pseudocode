/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C000BC90
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpTelemetryConstructErrorEntry @ 0x1C000BF30 (StorpTelemetryConstructErrorEntry.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C000C3B0 (StorpAreTelemetryErrorsEqual.c)
 *     memset @ 0x1C001F680 (memset.c)
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
  char v15; // cl
  unsigned __int8 v16; // dl
  int v17; // ecx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // rdx
  char v21; // r14
  unsigned __int8 v22; // bp
  __int64 v23; // rdi
  bool v24; // zf
  _BYTE *v25; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _BYTE v32[40]; // [rsp+30h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int128 v34; // [rsp+70h] [rbp-68h]
  __int128 v35; // [rsp+80h] [rbp-58h]
  _BYTE v36[48]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v37; // [rsp+E0h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v32, 0, sizeof(v32));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v32);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1928), &LockHandle);
  v8 = *(_DWORD *)(a1 + 1936);
  v9 = *(_OWORD *)(a1 + 1952);
  v10 = *(_OWORD *)(a1 + 1968);
  v34 = v9;
  v37 = *(_QWORD *)(a1 + 1984);
  v11 = v37;
  v35 = v10;
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
  if ( !v14 && ((v32[5] - 8) & 0x5D) == 0 )
  {
    v29 = *(_DWORD *)(a1 + 1940);
    if ( v29 != -1 )
      *(_DWORD *)(a1 + 1940) = v29 + 1;
  }
  v15 = v32[3];
  v16 = v32[4];
  if ( v32[3] == 93 && v32[4] >= 0x10u && (v32[4] <= 0x1Cu || v32[4] == 50 || (unsigned __int8)(v32[4] - 66) <= 1u) )
  {
    v30 = *(_DWORD *)(a1 + 1944);
    if ( v30 != -1 )
      *(_DWORD *)(a1 + 1944) = v30 + 1;
  }
  if ( v32[2] == 3 )
  {
    if ( v15 != 50 || v16 >= 2u )
      goto LABEL_10;
    goto LABEL_65;
  }
  if ( v32[2] == 4 )
  {
    switch ( v15 )
    {
      case 3:
        if ( v16 )
          goto LABEL_10;
        break;
      case 9:
        if ( v16 >= 2u )
          goto LABEL_10;
        break;
      case 21:
        if ( v16 != 1 )
          goto LABEL_10;
        break;
      case 25:
        if ( v16 >= 4u )
          goto LABEL_10;
        break;
      case 50:
        if ( v16 >= 2u )
          goto LABEL_10;
        break;
      case 62:
        if ( (unsigned __int8)(v16 - 3) > 1u )
          goto LABEL_10;
        break;
      default:
        if ( (unsigned __int8)(v15 - 65) > 1u )
        {
          if ( v15 == 68 )
          {
            if ( v16 )
              goto LABEL_10;
          }
          else if ( v15 != 76 && (v15 != 85 || v16) )
          {
            goto LABEL_10;
          }
        }
        break;
    }
LABEL_65:
    v31 = *(_DWORD *)(a1 + 1948);
    if ( v31 != -1 )
      *(_DWORD *)(a1 + 1948) = v31 + 1;
  }
LABEL_10:
  v17 = *(_DWORD *)(a1 + 1936);
  if ( ((v17 + 1) & 0xFFFFFFFD) != 0 )
  {
    v18 = v17 - 1;
    if ( (unsigned int)(v17 - 1) <= 0xA )
    {
      v20 = (unsigned int)(v17 - 2);
    }
    else
    {
      v19 = rand();
      v9 = v34;
      v10 = v35;
      v11 = v37;
      v20 = v19 % v18;
    }
    if ( (unsigned int)v20 < 0xA )
    {
      v27 = 5 * v20;
      *(_OWORD *)(a1 + 8 * v27 + 1992) = v9;
      *(_OWORD *)(a1 + 8 * v27 + 2008) = v10;
      *(_QWORD *)(a1 + 8 * v27 + 2024) = v11;
    }
  }
  v21 = *(_BYTE *)(a1 + 1952);
  v22 = 0;
  while ( 1 )
  {
    v23 = v22 + 4LL * v22 + 299;
    v24 = v21 == *(_BYTE *)(a1 + 8 * v23);
    v25 = (_BYTE *)(a1 + 8 * v23);
    if ( v24
      && *(_BYTE *)(a1 + 1953) == v25[1]
      && *(_BYTE *)(a1 + 1954) == v25[2]
      && *(_BYTE *)(a1 + 1955) == v25[3]
      && *(_BYTE *)(a1 + 1956) == v25[4] )
    {
      ++*(_DWORD *)(a1 + 40LL * v22 + 2424);
      goto LABEL_22;
    }
    memset(v36, 0, 0x28uLL);
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v25, v36) == 1 )
      break;
    if ( ++v22 >= 5u )
      goto LABEL_22;
  }
  v28 = 5LL * v22;
  *(_OWORD *)(a1 + 8 * v28 + 2392) = *(_OWORD *)(a1 + 1952);
  *(_OWORD *)(a1 + 8 * v28 + 2408) = *(_OWORD *)(a1 + 1968);
  *(_QWORD *)(a1 + 8 * v28 + 2424) = *(_QWORD *)(a1 + 1984);
  *(_DWORD *)(a1 + 8 * v28 + 2424) = 1;
LABEL_22:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
