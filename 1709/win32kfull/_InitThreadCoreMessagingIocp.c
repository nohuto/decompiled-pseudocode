/*
 * XREFs of _InitThreadCoreMessagingIocp @ 0x1C01105D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  __int128 v12; // [rsp+50h] [rbp-18h]

  v2 = 0LL;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    v6 = 5LL;
LABEL_9:
    UserSetLastError(v6, a2);
    return v2;
  }
  if ( *(_QWORD *)(gptiCurrent + 1424LL) )
  {
    v6 = 1247LL;
    goto LABEL_9;
  }
  v8 = 48;
  v9 = 0LL;
  v11 = 512;
  v10 = 0LL;
  v12 = 0LL;
  if ( (int)ZwAllocateReserveObject(gptiCurrent + 1416LL, &v8, 1LL) < 0 )
  {
    UserSetLastError(14LL, v4);
    *(_QWORD *)(gptiCurrent + 1416LL) = 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(gptiCurrent + 1392LL);
    if ( v2 )
    {
      v7[0] = gptiCurrent + 1424LL;
      v7[1] = a1;
      HMAssignmentLock(v7);
    }
  }
  return v2;
}
