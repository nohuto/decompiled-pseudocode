/*
 * XREFs of MiCfgMarkValidEntries @ 0x1404D3370
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     CfgAddressToBitState @ 0x140007118 (CfgAddressToBitState.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x14000715C (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiIsProcessCfgEnabled @ 0x1400A53F4 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x1404453C8 (MiValidateUserCallTarget.c)
 *     MiSelectCfgBitMap @ 0x1404D2150 (MiSelectCfgBitMap.c)
 *     MiPopulateCfgBitMap @ 0x1404D355C (MiPopulateCfgBitMap.c)
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
  int v19; // r8d
  char *v20; // rdi
  unsigned __int64 v21; // rdx
  int v22; // ebx
  _QWORD *v24; // rdx
  unsigned int v25; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+38h] [rbp-40h]
  _DWORD *v27; // [rsp+40h] [rbp-38h]

  v7 = a6;
  *a6 = 0;
  if ( (((unsigned __int16)a2 | (unsigned __int16)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v11 = 1;
  if ( a5 > 1 )
  {
    v24 = a4 + 2;
    while ( a4[2 * v11 - 2] <= *v24 )
    {
      ++v11;
      v24 += 2;
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
  v18 = MiObtainReferencedVad(a2, &a6);
  v20 = (char *)v18;
  if ( !v18 )
    return (unsigned int)a6;
  v21 = a2 + a3 - 1;
  if ( v21 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
  {
    v22 = -1073741811;
  }
  else
  {
    v25 = a5;
    v26 = a4;
    v27 = v7;
    v22 = MiPopulateCfgBitMap((_DWORD)v12, (unsigned int)&v25, v19, a2, (v21 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1);
    if ( v22 >= 0 )
      v22 = 0;
  }
  MiUnlockAndDereferenceVad(v20);
  return (unsigned int)v22;
}
