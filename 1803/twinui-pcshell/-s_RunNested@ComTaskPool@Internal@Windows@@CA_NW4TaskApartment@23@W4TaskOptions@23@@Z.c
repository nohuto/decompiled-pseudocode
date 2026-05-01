/*
 * XREFs of ?s_RunNested@ComTaskPool@Internal@Windows@@CA_NW4TaskApartment@23@W4TaskOptions@23@@Z @ 0x180111DEC
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180111BE4 (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 */

char __fastcall Windows::Internal::ComTaskPool::s_RunNested(int a1, unsigned __int8 a2)
{
  char v4; // bl
  int *Value; // rax
  int v6; // eax
  int v7; // ecx
  DWORD dwTlsIndex; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (int)Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(&dwTlsIndex) >= 0
    && (Value = (int *)TlsGetValue(dwTlsIndex)) != 0LL )
  {
    v6 = *Value;
  }
  else
  {
    v6 = 0x7FFFFFFF;
  }
  v7 = v6 - 1;
  if ( v6 != 0x7FFFFFFF && (v7 & 0x800000) != 0 && (a1 == v7 >> 24 || a1 == 3) && ((a2 ^ (unsigned __int8)v7) & 9) == 0 )
    return 1;
  return v4;
}
