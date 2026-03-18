/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C0057D30
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0057A8C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0004C4C (RtlStringCbPrintfW.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wchar_t *v10; // r12
  __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  int *v19; // rdx
  __int64 v20; // rax
  wchar_t *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // r15d
  __int64 v25; // rax
  __int64 v26; // r15
  PVOID v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 i; // rbx
  void *v34; // rcx
  __int64 j; // rbx
  void *v36; // rcx
  void *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+28h] [rbp-70h]
  __int64 v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-60h]
  struct _PCW_DATA v44; // [rsp+50h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-38h] BYREF
  NTSTATUS v46; // [rsp+A0h] [rbp+8h]

  v2 = *(unsigned int *)(a2 + 4);
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v5 )
  {
    ++*v5;
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x298uLL, 0x68536956u);
  v7 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v7 )
  {
    memset(v7, 0, 0x298uLL);
    **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1;
    v10 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    if ( !v10 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v32);
LABEL_21:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
      {
        v34 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520);
        if ( v34 )
        {
          ExFreePoolWithTag(v34, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520) = 0LL;
        }
      }
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a2 + 64); j = (unsigned int)(j + 1) )
      {
        v36 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8);
        if ( v36 )
        {
          ExFreePoolWithTag(v36, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8) = 0LL;
        }
      }
      v37 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
      if ( v37 )
      {
        ExFreePoolWithTag(v37, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = 0LL;
      }
      return 3221225495LL;
    }
    v11 = 0LL;
    if ( *(_DWORD *)(a2 + 64) )
    {
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xE0uLL, 0x68536956u);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2);
        *(_QWORD *)(v13 + 8 * v11 + 8) = PoolWithTag;
        v14 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v11 + 8);
        if ( !v14 )
          goto LABEL_33;
        memset(v14, 0, 0xE0uLL);
        v15 = *(_QWORD *)(a2 + 8 * v11 + 440);
        v16 = *(_QWORD *)(a2 + 16);
        v17 = *(unsigned __int16 *)(v15 + 6);
        v18 = *(unsigned __int16 *)(v15 + 8);
        v19 = (int *)(*(_QWORD *)(352 * v17 + *(_QWORD *)(v16 + 2360) + 24) + 74 * v18);
        v20 = *v19;
        if ( (_DWORD)v20 )
          v21 = off_1C0036DC0[v20];
        else
          v21 = (wchar_t *)(v19 + 1);
        LODWORD(v43) = v18;
        LODWORD(v42) = v17;
        LODWORD(v41) = *(_DWORD *)(v16 + 268);
        LODWORD(Data) = *(_DWORD *)(v16 + 272);
        v24 = RtlStringCbPrintfW(
                v10,
                0x208uLL,
                L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                *(_QWORD *)(a1 + 2632),
                Data,
                v41,
                v42,
                v43,
                v21);
        if ( v24 < 0
          || (RtlInitUnicodeString(&DestinationString, v10),
              v25 = *(_QWORD *)(a1 + 24),
              v44.Size = 224,
              v44.Data = *(const void **)(*(_QWORD *)(v25 + 8 * v2) + 8 * v11 + 8),
              v24 = PcwCreateInstance(
                      (PPCW_INSTANCE *)v44.Data + 27,
                      GpuPerformanceCounterSetEngine,
                      &DestinationString,
                      1u,
                      &v44),
              v24 < 0) )
        {
          v38 = WdLogNewEntry5_WdAssertion(v23, v22);
          WdLogEvent5_WdAssertion(v38);
          goto LABEL_11;
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(a2 + 64) )
          goto LABEL_11;
      }
    }
    v24 = v46;
LABEL_11:
    operator delete(v10);
    if ( v24 < 0 )
      goto LABEL_21;
    v26 = 0LL;
    if ( *(_DWORD *)(a2 + 40) )
    {
      while ( 1 )
      {
        v27 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2);
        *(_QWORD *)(v13 + 8 * v26 + 520) = v27;
        v14 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
        v28 = *((_QWORD *)v14 + v26 + 65);
        if ( !v28 )
          break;
        v26 = (unsigned int)(v26 + 1);
        *(_QWORD *)v28 = 0LL;
        *(_DWORD *)(v28 + 8) = 0;
        if ( (unsigned int)v26 >= *(_DWORD *)(a2 + 40) )
          goto LABEL_15;
      }
LABEL_33:
      v39 = WdLogNewEntry5_WdWarning(v14, v13);
      WdLogEvent5_WdWarning(v39);
      goto LABEL_21;
    }
LABEL_15:
    v29 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 648LL);
    v29[1] = v29;
    *v29 = v29;
    return 0LL;
  }
  v31 = WdLogNewEntry5_WdWarning(0LL, v6);
  WdLogEvent5_WdWarning(v31);
  return 3221225495LL;
}
