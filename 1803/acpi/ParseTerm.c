/*
 * XREFs of ParseTerm @ 0x1C0056890
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintIndent @ 0x1C004917C (PrintIndent.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 *     ParsePackageLen @ 0x1C0055FE8 (ParsePackageLen.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  const void **v13; // r14
  unsigned __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // rax
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 (__fastcall *v21)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // r11
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      v11 = *(_QWORD *)(a2 + 56);
      v12 = *(_DWORD *)(v11 + 8);
      if ( v12 == 18 || v12 == 19 )
      {
        ++dword_1C00676B4;
        PrintIndent(a1);
        v11 = *(_QWORD *)(a2 + 56);
      }
      ConPrintf("%s", *(const char **)v11);
      if ( *(_DWORD *)(a2 + 76) )
        ConPrintf("(");
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL) & 1) != 0 )
    {
      v13 = (const void **)(a2 + 40);
      ParsePackageLen((_QWORD *)(a1 + 120), (_QWORD *)(a2 + 40));
      if ( (gOverrideFlags & 4) == 0 )
      {
        v14 = *(_QWORD *)(a2 + 48);
        if ( v14 )
        {
          if ( (unsigned __int64)*v13 > v14 )
          {
            v3 = -1072431089;
            LogError(-1072431089);
            AcpiDiagTraceAmlError(a1, -1072431089);
            PrintDebugMessage(143, *v13, *(const void **)(a2 + 48), 0LL, 0LL);
            return v3;
          }
        }
      }
    }
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_22:
    v15 = *(_DWORD *)(a2 + 72);
    if ( v15 >= *(_DWORD *)(a2 + 76) )
      goto LABEL_29;
    while ( 1 )
    {
      *(_DWORD *)(a2 + 72) = v15 + 1;
      if ( (gDebugger & 0xD0) != 0 && v15 )
        ConPrintf(",");
      v3 = ParseArg(
             a1,
             *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL) + v15),
             *(_QWORD *)(a2 + 80) + 40LL * v15,
             *(_QWORD *)(a2 + 48));
      if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
        return v3;
      v15 = *(_DWORD *)(a2 + 72);
      if ( v15 >= *(_DWORD *)(a2 + 76) )
      {
LABEL_29:
        if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
        v15 = *(_DWORD *)(a2 + 72);
        if ( v15 >= *(_DWORD *)(a2 + 76) )
        {
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_33;
        }
      }
    }
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          return v3;
        goto LABEL_54;
      }
LABEL_43:
      ++*(_DWORD *)(a2 + 16);
      if ( (gDebugger & 0xD0) != 0 )
      {
        v19 = *(_QWORD *)(a2 + 56);
        if ( (unsigned int)(*(_DWORD *)(v19 + 8) - 17) > 2 && *(_DWORD *)(v19 + 24) == 4 )
        {
          ConPrintf("=");
          PrintObject(*(_QWORD *)(a2 + 88));
        }
      }
      if ( (gDebugger & 0x40) != 0 )
      {
        _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
        AMLIDebugger();
        goto LABEL_54;
      }
      v20 = *(_QWORD *)(a2 + 56);
      v21 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(v20 + 32);
      if ( v21 )
      {
        if ( *(int *)(v20 + 28) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(v20 + 32))(
            1LL,
            *(unsigned int *)(v20 + 8),
            *(_QWORD *)(a2 + 64) + 120LL,
            *(unsigned int *)(v20 + 40));
        }
        else
        {
          v3 = v21(12LL, 2LL, *(unsigned int *)(v20 + 8), *(_QWORD *)(a2 + 64) + 120LL, *(_DWORD *)(v20 + 40), a1);
          if ( v3 == 259 )
            return 32772;
        }
      }
LABEL_54:
      if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
        --dword_1C00676B4;
      v22 = *(_QWORD *)(a2 + 80);
      if ( v22 )
      {
        FreeDataBuffs(v22, *(_DWORD *)(a2 + 76));
        HeapFree(*(_QWORD *)(a2 + 80));
      }
      v23 = *(_QWORD *)(a2 + 64);
      if ( v23 )
      {
        DereferenceObjectEx(v23);
        *(_QWORD *)(a2 + 64) = 0LL;
      }
      v24 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(v24 + 8);
      HeapFree(v24);
      return v3;
    }
  }
  else
  {
LABEL_33:
    v16 = *(_QWORD *)(a2 + 56);
    ++*(_DWORD *)(a2 + 16);
    if ( *(int *)(v16 + 28) < 0 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(v16 + 32);
      if ( v17 )
      {
        v3 = v17(12LL, 1LL, *(unsigned int *)(v16 + 8), *(_QWORD *)(a2 + 64) + 120LL, *(_DWORD *)(v16 + 40), a1);
        if ( v3 == 259 )
          return 32772;
      }
    }
  }
  ++*(_DWORD *)(a2 + 16);
  if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 76) )
    ConPrintf(")");
  v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 56) + 48LL);
  if ( !v18 )
    goto LABEL_43;
  v3 = v18(a1, a2);
  if ( !v3 && a2 == *(_QWORD *)(a1 + 416) )
    goto LABEL_43;
  return v3;
}
