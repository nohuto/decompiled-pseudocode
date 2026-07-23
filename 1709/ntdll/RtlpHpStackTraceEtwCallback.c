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

void __fastcall RtlpHpStackTraceEtwCallback(LPCGUID a1, int a2)
{
  signed __int32 *v2; // rax
  signed __int32 *v3; // rdi
  signed __int32 v4; // ebx
  int HeapInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v7)(void *); // [rsp+40h] [rbp-18h]
  signed __int32 *v8; // [rsp+48h] [rbp-10h]

  if ( a2 == 2 )
  {
    v2 = (signed __int32 *)RtlpHpMetadataAlloc(0x4010uLL, 0);
    v3 = v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset(v2, 0, 0x4010uLL);
      *v3 = v4;
      v6 = -1LL;
      HeapInformation = 1;
      v8 = v3;
      v7 = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &HeapInformation, 0x20uLL, 0LL);
      RtlpHpMetadataFree((unsigned __int64)v3);
    }
  }
}
