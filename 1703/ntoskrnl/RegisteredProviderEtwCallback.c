/*
 * XREFs of RegisteredProviderEtwCallback @ 0x1405CAE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     LookUpTableFlushPartial @ 0x14044C674 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1405CAEC8 (LookUpTableFlushComplete.c)
 */

void __fastcall RegisteredProviderEtwCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  char v7; // r11
  int v8; // edi
  void (__fastcall *v9)(LPCGUID, __int64, ULONGLONG, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // rax
  ULONGLONG v10; // r8

  v7 = Level;
  v8 = ControlCode;
  v9 = (void (__fastcall *)(LPCGUID, __int64, ULONGLONG, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))CallbackContext[48];
  if ( v9 )
  {
    v10 = MatchAllKeyword;
    LOBYTE(v10) = v7;
    v9(SourceId, ControlCode, v10, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext[49]);
  }
  if ( v8 == 1 )
  {
    LookUpTableFlushComplete(CallbackContext, ControlCode, Level);
  }
  else if ( v8 == 2 )
  {
    LookUpTableFlushPartial((__int64)CallbackContext);
  }
}
