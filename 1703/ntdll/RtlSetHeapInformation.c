/*
 * XREFs of RtlSetHeapInformation @ 0x18007EF50
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18007F010 @ 0x18007F010 (sub_18007F010.c)
 *     sub_1800EF700 @ 0x1800EF700 (sub_1800EF700.c)
 *     sub_1800FE980 @ 0x1800FE980 (sub_1800FE980.c)
 */

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rax

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( HeapInformation && HeapInformationLength == 48 )
      {
        result = sub_1800EF700(HeapHandle);
LABEL_9:
        if ( result < 0 )
          return result;
        return 0;
      }
      return -1073741823;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = sub_18007F010();
            goto LABEL_9;
          }
          return -1073741811;
        }
        return 0;
      }
      return -1073741823;
    case 1:
      dword_18015BFA4 = 0;
      return 0;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass == HeapOptimizeResources )
    {
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&stru_180159A80);
        v6 = 208LL;
        if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
          v6 = 36LL;
        if ( *(_WORD *)((char *)HeapHandle + v6) != 0xFFFF )
          sub_180006330((__int64)HeapHandle);
        RtlLeaveCriticalSection(&stru_180159A80);
      }
      else
      {
        sub_1800059EC((__int64)sub_1800062E0, 0LL, 0);
      }
    }
    else if ( HeapInformationClass == 5 )
    {
      if ( !HeapInformation
        || HeapInformationLength < 0x10
        || *(_WORD *)HeapInformation != 1
        || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
      {
        return -1073741811;
      }
      sub_1800FE980(HeapInformation);
    }
    return 0;
  }
  if ( (byte_18015BFBC & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&stru_18015C318, (PRTL_RUN_ONCE_INIT_FN)sub_180008E70, &Parameter, 0LL);
  if ( result >= 0 )
  {
    byte_18015BFBC |= 2u;
    return 0;
  }
  return result;
}
