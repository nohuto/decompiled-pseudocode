/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x18006F140
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

_BOOL8 __fastcall RtlpHpTagRunOnceInit(PRTL_RUN_ONCE a1, _QWORD *a2, PVOID *a3)
{
  NTSTATUS v4; // edi
  char *v5; // rbx
  __int64 v6; // rax

  v4 = RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    memset(a2, 0, 0x28uLL);
    v5 = (char *)RtlpHpMetadataAlloc(512LL, 0LL);
    if ( v5 )
    {
      v6 = RtlpHpMetadataAlloc(0x2000LL, 1LL);
      if ( v6 )
      {
        *a2 = 0LL;
        a2[3] = v6;
        *((_DWORD *)a2 + 2) = 0;
        a2[2] = v5;
        *((_DWORD *)a2 + 3) = 2048;
        if ( (v5 + 512 >= v5 ? 0x40 : 0) != 0 )
          memset64(v5, (unsigned __int64)(a2 + 1) | 1, v5 + 512 >= v5 ? 0x40 : 0);
        v5 = 0LL;
        v4 = 0;
      }
      else
      {
        v4 = -1073741801;
      }
      if ( v5 )
        RtlpHpMetadataFree(v5);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  return v4 >= 0;
}
