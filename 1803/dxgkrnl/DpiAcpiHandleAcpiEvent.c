/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C02073D4
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x1C0207830 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0207D74 (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C020A410 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(char *P)
{
  int v2; // ebx
  bool v3; // zf
  int v4; // eax
  char v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h]
  _QWORD v24[10]; // [rsp+48h] [rbp-29h] BYREF

  v22 = 0;
  AcquireMiniportListMutex();
  v2 = *((_DWORD *)P + 6);
  if ( v2 == 1 )
  {
    v2 = 1;
    if ( (_BYTE)word_1C007A75C )
    {
      if ( HIBYTE(word_1C007A75C) && qword_1C007A768 == *((_QWORD *)P + 2) )
      {
        *((_DWORD *)P + 6) = 4;
        v2 = 4;
        *((_QWORD *)P + 2) = qword_1C007A760;
      }
    }
  }
  memset(v24, 0, 0x48uLL);
  v24[0] = 0x4000000006LL;
  v3 = *((_QWORD *)P + 4) == 0LL;
  memset(&v24[1], 0, 36);
  LODWORD(v24[7]) = *((_DWORD *)P + 7);
  HIDWORD(v24[7]) = !v3;
  LODWORD(v24[6]) = 25;
  HIDWORD(v24[6]) = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
  v4 = *((_DWORD *)P + 6);
  do
  {
    v5 = 0;
    v6 = qword_1C007A778;
    if ( *(_QWORD *)v6 != v6 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 72), Executive, 0, 0, 0LL);
        v7 = *(_QWORD *)(v6 + 56);
        if ( *(_QWORD *)v7 != v7 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v6 + 72), 0);
        v6 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 == qword_1C007A778 )
        {
          v4 = *((_DWORD *)P + 6);
          v5 = 0;
          goto LABEL_47;
        }
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v8 = *((_DWORD *)P + 6);
          if ( v8 != 1 && v8 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v7 + 24) )
            break;
        }
LABEL_44:
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == *(_QWORD *)(v6 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 483) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( *(_BYTE *)(v7 + 1142) != 1 || !*(_QWORD *)(v6 + 232) || *(_DWORD *)(v7 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v7 + 483) )
          DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v22 = 0;
      if ( *(_DWORD *)(v7 + 3808) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        v9 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 3728), 2);
        v9 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3728), v9);
      v10 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v6,
                   *(_QWORD *)(v7 + 48),
                   *((_DWORD *)P + 6),
                   *((_DWORD *)P + 7),
                   *((_QWORD *)P + 4),
                   (__int64)&v22);
      if ( *(_DWORD *)(v7 + 3808) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3728));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3728));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3728));
      }
      v11 = *(_QWORD *)(v7 + 3728);
      v12 = 0;
      if ( v11 )
      {
        v23 = *(_QWORD *)(v11 + 268);
        v12 = v23;
      }
      memset(v24, 0, 0x48uLL);
      v13 = *(_QWORD *)(v7 + 2536);
      memset(&v24[1], 0, 36);
      v24[7] = __PAIR64__(v10, v22);
      v24[0] = 0x480000001ELL;
      LODWORD(v24[6]) = 42;
      HIDWORD(v24[6]) = v12;
      v24[8] = v13;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
      if ( (int)v10 >= 0 )
      {
        v18 = v22;
        if ( *((_DWORD *)P + 6) == 4 )
        {
          v15 = (unsigned int)(-((v22 & 8) != 0) - 8);
          if ( ((unsigned int)v15 & v22) != 0 )
          {
            v19 = WdLogNewEntry5_WdError(v15);
            *(_QWORD *)(v19 + 24) = v22;
            WdLogEvent5_WdError(v19);
            v18 = 0LL;
            v22 = 0;
          }
        }
        LOBYTE(v15) = (*(_BYTE *)(v7 + 3736) & 1) == 0;
        LOBYTE(v18) = -(v18 & 7);
        if ( ((unsigned __int8)-((_BYTE)v18 != 0) & (unsigned __int8)v15) == 0 )
          goto LABEL_37;
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v17 + 24) = v10;
        WdLogEvent5_WdWarning(v17);
      }
      v22 = 0;
LABEL_37:
      v21 = WdLogNewEntry5_WdEvent(v15, v18);
      *(_QWORD *)(v21 + 24) = v22;
      WdLogEvent5_WdEvent(v21);
      if ( *(_DWORD *)(v7 + 3808) != 1 && *(_DWORD *)(v7 + 284) == 1 && (v22 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v7 + 24), v22, P, P + 40);
      goto LABEL_41;
    }
LABEL_47:
    if ( v4 == 4 && (v22 & 8) != 0 )
    {
      *((_DWORD *)P + 6) = 1;
      v5 = 1;
      *((_QWORD *)P + 2) = qword_1C007A768;
      v4 = 1;
    }
  }
  while ( v5 );
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  ExFreePoolWithTag(P, 0);
}
