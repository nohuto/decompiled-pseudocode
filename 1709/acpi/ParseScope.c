/*
 * XREFs of ParseScope @ 0x1C000AE20
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     CopyObjData @ 0x1C001A1A4 (CopyObjData.c)
 *     ParseIntObj @ 0x1C001A1F4 (ParseIntObj.c)
 *     ParseString @ 0x1C001A300 (ParseString.c)
 *     ParseNameObj @ 0x1C001ADAC (ParseNameObj.c)
 *     FreeNameSpaceObjects @ 0x1C001AE60 (FreeNameSpaceObjects.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintIndent @ 0x1C005E7C0 (PrintIndent.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 */

__int64 __fastcall ParseScope(_QWORD *a1, __int64 a2, __int64 a3, PVOID *a4)
{
  unsigned int v4; // edi
  int v7; // eax
  int v8; // eax
  __int64 *v9; // r14
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
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rbx
  __int64 v33; // r9
  __int64 *v34; // rax
  __int64 *i; // r8
  __int64 **v36; // rcx
  __int64 *v37; // rdx
  __int64 *v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r10
  _QWORD *v45; // rax
  __int64 v46; // r10
  _QWORD *v47; // rcx
  __int64 v48; // rcx
  __int64 *v49; // r8
  __int64 v50; // rcx
  bool v51; // zf
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // r9
  unsigned int v59; // eax
  __int64 *v60; // rcx
  __int64 **v61; // rax

  v4 = a3;
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
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("{");
      ++dword_1C00796B4;
      *(_DWORD *)(a2 + 16) |= 0x10000u;
    }
    ++*(_DWORD *)(a2 + 16);
  }
  v9 = a1 + 15;
  a4 = &P;
  do
  {
    v10 = *(unsigned __int8 **)(a2 + 32);
    if ( v4 == 32769 )
    {
      *v9 = (__int64)v10;
      v51 = (*(_DWORD *)(a2 + 16) & 0x20000) == 0;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
      if ( !v51 )
        v4 = 0;
      break;
    }
    if ( v4 == 32774 )
      goto LABEL_117;
    while ( *v9 < (unsigned __int64)v10 )
    {
      qword_1C00796C0 = *v9;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v52 = *(unsigned int *)(a2 + 16);
        if ( (v52 & 0x10000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v52 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger(v52, -1LL, a3);
          a4 = &P;
        }
      }
      if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)*v9 - 18) > 1u )
      {
        PrintIndent(a1, -1LL, a3, &P);
        a4 = &P;
      }
      v11 = *(_QWORD *)(a2 + 72);
      if ( (*(_BYTE *)v11 & 1) != 0 )
      {
        v50 = *(_QWORD *)(v11 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v50 & 8) == 0 )
          goto LABEL_13;
        FreeData(v50);
LABEL_89:
        a4 = &P;
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
      v14 = (PVOID *)&unk_1C00796F0;
      v15 = *(_QWORD *)(a2 + 72);
      v16 = *(_QWORD *)(a2 + 32);
      v17 = *v9;
      do
      {
        if ( (PVOID)v17 == *v14 )
          break;
        ++v12;
        ++v13;
        v14 += 2;
      }
      while ( (__int64)v14 < (__int64)&P );
      if ( v12 != 10 && (dword_1C00796E8[4 * v13] & 1) != 0 && v12 != -1 )
      {
        ConPrintf("\nHit Breakpoint %d.\n");
        AMLIDebugger(v54, v53, v55);
      }
      v18 = *v9;
      v19 = *(_BYTE *)*v9;
      if ( v19 == 91 )
      {
        v20 = 0LL;
        *v9 = v18 + 1;
        v42 = &ExOpcodeTable;
        if ( &atMutex )
        {
          while ( *(unsigned __int8 *)(v18 + 1) != *(_DWORD *)v42 )
          {
            v42 += 2;
            if ( !v42[1] )
              goto LABEL_19;
          }
          v20 = v42[1];
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
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(134, *(unsigned __int8 *)*v9, *v9, 0, 0LL);
        v4 = -1072431103;
        goto LABEL_115;
      }
      v21 = *(_DWORD *)(v20 + 28);
      if ( (v21 & 8) != 0 )
      {
        v4 = ParseIntObj(a1, v9, v15, 0LL);
      }
      else if ( (v21 & 0x10) != 0 )
      {
        v4 = ParseString(a1, v9, v15, 0LL);
      }
      else if ( (v21 & 2) != 0 )
      {
        v4 = 0;
        v56 = a1[12];
        v57 = (unsigned int)*(unsigned __int8 *)*v9 - 104;
        if ( (unsigned int)v57 < *(_DWORD *)(v56 + 60) )
        {
          CopyObjData(v15, *(_QWORD *)(v56 + 64) + 40 * v57, v17, a4);
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
          AcpiDiagTraceAmlError(a1, 3222536197LL);
          PrintDebugMessage(122, v57, 0, 0, 0LL);
          v4 = -1072431099;
        }
      }
      else
      {
        if ( (v21 & 4) != 0 )
        {
          v58 = (unsigned int)*(unsigned __int8 *)*v9 - 96;
          CopyObjData(v15, a1[12] + 8 * (v58 + 4 * v58 + 9), v17, v58);
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
          v4 = ParseNameObj(a1, v15, v17, a4);
        }
        else
        {
          if ( (v21 & 0x40) != 0 )
          {
            LogError(3222536198LL);
            AcpiDiagTraceAmlError(a1, 3222536198LL);
            PrintDebugMessage(133, 0, 0, 0, 0LL);
            v4 = -1072431098;
LABEL_115:
            a4 = &P;
            break;
          }
          ++*v9;
          v22 = HeapAlloc(a1 + 60, 1297237576LL, 96LL);
          v23 = v22;
          if ( v22 )
          {
            v4 = 0;
            *(_QWORD *)(v22 + 8) = a1[52];
            a1[52] = v22;
            *(_DWORD *)v22 = 1297237332;
            *(_QWORD *)(v22 + 24) = ParseTerm;
            *(_QWORD *)(v22 + 32) = v18;
            *(_QWORD *)(v22 + 48) = v16;
            *(_QWORD *)(v22 + 56) = v20;
            *(_QWORD *)(v22 + 88) = v15;
            v24 = *(_QWORD *)(v20 + 16);
            if ( v24 )
            {
              v25 = -1LL;
              do
                ++v25;
              while ( *(_BYTE *)(v24 + v25) );
            }
            else
            {
              LODWORD(v25) = 0;
            }
            *(_DWORD *)(v23 + 76) = v25;
            if ( (_DWORD)v25 )
            {
              v26 = (void *)HeapAlloc(a1[40], 1413563464LL, (unsigned int)(40 * v25));
              *(_QWORD *)(v23 + 80) = v26;
              if ( v26 )
              {
                memset(v26, 0, 40LL * *(unsigned int *)(v23 + 76));
              }
              else
              {
                LogError(3221225626LL);
                AcpiDiagTraceAmlError(a1, 3221225626LL);
                PrintDebugMessage(154, 0, 0, 0, 0LL);
                v4 = -1073741670;
              }
            }
          }
          else
          {
            LogError(3222536194LL);
            AcpiDiagTraceAmlError(a1, 3222536194LL);
            PrintDebugMessage(153, 0, 0, 0, 0LL);
            v4 = -1072431102;
          }
          v9 = a1 + 15;
        }
      }
      if ( v4 )
        goto LABEL_115;
LABEL_35:
      a4 = &P;
      if ( a2 != a1[52] )
        break;
      v10 = *(unsigned __int8 **)(a2 + 32);
    }
    if ( v4 == 32769 )
    {
      *v9 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
      goto LABEL_119;
    }
    if ( v4 == 32774 )
    {
      v10 = *(unsigned __int8 **)(a2 + 32);
LABEL_117:
      *v9 = (__int64)v10;
LABEL_119:
      v59 = 0;
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v59 = v4;
      v4 = v59;
      break;
    }
    if ( v4 == 32772 || a2 != a1[52] )
      return v4;
  }
  while ( !v4 && (unsigned __int64)*v9 < *(_QWORD *)(a2 + 32) );
  ++*(_DWORD *)(a2 + 16);
LABEL_48:
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_1C00796B4;
    PrintIndent(a1, -1LL, a3, a4);
    ConPrintf("}");
  }
  v28 = a1[10];
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(v28 + 64) |= 4u;
    if ( (*(_WORD *)(v28 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects(v28);
  }
  a1[10] = *(_QWORD *)(a2 + 48);
  v29 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = 0LL;
  a1[11] = v29;
  a1[40] = *(_QWORD *)(a2 + 64);
  v30 = *(_QWORD *)(a2 + 40);
  if ( v30 )
    a1[15] = v30;
  v31 = a1[52];
  v32 = (_QWORD *)(v31 - 16);
  a1[52] = *(_QWORD *)(v31 + 8);
  *(_DWORD *)(v31 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v33 = v32[1];
  v34 = *(__int64 **)(v33 + 40);
  for ( i = (__int64 *)(v33 + 40); v34 != i; v34 = (__int64 *)*v34 )
  {
    if ( v32 + 2 < v34 )
      break;
  }
  v36 = (__int64 **)v34[1];
  v37 = v32 + 2;
  if ( *v36 != v34 )
    __fastfail(3u);
  *v37 = (__int64)v34;
  v32[3] = v36;
  *v36 = v37;
  v34[1] = (__int64)v37;
  if ( (__int64 *)*v37 != i )
  {
    v43 = *((unsigned int *)v32 + 1);
    v44 = *v37 - 16;
    if ( (_QWORD *)v44 == (_QWORD *)((char *)v32 + v43) )
    {
      v45 = (_QWORD *)*v37;
      *((_DWORD *)v32 + 1) = *(_DWORD *)(v44 + 4) + v43;
      v46 = *(_QWORD *)(v44 + 16);
      if ( *(_QWORD **)(v46 + 8) != v45 || (v47 = (_QWORD *)v45[1], (_QWORD *)*v47 != v45) )
        __fastfail(3u);
      *v47 = v46;
      *(_QWORD *)(v46 + 8) = v47;
    }
  }
  v38 = (__int64 *)v32[3];
  if ( v38 != i )
  {
    v48 = *((unsigned int *)v38 - 3);
    v49 = v38 - 2;
    if ( v32 == (__int64 *)((char *)v38 + v48 - 16) )
    {
      *((_DWORD *)v49 + 1) = *((_DWORD *)v32 + 1) + v48;
      v60 = (__int64 *)*v37;
      if ( *(__int64 **)(*v37 + 8) != v37 || (v61 = (__int64 **)v32[3], *v61 != v37) )
        __fastfail(3u);
      *v61 = v60;
      v32 = v49;
      v60[1] = (__int64)v61;
    }
  }
  if ( *(_QWORD *)(v33 + 32) <= (unsigned __int64)v32 + *((unsigned int *)v32 + 1) )
  {
    *(_QWORD *)(v33 + 32) = v32;
    v39 = v32 + 2;
    v40 = *v39;
    if ( *(_QWORD **)(*v39 + 8LL) != v39 || (v41 = (_QWORD *)v39[1], (_QWORD *)*v41 != v39) )
      __fastfail(3u);
    *v41 = v40;
    *(_QWORD *)(v40 + 8) = v41;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return v4;
}
