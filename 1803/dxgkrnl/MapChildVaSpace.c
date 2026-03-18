/*
 * XREFs of MapChildVaSpace @ 0x1C0187540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall MapChildVaSpace(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5, _QWORD *a6, __int64 a7)
{
  __int64 v11; // rcx
  PVOID PoolWithTag; // rsi
  __int64 v13; // rax
  char v15; // al
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4B677844u);
  if ( !PoolWithTag )
  {
    v13 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v13 + 24) = 8396LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
  v15 = *(_BYTE *)(a1 + 323);
  if ( (v15 & 8) != 0 )
    v16 = *(_QWORD *)(a1 + 456);
  else
    v16 = a1 & -(__int64)((v15 & 4) != 0);
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v16 + 456) + 184LL), &ApcState);
  v17 = *(_BYTE *)(a1 + 323);
  if ( (v17 & 8) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 456LL);
  }
  else
  {
    if ( (v17 & 4) == 0 )
    {
      v19 = 0LL;
      goto LABEL_12;
    }
    v18 = *(_QWORD *)(a1 + 456);
  }
  v19 = (_QWORD *)(v18 + 88);
LABEL_12:
  v20 = (int)VmbChannelMapChildVaSpace(*v19, a2, a3 >> 12, 0LL, a4, a5, PoolWithTag, a7);
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v20 >= 0 )
  {
    *a6 = PoolWithTag;
    _InterlockedIncrement(&g_VgpuNumVaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeVaToGpaMappings, a3);
  }
  else
  {
    v22 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v22 + 24) = v20;
    WdLogEvent5_WdAssertion(v22);
    ExFreePoolWithTag(PoolWithTag, 0x4B677844u);
  }
  return (unsigned int)v20;
}
