/*
 * XREFs of KeyboardClassDeviceControl @ 0x1C000C8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x1C0002130 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0002200 (WPP_RECORDER_SF_qqL.c)
 *     KeyboardCallAllPorts @ 0x1C0004050 (KeyboardCallAllPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C00053A0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0005D94 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qqdL @ 0x1C0005EE0 (WPP_RECORDER_SF_qqdL.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0006000 (WPP_RECORDER_SF_qqdd.c)
 */

__int64 __fastcall KeyboardClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbp
  struct _IO_REMOVE_LOCK *v7; // r12
  NTSTATUS v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  unsigned int v14; // eax
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v21; // r9d
  unsigned int *PoolWithTag; // rax
  unsigned int *v23; // rdi
  PDRIVER_CONTROL DeviceRoutine; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]
  unsigned int v30; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(v2 + 184);
  v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v9 = v8;
  if ( v8 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v8;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v9;
  }
  WPP_RECORDER_SF_qqL(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 20);
  v13 = *(_DWORD *)(v6 + 24);
  switch ( v13 )
  {
    case 0xB0008u:
      if ( *(_DWORD *)(v6 + 16) < 4u )
      {
        v17 = -1073741789;
        WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v11, 0x15u, RemlockSize);
        goto LABEL_41;
      }
      *(_DWORD *)(v5 + 156) = **(_DWORD **)(v2 + 24);
      goto LABEL_13;
    case 0xB0004u:
LABEL_13:
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        v4 = 1;
      goto LABEL_15;
    case 0xB0000u:
      goto LABEL_15;
  }
  if ( v13 <= 0xB0194 )
  {
    if ( v13 >= 0xB0190 )
      goto LABEL_26;
    if ( v13 != 720928 && v13 != 720960 && v13 != 721024 )
      goto LABEL_39;
LABEL_15:
    v14 = *(_DWORD *)(v6 + 16);
    v15 = 0;
    if ( !v14 )
    {
      v30 = 0;
LABEL_18:
      if ( *(_QWORD *)v5 != *(_QWORD *)(v5 + 8) )
      {
        v17 = -1073741637;
        goto LABEL_41;
      }
      if ( v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      {
        v4 = 0;
        goto LABEL_21;
      }
      ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      v21 = v30;
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v30 )
        goto LABEL_43;
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v30 + 16)
          || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v30 + 19) )
        {
          v21 = 0;
        }
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v21 )
        {
LABEL_43:
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          v17 = -1073741811;
          goto LABEL_41;
        }
        while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v21 + 16)
             || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v21 + 19) )
        {
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= ++v21 )
            goto LABEL_43;
        }
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > v21 )
      {
        v5 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v21 + 1);
        *(_QWORD *)(v6 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v21);
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
LABEL_21:
        v16 = *(_QWORD *)(v2 + 184);
        *(_OWORD *)(v16 - 72) = *(_OWORD *)v16;
        *(_OWORD *)(v16 - 56) = *(_OWORD *)(v16 + 16);
        *(_OWORD *)(v16 - 40) = *(_OWORD *)(v16 + 32);
        *(_QWORD *)(v16 - 24) = *(_QWORD *)(v16 + 48);
        *(_BYTE *)(v16 - 69) = 0;
        *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
        if ( v4 )
        {
          if ( IoAcquireRemoveLockEx(v7, (PVOID)v2, File, 1u, 0x20u) < 0 )
            WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 4u, 0x16u, RemlockSize);
          ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                          (POOL_TYPE)512,
                                          24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 8,
                                          0x4364624Bu);
          v23 = PoolWithTag;
          if ( PoolWithTag )
          {
            *PoolWithTag = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
            PoolWithTag[1] = 0;
            if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
            {
              do
              {
                DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
                v25 = 3LL * v15;
                *(_OWORD *)&v23[2 * v25 + 2] = *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v15);
                *(_QWORD *)&v23[2 * v25 + 6] = *((_QWORD *)DeviceRoutine + 3 * v15 + 2);
                if ( LOBYTE(v23[6 * v15 + 6])
                  && !HIBYTE(v23[6 * v15 + 6])
                  && IoAcquireRemoveLockEx(
                       (PIO_REMOVE_LOCK)(*(_QWORD *)&v23[6 * v15 + 4] + 32LL),
                       (PVOID)v2,
                       File,
                       1u,
                       0x20u) < 0 )
                {
                  WPP_RECORDER_SF_qqdd((__int64)WPP_GLOBAL_Control->DeviceExtension, v26, v27, v28, RemlockSize);
                }
                ++v15;
              }
              while ( v15 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
            }
            v17 = KeyboardCallAllPorts(a1, (IRP *)v2, v23);
          }
          else
          {
            v17 = -1073741670;
            *(_QWORD *)(v2 + 56) = 0LL;
            *(_DWORD *)(v2 + 48) = -1073741670;
            IofCompleteRequest((PIRP)v2, 0);
          }
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          goto LABEL_23;
        }
        goto LABEL_22;
      }
      goto LABEL_43;
    }
    if ( v14 >= 2 )
    {
      v30 = **(unsigned __int16 **)(v2 + 24);
      goto LABEL_18;
    }
    v17 = -1073741789;
LABEL_41:
    *(_DWORD *)(v2 + 48) = v17;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    goto LABEL_23;
  }
  if ( v13 <= 0xB1000 )
  {
    if ( v13 != 724992 )
    {
      v10 = 0x1C0000000uLL;
      switch ( v13 )
      {
        case 0xB0197u:
        case 0xB0198u:
        case 0xB019Au:
        case 0xB019Cu:
        case 0xB019Eu:
        case 0xB01A0u:
        case 0xB01A4u:
        case 0xB01A8u:
        case 0xB01BAu:
        case 0xB01BEu:
        case 0xB01C2u:
        case 0xB01E2u:
          goto LABEL_26;
        case 0xB0200u:
          goto LABEL_15;
        default:
          goto LABEL_39;
      }
    }
    goto LABEL_15;
  }
  if ( v13 == 724996 )
    goto LABEL_15;
  if ( v13 != 2703680 && v13 != 2703684 )
    goto LABEL_39;
LABEL_26:
  if ( !*(_BYTE *)(v5 + 64) || v5 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
LABEL_39:
    v17 = -1073741808;
    WPP_RECORDER_SF_qqdL((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12, RemlockSize);
    goto LABEL_41;
  }
  ++*(_BYTE *)(v2 + 67);
  *(_QWORD *)(v2 + 184) += 72LL;
LABEL_22:
  v17 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), (PIRP)v2);
LABEL_23:
  IoReleaseRemoveLockEx(v7, (PVOID)v2, 0x20u);
  WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v18, 0x19u, RemlockSize);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v19, 4LL);
  }
  return v17;
}
