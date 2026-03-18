/*
 * XREFs of LogOp2_32 @ 0x1C001C6CC
 * Callers:
 *     LogOp2 @ 0x1C001A5C0 (LogOp2.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0017174 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memcmp @ 0x1C002C670 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rcx
  __int16 v8; // ax
  unsigned int v9; // ebp
  size_t v10; // r8
  unsigned int v11; // r14d
  const void *v12; // rdx
  const void *v13; // rcx
  int v14; // eax
  bool v15; // cc
  bool v16; // zf
  __int16 v18; // ax
  unsigned __int8 *v19; // rax
  __int64 v20; // r8
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // ebp
  size_t v24; // r8
  unsigned int v25; // r14d
  int v26; // eax
  unsigned int v27; // r9d
  bool v28; // cc
  __int64 v29; // rcx
  __int16 v30; // ax
  unsigned __int8 *v31; // rax
  __int64 v32; // r8
  int v33; // edx
  int v34; // ecx
  bool v35; // zf
  bool v36; // sf
  unsigned int v37; // ebp
  size_t v38; // r8
  unsigned int v39; // r14d
  const void *v40; // rdx
  const void *v41; // rcx
  int v42; // eax
  bool v43; // cc
  unsigned __int8 *v44; // rax
  __int64 v45; // r8
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax

  v2 = 0;
  LOBYTE(v5) = 0;
  v6 = 0;
  switch ( *(_DWORD *)(a2[7] + 8LL) )
  {
    case 0x90:
      v6 = ValidateArgTypes(a1, a2[10], 1, (__int64)"II");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v49 = a2[10];
      if ( *(_DWORD *)(v49 + 16) )
      {
        LOBYTE(v5) = 1;
        if ( *(_DWORD *)(v49 + 56) )
          goto LABEL_15;
      }
      goto LABEL_87;
    case 0x91:
      v6 = ValidateArgTypes(a1, a2[10], 1, (__int64)"II");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v48 = a2[10];
      if ( *(_DWORD *)(v48 + 16) || *(_DWORD *)(v48 + 56) )
      {
        LOBYTE(v5) = 1;
        goto LABEL_15;
      }
LABEL_87:
      LOBYTE(v5) = 0;
      goto LABEL_15;
    case 0x93:
      v6 = ValidateArgTypes(a1, a2[10], 1, (__int64)"DD");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v7 = a2[10];
      v8 = *(_WORD *)(v7 + 2);
      if ( v8 == 1 && *(_WORD *)(v7 + 42) == 1 )
      {
        v16 = *(_DWORD *)(v7 + 16) == *(_DWORD *)(v7 + 56);
LABEL_14:
        LOBYTE(v5) = v16;
        goto LABEL_15;
      }
      if ( v8 == 2 && *(_WORD *)(v7 + 42) == 2 )
      {
        v44 = *(unsigned __int8 **)(v7 + 32);
        v45 = *(_QWORD *)(v7 + 72) - (_QWORD)v44;
        do
        {
          v46 = v44[v45];
          v47 = *v44 - v46;
          if ( v47 )
            break;
          ++v44;
        }
        while ( v46 );
        v16 = v47 == 0;
        goto LABEL_14;
      }
      if ( v8 == 3 && *(_WORD *)(v7 + 42) == 3 )
      {
        v9 = *(_DWORD *)(v7 + 24);
        v10 = v9;
        v11 = *(_DWORD *)(v7 + 64);
        v12 = *(const void **)(v7 + 72);
        v13 = *(const void **)(v7 + 32);
        if ( v9 > v11 )
          v10 = v11;
        v14 = memcmp(v13, v12, v10);
        v15 = v9 <= v11;
        if ( v9 < v11 )
        {
          if ( !v14 )
            v14 = -1;
          v15 = v9 <= v11;
        }
        if ( !v15 && !v14 )
          v14 = 1;
        v16 = v14 == 0;
        goto LABEL_14;
      }
LABEL_19:
      v6 = -1073741811;
      LogError(3221225485LL);
      AcpiDiagTraceAmlError(a1, 3221225485LL);
      PrintDebugMessage(238, 0, 0, 0, 0LL);
      return (unsigned int)v6;
    case 0x94:
      v6 = ValidateArgTypes(a1, a2[10], 1, (__int64)"DD");
      if ( v6 < 0 )
        return (unsigned int)v6;
      v29 = a2[10];
      v30 = *(_WORD *)(v29 + 2);
      if ( v30 == 1 && *(_WORD *)(v29 + 42) == 1 )
      {
        LOBYTE(v5) = *(_DWORD *)(v29 + 16) > *(_DWORD *)(v29 + 56);
        goto LABEL_15;
      }
      if ( v30 == 2 && *(_WORD *)(v29 + 42) == 2 )
      {
        v31 = *(unsigned __int8 **)(v29 + 32);
        v32 = *(_QWORD *)(v29 + 72) - (_QWORD)v31;
        do
        {
          v33 = v31[v32];
          v34 = *v31 - v33;
          if ( v34 )
            break;
          ++v31;
        }
        while ( v33 );
        v35 = v34 == 0;
        v36 = v34 < 0;
      }
      else
      {
        if ( v30 != 3 || *(_WORD *)(v29 + 42) != 3 )
          goto LABEL_19;
        v37 = *(_DWORD *)(v29 + 24);
        v38 = v37;
        v39 = *(_DWORD *)(v29 + 64);
        v40 = *(const void **)(v29 + 72);
        v41 = *(const void **)(v29 + 32);
        if ( v37 > v39 )
          v38 = v39;
        v42 = memcmp(v41, v40, v38);
        v43 = v37 <= v39;
        if ( v37 < v39 )
        {
          if ( !v42 )
            v42 = -1;
          v43 = v37 <= v39;
        }
        if ( !v43 && !v42 )
          v42 = 1;
        v35 = v42 == 0;
        v36 = v42 < 0;
      }
      LOBYTE(v5) = !v36 && !v35;
      goto LABEL_15;
  }
  if ( *(_DWORD *)(a2[7] + 8LL) != 149 )
    goto LABEL_15;
  v6 = ValidateArgTypes(a1, a2[10], 1, (__int64)"DD");
  if ( v6 < 0 )
    return (unsigned int)v6;
  v5 = a2[10];
  v18 = *(_WORD *)(v5 + 2);
  if ( v18 == 1 && *(_WORD *)(v5 + 42) == 1 )
  {
    LOBYTE(v5) = *(_DWORD *)(v5 + 16) < *(_DWORD *)(v5 + 56);
    goto LABEL_15;
  }
  if ( v18 != 2 || *(_WORD *)(v5 + 42) != 2 )
  {
    if ( v18 == 3 && *(_WORD *)(v5 + 42) == 3 )
    {
      v23 = *(_DWORD *)(v5 + 24);
      v24 = v23;
      v25 = *(_DWORD *)(v5 + 64);
      if ( v23 > v25 )
        v24 = v25;
      v26 = memcmp(*(const void **)(v5 + 32), *(const void **)(v5 + 72), v24);
      v27 = v26;
      v28 = v23 <= v25;
      if ( v23 < v25 )
      {
        if ( !v26 )
          v27 = -1;
        v28 = v23 <= v25;
      }
      if ( !v28 && !v27 )
        v27 = 1;
      LODWORD(v5) = v27 >> 31;
      goto LABEL_15;
    }
    goto LABEL_19;
  }
  v19 = *(unsigned __int8 **)(v5 + 32);
  v20 = *(_QWORD *)(v5 + 72) - (_QWORD)v19;
  do
  {
    v21 = v19[v20];
    v22 = *v19 - v21;
    if ( v22 )
      break;
    ++v19;
  }
  while ( v21 );
  LOBYTE(v5) = v22 < 0;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v5 )
  {
    IsCompatableDSDTRevision();
    v2 = -1;
  }
  *(_DWORD *)(a2[11] + 16LL) = v2;
  return (unsigned int)v6;
}
