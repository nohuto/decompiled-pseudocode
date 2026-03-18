/*
 * XREFs of ParseScope @ 0x1C0012A00
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     CopyObjData @ 0x1C0014270 (CopyObjData.c)
 *     ParseNameObj @ 0x1C00147FC (ParseNameObj.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     ParseString @ 0x1C0016CB4 (ParseString.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     PrintIndent @ 0x1C005CA0C (PrintIndent.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 */

__int64 __fastcall ParseScope(unsigned __int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  unsigned int v4; // edi
  _QWORD *v6; // r13
  int v7; // eax
  int v8; // eax
  unsigned __int8 **v9; // r14
  unsigned __int8 *v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rcx
  PVOID *v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // rsi
  unsigned __int8 v19; // al
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  void *v25; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rbx
  __int64 v32; // r9
  __int64 *v33; // rax
  __int64 *i; // r8
  __int64 **v35; // rcx
  __int64 *v36; // rdx
  __int64 v37; // r10
  __int64 *v38; // rax
  __int64 *v39; // r10
  _QWORD *v40; // rbx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // ecx
  _QWORD *v46; // r10
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  bool v51; // zf
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // r9
  unsigned int v60; // eax
  __int64 *v61; // rcx
  __int64 **v62; // rax

  v4 = a3;
  v6 = (_QWORD *)a1;
  if ( !(_DWORD)a3 || (_DWORD)a3 == 32769 || (_DWORD)a3 == 32774 )
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  else
    v7 = 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v4;
      goto LABEL_48;
    }
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
    {
      ((void (*)(void))PrintIndent)();
      ConPrintf("{");
      ++dword_1C00775F4;
      *(_DWORD *)(a2 + 16) |= 0x10000u;
    }
    ++*(_DWORD *)(a2 + 16);
  }
  v9 = (unsigned __int8 **)(v6 + 15);
  a4 = &qword_1C00776D0;
  do
  {
    v10 = *(unsigned __int8 **)(a2 + 32);
    if ( v4 == 32769 )
    {
      *v9 = v10;
      v51 = (*(_DWORD *)(a2 + 16) & 0x20000) == 0;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
      if ( !v51 )
        v4 = 0;
      break;
    }
    if ( v4 == 32774 )
      goto LABEL_117;
    while ( *v9 < v10 )
    {
      qword_1C0077600 = (__int64)*v9;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v52 = *(_DWORD *)(a2 + 16);
        if ( (v52 & 0x10000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v52 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger(a1, -1LL, a3, &qword_1C00776D0);
          a4 = &qword_1C00776D0;
        }
      }
      if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(**v9 - 18) > 1u )
      {
        PrintIndent(v6, -1LL, a3, &qword_1C00776D0);
        a4 = &qword_1C00776D0;
      }
      v11 = *(_QWORD *)(a2 + 72);
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        v50 = *(_QWORD *)(v11 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v50 & 8) == 0 )
          goto LABEL_13;
        FreeData((_QWORD *)v50);
LABEL_89:
        a4 = &qword_1C00776D0;
        goto LABEL_13;
      }
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( *(int *)(v11 + 8) > 0 )
        {
          *(_WORD *)v11 |= 8u;
          goto LABEL_13;
        }
        if ( *(_WORD *)(v11 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(v11 + 32) + 8LL, **(unsigned int **)(v11 + 32));
        FreeObjData(v11);
        goto LABEL_89;
      }
LABEL_13:
      v12 = 0;
      *(_QWORD *)v11 = 0LL;
      v13 = 0LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      v14 = (PVOID *)&unk_1C0077630;
      v15 = *(_QWORD *)(a2 + 72);
      v16 = *(_QWORD *)(a2 + 32);
      v17 = (__int64)*v9;
      do
      {
        if ( (PVOID)v17 == *v14 )
          break;
        ++v12;
        ++v13;
        v14 += 2;
      }
      while ( (__int64)v14 < (__int64)&qword_1C00776D0 );
      if ( v12 != 10 && (dword_1C0077628[4 * v13] & 1) != 0 && v12 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v54, v53, v55, v56);
      }
      v18 = (__int64)*v9;
      v19 = **v9;
      if ( v19 == 91 )
      {
        v20 = 0LL;
        *v9 = (unsigned __int8 *)(v18 + 1);
        v43 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( *(unsigned __int8 *)(v18 + 1) != *(_DWORD *)v43 )
          {
            v43 += 2;
            if ( !v43[1] )
              goto LABEL_19;
          }
          v20 = v43[1];
        }
      }
      else
      {
        v20 = (__int64)*(&OpcodeTable + v19);
      }
LABEL_19:
      if ( !v20 )
      {
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(v6, 3222536193LL);
        PrintDebugMessage(134, **v9, (unsigned int)*v9, 0, 0LL);
        v4 = -1072431103;
        goto LABEL_115;
      }
      v21 = *(_DWORD *)(v20 + 28);
      if ( (v21 & 8) != 0 )
      {
        v4 = ParseIntObj(v6, v9, v15, 0LL);
      }
      else if ( (v21 & 0x10) != 0 )
      {
        v4 = ParseString(v6, v9, v15, 0LL);
      }
      else if ( (v21 & 2) != 0 )
      {
        v4 = 0;
        v57 = v6[12];
        v58 = (unsigned int)**v9 - 104;
        if ( (unsigned int)v58 < *(_DWORD *)(v57 + 60) )
        {
          CopyObjData(v15, *(_QWORD *)(v57 + 64) + 40 * v58, v17, a4);
          ++*v9;
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Arg%d=");
            PrintObject(v15);
          }
        }
        else
        {
          LogError(3222536197LL);
          AcpiDiagTraceAmlError(v6, 3222536197LL);
          PrintDebugMessage(122, v58, 0, 0, 0LL);
          v4 = -1072431099;
        }
      }
      else
      {
        if ( (v21 & 4) != 0 )
        {
          v59 = (unsigned int)**v9 - 96;
          CopyObjData(v15, v6[12] + 8 * (v59 + 4 * v59 + 9), v17, v59);
          a1 = (unsigned int)gDebugger;
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Local%d=");
            PrintObject(v15);
          }
          ++*v9;
          v4 = 0;
          goto LABEL_35;
        }
        if ( (v21 & 0x20) != 0 )
        {
          v4 = ParseNameObj(v6, v15, v17, a4);
        }
        else
        {
          if ( (v21 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            AcpiDiagTraceAmlError(v6, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            v4 = -1072431098;
LABEL_115:
            a4 = &qword_1C00776D0;
            break;
          }
          ++*v9;
          v4 = 0;
          v22 = HeapAlloc((__int64)(v6 + 55), 1297237576, 0x60u);
          v23 = v22;
          if ( v22 )
          {
            *(_QWORD *)(v22 + 8) = v6[52];
            v6[52] = v22;
            *(_DWORD *)v22 = 1297237332;
            *(_QWORD *)(v22 + 24) = ParseTerm;
            *(_QWORD *)(v22 + 32) = v18;
            *(_QWORD *)(v22 + 48) = v16;
            *(_QWORD *)(v22 + 56) = v20;
            *(_QWORD *)(v22 + 88) = v15;
            a1 = *(_QWORD *)(v20 + 16);
            if ( a1 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( *(_BYTE *)(a1 + v24) );
            }
            else
            {
              LODWORD(v24) = 0;
            }
            *(_DWORD *)(v23 + 76) = v24;
            if ( (_DWORD)v24 )
            {
              v25 = (void *)HeapAlloc(v6[40], 1413563464, 40 * (int)v24);
              *(_QWORD *)(v23 + 80) = v25;
              if ( v25 )
              {
                memset(v25, 0, 40LL * *(unsigned int *)(v23 + 76));
              }
              else
              {
                LogError(3221225626LL);
                AcpiDiagTraceAmlError(v6, 3221225626LL);
                PrintDebugMessage(154, 0, 0, 0, 0LL);
                v4 = -1073741670;
              }
            }
          }
          else
          {
            LogError(3222536194LL);
            AcpiDiagTraceAmlError(v6, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            v4 = -1072431102;
          }
          v9 = (unsigned __int8 **)(v6 + 15);
        }
      }
      if ( v4 )
        goto LABEL_115;
LABEL_35:
      a4 = &qword_1C00776D0;
      if ( a2 != v6[52] )
        break;
      v10 = *(unsigned __int8 **)(a2 + 32);
    }
    if ( v4 == 32769 )
    {
      *v9 = *(unsigned __int8 **)(a2 + 32);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
      goto LABEL_119;
    }
    if ( v4 == 32774 )
    {
      v10 = *(unsigned __int8 **)(a2 + 32);
LABEL_117:
      *v9 = v10;
LABEL_119:
      v60 = 0;
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v60 = v4;
      v4 = v60;
      break;
    }
    if ( v4 == 32772 || a2 != v6[52] )
      return v4;
  }
  while ( !v4 && (unsigned __int64)*v9 < *(_QWORD *)(a2 + 32) );
  ++*(_DWORD *)(a2 + 16);
LABEL_48:
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_1C00775F4;
    PrintIndent(v6, -1LL, a3, a4);
    ConPrintf("}");
  }
  v27 = v6[10];
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(v27 + 64) |= 4u;
    if ( (*(_WORD *)(v27 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects(v27);
  }
  v6[10] = *(_QWORD *)(a2 + 48);
  v28 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = 0LL;
  v6[11] = v28;
  v6[40] = *(_QWORD *)(a2 + 64);
  v29 = *(_QWORD *)(a2 + 40);
  if ( v29 )
    v6[15] = v29;
  v30 = v6[52];
  v31 = (__int64 *)(v30 - 16);
  v6[52] = *(_QWORD *)(v30 + 8);
  *(_DWORD *)(v30 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v32 = v31[1];
  v33 = *(__int64 **)(v32 + 40);
  for ( i = (__int64 *)(v32 + 40); v33 != i; v33 = (__int64 *)*v33 )
  {
    if ( v31 + 2 < v33 )
      break;
  }
  v35 = (__int64 **)v33[1];
  v36 = v31 + 2;
  if ( *v35 != v33 )
    __fastfail(3u);
  *v36 = (__int64)v33;
  v31[3] = (__int64)v35;
  *v35 = v36;
  v33[1] = (__int64)v36;
  v37 = *v36 - 16;
  if ( (__int64 *)*v36 != i )
  {
    v44 = *((unsigned int *)v31 + 1);
    if ( (__int64 *)v37 == (__int64 *)((char *)v31 + v44) )
    {
      v45 = *(_DWORD *)(v37 + 4) + v44;
      v46 = (_QWORD *)*v36;
      *((_DWORD *)v31 + 1) = v45;
      v47 = *v46;
      v48 = (_QWORD *)v46[1];
      if ( *(_QWORD **)(*v46 + 8LL) != v46 || (_QWORD *)*v48 != v46 )
        __fastfail(3u);
      *v48 = v47;
      *(_QWORD *)(v47 + 8) = v48;
    }
  }
  v38 = (__int64 *)v31[3];
  v39 = v38 - 2;
  if ( v38 != i )
  {
    v49 = *((unsigned int *)v39 + 1);
    if ( v31 == (__int64 *)((char *)v39 + v49) )
    {
      *((_DWORD *)v39 + 1) = *((_DWORD *)v31 + 1) + v49;
      v61 = (__int64 *)*v36;
      v62 = (__int64 **)v31[3];
      if ( *(__int64 **)(*v36 + 8) != v36 || *v62 != v36 )
        __fastfail(3u);
      *v62 = v61;
      v31 = v39;
      v61[1] = (__int64)v62;
    }
  }
  if ( *(_QWORD *)(v32 + 32) <= (unsigned __int64)v31 + *((unsigned int *)v31 + 1) )
  {
    *(_QWORD *)(v32 + 32) = v31;
    v40 = v31 + 2;
    v41 = *v40;
    v42 = (_QWORD *)v40[1];
    if ( *(_QWORD **)(*v40 + 8LL) != v40 || (_QWORD *)*v42 != v40 )
      __fastfail(3u);
    *v42 = v41;
    *(_QWORD *)(v41 + 8) = v42;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return v4;
}
