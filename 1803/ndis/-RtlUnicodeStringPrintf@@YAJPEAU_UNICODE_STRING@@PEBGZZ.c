/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0016EC4
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B1A10 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z @ 0x1C00B6E7C (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KAEAVKRegKey@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0016F48 (RtlUnicodeStringValidateWorker.c)
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ...)
{
  size_t v3; // rbx
  __int64 v4; // rcx
  NTSTATUS v5; // esi
  wchar_t *v6; // r10
  const wchar_t *v7; // r11
  int v8; // eax
  __int64 Args; // [rsp+50h] [rbp+18h] BYREF
  va_list Argsa; // [rsp+50h] [rbp+18h]
  va_list va1; // [rsp+58h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(Argsa, a2);
  Args = va_arg(va1, _QWORD);
  v3 = 0LL;
  v5 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, Args);
  if ( v5 >= 0 )
  {
    if ( v4 )
    {
      v6 = *(wchar_t **)(v4 + 8);
      v3 = (unsigned __int64)*(unsigned __int16 *)(v4 + 2) >> 1;
    }
    v5 = 0;
    v8 = _vsnwprintf(v6, v3, v7, Argsa);
    if ( v8 < 0 || v8 > v3 )
    {
      LOWORD(v8) = v3;
      v5 = -2147483643;
    }
    a1->Length = 2 * v8;
  }
  return (unsigned int)v5;
}
