/*
 * XREFs of ParseField @ 0x1C0018080
 * Callers:
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PrintIndent @ 0x1C005CA0C (PrintIndent.c)
 *     ParseFieldConnection @ 0x1C00626A0 (ParseFieldConnection.c)
 */

__int64 __fastcall ParseField(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5, _DWORD **a6)
{
  unsigned int v6; // esi
  _QWORD *v7; // r15
  unsigned __int8 *v11; // r9
  __int64 v12; // r8
  int v13; // r12d
  int v14; // ecx
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  __int64 v17; // rax
  char v18; // r8
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // r8
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rdi
  void *v24; // rax
  __int64 v25; // r9
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // ecx
  _BYTE *v29; // rax
  int v31; // eax
  char v32; // cl
  unsigned int v33; // eax
  __int64 v34; // r9
  _DWORD *v35; // r8
  __int64 v36; // rcx
  bool v37; // di
  char v38; // cl
  _BYTE *v39; // rax
  __int64 v40; // [rsp+38h] [rbp-70h] BYREF
  _BYTE *v41; // [rsp+40h] [rbp-68h]
  _BYTE v42[8]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0;
  v7 = (_QWORD *)a2;
  v41 = a5;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
  v11 = (unsigned __int8 *)a1[15];
  v12 = *v11;
  if ( (((_BYTE)v12 - 1) & 0xFD) == 0 )
  {
    a1[15] = v11 + 1;
    v37 = (_BYTE)v12 == 3;
    *(_DWORD *)a3 &= 0xFFFFFFF0;
    *(_DWORD *)a3 |= *(_BYTE *)a1[15] & 0xF;
    if ( (_BYTE)v12 == 3 || (*(_BYTE *)a1[15] & 0xC0) == 0 )
    {
      ++a1[15];
      *(_BYTE *)(a3 + 1) = 0;
      *(_DWORD *)a3 |= *(unsigned __int8 *)a1[15]++ << 8;
      v39 = (_BYTE *)a1[15];
      if ( (_BYTE)v12 != 3 )
      {
        *a5 = 0;
LABEL_58:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1, a2, v12, v11);
          ConPrintf("AccessAs(0x%x,0x%x");
          if ( v37 )
            ConPrintf(",0x%x)\n");
          else
            ConPrintf(")\n");
        }
        goto LABEL_25;
      }
    }
    else
    {
      *(_BYTE *)(a3 + 1) = 0;
      v38 = *(_BYTE *)a1[15] & 0xC0;
      if ( v38 == 64 )
      {
        *(_DWORD *)a3 |= 0xB00u;
      }
      else if ( v38 == (char)0x80 )
      {
        *(_DWORD *)a3 |= 0xE00u;
      }
      else
      {
        *(_DWORD *)a3 |= 0xF00u;
      }
      ++a1[15];
      v37 = 1;
      v39 = (_BYTE *)a1[15];
    }
    *a5 = *v39;
    ++a1[15];
    goto LABEL_58;
  }
  if ( (_BYTE)v12 == 2 )
  {
    a1[15] = v11 + 1;
    v33 = ParseFieldConnection(a1, a6);
    v6 = v33;
    if ( v33 )
    {
      LogError(v33);
      AcpiDiagTraceAmlError(a1, v6);
      PrintDebugMessage(125, 0, 0, 0, 0LL);
    }
    else
    {
      v35 = *a6;
      (*a6)[1] = *a4;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1, (unsigned int)gDebugger, v35, v34);
        if ( **a6 == 1 )
          ConPrintf("Connection(%s)");
        else
          ConPrintf("Connection(%02x %02x %02x %02x ...)");
      }
    }
  }
  else
  {
    v13 = 1;
    v14 = *(_DWORD *)a3 & 0xF;
    if ( (unsigned int)(v14 - 1) <= 3 )
      v13 = 1 << (v14 - 1);
    if ( (_BYTE)v12 )
    {
      v15 = 5LL;
      v16 = v42;
      while ( 1 )
      {
        v17 = v15 - 1;
        if ( v15 == 1 )
          break;
        v18 = v16[v11 - v42];
        if ( !v18 )
          break;
        *v16 = v18;
        --v15;
        ++v16;
        if ( !v17 )
          goto LABEL_38;
      }
      if ( v15 )
        goto LABEL_14;
LABEL_38:
      --v16;
LABEL_14:
      *v16 = 0;
      v19 = v11 + 4;
    }
    else
    {
      v42[0] = 0;
      v19 = v11 + 1;
    }
    a1[15] = v19;
    v20 = v19 + 1;
    v21 = *v19;
    a1[15] = v19 + 1;
    v22 = v21 >> 6;
    LOBYTE(v22) = v22 & 3;
    if ( (_BYTE)v22 )
    {
      v21 &= 0xFu;
      LOBYTE(v11) = 0;
      do
      {
        v31 = *v20++;
        v32 = (char)v11;
        LOBYTE(v11) = (_BYTE)v11 + 1;
        a1[15] = v20;
        v21 |= v31 << (8 * v32 + 4);
      }
      while ( (unsigned __int8)v11 < (unsigned __int8)v22 );
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, v22, v20, v11);
      if ( v42[0] )
      {
        ConPrintf("%s,%d");
      }
      else if ( v21 <= 0x20 || (((_BYTE)v21 + *(_BYTE *)a4) & 7) != 0 )
      {
        ConPrintf(",%d");
      }
      else
      {
        ConPrintf("Offset(0x%x)");
      }
    }
    v6 = CreateNameSpaceObject(a1[40], v42, a1[10], a1[11], &v40, 0);
    if ( !v6 )
    {
      v23 = v40;
      *(_WORD *)(v40 + 66) = 5;
      *(_DWORD *)(v23 + 88) = 40;
      if ( *a6 )
        *(_DWORD *)(v23 + 88) = (*a6)[3] + 40;
      v24 = (void *)HeapAlloc(a1[40], 1430537800, *(_DWORD *)(v23 + 88));
      *(_QWORD *)(v23 + 96) = v24;
      if ( v24 )
      {
        memset(v24, 0, *(unsigned int *)(v23 + 88));
        v25 = *(_QWORD *)(v23 + 96);
        *(_QWORD *)v25 = v7;
        v7 = 0LL;
        *(_DWORD *)(v25 + 20) = *(_DWORD *)a3;
        v26 = v13 * (*a4 / (unsigned int)(8 * v13));
        *(_DWORD *)(v25 + 8) = v26;
        v27 = *a4;
        *(_DWORD *)(v25 + 16) = v21;
        v28 = v27 - 8 * v26;
        v29 = v41;
        *(_DWORD *)(v25 + 12) = v28;
        *(_BYTE *)(v25 + 24) = *v29;
        if ( *a6 )
        {
          *(_DWORD *)(v25 + 28) = **a6;
          *(_DWORD *)(v25 + 32) = (*a6)[1];
          *(_DWORD *)(v25 + 36) = (*a6)[3];
          memmove((void *)(v25 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
        }
        *a4 += v21;
      }
      else
      {
        v6 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(124, 0, 0, 0, 0LL);
      }
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 112), 0xFFFFFFFF) == 1 )
      {
        v36 = v40;
        *(_WORD *)(v40 + 64) |= 4u;
        if ( (*(_WORD *)(v36 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects((_QWORD *)v36);
      }
    }
  }
LABEL_25:
  if ( v7 )
    DereferenceObjectEx(v7);
  return v6;
}
