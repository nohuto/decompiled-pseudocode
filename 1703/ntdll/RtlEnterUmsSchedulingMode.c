/*
 * XREFs of RtlEnterUmsSchedulingMode @ 0x1800F2760
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentUmsThread @ 0x180065310 (RtlGetCurrentUmsThread.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 *     sub_1800A9DB0 @ 0x1800A9DB0 (sub_1800A9DB0.c)
 *     sub_1800F2C28 @ 0x1800F2C28 (sub_1800F2C28.c)
 *     sub_1800F2CE8 @ 0x1800F2CE8 (sub_1800F2CE8.c)
 *     sub_1801038E0 @ 0x1801038E0 (sub_1801038E0.c)
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
  result = sub_1800F2C28(v4, v1);
  if ( (int)result >= 0 )
  {
    CurrentUmsThread = RtlGetCurrentUmsThread(&v8);
    if ( CurrentUmsThread >= 0 )
    {
      CurrentUmsThread = sub_1801038E0(v8);
      if ( CurrentUmsThread >= 0 )
      {
        sub_1800A9DB0(v2, v3);
        CurrentUmsThread = 0;
      }
    }
    v7 = sub_1800F2CE8();
    if ( v7 < 0 && CurrentUmsThread >= 0 )
      return (unsigned int)v7;
    return (unsigned int)CurrentUmsThread;
  }
  return result;
}
