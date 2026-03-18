/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSta @ 0x1C00443F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSta(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  signed __int32 v8; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 0;
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) == 0 )
  {
    v4 = *(_WORD *)(v3 + 2);
    if ( v4 != 1 )
      KeBugCheckEx(0xA5u, 8uLL, *(_QWORD *)(v1 + 32), *(_QWORD *)(a1 + 56), v4);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 1uLL);
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1u);
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 2uLL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v5 = AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList == &AcpiPowerNodeList )
    goto LABEL_13;
  while ( *(_BYTE *)(v5 + 40) < *(_BYTE *)(v1 + 40) )
  {
    v5 = *(_QWORD *)v5;
    if ( (__int64 *)v5 == &AcpiPowerNodeList )
      goto LABEL_12;
  }
  v6 = *(_QWORD **)(v5 + 8);
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)v1 = v5;
  *(_QWORD *)(v1 + 8) = v6;
  *v6 = v1;
  *(_QWORD *)(v5 + 8) = v1;
LABEL_12:
  if ( (__int64 *)v5 == &AcpiPowerNodeList )
  {
LABEL_13:
    v7 = *(_QWORD **)(v5 + 8);
    if ( *v7 != v5 )
      __fastfail(3u);
    *(_QWORD *)v1 = v5;
    *(_QWORD *)(v1 + 8) = v7;
    *v7 = v1;
    *(_QWORD *)(v5 + 8) = v1;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v8 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v8);
  return 0LL;
}
