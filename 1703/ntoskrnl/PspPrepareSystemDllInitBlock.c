/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x14049BCB0
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MmGetCfgBitMapInformation @ 0x14049BE94 (MmGetCfgBitMapInformation.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 CfgBitMapInformation; // r14
  __int64 v6; // r12
  _KPROCESS *Process; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  int ProcessMachine; // ecx
  __int64 *v11; // r8
  _QWORD *v12; // rax
  unsigned __int8 i; // dl
  int v15; // ecx
  __int64 v16; // rcx
  __int16 v17; // ax
  int v18; // ecx
  __int128 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  CfgBitMapInformation = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    v15 = a1 - 1;
    if ( v15 )
    {
      v18 = v15 - 1;
      if ( v18 )
      {
        if ( v18 != 1 )
          goto LABEL_3;
        v4 = qword_1407AD678;
        v16 = 0LL;
LABEL_23:
        CfgBitMapInformation = MmGetCfgBitMapInformation(v16, &v20, a3, Process);
        goto LABEL_3;
      }
      v4 = qword_1407AD578;
    }
    else
    {
      v4 = qword_1407AD5F8;
    }
    v16 = 1LL;
    goto LABEL_23;
  }
  v4 = PspSystemDllInitBlock;
  CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v20, a3, Process);
  v9 = Process[1].ActiveProcessors.Bitmap[7];
  if ( v9 )
  {
    v17 = *(_WORD *)(v9 + 8);
    if ( v17 == 332 || v17 == 452 )
      v6 = MmGetCfgBitMapInformation(1LL, &v21, v8, Process);
  }
LABEL_3:
  if ( a2 )
    v19 = *(_OWORD *)(a2 + 360);
  else
    v19 = 0uLL;
  if ( *(_DWORD *)v4 != 208 )
    return 3221225561LL;
  *(_QWORD *)(v4 + 16) = *((_QWORD *)PspSystemDlls + 8);
  ProcessMachine = (unsigned __int16)PsWow64GetProcessMachine(Process);
  if ( ProcessMachine == 452 )
  {
    v11 = PsWowArm32SharedInformation;
    v12 = off_1407AC1C0;
  }
  else if ( ProcessMachine == 34404 )
  {
    v11 = PsWowAmd64SharedInformation;
    v12 = off_1407AC1C8;
  }
  else
  {
    v11 = PsWowX86SharedInformation;
    v12 = off_1407AC1B8;
  }
  *(_QWORD *)(v4 + 8) = v12[8];
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v4 + 8LL * i + 24) = v11[i];
  *(_DWORD *)(v4 + 152) = ExGenRandom(1);
  *(_DWORD *)(v4 + 156) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v4 + 156) |= 1u;
  }
  *(_OWORD *)(v4 + 160) = v19;
  *(_QWORD *)(v4 + 176) = CfgBitMapInformation;
  *(_QWORD *)(v4 + 184) = v20;
  *(_QWORD *)(v4 + 192) = v6;
  *(_QWORD *)(v4 + 200) = v21;
  return 0LL;
}
