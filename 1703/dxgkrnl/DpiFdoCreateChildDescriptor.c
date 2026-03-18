/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C011FA28
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C011F74C (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01C4A2C (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C011FBD0 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C01C5168 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, __int64 a2, char a3, _DWORD *a4, __int128 *a5, int a6)
{
  unsigned int v6; // ebx
  int v9; // r12d
  char *PoolWithTag; // rax
  __int64 v12; // rcx
  char *v13; // rdi
  __int64 v14; // rdx
  __int128 v15; // xmm0
  struct _KMUTANT *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rax

  v6 = 0;
  v9 = a2;
  if ( !a3 && *a4 != 1 )
  {
    v6 = -1073741811;
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x74727044u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741801;
    v23 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return v6;
  }
  memset(PoolWithTag, 0, 0x68uLL);
  *((_DWORD *)v13 + 5) = a6;
  *((_DWORD *)v13 + 14) = 1;
  *((_DWORD *)v13 + 6) = v9;
  v13[67] = a3;
  if ( *a4 == 3 )
  {
    *(_DWORD *)v13 = 1;
    *(_OWORD *)(v13 + 4) = *a5;
    *((_DWORD *)v13 + 1) = 0x80000000;
    *((_DWORD *)v13 + 2) = 1;
    v13[12] = 0;
    *((_DWORD *)v13 + 22) = *(_DWORD *)a5;
    v24 = *((_WORD *)a5 + 2);
    *((_WORD *)v13 + 46) = v24;
    if ( v24 <= 0x80u )
    {
      v6 = -1073741811;
      v25 = WdLogNewEntry5_WdError(128LL, v14);
      *(_QWORD *)(v25 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v25);
LABEL_23:
      DpiFdoReleaseChildDescriptor(v13);
      return v6;
    }
  }
  else
  {
    *(_DWORD *)v13 = *a4;
    v15 = *a5;
    *((_WORD *)v13 + 46) = 0;
    *(_OWORD *)(v13 + 4) = v15;
  }
  *((_DWORD *)v13 + 17) = 1;
  v16 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
  *((_QWORD *)v13 + 9) = v16;
  if ( !v16 )
  {
    v6 = -1073741801;
    v26 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    goto LABEL_23;
  }
  KeInitializeMutex(v16, 0);
  if ( a3 && *(_BYTE *)(a1 + 1141) == 1 )
    *((_QWORD *)v13 + 10) = DpiAcpiGetAcpiChildName(a1, *((unsigned int *)v13 + 5));
  if ( *a4 == 1 )
  {
    v18 = *(_DWORD *)(a1 + 3320) + 1;
    *(_DWORD *)(a1 + 3320) = v18;
    if ( *(_BYTE *)(a1 + 1136) )
    {
      if ( v18 == 1 || IsInternalVideoOutput(*(_DWORD *)a5) )
        dword_1C006FCB4 = v9;
    }
  }
  v19 = v13 + 32;
  v20 = *(_QWORD **)(a1 + 3312);
  if ( *v20 != a1 + 3304 )
    __fastfail(3u);
  *v19 = a1 + 3304;
  v19[1] = v20;
  *v20 = v19;
  *(_QWORD *)(a1 + 3312) = v19;
  return v6;
}
