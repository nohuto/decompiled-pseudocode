/*
 * XREFs of ParsePackage @ 0x1C0052430
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintIndent @ 0x1C004917C (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ParseIntObj @ 0x1C00554A0 (ParseIntObj.c)
 *     ParseObjName @ 0x1C0055CEC (ParseObjName.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 *     ParseString @ 0x1C005652C (ParseString.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r8
  const void **v10; // r14
  const void *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rcx

  v4 = a3;
  if ( a3 )
    v7 = 2;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
LABEL_35:
        if ( (gDebugger & 0xD0) != 0 )
        {
          --dword_1C00676B4;
          PrintIndent(a1);
          ConPrintf("}");
          --dword_1C00676B4;
        }
        v14 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v14 + 8);
        HeapFree(v14);
      }
      return v4;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1);
      ConPrintf("{");
      ++dword_1C00676B4;
    }
  }
  v9 = *(_QWORD *)(a2 + 48);
  v10 = (const void **)(a1 + 120);
  v11 = *(const void **)(a1 + 120);
  while ( 1 )
  {
    if ( (unsigned __int64)v11 < v9 )
    {
      while ( 1 )
      {
        v12 = *(int *)(a2 + 40);
        if ( (unsigned int)v12 >= **(_DWORD **)(a2 + 32) )
          break;
        *(_DWORD *)(a2 + 40) = v12 + 1;
        if ( (gDebugger & 0xD0) != 0 && (int)v12 > 0 )
          ConPrintf(",");
        if ( (unsigned __int8)(*(_BYTE *)*v10 - 17) <= 2u )
        {
          v4 = ParseOpcode(a1, 0LL, *(_QWORD *)(a2 + 32) + 8LL + 40 * v12);
          if ( v4 )
            break;
          if ( a2 != *(_QWORD *)(a1 + 416) )
            return v4;
        }
        else
        {
          if ( (gDebugger & 0xD0) != 0 )
            PrintIndent(a1);
          v13 = 5 * v12;
          LOBYTE(a4) = 1;
          v4 = ParseIntObj(a1, a1 + 120, *(_QWORD *)(a2 + 32) + 8LL + 8 * v13, a4);
          if ( v4 == -1072431103 )
          {
            LOBYTE(a4) = 1;
            v4 = ParseString(a1, a1 + 120, *(_QWORD *)(a2 + 32) + 8LL + 8 * v13, a4);
            if ( v4 == -1072431103 )
            {
              LOBYTE(a4) = 1;
              v4 = ParseObjName(a1, a1 + 120, *(_QWORD *)(a2 + 32) + 8LL + 8 * v13, a4);
              if ( v4 == -1072431103 )
              {
                LogError(-1072431103);
                AcpiDiagTraceAmlError(a1, -1072431103);
                PrintDebugMessage(135, (const void *)*(unsigned __int8 *)*v10, *v10, 0LL, 0LL);
                break;
              }
            }
          }
          if ( v4 )
            break;
        }
        if ( (unsigned __int64)*v10 >= *(_QWORD *)(a2 + 48) )
          goto LABEL_30;
      }
    }
    if ( v4 == 32772 )
      return v4;
LABEL_30:
    if ( a2 != *(_QWORD *)(a1 + 416) )
      return v4;
    if ( !v4 )
    {
      v11 = *v10;
      v9 = *(_QWORD *)(a2 + 48);
      if ( (unsigned __int64)*v10 < v9 && *(_DWORD *)(a2 + 40) < **(_DWORD **)(a2 + 32) )
        continue;
    }
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_35;
  }
}
