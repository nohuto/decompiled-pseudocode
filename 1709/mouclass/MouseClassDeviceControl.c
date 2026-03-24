/*
 * XREFs of MouseClassDeviceControl @ 0x1C000BF90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004500 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0004FF0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C00053A4 (WPP_RECORDER_SF_qqLd.c)
 */

__int64 __fastcall MouseClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _IO_REMOVE_LOCK *v6; // r15
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  bool v13; // zf
  __int64 v14; // rdx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-48h]
  ULONG RemlockSizea; // [rsp+20h] [rbp-48h]

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v2 + 184);
  v6 = (struct _IO_REMOVE_LOCK *)(v4 + 32);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)v2, File, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v7;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v8;
  }
  WPP_RECORDER_SF_qqL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x18u, RemlockSize);
  v12 = *(_DWORD *)(v5 + 24);
  if ( v12 > 0xB01A8 )
  {
    v16 = v12 - 721338;
    if ( v16 )
    {
      v17 = v16 - 4;
      if ( v17 )
      {
        v18 = v17 - 4;
        if ( v18 )
        {
          v19 = v18 - 32;
          if ( v19 )
          {
            v20 = v19 - 261662;
            if ( !v20 )
            {
              v22 = *(_DWORD *)(v5 + 16);
              if ( v22 )
              {
                if ( v22 < 2 )
                {
                  v8 = -1073741789;
                  WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, RemlockSizea);
                  goto LABEL_18;
                }
                v23 = **(unsigned __int16 **)(v2 + 24);
              }
              else
              {
                v23 = 0;
              }
              if ( *(_QWORD *)v4 != *(_QWORD *)(v4 + 8) )
              {
                v8 = -1073741637;
                goto LABEL_18;
              }
              if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v23 )
                  goto LABEL_39;
                if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
                {
                  if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v23 + 16)
                    || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v23 + 19) )
                  {
                    v23 = 0;
                  }
                  while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v23 + 16)
                       || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v23 + 19) )
                  {
                    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v23 )
                      goto LABEL_39;
                    ++v23;
                  }
                }
                if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v23 )
                {
LABEL_39:
                  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                  v8 = -1073741811;
                  *(_DWORD *)(v2 + 48) = -1073741811;
                  goto LABEL_19;
                }
                v4 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v23 + 1);
                *(_QWORD *)(v5 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v23);
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              v24 = *(_QWORD *)(v2 + 184);
              *(_OWORD *)(v24 - 72) = *(_OWORD *)v24;
              *(_OWORD *)(v24 - 56) = *(_OWORD *)(v24 + 16);
              *(_OWORD *)(v24 - 40) = *(_OWORD *)(v24 + 32);
              *(_QWORD *)(v24 - 24) = *(_QWORD *)(v24 + 48);
              *(_BYTE *)(v24 - 69) = 0;
              *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
              goto LABEL_51;
            }
            v21 = v20 - 1720640;
            if ( v21 )
            {
              v13 = v21 == 4;
LABEL_16:
              if ( !v13 )
                goto LABEL_17;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v12 == 721320 )
      goto LABEL_52;
    if ( v12 < 0xB0190 )
      goto LABEL_17;
    if ( v12 <= 0xB0194 )
      goto LABEL_52;
    if ( v12 <= 0xB0196 )
    {
LABEL_17:
      v8 = -1073741808;
LABEL_18:
      *(_DWORD *)(v2 + 48) = v8;
LABEL_19:
      *(_QWORD *)(v2 + 56) = 0LL;
      IofCompleteRequest((PIRP)v2, 0);
      goto LABEL_20;
    }
    if ( v12 > 0xB0198 && v12 != 721306 && v12 != 721308 && v12 != 721310 && v12 != 721312 )
    {
      v13 = v12 == 721316;
      goto LABEL_16;
    }
  }
LABEL_52:
  if ( !*(_BYTE *)(v4 + 64) || v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    goto LABEL_17;
  ++*(_BYTE *)(v2 + 67);
  *(_QWORD *)(v2 + 184) += 72LL;
LABEL_51:
  v8 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), (PIRP)v2);
LABEL_20:
  IoReleaseRemoveLockEx(v6, (PVOID)v2, 0x20u);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 4LL);
  }
  return v8;
}
