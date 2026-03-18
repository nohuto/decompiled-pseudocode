/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C0103A80
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010480C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v3 = MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 620) = 1;
  *(_QWORD *)(a1 + 624) = a3;
  *(_DWORD *)(a1 + 632) = (v3 >> 24) + 250;
  v6 = *(_DWORD *)(a1 + 628);
  v5 = a3;
  return WPP_RECORDER_SF_dd(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0xAu,
           (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
           v5,
           v6);
}
