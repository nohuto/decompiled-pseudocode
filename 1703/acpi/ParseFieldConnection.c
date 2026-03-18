/*
 * XREFs of ParseFieldConnection @ 0x1C00626A0
 * Callers:
 *     ParseField @ 0x1C0018080 (ParseField.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     ParseName @ 0x1C00143AC (ParseName.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     ParseIntObj @ 0x1C001B1D0 (ParseIntObj.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     ParsePackageLen @ 0x1C00629FC (ParsePackageLen.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, __int64 *a2)
{
  unsigned __int64 *v2; // rsi
  _BYTE *v3; // rax
  unsigned __int64 v6; // rdi
  int v7; // r12d
  _WORD *v8; // r13
  int v9; // eax
  _WORD *v10; // rbp
  const void *v11; // rbx
  const void *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r8
  int v15; // eax
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  const void *v20; // rdx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v25; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v26[16]; // [rsp+38h] [rbp-170h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-160h]
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  v2 = (unsigned __int64 *)(a1 + 120);
  v3 = *(_BYTE **)(a1 + 120);
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( *v3 == 17 )
  {
    *v2 = (unsigned __int64)(v3 + 1);
    ParsePackageLen(a1 + 120, &v25);
    v9 = ParseIntObj(a1, (_WORD **)v2, (__int64)v26, 0);
    v10 = (_WORD *)v25;
    v6 = v27;
    v11 = (const void *)v9;
    if ( v9 )
    {
      LogError(v9);
      AcpiDiagTraceAmlError(a1, (int)v11);
      v12 = v11;
      v13 = 40;
      v14 = 0LL;
    }
    else
    {
      if ( *v2 <= v25 && v27 <= (int)v25 - *(_DWORD *)v2 + 1 )
        goto LABEL_8;
      LODWORD(v11) = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v12 = (const void *)v6;
      v14 = (unsigned int)((_DWORD)v10 - *(_DWORD *)v2);
      v13 = 42;
    }
    PrintDebugMessage(v13, v12, (const void *)v14, 0LL, 0LL);
LABEL_8:
    v8 = (_WORD *)*v2;
    v7 = 2;
    *v2 = (unsigned __int64)v10;
    goto LABEL_23;
  }
  v15 = ParseName(a1, (char **)(a1 + 120), Src);
  v11 = (const void *)v15;
  if ( v15 )
  {
    LogError(v15);
    AcpiDiagTraceAmlError(a1, (int)v11);
    PrintDebugMessage(41, v11, 0LL, 0LL, 0LL);
  }
  else
  {
    v16 = Src;
    v17 = 256LL;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v17;
    }
    while ( v17 );
    LODWORD(v11) = v17 == 0 ? 0xC000000D : 0;
    if ( v17 )
      v18 = 256 - v17;
    else
      v18 = 0LL;
    if ( v17 )
      v6 = v18;
    if ( v6 > 0x100 )
      v6 = 256LL;
    else
      ++v6;
    v7 = 1;
  }
LABEL_23:
  if ( (_DWORD)v11 )
    return (unsigned int)v11;
  v19 = *a2;
  if ( *a2 )
  {
    if ( *(unsigned int *)(v19 + 8) >= v6 )
      goto LABEL_33;
    HeapFree(v19);
    *a2 = 0LL;
  }
  if ( v6 > 0xFFFFFFEF )
  {
    LODWORD(v11) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v20 = (const void *)v6;
    v21 = 39;
LABEL_31:
    PrintDebugMessage(v21, v20, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v22 = HeapAlloc(*(_QWORD *)(a1 + 320), 1314407240, (int)v6 + 16);
  *a2 = v22;
  if ( !v22 )
  {
    LODWORD(v11) = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v20 = 0LL;
    v21 = 126;
    goto LABEL_31;
  }
  *(_DWORD *)(v22 + 8) = v6;
LABEL_33:
  if ( *a2 )
  {
    *(_DWORD *)(*a2 + 12) = v6;
    *(_DWORD *)*a2 = v7;
    v23 = *a2;
    if ( v7 == 2 )
    {
      memmove((void *)(v23 + 16), v8, *(unsigned int *)(v23 + 12));
    }
    else
    {
      memmove((void *)(v23 + 16), Src, (unsigned int)(*(_DWORD *)(v23 + 12) - 1));
      *(_BYTE *)((unsigned int)(*(_DWORD *)(*a2 + 12) - 1) + *a2 + 16) = 0;
    }
  }
  return (unsigned int)v11;
}
