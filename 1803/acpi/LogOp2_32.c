/*
 * XREFs of LogOp2_32 @ 0x1C0051564
 * Callers:
 *     LogOp2 @ 0x1C0051510 (LogOp2.c)
 * Callees:
 *     memcmp @ 0x1C00040F0 (memcmp.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v6; // r9
  __int16 v7; // ax
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // edx
  bool v14; // cc
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  size_t v17; // r8
  int v18; // eax
  bool v19; // cc
  __int64 v20; // rcx
  __int16 v21; // ax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // r8d
  bool v27; // cc
  unsigned int v28; // ebp
  unsigned int v29; // ebx
  size_t v30; // r8
  const void *v31; // rdx
  const void *v32; // rcx
  __int64 v33; // rcx
  __int16 v34; // ax
  bool v35; // zf
  unsigned __int8 *v36; // rax
  __int64 v37; // r8
  int v38; // edx
  int v39; // ecx
  unsigned int v40; // ebp
  unsigned int v41; // ebx
  size_t v42; // r8
  const void *v43; // rdx
  const void *v44; // rcx
  int v45; // eax
  bool v46; // cc
  __int64 v47; // rax

  v2 = 0;
  LOBYTE(v3) = 0;
  switch ( *(_DWORD *)(a2[7] + 8LL) )
  {
    case 0x90:
      v2 = ValidateArgTypes(a1, a2[10], 1, "II");
      if ( v2 < 0 )
        return (unsigned int)v2;
      v47 = a2[10];
      if ( !*(_DWORD *)(v47 + 16) )
        goto LABEL_89;
      goto LABEL_87;
    case 0x91:
      v2 = ValidateArgTypes(a1, a2[10], 1, "II");
      if ( v2 < 0 )
        return (unsigned int)v2;
      v47 = a2[10];
      if ( *(_DWORD *)(v47 + 16) )
        goto LABEL_88;
LABEL_87:
      if ( *(_DWORD *)(v47 + 56) )
      {
LABEL_88:
        LOBYTE(v3) = 1;
        break;
      }
LABEL_89:
      LOBYTE(v3) = 0;
      break;
    case 0x93:
      v2 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v2 < 0 )
        return (unsigned int)v2;
      v33 = a2[10];
      v34 = *(_WORD *)(v33 + 2);
      if ( v34 == 1 )
      {
        if ( *(_WORD *)(v33 + 42) != 1 )
          goto LABEL_58;
        v35 = *(_DWORD *)(v33 + 16) == *(_DWORD *)(v33 + 56);
      }
      else if ( v34 == 2 )
      {
        if ( *(_WORD *)(v33 + 42) != 2 )
          goto LABEL_58;
        v36 = *(unsigned __int8 **)(v33 + 32);
        v37 = *(_QWORD *)(v33 + 72) - (_QWORD)v36;
        do
        {
          v38 = v36[v37];
          v39 = *v36 - v38;
          if ( v39 )
            break;
          ++v36;
        }
        while ( v38 );
        v35 = v39 == 0;
      }
      else
      {
        if ( v34 != 3 || *(_WORD *)(v33 + 42) != 3 )
          goto LABEL_58;
        v40 = *(_DWORD *)(v33 + 24);
        v41 = *(_DWORD *)(v33 + 64);
        v42 = v41;
        v43 = *(const void **)(v33 + 72);
        v44 = *(const void **)(v33 + 32);
        if ( v40 <= v41 )
          v42 = v40;
        v45 = memcmp(v44, v43, v42);
        v46 = v40 <= v41;
        if ( v40 < v41 )
        {
          if ( !v45 )
            v45 = -1;
          v46 = v40 <= v41;
        }
        if ( !v46 && !v45 )
          v45 = 1;
        v35 = v45 == 0;
      }
      LOBYTE(v3) = v35;
      break;
    case 0x94:
      v2 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v2 < 0 )
        return (unsigned int)v2;
      v20 = a2[10];
      v21 = *(_WORD *)(v20 + 2);
      if ( v21 != 1 )
      {
        if ( v21 == 2 )
        {
          if ( *(_WORD *)(v20 + 42) != 2 )
            goto LABEL_58;
          v22 = *(_DWORD *)(v20 + 64);
          if ( *(_DWORD *)(v20 + 24) <= v22 )
            v22 = *(_DWORD *)(v20 + 24);
          v23 = strncmp(*(const char **)(v20 + 32), *(const char **)(v20 + 72), v22);
          v24 = a2[10];
          v25 = *(_DWORD *)(v24 + 24);
          v26 = *(_DWORD *)(v24 + 64);
          v27 = v25 <= v26;
          if ( v25 < v26 )
          {
            if ( !v23 )
              v23 = -1;
            v27 = v25 <= v26;
          }
        }
        else
        {
          if ( v21 != 3 || *(_WORD *)(v20 + 42) != 3 )
            goto LABEL_58;
          v28 = *(_DWORD *)(v20 + 24);
          v29 = *(_DWORD *)(v20 + 64);
          v30 = v29;
          v31 = *(const void **)(v20 + 72);
          v32 = *(const void **)(v20 + 32);
          if ( v28 <= v29 )
            v30 = v28;
          v23 = memcmp(v32, v31, v30);
          v27 = v28 <= v29;
          if ( v28 < v29 )
          {
            if ( !v23 )
              v23 = -1;
            v27 = v28 <= v29;
          }
        }
        if ( !v27 && !v23 )
          v23 = 1;
        LOBYTE(v3) = v23 > 0;
        break;
      }
      if ( *(_WORD *)(v20 + 42) == 1 )
      {
        LOBYTE(v3) = *(_DWORD *)(v20 + 16) > *(_DWORD *)(v20 + 56);
        break;
      }
LABEL_58:
      v2 = -1073741811;
      LogError(-1073741811);
      AcpiDiagTraceAmlError(a1, -1073741811);
      PrintDebugMessage(238, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v2;
    case 0x95:
      v2 = ValidateArgTypes(a1, a2[10], 1, "DD");
      if ( v2 < 0 )
        return (unsigned int)v2;
      v6 = a2[10];
      v7 = *(_WORD *)(v6 + 2);
      if ( v7 == 1 )
      {
        if ( *(_WORD *)(v6 + 42) == 1 )
        {
          LOBYTE(v3) = *(_DWORD *)(v6 + 16) < *(_DWORD *)(v6 + 56);
          break;
        }
      }
      else if ( v7 == 2 )
      {
        if ( *(_WORD *)(v6 + 42) == 2 )
        {
          v8 = *(_DWORD *)(v6 + 64);
          if ( *(_DWORD *)(v6 + 24) <= v8 )
            v8 = *(_DWORD *)(v6 + 24);
          v9 = strncmp(*(const char **)(v6 + 32), *(const char **)(v6 + 72), v8);
          v10 = a2[10];
          v11 = v9;
          v12 = *(_DWORD *)(v10 + 24);
          v13 = *(_DWORD *)(v10 + 64);
          v14 = v12 <= v13;
          if ( v12 < v13 )
          {
            if ( !v11 )
              v11 = -1;
            v14 = v12 <= v13;
          }
          if ( !v14 && !v11 )
            v11 = 1;
          v3 = v11 >> 31;
          break;
        }
      }
      else if ( v7 == 3 && *(_WORD *)(v6 + 42) == 3 )
      {
        v15 = *(_DWORD *)(v6 + 24);
        v16 = *(_DWORD *)(v6 + 64);
        v17 = v16;
        if ( v15 <= v16 )
          v17 = v15;
        v18 = memcmp(*(const void **)(v6 + 32), *(const void **)(v6 + 72), v17);
        v19 = v15 <= v16;
        if ( v15 < v16 )
        {
          if ( !v18 )
            v18 = -1;
          v19 = v15 <= v16;
        }
        if ( !v19 && !v18 )
          v18 = 1;
        LOBYTE(v3) = v18 < 0;
        break;
      }
      goto LABEL_58;
  }
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v3 )
    IsCompatableDSDTRevision();
  *(_DWORD *)(a2[11] + 16LL) = -((_BYTE)v3 != 0);
  return (unsigned int)v2;
}
