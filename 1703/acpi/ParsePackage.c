/*
 * XREFs of ParsePackage @ 0x1C00148B0
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     IsCompatableDSDTRevision @ 0x1C0017174 (IsCompatableDSDTRevision.c)
 *     ParseObjName @ 0x1C001C334 (ParseObjName.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     PrintIndent @ 0x1C005CA0C (PrintIndent.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int8 *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v17; // eax
  char v18; // al
  __int64 v19; // rcx

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
      ++dword_1C00775F4;
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
          v9 = (unsigned int)gDebugger;
          if ( (gDebugger & 0xD0) != 0 && (int)v8 > 0 )
          {
            ConPrintf(",");
            v9 = (unsigned int)gDebugger;
          }
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
            if ( (v9 & 0xD0) != 0 )
              PrintIndent(a1, v9, a3, a4);
            v10 = *(unsigned __int8 **)(a1 + 120);
            v11 = 40 * v8;
            v12 = 40 * v8 + *(_QWORD *)(v5 + 32);
            v4 = 0;
            v13 = *v10;
            *(_QWORD *)(a1 + 120) = v10 + 1;
            a2 = v13;
            *(_WORD *)(v12 + 10) = 1;
            *(_QWORD *)(v12 + 24) = 0LL;
            if ( (_BYTE)v13 )
            {
              if ( v13 == 10 )
              {
                *(_BYTE *)(v12 + 24) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
                if ( (gDebugger & 0xD0) == 0 )
                  goto LABEL_22;
                goto LABEL_55;
              }
              if ( v13 > 0xE )
              {
                if ( v13 != 255 )
                  goto LABEL_42;
                v18 = IsCompatableDSDTRevision();
                v19 = 0xFFFFFFFFLL;
                if ( v18 )
                  v19 = -1LL;
                *(_QWORD *)(v12 + 24) = v19;
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("Ones");
              }
              else
              {
                if ( v13 == 14 )
                {
                  *(_QWORD *)(v12 + 24) = **(_QWORD **)(a1 + 120);
                  *(_QWORD *)(a1 + 120) += 8LL;
                  if ( (gDebugger & 0xD0) == 0 )
                    goto LABEL_22;
                  goto LABEL_55;
                }
                a2 = v13 - 1;
                if ( v13 != 1 )
                {
                  a2 = v13 - 11;
                  if ( v13 == 11 )
                  {
                    *(_WORD *)(v12 + 24) = **(_WORD **)(a1 + 120);
                    *(_QWORD *)(a1 + 120) += 2LL;
                    if ( (gDebugger & 0xD0) == 0 )
                      goto LABEL_22;
                    goto LABEL_55;
                  }
                  if ( v13 == 12 )
                  {
                    *(_DWORD *)(v12 + 24) = **(_DWORD **)(a1 + 120);
                    *(_QWORD *)(a1 + 120) += 4LL;
                    if ( (gDebugger & 0xD0) == 0 )
                      goto LABEL_22;
LABEL_55:
                    ConPrintf("0x%I64x");
                    goto LABEL_22;
                  }
LABEL_42:
                  --*(_QWORD *)(a1 + 120);
                  v4 = ParseString(a1, a1 + 120, v11 + *(_QWORD *)(v5 + 32) + 8LL, 1LL);
                  if ( v4 == -1072431103 )
                  {
                    v4 = ParseObjName(a1, a1 + 120, v11 + *(_QWORD *)(v5 + 32) + 8LL, 1LL);
                    if ( v4 == -1072431103 )
                    {
                      LogError(3222536193LL);
                      AcpiDiagTraceAmlError(a1, 3222536193LL);
                      PrintDebugMessage(135, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
                      goto LABEL_24;
                    }
                  }
                  goto LABEL_22;
                }
                *(_QWORD *)(v12 + 24) = 1LL;
                if ( (gDebugger & 0xD0) != 0 )
                  ConPrintf("One");
              }
LABEL_22:
              if ( v4 )
                break;
              goto LABEL_23;
            }
            *(_QWORD *)(v12 + 24) = 0LL;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Zero");
          }
LABEL_23:
          if ( *(_QWORD *)(a1 + 120) >= *(_QWORD *)(v5 + 48) )
            goto LABEL_24;
        }
      }
      if ( v4 == 32772 )
        return v4;
LABEL_24:
      if ( v5 != *(_QWORD *)(a1 + 416) )
        return v4;
    }
    while ( !v4 && *(_QWORD *)(a1 + 120) < *(_QWORD *)(v5 + 48) && *(_DWORD *)(v5 + 40) < **(_DWORD **)(v5 + 32) );
    ++*(_DWORD *)(v5 + 16);
    goto LABEL_28;
  }
  v17 = v7 - 1;
  if ( !v17 )
    goto LABEL_6;
  if ( v17 == 1 )
  {
LABEL_28:
    if ( (gDebugger & 0xD0) != 0 )
    {
      --dword_1C00775F4;
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("}");
      --dword_1C00775F4;
    }
    v14 = *(_QWORD *)(a1 + 416);
    v15 = v14 - 16;
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v14 + 8);
    *(_DWORD *)(v14 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v15 + 8), v15);
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return v4;
}
