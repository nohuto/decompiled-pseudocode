/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0043BE0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  __int64 v1; // rdi
  _SLIST_ENTRY *v2; // rbp
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rsi
  int v11; // edi
  __int64 v12; // rcx
  char v13; // al
  signed __int32 v14; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_SLIST_ENTRY *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 6;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 32), (__int64)v2, (_QWORD *)(v1 + 96));
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 0x1000uLL);
  }
  memset(v2, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 32), 1179012959);
  if ( !v4 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x46464F5FuLL, 0LL);
  v5 = *(__int64 **)(v1 + 32);
  *(_QWORD *)(v1 + 80) = v4;
  v6 = AMLIGetNamedChild(v5, 1598967647);
  if ( !v6 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x5F4E4F5FuLL, 0LL);
  v7 = *(__int64 **)(v1 + 32);
  *(_QWORD *)(v1 + 72) = v6;
  v8 = AMLIGetNamedChild(v7, 1414746719);
  v9 = *(__int64 **)(v1 + 32);
  *(_QWORD *)(v1 + 88) = v8;
  v10 = AMLIGetNamedChild(v9, 1096045407);
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
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v13 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v10;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (v13 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  v11 = AMLIAsyncEvalObject(v10, v2, 0, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v11 != 259 )
    goto LABEL_16;
LABEL_19:
  AMLIDereferenceHandleEx((__int64)v10);
  return (unsigned int)v11;
}
