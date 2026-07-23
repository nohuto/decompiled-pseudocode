/*
 * XREFs of EtwpEnableStackCaching @ 0x1407135D8
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x14054F7D8 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpFreeStackCache @ 0x140713738 (EtwpFreeStackCache.c)
 */

__int64 __fastcall EtwpEnableStackCaching(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r15d
  char *PoolWithTag; // rax
  char *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ebp
  unsigned int v12; // edi
  _SLIST_ENTRY *v13; // rax
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 0;
  if ( *(_QWORD *)(a1 + 840) )
  {
    return (unsigned int)-1073741053;
  }
  else
  {
    v5 = 3145728;
    v6 = 256;
    if ( a2 >= 0x300000 )
      v5 = a2;
    if ( v5 > 0x3200000 )
      v5 = 52428800;
    if ( a3 >= 0x100 )
      v6 = a3;
    if ( v6 > 0x1000 )
      v6 = 4096;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v6 + 32, 0x73777445u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x20uLL);
      *((_DWORD *)v8 + 1) = v6;
      *(_DWORD *)v8 = *(_DWORD *)a1;
      InitializeSListHead((PSLIST_HEADER)v8 + 1);
      v9 = v8 + 32;
      v10 = v6;
      do
      {
        v9[2] = 0LL;
        v9[1] = v9;
        *v9 = v9;
        v9 += 3;
        --v10;
      }
      while ( v10 );
      v11 = 0;
      v12 = v5 / 0x128;
      if ( !v12 )
      {
LABEL_19:
        *(_QWORD *)(a1 + 840) = v8;
        _InterlockedOr(v15, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x1000000u);
        return v3;
      }
      while ( 1 )
      {
        v13 = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x128uLL, 0x78777445u);
        if ( !v13 )
          break;
        *((_DWORD *)&v13[1].Next + 2) = 0;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v8 + 1, v13);
        if ( ++v11 >= v12 )
          goto LABEL_19;
      }
      EtwpFreeStackCache(v8);
    }
    return (unsigned int)-1073741801;
  }
}
