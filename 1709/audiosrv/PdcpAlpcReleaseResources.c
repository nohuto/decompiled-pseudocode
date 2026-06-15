/*
 * XREFs of PdcpAlpcReleaseResources @ 0x1800DEDAC
 * Callers:
 *     PdcPortClose @ 0x1800DE834 (PdcPortClose.c)
 *     PdcPortOpen @ 0x1800DE938 (PdcPortOpen.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall PdcpAlpcReleaseResources(void *a1)
{
  struct _TP_POOL *v2; // rcx
  void *v3; // rcx

  *(_DWORD *)a1 = 0;
  if ( *((_QWORD *)a1 + 4) )
  {
    TpReleaseAlpcCompletion();
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v2 = (struct _TP_POOL *)*((_QWORD *)a1 + 5);
  if ( v2 )
  {
    CloseThreadpool(v2);
    *((_QWORD *)a1 + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
