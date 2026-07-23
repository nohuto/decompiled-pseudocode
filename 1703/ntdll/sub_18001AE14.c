/*
 * XREFs of sub_18001AE14 @ 0x18001AE14
 * Callers:
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180083E40 (LdrEnumerateLoadedModules.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_180019358 @ 0x180019358 (sub_180019358.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 */

struct _TEB *__fastcall sub_18001AE14(int a1)
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
      RtlEnterCriticalSection(&stru_18015B220);
      v4 = byte_18015B260;
      if ( !byte_18015B260 || a1 == 1 )
      {
        v5 = (__int64 *)qword_18015B250;
        v6 = *(_QWORD *)qword_18015B250;
        if ( *(__int64 **)(qword_18015B250 + 8) != &qword_18015B250 || *(_QWORD *)(v6 + 8) != qword_18015B250 )
          __fastfail(3u);
        qword_18015B250 = *(_QWORD *)qword_18015B250;
        *(_QWORD *)(v6 + 8) = &qword_18015B250;
        if ( &qword_18015B250 == v5 )
        {
          if ( dword_18015B248 == a1 )
          {
            dword_18015B248 = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++dword_18015B248;
          sub_180019358();
        }
      }
      else
      {
        if ( dword_18015B248 == a1 )
        {
          dword_18015B248 = 1;
          v2 = 1;
        }
        v5 = &qword_18015B250;
      }
      RtlLeaveCriticalSection(&stru_18015B220);
      if ( v2 )
        break;
      if ( &qword_18015B250 == v5 )
        ZwWaitForSingleObject(v1, 0, 0LL);
      else
        sub_180019170((__int64)(v5 - 7), v4);
    }
    if ( !a1 || (__int64 *)qword_18015B1F0 == &qword_18015B1F0 )
      break;
    RtlEnterCriticalSection(&stru_18015B220);
    v8 = qword_18015B1F0;
    *(_QWORD *)(qword_18015B1F0 + 8) = &qword_18015B250;
    qword_18015B250 = v8;
    v9 = qword_18015B1F8;
    *(_QWORD *)qword_18015B1F8 = &qword_18015B250;
    qword_18015B258 = v9;
    qword_18015B1F8 = (__int64)&qword_18015B1F0;
    qword_18015B1F0 = (__int64)&qword_18015B1F0;
    RtlLeaveCriticalSection(&stru_18015B220);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
