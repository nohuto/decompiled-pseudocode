/*
 * XREFs of CmpAbortRollbackPacket @ 0x1405E9E8C
 * Callers:
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     CmpRollbackLightWeightTransaction @ 0x14054BB90 (CmpRollbackLightWeightTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // r14d
  __int64 v5; // rbx
  int v6; // edi

  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3);
      if ( v5 )
        break;
LABEL_16:
      if ( ++v3 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v5 & 1) != 0 )
    {
      v6 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)(v5 & 0xFFFFFFFFFFFFFFFEuLL));
      if ( v6 < 0 )
        goto LABEL_10;
      CmpTransDereferenceTransaction(v5);
    }
    else
    {
      v6 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8LL * v3), 0LL);
      if ( v6 < 0 )
        goto LABEL_10;
      ObfDereferenceObject((PVOID)v5);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3) = 0LL;
LABEL_10:
    if ( ((v6 + 1072103405) & 0xFFFFFFFC) == 0 && v6 != -1072103404 )
      v6 = 0;
    if ( v2 >= 0 && v6 < 0 )
      v2 = v6;
    goto LABEL_16;
  }
  return (unsigned int)v2;
}
