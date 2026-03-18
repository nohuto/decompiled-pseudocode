/*
 * XREFs of MiCfgMarkValidEntries @ 0x1404B3738
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     CfgAddressToBitState @ 0x14003B304 (CfgAddressToBitState.c)
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x14003F064 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiPopulateCfgBitMap @ 0x1404B3B10 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1404B5BBC (MiSelectCfgBitMap.c)
 *     MiValidateUserCallTarget @ 0x140580C04 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  _DWORD *v7; // r12
  unsigned int v11; // r8d
  const signed __int64 **v12; // r13
  unsigned int v13; // r10d
  unsigned int v14; // r14d
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  unsigned __int64 v22; // rdx
  int v23; // ebx
  _QWORD *v25; // rdx
  unsigned int v26; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-40h]
  _DWORD *v28; // [rsp+40h] [rbp-38h]

  v7 = a6;
  *a6 = 0;
  if ( (((unsigned int)a2 | (unsigned int)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v11 = 1;
  if ( a5 > 1 )
  {
    v25 = a4 + 2;
    while ( a4[2 * v11 - 2] <= *v25 )
    {
      ++v11;
      v25 += 2;
      if ( v11 >= a5 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  if ( a4[2 * a5 - 2] >= a3 )
    return 3221225485LL;
  v12 = (const signed __int64 **)MiSelectCfgBitMap(a1, a2, 0LL);
  v14 = v13;
  if ( a5 )
  {
    v15 = a4;
    while ( (*v15 & 0xF) == 0 )
    {
      v16 = v15[1];
      if ( (v16 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        break;
      if ( (a7 & 1) != 0 && (v16 & 1) != 0
        || (v16 & 4) != 0
        && (!MiIsProcessCfgExportSuppressionEnabled()
         || ((unsigned int)CfgAddressToBitState(v17 + a2, *v12) != 2 || !MiIsProcessCfgExportSuppressionEnabled())
         && !(unsigned int)MiValidateUserCallTarget(a2 + *v15, v12)) )
      {
        return 3221225506LL;
      }
      ++v14;
      v15 += 2;
      if ( v14 >= a5 )
        goto LABEL_14;
    }
    return 3221225485LL;
  }
LABEL_14:
  if ( *v7 == a5 )
    return 0LL;
  if ( !MiIsProcessCfgEnabled() )
    return 3221225541LL;
  v18 = MiObtainReferencedVadEx(a2, 0, (int *)&a6);
  v21 = (void *)v18;
  if ( !v18 )
    return (unsigned int)a6;
  v22 = a2 + a3 - 1;
  if ( v22 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
  {
    v23 = -1073741811;
  }
  else
  {
    v26 = a5;
    v27 = a4;
    v28 = v7;
    v23 = MiPopulateCfgBitMap((_DWORD)v12, (unsigned int)&v26, v19, a2, (v22 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1);
    if ( v23 >= 0 )
      v23 = 0;
  }
  MiUnlockAndDereferenceVad(v21, v22, v19, v20);
  return (unsigned int)v23;
}
