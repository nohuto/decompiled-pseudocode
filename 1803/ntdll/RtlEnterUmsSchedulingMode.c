/*
 * XREFs of RtlEnterUmsSchedulingMode @ 0x1800EF810
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentUmsThread @ 0x18004C850 (RtlGetCurrentUmsThread.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 *     sub_18009F6D0 @ 0x18009F6D0 (sub_18009F6D0.c)
 *     sub_1800EFCD8 @ 0x1800EFCD8 (sub_1800EFCD8.c)
 *     sub_1800EFD98 @ 0x1800EFD98 (sub_1800EFD98.c)
 *     sub_180104240 @ 0x180104240 (sub_180104240.c)
 */

__int64 __fastcall RtlEnterUmsSchedulingMode(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  int CurrentUmsThread; // ebx
  int v7; // eax
  struct _TEB **v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 != 256 )
    return 3221225485LL;
  if ( (int)RtlGetCurrentUmsThread(&v8) >= 0 )
    return 3221225659LL;
  result = sub_1800EFCD8(v4, v1);
  if ( (int)result >= 0 )
  {
    CurrentUmsThread = RtlGetCurrentUmsThread(&v8);
    if ( CurrentUmsThread >= 0 )
    {
      CurrentUmsThread = sub_180104240(v8);
      if ( CurrentUmsThread >= 0 )
      {
        sub_18009F6D0(v2, v3);
        CurrentUmsThread = 0;
      }
    }
    v7 = sub_1800EFD98();
    if ( v7 < 0 && CurrentUmsThread >= 0 )
      return (unsigned int)v7;
    return (unsigned int)CurrentUmsThread;
  }
  return result;
}
