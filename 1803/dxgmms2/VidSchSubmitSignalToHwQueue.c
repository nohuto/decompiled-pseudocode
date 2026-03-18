/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x1C0032AC0
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0001008 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiSignalSyncObject @ 0x1C0007E70 (VidSchiSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned __int64 *a6)
{
  char v7; // bl
  unsigned int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // r15d
  unsigned __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _VIDSCH_QUEUE_PACKET **v22; // rsi
  unsigned int v23; // edi
  struct _VIDSCH_QUEUE_PACKET *v24; // rax
  unsigned int v25; // r15d
  struct _VIDSCH_QUEUE_PACKET **v26; // rdi
  KSPIN_LOCK *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r12
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r9
  int v35; // ecx
  struct _VIDSCH_QUEUE_PACKET *v36; // rax
  KSPIN_LOCK *v37; // rcx
  unsigned int v38; // esi
  __int64 v39; // rax
  unsigned __int64 *v40; // r12
  char **v41; // r15
  char *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned int v46; // r15d
  struct _VIDSCH_QUEUE_PACKET **v47; // r12
  unsigned int v48; // edi
  unsigned int v49; // r15d
  struct _VIDSCH_QUEUE_PACKET **v50; // rsi
  __int64 v51; // rbx
  __int64 i; // [rsp+38h] [rbp-49h]
  struct _VIDSCH_QUEUE_PACKET *v53; // [rsp+38h] [rbp-49h]
  __int64 v54; // [rsp+40h] [rbp-41h]
  struct _VIDSCH_QUEUE_PACKET **v55; // [rsp+50h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-29h] BYREF
  PVOID P; // [rsp+70h] [rbp-11h] BYREF
  char v58; // [rsp+78h] [rbp-9h] BYREF
  int v59; // [rsp+88h] [rbp+7h]
  __int64 v62; // [rsp+E0h] [rbp+5Fh]
  int v64; // [rsp+F8h] [rbp+77h]
  unsigned int v65; // [rsp+F8h] [rbp+77h]

  v7 = a5;
  v8 = a1;
  v9 = a3;
  v54 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  if ( (a5 & 0x80000004) != 0 )
    goto LABEL_27;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)a4 + 8LL) + 1904LL), &LockHandle);
  v11 = 0;
  v64 = 0;
  if ( !(_DWORD)v9 )
    goto LABEL_25;
  v12 = a6;
  v13 = a4 - (_QWORD)a6;
  for ( i = a4 - (_QWORD)a6; ; v13 = i )
  {
    v14 = *(unsigned __int64 *)((char *)v12 + v13);
    v15 = *(unsigned int *)(v14 + 44);
    if ( (unsigned int)(v15 - 4) > 1 || *(_BYTE *)(v14 + 28) )
      goto LABEL_19;
    v16 = *v12;
    LOBYTE(v10) = *(_BYTE *)(v14 + 29);
    if ( *(_BYTE *)(v14 + 27) )
      v17 = *(_QWORD *)(*(_QWORD *)(v14 + 200) + 40LL);
    else
      v17 = (_DWORD)v15 == 2 ? *(_QWORD *)(v14 + 56) : *(_QWORD *)(v14 + 80);
    if ( !(_BYTE)v10 )
      break;
    if ( v16 < v17 )
    {
      v19 = WdLogNewEntry5_WdWarning(v15, v10);
      *(_QWORD *)(v19 + 24) = v16;
      *(_QWORD *)(v19 + 32) = v17;
      goto LABEL_23;
    }
    if ( v16 == v17 )
    {
      v18 = WdLogNewEntry5_WdWarning(v15, v10);
      *(_QWORD *)(v18 + 24) = v16;
LABEL_18:
      WdLogEvent5_WdWarning(v18);
    }
LABEL_19:
    ++v12;
    if ( ++v64 >= (unsigned int)v9 )
      goto LABEL_24;
  }
  if ( (int)v17 - (int)v16 <= 0 )
  {
    if ( (_DWORD)v17 != (_DWORD)v16 )
      goto LABEL_19;
    v18 = WdLogNewEntry5_WdWarning(v15, v10);
    *(_QWORD *)(v18 + 24) = (unsigned int)v16;
    goto LABEL_18;
  }
  v19 = WdLogNewEntry5_WdWarning(v15, v10);
  *(_QWORD *)(v19 + 24) = (unsigned int)v16;
  *(_QWORD *)(v19 + 32) = (unsigned int)v17;
LABEL_23:
  WdLogEvent5_WdWarning(v19);
  v11 = -1073741811;
  v20 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v20 + 24) = a6[v64];
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v20);
LABEL_24:
  v8 = a1;
LABEL_25:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_27:
  P = 0LL;
  v59 = 0;
  v55 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(
                                          &P,
                                          v8);
  v22 = v55;
  v23 = -1073741801;
  if ( !v55 )
    goto LABEL_71;
  v65 = 0;
  v24 = 0LL;
  v25 = 0;
  v53 = 0LL;
  if ( !v8 )
  {
LABEL_46:
    v37 = (KSPIN_LOCK *)(v54 + 1904);
    if ( v24 )
    {
      KeAcquireInStackQueuedSpinLock(v37, &LockHandle);
      v46 = v65;
      v47 = v55;
      v48 = 0;
      do
      {
        if ( *v47 )
        {
          v49 = 0;
          if ( (_DWORD)v9 )
          {
            if ( v48 == v65 )
            {
              do
                VidSchiSignalSyncObject(v49++, a4, v7, (__int64)a6, 1);
              while ( v49 < (unsigned int)v9 );
            }
            else
            {
              do
                VidSchiSignalSyncObject(v49++, a4, v7, (__int64)a6, 0);
              while ( v49 < (unsigned int)v9 );
            }
          }
          v46 = v65;
        }
        ++v48;
        ++v47;
      }
      while ( v48 <= v46 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v50 = v55;
      v51 = v46 + 1;
      do
      {
        if ( *v50 )
          VidSchiSubmitCommandPacketToHwQueue(*v50);
        ++v50;
        --v51;
      }
      while ( v51 );
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(v37, &LockHandle);
      v38 = 0;
      if ( (_DWORD)v9 )
      {
        v39 = a4;
        v40 = a6;
        v41 = (char **)a4;
        do
        {
          v42 = *v41;
          VidSchiSignalSyncObject(v38, v39, v7, (__int64)a6, 1);
          VidSchiCompleteSignalSyncObject((__int64)v42, v43, v40, 1);
          VidSchiReleaseSyncObjectReference(v42);
          v39 = a4;
          ++v41;
          ++v38;
          ++v40;
        }
        while ( v38 < (unsigned int)v9 );
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    v23 = 0;
    goto LABEL_71;
  }
  v26 = v55;
  v27 = (KSPIN_LOCK *)(v54 + 1904);
  v28 = a2 - (_QWORD)v55;
  v62 = a2 - (_QWORD)v55;
  while ( 2 )
  {
    v29 = *(__int64 *)((char *)v26 + v28);
    KeAcquireInStackQueuedSpinLock(v27, &LockHandle);
    if ( *(_QWORD *)(v29 + 96) == v29 + 96 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v24 = v53;
      goto LABEL_45;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v29, 0LL);
    *v26 = HwQueuePacket;
    if ( HwQueuePacket )
    {
      *(_DWORD *)HwQueuePacket = 1953189969;
      v65 = v25;
      *((_DWORD *)*v26 + 12) = 5;
      *((_QWORD *)*v26 + 7) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)*v26 + 13) = 2;
      *((_QWORD *)*v26 + 12) = v29;
      *((_QWORD *)*v26 + 13) = KeGetCurrentThread();
      *((_QWORD *)*v26 + 9) = 0LL;
      *((_DWORD *)*v26 + 68) ^= ((unsigned __int8)v7 ^ (unsigned __int8)*((_DWORD *)*v26 + 68)) & 1;
      if ( (v7 & 4) != 0 )
        *((_DWORD *)*v26 + 68) |= 4u;
      if ( (_DWORD)v9 )
      {
        v33 = 536LL;
        v34 = v9;
        do
        {
          v35 = *(_DWORD *)(*(_QWORD *)(a4 + v33 - 536) + 44LL);
          if ( v35 == 4 || v35 == 2 )
            *(_QWORD *)((char *)*v26 + v33) = a6[(unsigned __int64)v33 / 8 - 67];
          *(_QWORD *)((char *)*v26 + v33 - 256) = *(_QWORD *)(a4 + v33 - 536);
          v33 += 8LL;
          --v34;
        }
        while ( v34 );
      }
      *((_DWORD *)*v26 + 69) = v9;
      *((_QWORD *)*v26 + 99) = 0LL;
      v36 = *v26;
      if ( v53 )
      {
        *((_QWORD *)v36 + 100) = v53;
        *((_QWORD *)v53 + 99) = *v26;
      }
      else
      {
        *((_QWORD *)v36 + 100) = 0LL;
      }
      v24 = *v26;
      v53 = *v26;
LABEL_45:
      v27 = (KSPIN_LOCK *)(v54 + 1904);
      ++v25;
      v28 = v62;
      ++v26;
      if ( v25 >= a1 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v44 = WdLogNewEntry5_WdWarning(v32, v31);
  v23 = -1073741801;
  *(_QWORD *)(v44 + 24) = -1073741801LL;
  *(_QWORD *)(v44 + 32) = 3340LL;
  WdLogEvent5_WdWarning(v44);
  if ( v25 )
  {
    v45 = v25;
    do
    {
      if ( *v22 )
        VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v29, *v22);
      ++v22;
      --v45;
    }
    while ( v45 );
  }
LABEL_71:
  if ( P != &v58 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v23;
}
