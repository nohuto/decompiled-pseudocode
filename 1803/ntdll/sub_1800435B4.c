/*
 * XREFs of sub_1800435B4 @ 0x1800435B4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180048720 (LdrEnumerateLoadedModules.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_1800428F4 @ 0x1800428F4 (sub_1800428F4.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 */

struct _TEB *__fastcall sub_1800435B4(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  char v4; // bp
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _TEB *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = EventHandle;
  v2 = 0;
  if ( !a1 )
    v1 = Handle;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&stru_18015C240);
      v4 = byte_18015C280;
      if ( !byte_18015C280 || a1 == 1 )
      {
        v5 = (__int64 *)qword_18015C270;
        if ( *(__int64 **)(qword_18015C270 + 8) != &qword_18015C270
          || (v6 = *(_QWORD *)qword_18015C270, *(_QWORD *)(*(_QWORD *)qword_18015C270 + 8LL) != qword_18015C270) )
        {
          __fastfail(3u);
        }
        qword_18015C270 = *(_QWORD *)qword_18015C270;
        *(_QWORD *)(v6 + 8) = &qword_18015C270;
        if ( &qword_18015C270 == v5 )
        {
          if ( dword_18015C268 == a1 )
          {
            dword_18015C268 = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++dword_18015C268;
          sub_1800428F4();
        }
      }
      else
      {
        if ( dword_18015C268 == a1 )
        {
          dword_18015C268 = 1;
          v2 = 1;
        }
        v5 = &qword_18015C270;
      }
      RtlLeaveCriticalSection(&stru_18015C240);
      if ( v2 )
        break;
      if ( &qword_18015C270 == v5 )
        ZwWaitForSingleObject(v1, 0, 0LL);
      else
        sub_1800426E8((__int64)(v5 - 8), v4);
    }
    if ( !a1 || (__int64 *)qword_18015C210 == &qword_18015C210 )
      break;
    RtlEnterCriticalSection(&stru_18015C240);
    v8 = qword_18015C210;
    *(_QWORD *)(qword_18015C210 + 8) = &qword_18015C270;
    qword_18015C270 = v8;
    v9 = qword_18015C218;
    *(_QWORD *)qword_18015C218 = &qword_18015C270;
    qword_18015C278 = v9;
    qword_18015C218 = (__int64)&qword_18015C210;
    qword_18015C210 = (__int64)&qword_18015C210;
    stru_18015D100 = 0LL;
    RtlLeaveCriticalSection(&stru_18015C240);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
