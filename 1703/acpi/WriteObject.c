/*
 * XREFs of WriteObject @ 0x1C001ADC0
 * Callers:
 *     ExprOp2_64 @ 0x1C001AB40 (ExprOp2_64.c)
 *     Store @ 0x1C001B040 (Store.c)
 *     Index @ 0x1C001B680 (Index.c)
 *     ProcessIncDec @ 0x1C001C570 (ProcessIncDec.c)
 *     CondRefOf @ 0x1C001C620 (CondRefOf.c)
 *     ToInteger @ 0x1C001CA10 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C001E7DC (ExprOp1_64.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005FD60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C005FF60 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C0060114 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0060250 (ExprOp2_32.c)
 *     MidString @ 0x1C0060B70 (MidString.c)
 *     ProcessDivide @ 0x1C0060DD0 (ProcessDivide.c)
 *     ToBuffer @ 0x1C00614E0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0061560 (ToDecStr.c)
 *     ToHexStr @ 0x1C00618F0 (ToHexStr.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     WriteField @ 0x1C0017038 (WriteField.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     CopyObjBuffer @ 0x1C001BD30 (CopyObjBuffer.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  __int64 v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  int v14; // ecx
  _DWORD *v15; // rcx
  _DWORD *v16; // r15
  int v17; // esi
  _DWORD *v18; // r12
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  int ObjectTypeName; // eax
  char v24; // cl
  char v25; // cl
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

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
    v7 = gpheapGlobal;
    v8 = 0;
    if ( a2 == a3 )
      return v8;
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( !*(_QWORD *)(a3 + 32) )
      return v8;
    v13 = (void *)NewObjData(v7, a3);
    *(_QWORD *)(a2 + 32) = v13;
    if ( !v13 )
    {
      v8 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v8;
    }
    memmove(v13, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v14 = *(unsigned __int16 *)(a2 + 2);
    if ( v14 == 4 )
    {
      v15 = *(_DWORD **)(a2 + 32);
      v16 = *(_DWORD **)(a3 + 32);
      v17 = 0;
      *v15 = *v16;
      if ( (int)*v16 > 0 )
      {
        v18 = v15 + 2;
        do
        {
          v8 = DupObjData(v7, (__int64)&v18[10 * v17], (__int64)&v16[10 * v17 + 2]);
          if ( v8 )
            break;
          ++v17;
        }
        while ( v17 < *v16 );
      }
      goto LABEL_22;
    }
    v19 = v14 - 5;
    if ( !v19 )
      goto LABEL_48;
    v20 = v19 - 125;
    if ( !v20 )
    {
      v25 = gdwfAMLI;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
        v25 = gdwfAMLI;
      }
      if ( (v25 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
      goto LABEL_22;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 != 1 )
        goto LABEL_22;
      v24 = gdwfAMLI;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
        v24 = gdwfAMLI;
      }
      if ( (v24 & 4) == 0 )
        goto LABEL_22;
    }
    else
    {
LABEL_48:
      if ( (gdwfAMLI & 4) == 0 )
        goto LABEL_22;
    }
    _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
LABEL_22:
    *(_WORD *)a2 &= ~1u;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    return v8;
  }
  switch ( v6 )
  {
    case 1:
      v26 = 0;
      if ( ghGetAcpiTableVersion )
      {
        ghGetAcpiTableVersion(1413763908LL, &v26);
        if ( v26 >= 2 )
          return CopyObjBuffer((void *)(a2 + 16), 8uLL);
      }
      return (unsigned int)CopyObjBuffer((void *)(a2 + 16), 4uLL);
    case 2:
      v22 = *(_DWORD *)(a2 + 24);
      if ( v22 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v22 - 1));
      else
        return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
    case 5:
      v11 = HeapAlloc(a1 + 440, 1297237576, 0x30u);
      v12 = v11;
      if ( v11 )
      {
        *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v11;
        *(_QWORD *)(v11 + 24) = AccFieldUnit;
        result = 0LL;
        *(_DWORD *)v12 = 1430668097;
        *(_QWORD *)(v12 + 32) = a2;
        *(_QWORD *)(v12 + 40) = a3;
        return result;
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
