/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x140591004
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x140590E6C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140603DF4 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strnlen @ 0x14018A290 (strnlen.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140590B80 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x140591264 (TraitsCompare.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405912A4 (EtwpGetProviderGroupFromTraits.c)
 *     AddDecodeGuidToSessions @ 0x1407B2F50 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  __int64 v8; // rdi
  __int16 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdx
  bool v13; // zf
  _DWORD *v14; // r14
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // bp
  char v18; // r15
  int v19; // eax
  unsigned __int64 v20; // rax
  __int128 *ProviderGroupFromTraits; // rax
  PVOID P; // [rsp+38h] [rbp-70h]
  __int128 v27; // [rsp+58h] [rbp-50h] BYREF

  v8 = (__int64)a5;
  v10 = 0;
  P = a5;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( *((unsigned __int16 *)a5 + 14) != a6 )
    goto LABEL_2;
  v12 = (unsigned int)strnlen((const char *)a5 + 30, a6 - 2) + 3;
  v13 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      LODWORD(v12) = *(unsigned __int16 *)((char *)a5 + v12 + 28) + (_DWORD)v12;
      v13 = (_DWORD)v12 == a6;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_8;
    }
LABEL_2:
    v11 = -1073741566;
    goto LABEL_39;
  }
LABEL_8:
  if ( !v13 )
    goto LABEL_2;
  v14 = a5 + 3;
  *a5 = 0LL;
  a5[1] = 0LL;
  a5[2] = 0LL;
  *((_DWORD *)a5 + 6) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v15 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
    {
LABEL_14:
      v15 = 0LL;
      v17 = 0;
      v18 = 0;
LABEL_15:
      RtlRbInsertNodeEx(a8, v15, v17, a5);
      P = 0LL;
      goto LABEL_16;
    }
    v16 = a8 ^ v15;
  }
  else
  {
    v16 = *(_QWORD *)a8;
    v15 = *(_QWORD *)a8;
  }
  if ( !v16 )
    goto LABEL_14;
  v17 = 0;
  v18 = 0;
  if ( !v15 )
    goto LABEL_28;
  while ( 1 )
  {
    v19 = TraitsCompare(a5, v15);
    if ( v19 > 0 )
    {
      v20 = *(_QWORD *)(v15 + 8);
      if ( !v20 )
      {
        v17 = 1;
        goto LABEL_15;
      }
      goto LABEL_25;
    }
    if ( v19 >= 0 )
      break;
    v20 = *(_QWORD *)v15;
    if ( !*(_QWORD *)v15 )
    {
      v17 = 0;
      goto LABEL_15;
    }
LABEL_25:
    v15 = v20;
  }
  v18 = 1;
LABEL_28:
  if ( !v18 )
    goto LABEL_15;
  v14 = (_DWORD *)(v15 + 24);
  v8 = v15;
  ++*(_DWORD *)(v15 + 24);
LABEL_16:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), v8, 0LL) )
  {
    if ( v18 )
    {
      --*v14;
    }
    else
    {
      RtlRbRemoveNode(a8, v8);
      P = (PVOID)v8;
    }
    v11 = -1073741823;
  }
  else
  {
    v11 = 0;
  }
  KeReleaseGuardedMutex(FastMutex);
  if ( !v11 )
  {
    if ( *(_WORD *)(v8 + 28) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v10 = 1024;
LABEL_38:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v10 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_38;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
      if ( !ProviderGroupFromTraits )
        goto LABEL_38;
      v27 = *ProviderGroupFromTraits;
      v11 = EtwpAddRegEntryToGroup(a4, &v27, a1, a2, a3);
      if ( !v11 )
        goto LABEL_38;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_39:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v11;
}
