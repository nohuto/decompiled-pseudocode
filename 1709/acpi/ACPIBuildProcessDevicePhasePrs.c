/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C0027F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0028040 (PnpBiosSetFlagsForNotableInterrupts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrs(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  char v5; // r8
  const char *v6; // rax
  const char *v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // edx

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
    dword_1C00797B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v4, 1u);
  }
  v5 = 0;
  v6 = (const char *)&unk_1C0067B08;
  v7 = (const char *)&unk_1C0067B08;
  if ( v3 )
  {
    v8 = v3[1];
    v5 = (char)v3;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v3[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v3[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x24u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    0,
    v5,
    v6,
    v7);
  v9 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
  return 0LL;
}
