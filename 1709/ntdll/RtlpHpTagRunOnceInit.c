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

_BOOL8 __fastcall RtlpHpTagRunOnceInit(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  char *v4; // rbx
  __int64 v5; // rax

  v3 = RtlRunOnceExecuteOnce(
         &RtlpHpMetadataHeapInitVar,
         (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapInit,
         0LL,
         0LL);
  if ( v3 >= 0 )
  {
    memset(a2, 0, 0x28uLL);
    v4 = (char *)RtlpHpMetadataAlloc(512LL, 0LL);
    if ( v4 )
    {
      v5 = RtlpHpMetadataAlloc(0x2000LL, 1LL);
      if ( v5 )
      {
        *a2 = 0LL;
        a2[3] = v5;
        *((_DWORD *)a2 + 2) = 0;
        a2[2] = v4;
        *((_DWORD *)a2 + 3) = 2048;
        if ( (v4 + 512 >= v4 ? 0x40 : 0) != 0 )
          memset64(v4, (unsigned __int64)(a2 + 1) | 1, v4 + 512 >= v4 ? 0x40 : 0);
        v4 = 0LL;
        v3 = 0;
      }
      else
      {
        v3 = -1073741801;
      }
      if ( v4 )
        RtlpHpMetadataFree(v4);
    }
    else
    {
      v3 = -1073741801;
    }
  }
  return v3 >= 0;
}
