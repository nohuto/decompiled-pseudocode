/*
 * XREFs of ExprOp2_64 @ 0x1C0020100
 * Callers:
 *     ExprOp2 @ 0x1C001F9A0 (ExprOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     MatchObjType @ 0x1C001F934 (MatchObjType.c)
 *     WriteObject @ 0x1C0020320 (WriteObject.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *v8; // rbx
  __int64 v9; // r14
  int v10; // ebp
  unsigned int v11; // r10d
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int16 v18; // r10
  __int16 v19; // r11
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // r11d
  __int64 v24; // rcx
  int ObjectTypeName; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _WORD *v28; // [rsp+58h] [rbp+10h]

  result = ValidateArgTypes(a1, a2[10], 0, "II");
  if ( (int)result < 0 )
    return result;
  v8 = (_WORD *)(a2[10] + 80LL);
  v9 = 0LL;
  v10 = 0;
  v11 = *(unsigned __int16 *)(a2[10] + 82LL);
  if ( (_WORD)v11 == 128 )
  {
    v8 = (_WORD *)(*(_QWORD *)(a2[10] + 96LL) + 64LL);
  }
  else if ( (_WORD)v11 == 129 )
  {
    v8 = *(_WORD **)(a2[10] + 96LL);
  }
  else if ( (unsigned __int16)v11 > 0x10u || (v12 = 81921, !_bittest(&v12, v11)) )
  {
    v10 = -1072431094;
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName((unsigned __int16)v8[1]);
    PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
    v8 = v28;
    goto LABEL_13;
  }
  if ( (_WORD)v11 == 128 )
  {
    if ( !MatchObjType((unsigned __int16)v8[1], 135) )
    {
      v10 = -1072431094;
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      GetObjectTypeName(135LL);
      v22 = GetObjectTypeName((unsigned __int16)v8[1]);
      PrintDebugMessage(207, v22, v23, 0, 0LL);
      goto LABEL_13;
    }
    if ( v18 == v19 )
      goto LABEL_13;
  }
  v13 = (unsigned __int16)v8[1];
  if ( v13 == 133 )
    goto LABEL_10;
  if ( !v8[1] )
    goto LABEL_7;
  if ( v13 <= 4 )
    goto LABEL_10;
  if ( v13 != 5 && v13 != 14 )
  {
LABEL_7:
    if ( !v8[1] )
    {
LABEL_10:
      if ( (*(_BYTE *)v8 & 1) != 0 )
      {
        v24 = *((_QWORD *)v8 + 1);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v24 & 8) != 0 )
          FreeData((_QWORD *)v24);
      }
      else if ( *((_QWORD *)v8 + 4) )
      {
        if ( *((int *)v8 + 2) <= 0 )
        {
          if ( v8[1] == 4 )
            FreeDataBuffs(*((_QWORD *)v8 + 4) + 8LL, **((_DWORD **)v8 + 4));
          FreeObjData((__int64)v8, v5, v6, v7);
        }
        else
        {
          *v8 |= 8u;
        }
      }
      memset(v8, 0, 0x28uLL);
    }
  }
LABEL_13:
  if ( v10 < 0 )
    return (unsigned int)v10;
  *(_WORD *)(a2[11] + 2LL) = 1;
  v14 = *(_DWORD *)(a2[7] + 8LL);
  if ( v14 == 123 )
  {
    v15 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_16:
    *(_QWORD *)(a2[11] + 16LL) = v15;
  }
  else
  {
    switch ( v14 )
    {
      case 114:
        v15 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
        goto LABEL_16;
      case 116:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v8, a2[11]);
      case 119:
        v15 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
        goto LABEL_16;
      case 121:
        v16 = a2[10];
        v17 = *(_QWORD *)(v16 + 56);
        if ( v17 < 0x40 )
          v9 = *(_QWORD *)(v16 + 16) << v17;
        goto LABEL_22;
      case 122:
        v20 = a2[10];
        v21 = *(_QWORD *)(v20 + 56);
        if ( v21 < 0x40 )
          v9 = *(_QWORD *)(v20 + 16) >> v21;
        *(_QWORD *)(a2[11] + 16LL) = v9;
        return WriteObject(a1, v8, a2[11]);
      case 124:
        v15 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
        goto LABEL_16;
      case 125:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v8, a2[11]);
      case 126:
        *(_QWORD *)(a2[11] + 16LL) = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
        return WriteObject(a1, v8, a2[11]);
      case 127:
        *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
        return WriteObject(a1, v8, a2[11]);
      case 133:
        v26 = a2[10];
        v27 = *(_QWORD *)(v26 + 56);
        if ( v27 )
          *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(v26 + 16) % v27;
        else
LABEL_22:
          *(_QWORD *)(a2[11] + 16LL) = v9;
        break;
      default:
        return WriteObject(a1, v8, a2[11]);
    }
  }
  return WriteObject(a1, v8, a2[11]);
}
