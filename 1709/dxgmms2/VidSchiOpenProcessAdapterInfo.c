/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C0070EA0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0070C1C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000EF90 (RtlStringCbPrintfW.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  wchar_t *v9; // r12
  __int64 v10; // rbx
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r9
  int *v16; // rdx
  __int64 v17; // rax
  wchar_t *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS v21; // r15d
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 i; // rbx
  void *v30; // rcx
  __int64 j; // rbx
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-78h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  __int64 v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  struct _PCW_DATA v40; // [rsp+50h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-38h] BYREF
  NTSTATUS v42; // [rsp+A0h] [rbp+8h]

  v2 = *(unsigned int *)(a2 + 4);
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v5 )
  {
    ++*v5;
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = ExAllocatePoolWithTag((POOL_TYPE)512, 0x298uLL, 0x68536956u);
  v6 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
  if ( v6 )
  {
    memset(v6, 0, 0x298uLL);
    **(_DWORD **)(*(_QWORD *)(a1 + 24) + 8 * v2) = 1;
    v9 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    if ( !v9 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v28);
LABEL_20:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
      {
        v30 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520);
        if ( v30 )
        {
          ExFreePoolWithTag(v30, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * i + 520) = 0LL;
        }
      }
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a2 + 60); j = (unsigned int)(j + 1) )
      {
        v32 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8);
        if ( v32 )
        {
          ExFreePoolWithTag(v32, 0);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * j + 8) = 0LL;
        }
      }
      v33 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
      if ( v33 )
      {
        ExFreePoolWithTag(v33, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) = 0LL;
      }
      return 3221225495LL;
    }
    v10 = 0LL;
    if ( *(_DWORD *)(a2 + 60) )
    {
      while ( 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v10 + 8) = ExAllocatePoolWithTag(
                                                                                  (POOL_TYPE)512,
                                                                                  0xE0uLL,
                                                                                  0x68536956u);
        v11 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v10 + 8);
        if ( !v11 )
          goto LABEL_33;
        memset(v11, 0, 0xE0uLL);
        v12 = *(_QWORD *)(a2 + 8 * v10 + 424);
        v13 = *(_QWORD *)(a2 + 16);
        v14 = *(unsigned __int16 *)(v12 + 8);
        v15 = *(unsigned __int16 *)(v12 + 6);
        v16 = (int *)(*(_QWORD *)(*(_QWORD *)(v13 + 2216) + 48 * v15 + 24) + 74 * v14);
        v17 = *v16;
        if ( (_DWORD)v17 )
          v18 = off_1C002FDF0[v17];
        else
          v18 = (wchar_t *)(v16 + 1);
        LODWORD(v39) = v14;
        LODWORD(v38) = v15;
        LODWORD(v37) = *(_DWORD *)(v13 + 268);
        LODWORD(Data) = *(_DWORD *)(v13 + 272);
        v21 = RtlStringCbPrintfW(
                v9,
                0x208uLL,
                L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                *(_QWORD *)(a1 + 2632),
                Data,
                v37,
                v38,
                v39,
                v18);
        if ( v21 < 0
          || (RtlInitUnicodeString(&DestinationString, v9),
              v22 = *(_QWORD *)(a1 + 24),
              v40.Size = 224,
              v40.Data = *(const void **)(*(_QWORD *)(v22 + 8 * v2) + 8 * v10 + 8),
              v21 = PcwCreateInstance(
                      (PPCW_INSTANCE *)v40.Data + 27,
                      GpuPerformanceCounterSetEngine,
                      &DestinationString,
                      1u,
                      &v40),
              v21 < 0) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v20, v19);
          WdLogEvent5_WdAssertion(v34);
          goto LABEL_11;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *(_DWORD *)(a2 + 60) )
          goto LABEL_11;
      }
    }
    v21 = v42;
LABEL_11:
    operator delete(v9);
    if ( v21 < 0 )
      goto LABEL_20;
    v23 = 0LL;
    if ( *(_DWORD *)(a2 + 40) )
    {
      while ( 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 8 * v23 + 520) = ExAllocatePoolWithTag(
                                                                                    (POOL_TYPE)512,
                                                                                    0xCuLL,
                                                                                    0x68536956u);
        v11 = *(void **)(*(_QWORD *)(a1 + 24) + 8 * v2);
        v24 = *((_QWORD *)v11 + v23 + 65);
        if ( !v24 )
          break;
        v23 = (unsigned int)(v23 + 1);
        *(_QWORD *)v24 = 0LL;
        *(_DWORD *)(v24 + 8) = 0;
        if ( (unsigned int)v23 >= *(_DWORD *)(a2 + 40) )
          goto LABEL_15;
      }
LABEL_33:
      v35 = WdLogNewEntry5_WdWarning(v11);
      WdLogEvent5_WdWarning(v35);
      goto LABEL_20;
    }
LABEL_15:
    v25 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2) + 648LL);
    v25[1] = v25;
    *v25 = v25;
    return 0LL;
  }
  v27 = WdLogNewEntry5_WdWarning(0LL);
  WdLogEvent5_WdWarning(v27);
  return 3221225495LL;
}
