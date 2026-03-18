/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x1404F22A0
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1404F2520 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     EtwpEventWriteRegistrationStatus @ 0x14070DA48 (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // rdi
  NTSTATUS v7; // ebx
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  char *PoolWithTag; // rax
  char *v12; // r14
  _WORD *v13; // rbx
  unsigned __int16 v14; // ax
  _BYTE *v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int16 *i; // rbx
  int v18; // eax
  __int128 *ProviderGroupFromTraits; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  char *v25; // [rsp+48h] [rbp-50h]
  PVOID v26; // [rsp+50h] [rbp-48h]
  __int128 v27; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0LL;
  v25 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_40;
  v7 = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v6 = Object;
  v26 = Object;
  if ( v7 < 0 )
    goto LABEL_34;
  if ( (*((_BYTE *)Object + 98) & 8) != 0 )
  {
LABEL_40:
    v7 = -1073741811;
    goto LABEL_41;
  }
  if ( *((_QWORD *)Object + 13) )
  {
    v7 = -1073741823;
    goto LABEL_41;
  }
  v8 = *(_WORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v9 + v8;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a1 + 16) + 28LL, 0x54777445u);
  v12 = PoolWithTag;
  v25 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = PoolWithTag + 28;
    memmove(PoolWithTag + 28, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
    v14 = *(_WORD *)(a1 + 16);
    if ( v14 < 3u )
    {
      v7 = -1073741566;
    }
    else if ( *v13 == v14 )
    {
      v15 = v13 + 1;
      v16 = (unsigned __int64)&v12[v14 + 28];
      while ( *v15 )
      {
        if ( ++v15 == (_BYTE *)v16 )
        {
          v7 = -1073741566;
          goto LABEL_34;
        }
      }
      for ( i = (unsigned __int16 *)(v15 + 1); (unsigned __int64)i < v16; i = (unsigned __int16 *)((char *)i + *i) )
      {
        if ( (unsigned __int64)(i + 1) > v16 )
        {
          v7 = -1073741566;
          goto LABEL_34;
        }
      }
      if ( (unsigned __int64)i > v16 )
      {
        v7 = -1073741566;
      }
      else
      {
        v18 = EtwpSetProviderTraitsCommon(v6, v12, &EtwpProviderTraitsUmMutex, &EtwpProviderTraitsUmTree);
        v7 = v18;
        if ( v18 >= 0 && !v6[5] )
        {
          ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits(v6[13] + 28LL);
          if ( ProviderGroupFromTraits )
          {
            v27 = *ProviderGroupFromTraits;
            v7 = EtwpAddRegEntryToGroup((_DWORD)v6, (unsigned int)&v27, a1, a2, a3);
            if ( v7 )
              EtwpReleaseProviderTraitsReference((__int64)v6);
          }
        }
      }
    }
    else
    {
      v7 = -1073741566;
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_34:
  if ( !v7 )
  {
    *((_BYTE *)v6 + 102) = 1;
    goto LABEL_36;
  }
LABEL_41:
  if ( !v6 )
    return (unsigned int)v7;
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v22, v21, v23, v6, v7);
LABEL_36:
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
