/*
 * XREFs of ParseCall @ 0x1C0054820
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     PerformNativeMethodCall @ 0x1C0045688 (PerformNativeMethodCall.c)
 *     FreeObjOwner @ 0x1C004691C (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x1C0046A88 (FreeOwnedObjects.c)
 *     MoveObjData @ 0x1C0047124 (MoveObjData.c)
 *     NewObjOwner @ 0x1C00472E8 (NewObjOwner.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     PushScope @ 0x1C004E73C (PushScope.c)
 *     ReleaseASLMutex @ 0x1C004EF98 (ReleaseASLMutex.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 */

__int64 __fastcall ParseCall(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  __int64 v16; // r8
  struct _EX_RUNDOWN_REF *v17; // rcx
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  struct _EX_RUNDOWN_REF *v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _OWORD v31[3]; // [rsp+40h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+88h] [rbp+10h] BYREF

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = 0LL;
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("(");
    goto LABEL_17;
  }
  v9 = v6 - 1;
  if ( !v9 )
  {
LABEL_17:
    v14 = *(_DWORD *)(a2 + 56);
    if ( v14 >= *(_DWORD *)(a2 + 60) )
      goto LABEL_24;
    while ( 1 )
    {
      v15 = v14;
      if ( (gDebugger & 0xD0) != 0 && v14 )
      {
        ConPrintf(",", v14);
        v15 = *(_DWORD *)(a2 + 56);
      }
      v16 = *(_QWORD *)(a2 + 64) + 40LL * v15;
      *(_DWORD *)(a2 + 56) = v15 + 1;
      v3 = ParseArg(a1, 67, v16, 0LL);
      if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
        return v3;
      v14 = *(_DWORD *)(a2 + 56);
      if ( v14 >= *(_DWORD *)(a2 + 60) )
      {
LABEL_24:
        if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
        v14 = *(_DWORD *)(a2 + 56);
        if ( v14 >= *(_DWORD *)(a2 + 60) )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf(")");
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_30;
        }
      }
    }
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
            return v3;
          goto LABEL_62;
        }
LABEL_40:
        v21 = 0;
        v22 = *(_DWORD *)(a2 + 16) + 1;
        *(_DWORD *)(a2 + 16) = v22;
        if ( v3 != 32770 )
          v21 = v3;
        v3 = v21;
        if ( *(_DWORD *)a2 == 1280065859 && (v22 & 0x80000) != 0 )
        {
          if ( (v22 & 0x40000) != 0 )
          {
            DupObjData(*(_QWORD *)(a1 + 320), (__int64)v31, *(_QWORD *)(a2 + 392));
            PerformNativeMethodCall(2, a1, a2);
            MoveObjData(*(_OWORD **)(a2 + 392), v31);
LABEL_55:
            *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 40);
            *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
          }
        }
        else
        {
          v26 = *(_BYTE **)(a2 + 392);
          if ( (*v26 & 1) != 0 )
          {
            DupObjData(*(_QWORD *)(a1 + 320), (__int64)v31, (__int64)v26);
            FreeDataBuffs(*(_QWORD *)(a2 + 392), 1u);
            MoveObjData(*(_OWORD **)(a2 + 392), v31);
          }
          FreeDataBuffs(a2 + 72, 8u);
          if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
          {
            FreeOwnedObjects(*(_QWORD **)(a1 + 88));
            FreeObjOwner(0LL, *(struct _EX_RUNDOWN_REF **)(a1 + 88));
            goto LABEL_55;
          }
          if ( !*(_QWORD *)(a2 + 48) )
            goto LABEL_55;
        }
        v27 = *(_QWORD *)(a2 + 48);
        if ( v27 )
        {
          DereferenceObjectEx(v27);
          *(_QWORD *)(a2 + 48) = 0LL;
        }
        v28 = *(_QWORD *)(a2 + 64);
        if ( v28 )
        {
          FreeDataBuffs(v28, *(_DWORD *)(a2 + 60));
          HeapFree(*(_QWORD *)(a2 + 64));
        }
        if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
          ReleaseASLMutex(a1, v8, 0);
LABEL_62:
        v29 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v29 + 8);
        HeapFree(v29);
        return v3;
      }
LABEL_37:
      v20 = *(_DWORD *)(a2 + 16) + 1;
      v19 = *(_DWORD *)a2 == 1280065859;
      *(_DWORD *)(a2 + 16) = v20;
      if ( v19 && (v20 & 0x80000) != 0 )
        v3 = PerformNativeMethodCall(1, a1, a2);
      goto LABEL_40;
    }
  }
  else
  {
LABEL_30:
    ++*(_DWORD *)(a2 + 16);
    if ( !v8 )
    {
      v3 = -1072431101;
      LogError(-1072431101);
      AcpiDiagTraceAmlError(a1, -1072431101);
      PrintDebugMessage(123, 0LL, 0LL, 0LL, 0LL);
      return v3;
    }
    if ( (*(_BYTE *)(v8 + 193) & 8) != 0 )
    {
      v3 = PushFrame(a1, 1179730753, 64LL, (__int64)ParseAcquire, (__int64 *)&v32);
      if ( !v3 )
      {
        v17 = v32;
        v32[4].Count = v8;
        LOWORD(v17[5].Count) = -1;
        v17[6].Count = *(unsigned __int64 *)(a2 + 392);
      }
      return v3;
    }
  }
  v18 = *(_DWORD *)(a2 + 16) + 1;
  v19 = *(_DWORD *)a2 == 1280065859;
  *(_DWORD *)(a2 + 16) = v18;
  if ( v19 && (v18 & 0x80000) != 0 )
  {
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = a2;
    *(_DWORD *)(a2 + 16) |= 0x40000u;
    v3 = PerformNativeMethodCall(0, a1, a2);
    if ( v3 != 32772 )
      goto LABEL_37;
  }
  else
  {
    if ( (v18 & 0x10000) != 0 )
      *(_DWORD *)(a2 + 16) = v18 | 0x20000;
    v3 = NewObjOwner(*(_QWORD *)(a1 + 320), &v32);
    if ( v3 )
      goto LABEL_37;
    v23 = v32;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 88);
    v24 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = v23;
    *(_QWORD *)(a2 + 32) = v24;
    *(_QWORD *)(a1 + 96) = a2;
    v25 = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 16) |= 0x40000u;
    return (unsigned int)PushScope(
                           (_QWORD *)a1,
                           v8 + 194,
                           *(_QWORD *)(v25 + 96) + *(unsigned int *)(v25 + 88),
                           *(_QWORD *)(a1 + 120),
                           v25,
                           (__int64)v23,
                           *(_QWORD *)(a1 + 320),
                           *(_QWORD *)(a2 + 392));
  }
  return v3;
}
