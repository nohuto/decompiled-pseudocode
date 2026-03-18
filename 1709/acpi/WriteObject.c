/*
 * XREFs of WriteObject @ 0x1C0020320
 * Callers:
 *     Index @ 0x1C001F6B0 (Index.c)
 *     Store @ 0x1C001F810 (Store.c)
 *     ExprOp2_64 @ 0x1C0020100 (ExprOp2_64.c)
 *     ProcessIncDec @ 0x1C0020C30 (ProcessIncDec.c)
 *     CondRefOf @ 0x1C0020F30 (CondRefOf.c)
 *     ToInteger @ 0x1C0021120 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C002A66C (ExprOp1_64.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0060F60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0061160 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C0061314 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0061450 (ExprOp2_32.c)
 *     MidString @ 0x1C0061D50 (MidString.c)
 *     ProcessDivide @ 0x1C0061FB0 (ProcessDivide.c)
 *     ToBuffer @ 0x1C00626B0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0062730 (ToDecStr.c)
 *     ToHexStr @ 0x1C0062AC0 (ToHexStr.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     WriteField @ 0x1C00209B8 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0020AF8 (CopyObjBuffer.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C005F5C8 (DumpObject.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  unsigned int v7; // ebp
  __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v11; // rax
  void *v12; // rax
  int v13; // ecx
  _DWORD *v14; // r12
  _DWORD *v15; // r15
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int ObjectTypeName; // eax
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_WORD *)(a2 + 2);
      if ( v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !v6 )
  {
    v7 = 0;
    v8 = gpheapGlobal;
    if ( a2 == a3 )
      return v7;
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( !*(_QWORD *)(a3 + 32) )
      return v7;
    v12 = (void *)NewObjData(v8, a3);
    *(_QWORD *)(a2 + 32) = v12;
    if ( !v12 )
    {
      v7 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v7;
    }
    memmove(v12, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v13 = *(unsigned __int16 *)(a2 + 2);
    if ( v13 == 4 )
    {
      v14 = *(_DWORD **)(a2 + 32);
      v15 = *(_DWORD **)(a3 + 32);
      v16 = 0;
      for ( *v14 = *v15; v16 < *v15; ++v16 )
      {
        v7 = DupObjData(v8, (__int64)&v14[10 * v16 + 2], (__int64)&v15[10 * v16 + 2]);
        if ( v7 )
          break;
      }
      goto LABEL_21;
    }
    v17 = v13 - 5;
    if ( v17 )
    {
      v18 = v17 - 125;
      if ( !v18 )
      {
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
        goto LABEL_21;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 )
        {
LABEL_21:
          *(_WORD *)a2 &= ~1u;
          _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
          return v7;
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
      }
    }
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
    goto LABEL_21;
  }
  switch ( v6 )
  {
    case 1:
      v22 = 0;
      if ( ghGetAcpiTableVersion )
      {
        ghGetAcpiTableVersion(1413763908LL, &v22);
        if ( v22 >= 2 )
          return CopyObjBuffer((void *)(a2 + 16), 8uLL);
      }
      return (unsigned int)CopyObjBuffer((void *)(a2 + 16), 4uLL);
    case 2:
      v20 = *(_DWORD *)(a2 + 24);
      if ( v20 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v20 - 1));
      else
        return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
    case 5:
      v11 = HeapAlloc(a1 + 480, 1297237576, 0x30u);
      if ( v11 )
      {
        *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v11;
        *(_QWORD *)(v11 + 24) = AccFieldUnit;
        *(_DWORD *)v11 = 1430668097;
        *(_QWORD *)(v11 + 32) = a2;
        *(_QWORD *)(v11 + 40) = a3;
        return 0LL;
      }
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      v9 = -1072431102;
      break;
    case 14:
      return WriteField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
    case 16:
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 0x1C0000000uLL, 0LL);
      return 0;
    default:
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(215, ObjectTypeName, 0, 0, 0LL);
      return (unsigned int)-1072431095;
  }
  return v9;
}
