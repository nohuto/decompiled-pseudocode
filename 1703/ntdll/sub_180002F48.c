/*
 * XREFs of sub_180002F48 @ 0x180002F48
 * Callers:
 *     sub_180011380 @ 0x180011380 (sub_180011380.c)
 *     sub_180011A40 @ 0x180011A40 (sub_180011A40.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 *     sub_180014090 @ 0x180014090 (sub_180014090.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 *     sub_1800957D0 @ 0x1800957D0 (sub_1800957D0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180002F48(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v8 = 7203;
  v13 = a5;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v5 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x28u, Fields);
}
