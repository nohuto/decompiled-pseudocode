/*
 * XREFs of PsWow64GetSupportedArchitectures @ 0x1400E5898
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     PsWow64IsMachineSupported @ 0x14053D92C (PsWow64IsMachineSupported.c)
 */

__int64 __fastcall PsWow64GetSupportedArchitectures(_DWORD *a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  int IsMachineSupported; // r15d
  int v9; // r11d
  int v10; // r13d
  int v11; // ecx
  unsigned int v12; // r12d
  __int16 ProcessMachine; // bx
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v20; // eax

  IsMachineSupported = PsWow64IsMachineSupported(332LL);
  v10 = PsWow64IsMachineSupported(452LL);
  v11 = v9 + 1;
  if ( !v10 )
    v11 = v9;
  v12 = 4 * v11 + 4;
  *a3 = v12;
  if ( v12 > a2 )
    return 3221225507LL;
  ProcessMachine = 0;
  if ( a4 )
    ProcessMachine = PsWow64GetProcessMachine(a4);
  memset(a1, 0, v12);
  v14 = *a1 & 0xFFFF0000 | 0x8664;
  *a1 = v14;
  v14 |= 0x10000u;
  *a1 = v14;
  v14 |= 0x20000u;
  *a1 = v14;
  v15 = v14 | 0x40000;
  *a1 = v15;
  if ( ProcessMachine == -31132 )
    *a1 = v15 | 0x80000;
  v16 = 1;
  if ( IsMachineSupported )
  {
    v17 = a1[1] & 0xFFFF0000 | 0x14C;
    a1[1] = v17;
    v18 = v17 | 0x20000;
    a1[1] = v18;
    if ( ProcessMachine == 332 )
      a1[1] = v18 | 0x80000;
    v16 = 2;
  }
  if ( v10 )
  {
    v19 = a1[v16] & 0xFFFF0000 | 0x1C4;
    a1[v16] = v19;
    v20 = v19 | 0x20000;
    a1[v16] = v20;
    if ( ProcessMachine == 452 )
      a1[v16] = v20 | 0x80000;
  }
  return 0LL;
}
