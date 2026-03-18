/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D460
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  const char *v1; // r12
  _QWORD *v2; // r15
  unsigned int v3; // esi
  int v5; // r14d
  ULONG_PTR v6; // rbx
  _SLIST_ENTRY *v7; // r13
  int v8; // edi
  __int64 *v9; // rbx
  KIRQL v10; // dl
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rax
  char v14; // al
  const char *v15; // rcx
  __int64 v16; // rdx
  signed __int32 v17; // ecx
  KIRQL v18; // di
  int v19; // edx
  int v21; // edi
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  _QWORD *v24; // rdi
  unsigned int v25; // r14d
  __int64 v26; // rcx
  char v27; // al
  char v28; // dl
  const char *v29; // r8
  const char *v30; // rcx
  __int64 v31; // rax
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  int v34; // edi
  unsigned __int64 v35; // rax
  _QWORD v36[10]; // [rsp+50h] [rbp-78h] BYREF

  v1 = (const char *)&unk_1C0067B08;
  v2 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 84) & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v28 = 0;
    v29 = (const char *)&unk_1C0067B08;
    v30 = (const char *)&unk_1C0067B08;
    if ( v2 )
    {
      v31 = v2[1];
      v28 = (char)v2;
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v29 = (const char *)v2[70];
        if ( (v31 & 0x400000000000LL) != 0 )
          v30 = (const char *)v2[71];
      }
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x42u,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      v28,
      v29,
      v30);
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v9 = (__int64 *)v2[89];
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = *v9;
  v12 = *(__int64 **)(*v9 + 24);
  v13 = (__int64 *)(v11 + 24);
  if ( v13 == v12 )
  {
LABEL_5:
    v12 = 0LL;
  }
  else
  {
    while ( v8 != *((_DWORD *)v12 + 10) )
    {
      v12 = (__int64 *)*v12;
      if ( v13 == v12 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_8;
  }
  v6 = (ULONG_PTR)(v12 + 15);
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( v6 )
  {
    v21 = *(_DWORD *)(a1 + 84);
    if ( (v21 & 2) != 0 )
    {
      _m_prefetchw(v2 + 1);
      v22 = v2[1];
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64(v2 + 1, v22 | 0x20000000000000LL, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x20000000000000LL) != 0 )
        goto LABEL_8;
    }
    else
    {
      if ( (v21 & 8) != 0 )
      {
        if ( !*((_DWORD *)v2 + 126) )
          goto LABEL_8;
        memset(v36, 0, 0x28uLL);
        v24 = v36;
        v36[2] = 1LL;
        v25 = 1;
        WORD1(v36[0]) = 1;
        goto LABEL_29;
      }
      if ( (v21 & 0x30) != 0 )
      {
        v34 = v21 | 0x40;
        *(_DWORD *)(a1 + 84) = v34;
        memset(v36, 0, sizeof(v36));
        v36[2] = 2LL;
        WORD1(v36[0]) = 1;
        v25 = 2;
        WORD1(v36[5]) = 1;
        v35 = (unsigned __int8)v34;
        v24 = v36;
        v36[7] = (v35 >> 4) & 1;
        goto LABEL_29;
      }
      if ( (v21 & 0x80u) != 0 )
      {
        _m_prefetchw(v2 + 119);
        v32 = v2[119];
        do
        {
          v33 = v32;
          v32 = _InterlockedCompareExchange64(v2 + 119, v32 | 0x4000, v32);
        }
        while ( v33 != v32 );
        if ( (v32 & 0x4000) != 0 )
          goto LABEL_8;
        v7 = (_SLIST_ENTRY *)(a1 + 88);
        memset((void *)(a1 + 88), 0, 0x28uLL);
        *(_DWORD *)(a1 + 32) = 8;
      }
    }
    v24 = 0LL;
    v25 = 0;
LABEL_29:
    v26 = *(_QWORD *)(a1 + 56);
    if ( v26 )
    {
      AMLIDereferenceHandleEx(v26);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v27 = gdwfAMLI;
    *(_QWORD *)(a1 + 56) = v6;
    dword_1C00797B8 = 0;
    pszDest = 0;
    if ( (v27 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v5 = AMLIAsyncEvalObject((__int64 *)v6, v7, v25, v24, ACPIBuildCompleteMustSucceed, a1);
  }
LABEL_8:
  v14 = 0;
  v15 = (const char *)&unk_1C0067B08;
  if ( v2 )
  {
    v16 = v2[1];
    v14 = (char)v2;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v1 = (const char *)v2[70];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (const char *)v2[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x43u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v5,
    v14,
    v1,
    v15);
  if ( v5 == 259 )
  {
    v5 = 0;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon(a1 + 24, 2LL);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        if ( v6 )
          v3 = *(_DWORD *)(*(_QWORD *)v6 + 40LL);
        KeBugCheckEx(0xA5u, 3uLL, v6, v5, v3);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v17, 1);
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v19 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v19;
      if ( (v19 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v19 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v18);
    }
  }
  if ( v6 )
    AMLIDereferenceHandleEx(v6);
  return (unsigned int)v5;
}
