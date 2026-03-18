/*
 * XREFs of PsWow64GetSupportedArchitectures @ 0x1400B9EB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsWow64IsMachineSupported @ 0x14055FEF0 (PsWow64IsMachineSupported.c)
 *     PsWow64GetProcessMachine @ 0x1405B8AE0 (PsWow64GetProcessMachine.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall PsWow64GetSupportedArchitectures(_DWORD *a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  int IsMachineSupported; // r12d
  int v9; // ecx
  unsigned int v10; // r13d
  __int16 ProcessMachine; // bx
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  int v20; // [rsp+68h] [rbp+10h]

  IsMachineSupported = PsWow64IsMachineSupported(332LL);
  v20 = PsWow64IsMachineSupported(452LL);
  v9 = (IsMachineSupported != 0) + 2;
  if ( !v20 )
    v9 = (IsMachineSupported != 0) + 1;
  v10 = 4 * v9 + 4;
  *a3 = v10;
  if ( v10 > a2 )
    return 3221225507LL;
  ProcessMachine = 0;
  if ( a4 )
    ProcessMachine = PsWow64GetProcessMachine(a4, 0LL);
  memset(a1, 0, v10);
  v12 = *a1 & 0xFFFF0000 | 0x8664;
  *a1 = v12;
  v12 |= 0x10000u;
  *a1 = v12;
  v12 |= 0x20000u;
  *a1 = v12;
  v13 = v12 | 0x40000;
  *a1 = v13;
  if ( ProcessMachine == -31132 )
    *a1 = v13 | 0x80000;
  v14 = 1;
  if ( IsMachineSupported )
  {
    v15 = a1[1] & 0xFFFF0000 | 0x14C;
    a1[1] = v15;
    v16 = v15 | 0x20000;
    a1[1] = v16;
    if ( ProcessMachine == 332 )
      a1[1] = v16 | 0x80000;
    v14 = 2;
  }
  if ( v20 )
  {
    v17 = a1[v14] & 0xFFFF0000 | 0x1C4;
    a1[v14] = v17;
    v18 = v17 | 0x20000;
    a1[v14] = v18;
    if ( ProcessMachine == 452 )
      a1[v14] = v18 | 0x80000;
  }
  return 0LL;
}
