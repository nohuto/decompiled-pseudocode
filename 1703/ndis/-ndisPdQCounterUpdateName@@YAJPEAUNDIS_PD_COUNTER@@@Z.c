/*
 * XREFs of ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00EE8EC
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x1C00EBA40 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00EDA88 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001D148 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z @ 0x1C0075110 (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z.c)
 */

__int64 __fastcall ndisPdQCounterUpdateName(struct NDIS_PD_COUNTER *a1)
{
  _UNICODE_STRING *v1; // rdi
  int v3; // eax
  const wchar_t *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v12[64]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SourceString[264]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = (_UNICODE_STRING *)((char *)a1 + 96);
  RtlFreeUnicodeString((PUNICODE_STRING)a1 + 6);
  ndisPdGetIfIndexVPortStr(*((struct NDIS_PD_ASSOCIATION **)a1 + 4), v12);
  v3 = *((_DWORD *)a1 + 22);
  if ( v3 <= 1 )
  {
    if ( v3 == 1 && (v6 = *((_QWORD *)a1 + 9), *(_WORD *)(v6 + 48)) )
    {
      v7 = *((_OWORD *)a1 + 7);
      v11 = *(_OWORD *)(v6 + 48);
      v10 = v7;
      v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%wZ: %wZ", &v11, &v10);
    }
    else
    {
      v11 = *((_OWORD *)a1 + 7);
      v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%s: %wZ", v12, &v11);
    }
  }
  else
  {
    v4 = L"RX";
    if ( *((_DWORD *)a1 + 14) != 1 )
      v4 = L"TX";
    v5 = RtlStringCbPrintfW(
           (wchar_t *)SourceString,
           0x202uLL,
           L"%s: %s multi-Q: %wZ",
           v12,
           v4,
           &v10,
           *((_OWORD *)a1 + 7));
  }
  v8 = v5;
  if ( !RtlCreateUnicodeString(v1, SourceString) )
    return (unsigned int)-1073741670;
  return v8;
}
