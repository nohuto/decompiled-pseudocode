/*
 * XREFs of ParseField @ 0x1C0054C68
 * Callers:
 *     ParseFieldList @ 0x1C0055330 (ParseFieldList.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C0027224 (RtlStringCchCopyNA.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintIndent @ 0x1C004917C (PrintIndent.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     ParseFieldConnection @ 0x1C005508C (ParseFieldConnection.c)
 *     ParsePackageLen @ 0x1C0055FE8 (ParsePackageLen.c)
 */

__int64 __fastcall ParseField(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned __int8 *a5, _DWORD **a6)
{
  unsigned int v6; // ebp
  __int64 v9; // r13
  int v10; // edi
  unsigned __int8 **v12; // rbx
  const char *v13; // rdx
  char v14; // r8
  int v15; // eax
  const char *v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // r13
  unsigned int v20; // r8d
  void *v21; // rax
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // ecx
  bool v25; // r15
  char v26; // cl
  int v27; // eax
  unsigned __int8 *v28; // rax
  __int64 v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+40h] [rbp-68h] BYREF
  char pszDest[8]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0;
  v30 = a2;
  v9 = a2;
  v10 = 1;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 112), 1u);
  v12 = (unsigned __int8 **)(a1 + 120);
  v13 = *(const char **)(a1 + 120);
  v14 = *v13;
  if ( ((*v13 - 1) & 0xFD) != 0 )
  {
    if ( v14 == 2 )
    {
      *v12 = (unsigned __int8 *)(v13 + 1);
      v15 = ParseFieldConnection(a1, a6);
      v6 = v15;
      if ( v15 )
      {
        LogError(v15);
        AcpiDiagTraceAmlError(a1, v6);
        PrintDebugMessage(125, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        (*a6)[1] = *a4;
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1);
          v16 = (const char *)(*a6 + 4);
          if ( **a6 == 1 )
            ConPrintf("Connection(%s)", v16);
          else
            ConPrintf(
              "Connection(%02x %02x %02x %02x ...)",
              *(unsigned __int8 *)v16,
              *((unsigned __int8 *)*a6 + 17),
              *((unsigned __int8 *)*a6 + 18),
              *((unsigned __int8 *)*a6 + 19));
        }
      }
    }
    else
    {
      v17 = (*(_DWORD *)a3 & 0xF) - 1;
      if ( v17 <= 3 )
        v10 = 1 << v17;
      if ( v14 )
      {
        RtlStringCchCopyNA(pszDest, 5uLL, v13, 4uLL);
        *v12 += 4;
      }
      else
      {
        pszDest[0] = 0;
        *v12 = (unsigned __int8 *)(v13 + 1);
      }
      v18 = ParsePackageLen(v12, 0LL);
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        if ( pszDest[0] )
        {
          ConPrintf("%s,%d", pszDest, v18);
        }
        else if ( v18 <= 0x20 || (((_BYTE)v18 + *(_BYTE *)a4) & 7) != 0 )
        {
          ConPrintf(",%d", v18);
        }
        else
        {
          ConPrintf("Offset(0x%x)", (v18 + *a4) >> 3);
        }
      }
      v6 = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             (unsigned __int8 *)pszDest,
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             &v31,
             0);
      if ( !v6 )
      {
        v19 = v31;
        v20 = 40;
        *(_WORD *)(v31 + 66) = 5;
        *(_DWORD *)(v19 + 88) = 40;
        if ( *a6 )
        {
          v20 = (*a6)[3] + 40;
          *(_DWORD *)(v19 + 88) = v20;
        }
        v21 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1430537800, v20);
        *(_QWORD *)(v19 + 96) = v21;
        if ( v21 )
        {
          memset(v21, 0, *(unsigned int *)(v19 + 88));
          v22 = *(_QWORD *)(v19 + 96);
          *(_QWORD *)v22 = v30;
          v30 = 0LL;
          *(_DWORD *)(v22 + 20) = *(_DWORD *)a3;
          v23 = v10 * (*a4 / (unsigned int)(8 * v10));
          *(_DWORD *)(v22 + 8) = v23;
          v24 = *a4 - 8 * v23;
          *(_DWORD *)(v22 + 16) = v18;
          *(_DWORD *)(v22 + 12) = v24;
          *(_BYTE *)(v22 + 24) = *a5;
          if ( *a6 )
          {
            *(_DWORD *)(v22 + 28) = **a6;
            *(_DWORD *)(v22 + 32) = (*a6)[1];
            *(_DWORD *)(v22 + 36) = (*a6)[3];
            memmove((void *)(v22 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
          }
          *a4 += v18;
        }
        else
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(124, 0LL, 0LL, 0LL, 0LL);
        }
        DereferenceObjectEx(v19);
        v9 = v30;
      }
    }
    goto LABEL_47;
  }
  *v12 = (unsigned __int8 *)(v13 + 1);
  v25 = v14 == 3;
  *(_DWORD *)a3 &= 0xFFFFFFF0;
  *(_DWORD *)a3 |= **v12 & 0xF;
  if ( v14 != 3 && (**v12 & 0xC0) != 0 )
  {
    *(_BYTE *)(a3 + 1) = 0;
    v26 = **v12 & 0xC0;
    if ( v26 == 64 )
    {
      v27 = 2816;
    }
    else
    {
      v27 = 3840;
      if ( v26 == (char)0x80 )
        v27 = 3584;
    }
    *(_DWORD *)a3 |= v27;
    v25 = 1;
    v28 = ++*v12;
    goto LABEL_41;
  }
  ++*v12;
  *(_BYTE *)(a3 + 1) = 0;
  *(_DWORD *)a3 |= *(*v12)++ << 8;
  v28 = *v12;
  if ( v14 == 3 )
  {
LABEL_41:
    *a5 = *v28;
    ++*v12;
    goto LABEL_43;
  }
  *a5 = 0;
LABEL_43:
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    ConPrintf("AccessAs(0x%x,0x%x", (unsigned __int8)*(_DWORD *)a3, *(unsigned __int8 *)(a3 + 1));
    if ( v25 )
      ConPrintf(",0x%x)\n", *a5);
    else
      ConPrintf(")\n");
  }
LABEL_47:
  if ( v9 )
    DereferenceObjectEx(v9);
  return v6;
}
