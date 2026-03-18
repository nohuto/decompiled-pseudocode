/*
 * XREFs of IopDeviceRemovalForResetComplete @ 0x1406C0840
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x1401FE270 (McTemplateK0hzr0qqhzr4.c)
 *     RtlUnicodeStringCopyString @ 0x1401FE33C (RtlUnicodeStringCopyString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopFreeResetRemovalContext @ 0x1406C0978 (IopFreeResetRemovalContext.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x1406D1054 (PnpTraceDeviceRemovalForResetComplete.c)
 */

__int64 __fastcall IopDeviceRemovalForResetComplete(char *P, const wchar_t *a2)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rax

  if ( !P )
    __fastfail(5u);
  v3 = *((_DWORD *)P + 41);
  if ( v3 >= 0 || !*((_DWORD *)P + 40) )
  {
    v4 = *((_QWORD *)P + 23);
    v5 = v4 ? *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) : 0LL;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    {
      v6 = *((_QWORD *)P + 21);
      McTemplateK0hzr0qqhzr4(
        *(_QWORD *)(v6 + 56),
        *(_QWORD *)(v6 + 48),
        **(_WORD **)(v6 + 56) >> 1,
        *(_WORD *)(v5 + 40) >> 1,
        *(_QWORD *)(v5 + 48),
        v3,
        **(_DWORD **)(v6 + 48),
        **(_WORD **)(v6 + 56) >> 1,
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8LL));
    }
  }
  if ( v3 >= 0 || *((_DWORD *)P + 44) >= (unsigned int)PnpResetMaximumRetryAttempts )
  {
    PnpTraceDeviceRemovalForResetComplete(P);
    return IopFreeResetRemovalContext(P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)P + 21) + 64LL), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*((PVOID *)P + 21), 0x4B706E50u);
    *((_QWORD *)P + 21) = 0LL;
    *((_DWORD *)P + 48) = 0;
    *((_DWORD *)P + 40) = v3;
    RtlUnicodeStringCopyString((PUNICODE_STRING)(P + 200), a2);
    ++*((_DWORD *)P + 44);
    return KiSetTimerEx((__int64)P, PnpResetRetryInterval, 0, 0, (__int64)(P + 64));
  }
}
