/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C0105414
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C0011F04 (DpiIsValidEdid.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C01054E0 (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // rbp
  PVOID PoolWithTag; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( v4 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v4)) )
  {
    *(_DWORD *)(v2 + 924) = *(_DWORD *)(a2 + 4);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 4), 0x74727044u);
    *(_QWORD *)(v2 + 928) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
      v10 = *(_DWORD *)(v2 + 496);
      if ( v10 == 1 )
      {
        MonitorGetMonitorDescriptorIDs(
          *(DXGADAPTER **)(v6 + 3728),
          *(_DWORD *)(v2 + 504),
          (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
      }
      else if ( v10 == 2 )
      {
        v13 = *(_OWORD **)(a2 + 8);
        v14 = (_OWORD *)(v2 + 512);
        v15 = 3LL;
        do
        {
          *v14 = *v13;
          v14[1] = v13[1];
          v14[2] = v13[2];
          v14[3] = v13[3];
          v14[4] = v13[4];
          v14[5] = v13[5];
          v14[6] = v13[6];
          v14 += 8;
          v16 = v13[7];
          v13 += 8;
          *(v14 - 1) = v16;
          --v15;
        }
        while ( v15 );
        *v14 = *v13;
        *((_QWORD *)v14 + 2) = *((_QWORD *)v13 + 2);
      }
      else
      {
        v3 = -1073741823;
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v17);
      }
    }
    else
    {
      v3 = -1073741801;
      v12 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v12 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v12);
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    v3 = -1073741823;
    v22 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v22);
  }
  return v3;
}
