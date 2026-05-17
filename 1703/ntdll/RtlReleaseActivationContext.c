/*
 * XREFs of RtlReleaseActivationContext @ 0x1800188A0
 * Callers:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     RtlFreeActivationContextStack @ 0x1800782F0 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x1800783E0 (RtlDeactivateActivationContext.c)
 *     sub_180078A1C @ 0x180078A1C (sub_180078A1C.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     ntdll_8 @ 0x180085520 (ntdll_8.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     sub_180087358 @ 0x180087358 (sub_180087358.c)
 *     sub_1800E02F0 @ 0x1800E02F0 (sub_1800E02F0.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    for ( i = *a1; i != 0x7FFFFFFF; i = *a1 )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(a1, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( byte_18015C44C )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( byte_18015C44D )
        sub_1800E02F0(a1);
      else
        sub_180087358(a1);
    }
  }
}
