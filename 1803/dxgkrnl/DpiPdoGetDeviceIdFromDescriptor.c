/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C020C50C
 * Callers:
 *     DpiPdoAddPdo @ 0x1C020B454 (DpiPdoAddPdo.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiIsValidEdid @ 0x1C003C5A8 (DpiIsValidEdid.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C022E200 (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  char *v4; // rcx
  __int64 v6; // r14
  SIZE_T v7; // rdx
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _OWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(char **)(a2 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( v4 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v4)) )
  {
    v7 = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(v2 + 924) = v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x74727044u);
    *(_QWORD *)(v2 + 928) = PoolWithTag;
    if ( PoolWithTag )
    {
      v11 = *(_OWORD **)(a2 + 8);
      memmove(PoolWithTag, v11, *(unsigned int *)(a2 + 4));
      v13 = *(_DWORD *)(v2 + 496);
      if ( v13 == 1 )
      {
        MonitorGetMonitorDescriptorIDs(
          *(DXGADAPTER **)(v6 + 3728),
          *(_DWORD *)(v2 + 504),
          (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
      }
      else if ( v13 == 2 )
      {
        v14 = 3LL;
        v15 = (_OWORD *)(v2 + 512);
        do
        {
          *v15 = *v11;
          v15[1] = v11[1];
          v15[2] = v11[2];
          v15[3] = v11[3];
          v15[4] = v11[4];
          v15[5] = v11[5];
          v15[6] = v11[6];
          v15 += 8;
          v16 = v11[7];
          v11 += 8;
          *(v15 - 1) = v16;
          --v14;
        }
        while ( v14 );
        *v15 = *v11;
        *((_QWORD *)v15 + 2) = *((_QWORD *)v11 + 2);
      }
      else
      {
        v3 = -1073741823;
        v17 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v17 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v17);
      }
    }
    else
    {
      v3 = -1073741801;
      v10 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v10);
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    v3 = -1073741823;
    v20 = WdLogNewEntry5_WdEvent(v19, v18);
    *(_QWORD *)(v20 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v20);
  }
  return v3;
}
