/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C011F010
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C011ED3C (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01DE4A4 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C011F1B8 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C01DEC68 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, _DWORD *a4, __int128 *a5, int a6)
{
  unsigned int v6; // edi
  char *PoolWithTag; // rax
  __int64 v12; // rcx
  char *v13; // rbx
  __int128 v14; // xmm0
  struct _KMUTANT *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rbx
  _QWORD *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v6 = 0;
  if ( a3 || *a4 == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x74727044u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x68uLL);
      *((_DWORD *)v13 + 5) = a6;
      *((_DWORD *)v13 + 14) = 1;
      *((_DWORD *)v13 + 6) = a2;
      v13[67] = a3;
      if ( *a4 == 3 )
      {
        *(_DWORD *)v13 = 1;
        *(_OWORD *)(v13 + 4) = *a5;
        *((_DWORD *)v13 + 1) = 0x80000000;
        *((_DWORD *)v13 + 2) = 1;
        v13[12] = 0;
        *((_DWORD *)v13 + 22) = *(_DWORD *)a5;
        *((_WORD *)v13 + 46) = *((_WORD *)a5 + 2);
      }
      else
      {
        *(_DWORD *)v13 = *a4;
        v14 = *a5;
        *((_WORD *)v13 + 46) = 0;
        *(_OWORD *)(v13 + 4) = v14;
      }
      *((_DWORD *)v13 + 17) = 1;
      v15 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      *((_QWORD *)v13 + 9) = v15;
      if ( v15 )
      {
        KeInitializeMutex(v15, 0);
        if ( a3 && *(_BYTE *)(a1 + 1141) == 1 )
          *((_QWORD *)v13 + 10) = DpiAcpiGetAcpiChildName(a1, *((unsigned int *)v13 + 5));
        if ( *(_DWORD *)v13 == 1 )
        {
          v17 = *(_DWORD *)(a1 + 3344) + 1;
          *(_DWORD *)(a1 + 3344) = v17;
          if ( *(_BYTE *)(a1 + 1136) )
          {
            if ( v17 == 1 || IsInternalVideoOutput(*(_DWORD *)a5) )
              dword_1C0060B34 = a2;
          }
        }
        v18 = v13 + 32;
        v19 = *(_QWORD **)(a1 + 3336);
        if ( *v19 != a1 + 3328 )
          __fastfail(3u);
        *v18 = a1 + 3328;
        v18[1] = v19;
        *v19 = v18;
        *(_QWORD *)(a1 + 3336) = v18;
      }
      else
      {
        v6 = -1073741801;
        v23 = WdLogNewEntry5_WdLowResource(v16);
        *(_QWORD *)(v23 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v23);
        DpiFdoReleaseChildDescriptor(v13);
      }
    }
    else
    {
      v6 = -1073741801;
      v22 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v22 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v22);
    }
  }
  else
  {
    v6 = -1073741811;
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  return v6;
}
