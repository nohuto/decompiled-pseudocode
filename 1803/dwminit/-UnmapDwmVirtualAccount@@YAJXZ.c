/*
 * XREFs of ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001D4C
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x180003460 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003B0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180007A10 (memset_0.c)
 */

__int64 UnmapDwmVirtualAccount(void)
{
  unsigned int v0; // ebx
  int v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v4; // [rsp+40h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  memset_0(&DestinationString, 0, 0x30uLL);
  Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v4, gwszDwmAccountName);
  v1 = LsaLookupManageSidNameMapping(1LL, &DestinationString, &Buffer);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180009D38, 1u, v1 | 0x10000000, 0x27Cu);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  return v0;
}
