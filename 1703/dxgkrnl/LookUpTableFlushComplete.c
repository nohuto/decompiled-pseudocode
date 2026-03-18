/*
 * XREFs of LookUpTableFlushComplete @ 0x1C01208B4
 * Callers:
 *     TlgAggregateInternalProviderCallback @ 0x1C0120800 (TlgAggregateInternalProviderCallback.c)
 *     RegisteredProviderEtwCallback @ 0x1C0120840 (RegisteredProviderEtwCallback.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1C01E8F20 (FlushWorkItemRoutineKernelMode.c)
 *     TlgUnregisterAggregateProvider @ 0x1C01E9058 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     FlushLookUpTableBucket @ 0x1C0046544 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1C01E9014 (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  const GUID *v6; // r9
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  _QWORD *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  int *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  int *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  int *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  int *v32; // [rsp+128h] [rbp+20h]
  __int64 v33; // [rsp+130h] [rbp+28h]
  __int64 *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    v5 = v4 + 344;
    if ( *(_QWORD *)(v4 + 344) )
    {
      if ( (unsigned int)dword_1C006E890 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C006E890, 0x400000000000uLL) )
      {
        v7 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 8LL) - 16LL);
        v18 = &v16;
        v20 = a1 + 352;
        v15[0] = *(unsigned int *)(a1 + 360);
        v22 = v15;
        v10 = *(_DWORD *)(a1 + 364);
        v26 = &v10;
        v11 = *(_DWORD *)(a1 + 368);
        v28 = &v11;
        v12 = *(_DWORD *)(a1 + 372);
        v30 = &v12;
        v13 = *(_DWORD *)(a1 + 376);
        v32 = &v13;
        LODWORD(v14) = *(_DWORD *)(a1 + 380);
        v34 = &v14;
        v16 = v7;
        v19 = 16LL;
        v21 = 8LL;
        v23 = 8LL;
        v24 = v5;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C006E890, &unk_1C00523D5, 0LL, v6, 0xBu, &pData);
      }
      memset(&v15[1], 0, 0x28uLL);
      v8 = *(_OWORD *)&v15[3];
      *(_OWORD *)v5 = *(_OWORD *)&v15[1];
      v9 = v15[5];
      *(_OWORD *)(v5 + 16) = v8;
      *(_QWORD *)(v5 + 32) = v9;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}
