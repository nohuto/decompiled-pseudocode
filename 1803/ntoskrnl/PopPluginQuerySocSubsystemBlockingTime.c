/*
 * XREFs of PopPluginQuerySocSubsystemBlockingTime @ 0x140760E6C
 * Callers:
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14075FBC0 (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     RtlHashUnicodeString @ 0x140507780 (RtlHashUnicodeString.c)
 */

char __fastcall PopPluginQuerySocSubsystemBlockingTime(__int64 a1, int a2, __int64 a3)
{
  ULONG_PTR v4; // rsi
  char v6; // di
  const UNICODE_STRING *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h]
  __int64 HashValue; // [rsp+40h] [rbp+8h] BYREF

  HashValue = a1;
  v4 = PopFxProcessorPlugin;
  v9 = *(_OWORD *)*(_QWORD *)(a3 + 16);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(PopFxProcessorPlugin + 96))(39LL, a3);
  if ( !v6 )
    PopFxBugCheck(0x605uLL, 0x27uLL, PopFxProcessorPlugin, 0LL);
  v7 = *(const UNICODE_STRING **)(a3 + 16);
  RtlHashUnicodeString(v7, 0, 0, (PULONG)&HashValue);
  if ( *(_DWORD *)&v7->Length != (_DWORD)v9 || v7->Buffer != (wchar_t *)*((_QWORD *)&v9 + 1) || (_DWORD)HashValue != a2 )
    PopFxBugCheck(0x705uLL, v4, 0x27uLL, 0x4E616D65uLL);
  return v6;
}
