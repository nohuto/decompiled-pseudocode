/*
 * XREFs of RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8
 * Callers:
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009270 (RaidAdapterPostScatterGatherExecute.c)
 *     RiNormalizeDeviceQueue @ 0x1C0009ADC (RiNormalizeDeviceQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 *     IsZonedWriteRequest @ 0x1C002B5D4 (IsZonedWriteRequest.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C002FF44 (RaidGetIoStartingLbaAndLength.c)
 *     PortSrbGetLbaFromCdb @ 0x1C0047664 (PortSrbGetLbaFromCdb.c)
 */

_QWORD *__fastcall RaidZoneWriteGroupListSearchRequest(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned __int8 v5; // di
  __int64 v9; // r12
  __int64 v10; // rbx
  int v11; // r14d
  char *v12; // rsi
  char v13; // r10
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  char *v21; // rcx
  char v22; // r10
  unsigned int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // r14
  unsigned __int64 LbaFromCdb; // r9
  int v34; // eax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r14
  _QWORD *v37; // r12
  _QWORD *i; // rdi
  _QWORD *v39; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  unsigned __int64 v43; // [rsp+20h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-18h] BYREF
  int v45; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v46; // [rsp+98h] [rbp+58h]

  v46 = a4;
  v5 = 0;
  v45 = 0;
  if ( !a4 )
    return 0LL;
  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  v9 = *(_QWORD *)(a2 + 184);
  v10 = *(_QWORD *)(v9 + 8);
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v5 = *(_BYTE *)(v10 + 10);
    v12 = (char *)(v10 + 72);
    goto LABEL_42;
  }
  v11 = *(_DWORD *)(v10 + 20);
  v12 = 0LL;
  v13 = 0;
  if ( v11 )
    goto LABEL_17;
  v14 = *(_DWORD *)(v10 + 56);
  v15 = 0;
  if ( !v14 )
    goto LABEL_17;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v10 + 4LL * v15 + 120);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v17 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v16 < (unsigned int)v17 )
        break;
    }
LABEL_32:
    if ( ++v15 >= v14 )
      goto LABEL_17;
  }
  v18 = (unsigned int)v16;
  v19 = *(_DWORD *)(v16 + v10) - 64;
  if ( !v19 )
  {
    v30 = v18 + 40;
LABEL_28:
    if ( v30 <= v17 )
    {
      v13 = 1;
      if ( !*(_BYTE *)(v18 + v10 + 10) )
        goto LABEL_17;
      v12 = (char *)(v18 + v10 + 24);
    }
LABEL_31:
    if ( v13 )
      goto LABEL_17;
    goto LABEL_32;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v30 = v18 + 56;
    goto LABEL_28;
  }
  if ( v20 != 1 || v18 + 40 > v17 )
    goto LABEL_31;
  v21 = (char *)(v18 + v10 + 32);
  if ( !*(_DWORD *)(v18 + v10 + 12) )
    v21 = v12;
  v12 = v21;
LABEL_17:
  v22 = 0;
  if ( !v11 )
  {
    v23 = *(_DWORD *)(v10 + 56);
    v24 = 0LL;
    if ( v23 )
    {
      while ( 2 )
      {
        v25 = *(unsigned int *)(v10 + 4 * v24 + 120);
        if ( (unsigned int)v25 < 0x80 )
          goto LABEL_39;
        v26 = *(unsigned int *)(v10 + 16);
        if ( (unsigned int)v25 >= (unsigned int)v26 )
          goto LABEL_39;
        v27 = (unsigned int)v25;
        v28 = *(_DWORD *)(v25 + v10) - 64;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 == 1 && v27 + 40 <= v26 )
              goto LABEL_42;
LABEL_38:
            if ( v22 )
              goto LABEL_42;
LABEL_39:
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= v23 )
              goto LABEL_42;
            continue;
          }
          v31 = v27 + 56;
        }
        else
        {
          v31 = v27 + 40;
        }
        break;
      }
      if ( v31 <= v26 )
      {
        v5 = *(_BYTE *)(v27 + v10 + 10);
        v22 = 1;
      }
      goto LABEL_38;
    }
  }
LABEL_42:
  v32 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL);
  if ( IsZonedWriteRequest(v32, a2, 0LL) )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v12, v5);
  }
  else
  {
    LOBYTE(v34) = *(_BYTE *)(v10 + 2);
    if ( (_BYTE)v34 == 40 )
      v34 = *(_DWORD *)(v10 + 20);
    else
      v34 = (unsigned __int8)v34;
    if ( !v34 && *v12 == -108 && v12[1] == 4 )
    {
      HIBYTE(v43) = v12[2];
      BYTE6(v43) = v12[3];
      BYTE5(v43) = v12[4];
      BYTE4(v43) = v12[5];
      BYTE3(v43) = v12[6];
      BYTE2(v43) = v12[7];
      BYTE1(v43) = v12[8];
      LOBYTE(v43) = v12[9];
    }
    LbaFromCdb = v43;
  }
  v35 = *(_QWORD *)(v32 + 2696) / (unsigned __int64)v46;
  v36 = v35 * (unsigned int)(LbaFromCdb / v35);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
  v37 = (_QWORD *)(a1 + 128);
  for ( i = *(_QWORD **)(a1 + 128); i != v37; i = (_QWORD *)*i )
  {
    v39 = i;
    if ( v36 == i[2] && (unsigned int)v35 == i[4] )
      goto LABEL_67;
  }
  v39 = 0LL;
  if ( a5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x525A6152u);
    v39 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      v39[3] = 0LL;
      v39[6] = 0LL;
      *((_DWORD *)v39 + 14) = 0;
      v39[2] = v36;
      v39[4] = (unsigned int)v35;
      RaidGetIoStartingLbaAndLength(v12, (__int64)(v39 + 5), (__int64)&v45);
      if ( i == v37 )
      {
        v42 = (_QWORD *)i[1];
        if ( (_QWORD *)*v42 != i )
          __fastfail(3u);
        *v39 = i;
        v39[1] = v42;
        *v42 = v39;
        i[1] = v39;
      }
      else
      {
        v41 = (_QWORD *)*i;
        if ( *(_QWORD **)(*i + 8LL) != i )
          __fastfail(3u);
        *v39 = v41;
        v39[1] = i;
        v41[1] = v39;
        *i = v39;
      }
      ++*(_DWORD *)(a1 + 152);
    }
  }
LABEL_67:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v39;
}
