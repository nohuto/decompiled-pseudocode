/*
 * XREFs of Concat @ 0x1C004FFA0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C00462EC (CheckAndPromoteAliasedObjects.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToInteger @ 0x1C0053BE8 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 */

__int64 __fastcall Concat(__int64 a1, __int64 a2)
{
  char v4; // r12
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r15
  __int16 v11; // ax
  _BYTE *v12; // rbp
  int v13; // eax
  __int16 v14; // cx
  __int64 v15; // r11
  const void *ObjectTypeName; // rbx
  const void *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  __int16 v23; // cx
  bool v24; // al
  _QWORD *v25; // rdx
  bool v26; // zf
  size_t v27; // r8
  const void *v28; // rdx
  void *v29; // rcx
  void *v30; // rcx
  _BYTE v32[48]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  memset(v32, 0, 0x28uLL);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135, (__int64)&v33);
  if ( v5 )
    return v5;
  v9 = *(_QWORD *)(a2 + 80);
  v10 = v33;
  if ( *(_WORD *)(v9 + 82) != 128 )
  {
    CheckAndPromoteAliasedObjects(*(__int16 **)(a2 + 80), v6, v33);
    v9 = *(_QWORD *)(a2 + 80);
  }
  v11 = *(_WORD *)(v9 + 2);
  v12 = (_BYTE *)(v9 + 40);
  if ( v11 != *(_WORD *)(v9 + 42) )
  {
    switch ( v11 )
    {
      case 1:
        v13 = ConvertToInteger(v9 + 40, v32, v7, v8);
        break;
      case 2:
        v13 = ConvertToString(v9 + 40, 0LL, v32, v8);
        break;
      case 3:
        v13 = ConvertToBuffer(v9 + 40, v32, v7, v8);
        break;
      default:
LABEL_13:
        v12 = v32;
        v4 = 1;
        goto LABEL_14;
    }
    v5 = v13;
    if ( v13 >= 0 )
      goto LABEL_13;
  }
LABEL_14:
  v14 = *(_WORD *)(v9 + 2);
  if ( v14 == *((_WORD *)v12 + 1) )
  {
    v18 = *(_QWORD *)(a2 + 88);
    if ( v14 == 1 )
    {
      *(_WORD *)(v18 + 2) = 3;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = IsCompatableDSDTRevision() ? 16 : 8;
    }
    else
    {
      *(_WORD *)(v18 + 2) = v14;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *((_DWORD *)v12 + 6) + *(_DWORD *)(v9 + 24);
      v19 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v19 + 2) == 2 )
        --*(_DWORD *)(v19 + 24);
    }
    v20 = *(_QWORD *)(a2 + 88);
    v21 = 1381258056;
    if ( *(_WORD *)(v20 + 2) != 2 )
      v21 = 1179992648;
    v22 = HeapAlloc(gpheapGlobal, v21, *(_DWORD *)(v20 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v22;
    if ( v22 )
    {
      v23 = *(_WORD *)(v9 + 2);
      if ( v23 == 1 )
      {
        v24 = IsCompatableDSDTRevision();
        v25 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v24 )
        {
          *v25 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v12 + 2);
        }
        else
        {
          *(_DWORD *)v25 = *(_DWORD *)(v9 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v12 + 4);
        }
      }
      else
      {
        v26 = v23 == 2;
        v27 = *(unsigned int *)(v9 + 24);
        v28 = *(const void **)(v9 + 32);
        v29 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v26 )
        {
          memmove(v29, v28, (unsigned int)(v27 - 1));
          v30 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *(unsigned int *)(v9 + 24));
        }
        else
        {
          memmove(v29, v28, v27);
          v30 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v9 + 24));
        }
        memmove(v30, *((const void **)v12 + 4), *((unsigned int *)v12 + 6));
      }
      if ( !v5 )
        v5 = WriteObject(a1, v10, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(27, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    v17 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v15 + 2));
    PrintDebugMessage(26, v17, ObjectTypeName, 0LL, 0LL);
  }
  if ( v4 )
    FreeDataBuffs((__int64)v32, 1u);
  return v5;
}
