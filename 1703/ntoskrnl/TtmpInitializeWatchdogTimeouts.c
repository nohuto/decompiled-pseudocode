/*
 * XREFs of TtmpInitializeWatchdogTimeouts @ 0x1406D79C8
 * Callers:
 *     TtmpStartCallout @ 0x1406D7C4C (TtmpStartCallout.c)
 * Callees:
 *     TtmpGetConfigOverride @ 0x1406D78D0 (TtmpGetConfigOverride.c)
 */

char __fastcall TtmpInitializeWatchdogTimeouts(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = &unk_14033C2E0;
  v2 = 6LL;
  do
  {
    if ( TtmpGetConfigOverride(a1, *((const WCHAR **)v1 - 1), &v4) == 1 )
      *v1 = v4;
    v1 += 6;
    --v2;
  }
  while ( v2 );
  if ( TtmpGetConfigOverride(a1, L"TtmDeviceCalloutCrashEnabled", &v4) == 1 && v4 )
    TtmpDeviceCalloutCrashDumpEnabled = 1;
  return 1;
}
