/*
 * XREFs of sub_18003CA5C @ 0x18003CA5C
 * Callers:
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     sub_180039E20 @ 0x180039E20 (sub_180039E20.c)
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_18006FD08 @ 0x18006FD08 (sub_18006FD08.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     ApiSetQueryApiSetPresence @ 0x18007B860 (ApiSetQueryApiSetPresence.c)
 *     sub_180088E9C @ 0x180088E9C (sub_180088E9C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

unsigned int *__fastcall sub_18003CA5C(int a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int *result; // rax
  _DWORD *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  result = (unsigned int *)NtCurrentPeb();
  v7 = (_DWORD *)*((_QWORD *)result + 18);
  if ( v7 && *v7 )
  {
    result = (unsigned int *)NtCurrentPeb();
    v8 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( *(_BYTE *)v8 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v9 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v9 = 2147353477LL;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
        return (unsigned int *)sub_1800D62F0(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
