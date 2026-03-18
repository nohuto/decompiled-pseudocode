/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C01F22C0
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C01F415C (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01F6374 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C01F8848 (DpiFdoReleaseChildDescriptor.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0207370 (DpiAcpiGetAcpiChildName.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, _DWORD *a4, __int128 *a5, int a6)
{
  unsigned int v6; // edi
  __int64 v11; // rax
  char *PoolWithTag; // rax
  __int64 v13; // rcx
  char *v14; // rbx
  __int64 v15; // rax
  __int16 v16; // ax
  __int128 v17; // xmm0
  struct _KMUTANT *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rbx
  _QWORD *v23; // rdx

  v6 = 0;
  if ( a3 || *a4 == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x74727044u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x70uLL);
      *((_DWORD *)v14 + 5) = a6;
      *((_DWORD *)v14 + 14) = 1;
      *((_DWORD *)v14 + 6) = a2;
      v14[67] = a3;
      if ( *a4 == 3 )
      {
        *(_DWORD *)v14 = 1;
        *(_OWORD *)(v14 + 4) = *a5;
        *((_DWORD *)v14 + 1) = 0x80000000;
        *((_DWORD *)v14 + 2) = 1;
        v14[12] = 0;
        *((_DWORD *)v14 + 22) = *(_DWORD *)a5;
        v16 = *((_WORD *)a5 + 2);
      }
      else
      {
        *(_DWORD *)v14 = *a4;
        v16 = 0;
        v17 = *a5;
        *((_WORD *)v14 + 47) = 0;
        *(_OWORD *)(v14 + 4) = v17;
      }
      *((_WORD *)v14 + 46) = v16;
      *((_DWORD *)v14 + 17) = 1;
      v18 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      *((_QWORD *)v14 + 9) = v18;
      if ( v18 )
      {
        KeInitializeMutex(v18, 0);
        if ( a3 && *(_BYTE *)(a1 + 1141) == 1 )
          *((_QWORD *)v14 + 10) = DpiAcpiGetAcpiChildName(a1);
        if ( *(_DWORD *)v14 == 1 )
        {
          v21 = *(_DWORD *)(a1 + 3344) + 1;
          *(_DWORD *)(a1 + 3344) = v21;
          if ( *(_BYTE *)(a1 + 1136) )
          {
            if ( v21 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5) )
              dword_1C007AA8C = a2;
          }
        }
        v22 = v14 + 32;
        v23 = *(_QWORD **)(a1 + 3336);
        if ( *v23 != a1 + 3328 )
          __fastfail(3u);
        *v22 = a1 + 3328;
        v22[1] = v23;
        *v23 = v22;
        *(_QWORD *)(a1 + 3336) = v22;
      }
      else
      {
        v6 = -1073741801;
        v20 = WdLogNewEntry5_WdLowResource(v19);
        *(_QWORD *)(v20 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v20);
        DpiFdoReleaseChildDescriptor(v14);
      }
    }
    else
    {
      v6 = -1073741801;
      v15 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v15 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v15);
    }
  }
  else
  {
    v6 = -1073741811;
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  return v6;
}
