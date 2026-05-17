/*
 * XREFs of RtlpHeapTrkHash @ 0x1800F748C
 * Callers:
 *     RtlpHeapTrkFindStack @ 0x1800F73A4 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800F7A6C (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800F7B40 (RtlpHeapTrkTrackRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHeapTrkHash(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int8 *v2; // r9
  __int16 *v3; // r10
  __int64 v4; // r11
  __int16 v5; // cx
  unsigned __int16 v6; // dx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF

  v1 = 0LL;
  v8 = a1;
  v2 = (unsigned __int8 *)&v8;
  v3 = (__int16 *)&unk_1801608B0;
  v4 = 8LL;
  do
  {
    v5 = *v3++;
    v6 = v5 * *v2++;
    v1 += v6 % 0x1EEFu;
    --v4;
  }
  while ( v4 );
  return v1 % 0x1EEF;
}
