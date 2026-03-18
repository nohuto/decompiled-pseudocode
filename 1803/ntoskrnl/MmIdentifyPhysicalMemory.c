/*
 * XREFs of MmIdentifyPhysicalMemory @ 0x14074BD00
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 *     EtwpSetMark @ 0x1407A8C0C (EtwpSetMark.c)
 * Callees:
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiIdentifyPfnWrapper @ 0x140105640 (MiIdentifyPfnWrapper.c)
 *     MiDereferencePageRuns @ 0x14014C808 (MiDereferencePageRuns.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1402AF31C (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmIdentifyPhysicalMemory(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  unsigned int v7; // edi
  unsigned int *v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned int *v13; // [rsp+38h] [rbp-31h]
  _QWORD v14[3]; // [rsp+40h] [rbp-29h] BYREF
  int v15; // [rsp+58h] [rbp-11h] BYREF
  __int64 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  int *v18; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]

  v7 = 0;
  v13 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v8 = v13;
  if ( *v13 )
  {
    do
    {
      v9 = 48LL * *(_QWORD *)&v8[4 * v7 + 4] - 0x58000000000LL;
      v10 = v9 + 48LL * *(_QWORD *)&v8[4 * v7 + 6];
      if ( v9 < v10 )
      {
        do
        {
          if ( !a4 || (*(_BYTE *)(v9 + 34) & 7) == 6 )
          {
            memset(v14, 0, sizeof(v14));
            MiIdentifyPfnWrapper(v9, (__int64)v14);
            v20 = 0;
            v18 = (int *)v14;
            v19 = 24;
            EtwTraceSiloDcEvent((__int64)&v18, 1u, a1, a2, a3, 0x401802u);
          }
          v9 += 48LL;
        }
        while ( v9 < v10 );
        v8 = v13;
      }
      ++v7;
    }
    while ( v7 < *v8 );
  }
  MiDereferencePageRuns((__int64)v8);
  if ( !a4 )
  {
    v15 &= 0xFFFFFFE0;
    v20 = 0;
    v16 = MmPfnDatabase;
    v17 = MxPfnAllocation;
    v18 = &v15;
    v19 = 24;
    EtwTraceSiloDcEvent((__int64)&v18, 1u, a1, a2, 0x27Bu, 0x401802u);
  }
  return 0LL;
}
