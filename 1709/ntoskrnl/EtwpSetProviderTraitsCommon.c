/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x14048E848
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14048E6B0 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x1405ABE94 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strnlen @ 0x140160100 (strnlen.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     TraitsCompare @ 0x14048EA54 (TraitsCompare.c)
 *     EtwpGetProviderGroupFromTraits @ 0x14048EA94 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140492018 (EtwpReleaseProviderTraitsReference.c)
 *     AddDecodeGuidToSessions @ 0x1407520D8 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const char *P,
        unsigned int a6,
        struct _FAST_MUTEX *a7,
        unsigned __int64 *a8)
{
  char *v8; // rdi
  char *v10; // r12
  __int16 v11; // r15
  __int64 v12; // rdx
  bool v13; // zf
  _DWORD *v14; // r14
  bool v15; // bp
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  __int128 *ProviderGroupFromTraits; // rax
  __int128 v26; // [rsp+50h] [rbp-58h] BYREF

  v8 = (char *)P;
  v10 = (char *)P;
  v11 = 0;
  if ( a6 < 3 )
    goto LABEL_32;
  if ( *((unsigned __int16 *)P + 14) != a6 )
    goto LABEL_32;
  v12 = (unsigned int)strnlen(P + 30, a6 - 2) + 3;
  v13 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_32;
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      LODWORD(v12) = *(unsigned __int16 *)&P[v12 + 28] + (_DWORD)v12;
      v13 = (_DWORD)v12 == a6;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_7;
    }
LABEL_32:
    v19 = -1073741566;
    goto LABEL_24;
  }
LABEL_7:
  if ( !v13 )
    goto LABEL_32;
  v14 = P + 24;
  *(_QWORD *)P = 0LL;
  *((_QWORD *)P + 1) = 0LL;
  *((_QWORD *)P + 2) = 0LL;
  v15 = 1;
  *((_DWORD *)P + 6) = 1;
  ExAcquireFastMutex(a7);
  v16 = *a8;
  if ( !*a8 )
  {
    v15 = 0;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v17 = TraitsCompare(P, v16);
    if ( v17 > 0 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      if ( !v18 )
        goto LABEL_28;
      goto LABEL_12;
    }
    if ( v17 >= 0 )
    {
      v14 = (_DWORD *)(v16 + 24);
      v8 = (char *)v16;
      ++*(_DWORD *)(v16 + 24);
      goto LABEL_16;
    }
    v18 = *(_QWORD *)v16;
    if ( !*(_QWORD *)v16 )
      break;
LABEL_12:
    v16 = v18;
  }
  v15 = 0;
LABEL_28:
  RtlRbInsertNodeEx((__int64)a8, v16, v15, (unsigned __int64)P);
  v10 = 0LL;
  v15 = 0;
LABEL_16:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v15 )
    {
      --*v14;
    }
    else
    {
      RtlRbRemoveNode((__int64)a8, (unsigned __int64)v8);
      v10 = v8;
    }
    v19 = -1073741823;
  }
  else
  {
    v19 = 0;
  }
  KeReleaseGuardedMutex(a7);
  if ( !v19 )
  {
    if ( *((_WORD *)v8 + 14) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v11 = 1024;
LABEL_23:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_23;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
      if ( !ProviderGroupFromTraits )
        goto LABEL_23;
      v26 = *ProviderGroupFromTraits;
      v19 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v26, a1, a2, a3);
      if ( !v19 )
        goto LABEL_23;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_24:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v19;
}
