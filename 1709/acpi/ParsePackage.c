/*
 * XREFs of ParsePackage @ 0x1C0019240
 * Callers:
 *     <none>
 * Callees:
 *     ParseObjName @ 0x1C0018CA8 (ParseObjName.c)
 *     HeapInsertFreeList @ 0x1C0019BF0 (HeapInsertFreeList.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     IsCompatableDSDTRevision @ 0x1C001F658 (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintIndent @ 0x1C005E7C0 (PrintIndent.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // rsi
  unsigned __int8 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v16; // eax
  char v17; // al
  __int64 v18; // rcx

  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a3 )
    v7 = 2;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("{");
      ++dword_1C00796B4;
    }
    do
    {
LABEL_6:
      if ( *(_QWORD *)(a1 + 120) < *(_QWORD *)(v5 + 48) )
      {
        while ( 1 )
        {
          v8 = *(int *)(v5 + 40);
          if ( (unsigned int)v8 >= **(_DWORD **)(v5 + 32) )
            break;
          *(_DWORD *)(v5 + 40) = v8 + 1;
          if ( (gDebugger & 0xD0) != 0 && (int)v8 > 0 )
            ConPrintf(",");
          if ( (unsigned __int8)(**(_BYTE **)(a1 + 120) - 17) <= 2u )
          {
            v4 = ParseOpcode(a1, 0LL, *(_QWORD *)(v5 + 32) + 8 * (v8 + 4 * v8 + 1));
            if ( v4 )
              break;
            if ( v5 != *(_QWORD *)(a1 + 416) )
              return v4;
          }
          else
          {
            if ( (gDebugger & 0xD0) != 0 )
              PrintIndent(a1, a2, a3, a4);
            v9 = *(unsigned __int8 **)(a1 + 120);
            v10 = 40 * v8;
            v11 = v10 + *(_QWORD *)(v5 + 32);
            v12 = *v9;
            *(_QWORD *)(a1 + 120) = v9 + 1;
            a2 = (unsigned int)v12;
            *(_WORD *)(v11 + 10) = 1;
            *(_QWORD *)(v11 + 24) = 0LL;
            if ( (_BYTE)v12 )
            {
              if ( (_DWORD)v12 == 10 )
              {
                *(_BYTE *)(v11 + 24) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
                if ( (gDebugger & 0xD0) == 0 )
                  goto LABEL_22;
                goto LABEL_57;
              }
              if ( (unsigned int)v12 > 0xE )
              {
                if ( (_DWORD)v12 != 255 )
                  goto LABEL_44;
                v17 = IsCompatableDSDTRevision(v12, (unsigned int)v12, a3, a4);
                v18 = 0xFFFFFFFFLL;
                if ( v17 )
                  v18 = -1LL;
                *(_QWORD *)(v11 + 24) = v18;
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("Ones");
              }
              else
              {
                if ( (_DWORD)v12 == 14 )
                {
                  *(_QWORD *)(v11 + 24) = **(_QWORD **)(a1 + 120);
                  *(_QWORD *)(a1 + 120) += 8LL;
                  if ( (gDebugger & 0xD0) == 0 )
                    goto LABEL_22;
                  goto LABEL_57;
                }
                a2 = (unsigned int)(v12 - 1);
                if ( (_DWORD)v12 != 1 )
                {
                  a2 = (unsigned int)(v12 - 11);
                  if ( (_DWORD)v12 == 11 )
                  {
                    *(_WORD *)(v11 + 24) = **(_WORD **)(a1 + 120);
                    *(_QWORD *)(a1 + 120) += 2LL;
                    if ( (gDebugger & 0xD0) == 0 )
                      goto LABEL_22;
                    goto LABEL_57;
                  }
                  if ( (_DWORD)v12 == 12 )
                  {
                    *(_DWORD *)(v11 + 24) = **(_DWORD **)(a1 + 120);
                    *(_QWORD *)(a1 + 120) += 4LL;
                    if ( (gDebugger & 0xD0) == 0 )
                      goto LABEL_22;
LABEL_57:
                    ConPrintf("0x%I64x");
                    goto LABEL_22;
                  }
LABEL_44:
                  --*(_QWORD *)(a1 + 120);
                  v4 = ParseString(a1, a1 + 120, v10 + *(_QWORD *)(v5 + 32) + 8LL, 1LL);
                  if ( v4 == -1072431103 )
                  {
                    v4 = ParseObjName(a1, (unsigned __int8 **)(a1 + 120), v10 + *(_QWORD *)(v5 + 32) + 8LL, 1);
                    if ( v4 == -1072431103 )
                    {
                      LogError(3222536193LL);
                      AcpiDiagTraceAmlError(a1, 3222536193LL);
                      PrintDebugMessage(135, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
                      goto LABEL_25;
                    }
                  }
LABEL_23:
                  if ( v4 )
                    break;
                  goto LABEL_24;
                }
                *(_QWORD *)(v11 + 24) = 1LL;
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("One");
              }
LABEL_22:
              v4 = 0;
              goto LABEL_23;
            }
            *(_QWORD *)(v11 + 24) = 0LL;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Zero");
            v4 = 0;
          }
LABEL_24:
          if ( *(_QWORD *)(a1 + 120) >= *(_QWORD *)(v5 + 48) )
            goto LABEL_25;
        }
      }
      if ( v4 == 32772 )
        return v4;
LABEL_25:
      if ( v5 != *(_QWORD *)(a1 + 416) )
        return v4;
    }
    while ( !v4 && *(_QWORD *)(a1 + 120) < *(_QWORD *)(v5 + 48) && *(_DWORD *)(v5 + 40) < **(_DWORD **)(v5 + 32) );
    ++*(_DWORD *)(v5 + 16);
    goto LABEL_29;
  }
  v16 = v7 - 1;
  if ( !v16 )
    goto LABEL_6;
  if ( v16 == 1 )
  {
LABEL_29:
    if ( (gDebugger & 0xD0) != 0 )
    {
      --dword_1C00796B4;
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("}");
      --dword_1C00796B4;
    }
    v13 = *(_QWORD *)(a1 + 416);
    v14 = v13 - 16;
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v13 + 8);
    *(_DWORD *)(v13 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v14 + 8), v14);
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return v4;
}
