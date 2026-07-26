/*
 * XREFs of ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z @ 0x1C0075110
 * Callers:
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C00EE748 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00EE8EC (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001D148 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall ndisPdGetIfIndexVPortStr(struct NDIS_PD_ASSOCIATION *a1, unsigned __int16 *a2)
{
  __int64 v2; // r9
  int v3; // [rsp+20h] [rbp-18h]

  v2 = *(unsigned int *)(*((_QWORD *)a1 + 6) + 4080LL);
  if ( *((_DWORD *)a1 + 16) == -1 )
  {
    RtlStringCbPrintfW(a2, 0x80uLL, L"IfIndex %u", v2);
  }
  else
  {
    v3 = *((_DWORD *)a1 + 16);
    RtlStringCbPrintfW(a2, 0x80uLL, L"IfIndex %u: VPort %u", v2, v3);
  }
}
