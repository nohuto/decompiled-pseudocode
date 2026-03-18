/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C011B620
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C0123CEC (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v13; // edi
  _OWORD *PoolWithTag; // rax
  __int64 v15; // rcx
  _OWORD *v16; // r14
  unsigned int *v17; // r15
  unsigned int v18; // r12d
  unsigned int *v19; // rdi
  unsigned int *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(v4->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1140) != 1 )
    {
      v22 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdEvent(v22);
      goto LABEL_3;
    }
    v7 = *Information;
    v13 = v7 + 96 * Information[7];
    if ( v13 < (unsigned int)v7 )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x74727044u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v13);
      v17 = Information + 8;
      v18 = 0;
      *v16 = *(_OWORD *)Information;
      v16[1] = *((_OWORD *)Information + 1);
      *(_DWORD *)v16 = v13;
      v19 = (unsigned int *)(v16 + 2);
      if ( Information[7] )
      {
        do
        {
          memmove(v19, v17, 32LL * v17[1] + 8);
          ++v18;
          v20 = &v19[8 * v19[1]];
          *((_WORD *)v20 + 4) = 257;
          *((_BYTE *)v20 + 10) = 3;
          *((_WORD *)v20 + 6) = 1;
          v20[4] = 12;
          v20[5] = 1;
          *((_QWORD *)v20 + 3) = 944LL;
          *((_QWORD *)v20 + 4) = 955LL;
          *((_WORD *)v20 + 20) = 257;
          *((_BYTE *)v20 + 42) = 3;
          *((_WORD *)v20 + 22) = 1;
          v20[12] = 32;
          v20[13] = 1;
          *((_QWORD *)v20 + 7) = 960LL;
          *((_QWORD *)v20 + 8) = 991LL;
          *((_WORD *)v20 + 36) = 769;
          *((_BYTE *)v20 + 74) = 3;
          *((_WORD *)v20 + 38) = 0;
          v20[20] = 0x20000;
          v20[21] = 1;
          *((_QWORD *)v20 + 11) = 655360LL;
          *((_QWORD *)v20 + 12) = 786431LL;
          v19[1] += 3;
          v17 += 8 * v17[1] + 2;
          v19 += 8 * v19[1] + 2;
        }
        while ( v18 < Information[7] );
        v4 = a2;
      }
      ExFreePoolWithTag(Information, 0);
      v4->IoStatus.Information = (ULONG_PTR)v16;
    }
    else
    {
      LODWORD(Status) = -1073741801;
      v23 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v23);
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2559) && !*(_BYTE *)(v2 + 1143) )
  {
LABEL_15:
    v21 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v21 + 24) = Status;
    WdLogEvent5_WdError(v21);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
