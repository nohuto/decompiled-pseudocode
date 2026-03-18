/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x1406E0DF8
 * Callers:
 *     EtwpSetMark @ 0x1407474E0 (EtwpSetMark.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400011F0 (MiIdentifyPfnWrapper.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x14027B96C (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  unsigned int *v16; // [rsp+38h] [rbp-31h]
  _QWORD v17[3]; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+58h] [rbp-11h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h]
  __int64 v20; // [rsp+68h] [rbp-1h]
  int *v21; // [rsp+70h] [rbp+7h] BYREF
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]

  v7 = 0;
  v16 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v11 = v16;
  if ( *v16 )
  {
    do
    {
      v12 = 48LL * *(_QWORD *)&v11[4 * v7 + 4] - 0x58000000000LL;
      v13 = v12 + 48LL * *(_QWORD *)&v11[4 * v7 + 6];
      if ( v12 < v13 )
      {
        do
        {
          if ( !a4 || (*(_BYTE *)(v12 + 34) & 7) == 6 )
          {
            memset(v17, 0, sizeof(v17));
            MiIdentifyPfnWrapper(v12, (__int64)v17);
            v23 = 0;
            v21 = (int *)v17;
            v22 = 24;
            EtwTraceSiloDcEvent((__int64)&v21, 1u, a1, a2, a3, 0x401802u);
          }
          v12 += 48LL;
        }
        while ( v12 < v13 );
        v11 = v16;
      }
      ++v7;
    }
    while ( v7 < *v11 );
  }
  MiDereferencePageRuns((__int64)v11, v8, v9, v10);
  if ( !a4 )
  {
    v18 &= 0xFFFFFFE0;
    v23 = 0;
    v19 = MmPfnDatabase;
    v20 = MxPfnAllocation;
    v21 = &v18;
    v22 = 24;
    EtwTraceSiloDcEvent((__int64)&v21, 1u, a1, a2, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
