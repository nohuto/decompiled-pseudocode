/*
 * XREFs of WheaInitializeRecordHeader @ 0x1402BF010
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1402BF314 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  int Year; // ecx
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp+8h] BYREF

  memset(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  *((_WORD *)a1 + 5) = 0;
  a1[3] = 3;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  Time.QuadPart = MEMORY[0xFFFFF78000000014];
  RtlTimeToTimeFields(&Time, &TimeFields);
  Year = TimeFields.Year;
  *((_BYTE *)a1 + 24) = TimeFields.Second;
  *((_BYTE *)a1 + 25) = TimeFields.Minute;
  *((_BYTE *)a1 + 26) = TimeFields.Hour;
  *((_QWORD *)a1 + 3) &= ~0x1000000uLL;
  *((_BYTE *)a1 + 28) = TimeFields.Day;
  *((_BYTE *)a1 + 29) = TimeFields.Month;
  *((_BYTE *)a1 + 31) = Year / 100;
  *((_BYTE *)a1 + 30) = Year % 100;
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
