/*
 * XREFs of ConcatenateResTemplate @ 0x1C00502A0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C00462EC (CheckAndPromoteAliasedObjects.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 */

__int64 __fastcall ConcatenateResTemplate(__int64 a1, __int64 a2)
{
  char v4; // di
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int16 *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  char v16; // al
  unsigned __int64 v17; // r9
  char v18; // al
  unsigned int v19; // ecx
  _BYTE *v20; // rax
  __int64 v21; // rdx
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BB");
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(v6 + 24) <= 1u || *(_DWORD *)(v6 + 64) <= 1u )
    {
      v5 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v11 = 28;
      goto LABEL_19;
    }
    v5 = ValidateTarget(a1, v6 + 80, 135, (__int64)&v23);
    if ( !v5 )
    {
      v8 = *(__int16 **)(a2 + 80);
      if ( v8[41] != 128 )
        CheckAndPromoteAliasedObjects(v8, v7, v23);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
      v9 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(gpheapGlobal, 1381258056, v9);
      v10 = *(_QWORD *)(a2 + 88);
      if ( !*(_QWORD *)(v10 + 32) )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        v11 = 29;
LABEL_19:
        PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
        return v5;
      }
      v12 = *(_QWORD *)(a2 + 80);
      v13 = 0LL;
      v14 = 0LL;
      v15 = v12;
      if ( *(_DWORD *)(v12 + 24) != 2 )
      {
        do
        {
          v16 = *(_BYTE *)(v14 + *(_QWORD *)(v12 + 32));
          ++v14;
          *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v16;
          ++v13;
          v12 = *(_QWORD *)(a2 + 80);
          v15 = v12;
        }
        while ( v14 < (unsigned int)(*(_DWORD *)(v12 + 24) - 2) );
        v10 = *(_QWORD *)(a2 + 88);
      }
      v17 = 0LL;
      if ( *(_DWORD *)(v12 + 64) != 2 )
      {
        do
        {
          v18 = *(_BYTE *)(v17 + *(_QWORD *)(v15 + 72));
          ++v17;
          *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v18;
          ++v13;
          v15 = *(_QWORD *)(a2 + 80);
        }
        while ( v17 < (unsigned int)(*(_DWORD *)(v15 + 64) - 2) );
        v10 = *(_QWORD *)(a2 + 88);
      }
      v19 = v9 - 1;
      *(_BYTE *)(v13 + *(_QWORD *)(v10 + 32)) = 121;
      v20 = *(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL);
      if ( v9 != 1 )
      {
        do
        {
          v4 += *v20++;
          --v19;
        }
        while ( v19 );
      }
      v21 = v23;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + v13 + 1) = -v4;
      return (unsigned int)WriteObject(a1, v21, *(_QWORD *)(a2 + 88));
    }
  }
  return v5;
}
