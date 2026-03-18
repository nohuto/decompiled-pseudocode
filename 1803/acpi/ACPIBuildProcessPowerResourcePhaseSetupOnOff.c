/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rbp
  __int64 *v4; // rax
  _QWORD *v5; // rcx
  __int64 *v6; // rax
  _QWORD *v7; // rcx
  __int64 *v8; // rax
  _QWORD *v9; // rcx
  volatile signed __int32 *v10; // rsi
  int v11; // edi
  volatile signed __int32 *v12; // rcx
  char v13; // al
  signed __int32 v14; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (void *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 6;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 32), v2, v1 + 96);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 0x1000uLL);
  }
  memset(v2, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(_QWORD **)(v1 + 32), 1179012959);
  if ( !v4 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x46464F5FuLL, 0LL);
  v5 = *(_QWORD **)(v1 + 32);
  *(_QWORD *)(v1 + 80) = v4;
  v6 = AMLIGetNamedChild(v5, 1598967647);
  if ( !v6 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x5F4E4F5FuLL, 0LL);
  v7 = *(_QWORD **)(v1 + 32);
  *(_QWORD *)(v1 + 72) = v6;
  v8 = AMLIGetNamedChild(v7, 1414746719);
  v9 = *(_QWORD **)(v1 + 32);
  *(_QWORD *)(v1 + 88) = v8;
  v10 = (volatile signed __int32 *)AMLIGetNamedChild(v9, 1096045407);
  if ( !v10 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x4154535FuLL, 0LL);
  memset(v2, 0, 0x28uLL);
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) != 0 )
  {
    v11 = 0;
LABEL_16:
    v14 = *(_DWORD *)(a1 + 32);
    if ( v11 < 0 )
      *(_DWORD *)(a1 + 48) = v11;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v14);
    goto LABEL_19;
  }
  v12 = *(volatile signed __int32 **)(a1 + 56);
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v13 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v10;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v13 & 4) != 0 )
    _InterlockedIncrement(v10 + 2);
  v11 = AMLIAsyncEvalObject(v10, v2, 0LL, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v11 != 259 )
    goto LABEL_16;
LABEL_19:
  AMLIDereferenceHandleEx(v10);
  return (unsigned int)v11;
}
