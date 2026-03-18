/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012D2D0
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012C9F8 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C0109414 (rimRegQueryRegistryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  __int64 *v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C01AA540 & 1) == 0 )
  {
    dword_1C01A6468 = 1;
    dword_1C01AA540 |= 1u;
    qword_1C01A6460 = (__int64)L"RejectionEnabled";
    qword_1C01A6470 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C01A6478 = 175;
    dword_1C01A647C = 175;
    qword_1C01A6480 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C01A6488 = 250;
    dword_1C01A648C = 250;
    qword_1C01A6490 = (__int64)L"DisableTimeThreshold";
    dword_1C01A6498 = 60000;
    dword_1C01A649C = 60000;
    dword_1C01A646C = 1;
  }
  v2 = &qword_1C01A6460;
  do
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    *((_DWORD *)v2 + 3) = rimRegQueryRegistryDWord(&DestinationString, (const WCHAR *)*v2, *((_DWORD *)v2 + 2));
    v2 += 2;
  }
  while ( v2 != (__int64 *)&gbInputInitialized );
  *((_DWORD *)this + 24) = dword_1C01A646C;
  *((_DWORD *)this + 25) = dword_1C01A647C;
  *((_DWORD *)this + 26) = dword_1C01A648C;
  *((_DWORD *)this + 27) = dword_1C01A649C;
}
