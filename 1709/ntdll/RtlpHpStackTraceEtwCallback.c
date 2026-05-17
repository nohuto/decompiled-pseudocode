/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x180100620
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryHeapInformation @ 0x1800137A0 (RtlQueryHeapInformation.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(__int64 a1, int a2)
{
  signed __int32 *v2; // rax
  signed __int32 *v3; // rdi
  signed __int32 v4; // ebx
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 == 2 )
  {
    v2 = (signed __int32 *)RtlpHpMetadataAlloc(0x4010uLL, 0);
    v3 = v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset(v2, 0, 0x4010uLL);
      *v3 = v4;
      v5[1] = -1LL;
      LODWORD(v5[0]) = 1;
      v5[3] = v3;
      v5[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, 5, v5, 0x20uLL, 0LL);
      RtlpHpMetadataFree((unsigned __int64)v3);
    }
  }
}
