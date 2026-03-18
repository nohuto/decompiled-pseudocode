/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C000DB80
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0038484 (PnpBiosSetFlagsForNotableInterrupts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrs(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  char v5; // r8
  void *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // edx
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 56) == 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 16;
  if ( !v1 && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(a1 + 82) == 3 )
    {
      PnpBiosSetFlagsForNotableInterrupts(v3, *(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 104));
      v4 = a1 + 80;
    }
    else
    {
      v4 = a1 + 80;
    }
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v4, 1u);
  }
  v5 = 0;
  v6 = &unk_1C005B1F0;
  v7 = &unk_1C005B1F0;
  if ( v3 )
  {
    v8 = v3[1];
    v5 = (char)v3;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (void *)v3[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)v3[71];
    }
  }
  v11 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    6,
    36,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v5,
    (__int64)v6,
    v11);
  v9 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
  return 0LL;
}
