/*
 * XREFs of HvpIsLogEntryHeaderCoherent @ 0x14070625C
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x140705D44 (HvpApplyIncrementalLogFile.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x140706180 (HvpDetermineIncrementalLogFileMaximums.c)
 * Callees:
 *     HvpLogEntryCheckHeaderChecksum @ 0x1406F6D14 (HvpLogEntryCheckHeaderChecksum.c)
 */

bool __fastcall HvpIsLogEntryHeaderCoherent(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  bool result; // al
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  v3 = a2;
  result = *a1 == 1162638920
        && (v5 = (unsigned int)a1[1], (unsigned int)v5 > 0x28)
        && (v6 = (unsigned int)v5, (unsigned __int64)(v3 + v5) <= 0xFFFFFFFF)
        && (v7 = a1[4]) != 0
        && v7 <= 0x7FFFE000
        && (v7 & 0xFFF) == 0
        && (!a3 || v7 <= a3)
        && (v8 = (unsigned int)a1[5], (_DWORD)v8)
        && (v9 = 8 * v8 + 40, v9 <= 0xFFFFFFFF)
        && v6 >= v9
        && HvpLogEntryCheckHeaderChecksum((__int64)a1);
  return result;
}
