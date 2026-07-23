/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x1405892F4
 * Callers:
 *     EtwSetInformation @ 0x1405892A0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1404F2520 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpEventWriteRegistrationStatus @ 0x14070DA48 (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, const void *a2, unsigned __int16 a3)
{
  char *PoolWithTag; // rax
  signed __int64 v7; // rbx
  unsigned int v8; // ebx
  char *ProviderGroupFromTraits; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
  {
    v8 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 104) )
  {
    v8 = -1073741823;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, a3 + 28LL, 0x54777445u);
    v7 = (signed __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag + 28, a2, a3);
      v8 = EtwpSetProviderTraitsCommon(a1, v7, &EtwpProviderTraitsKmMutex, (_RTL_RB_TREE *)&EtwpProviderTraitsKmTree);
      if ( !*(_QWORD *)(a1 + 40) )
      {
        ProviderGroupFromTraits = EtwpGetProviderGroupFromTraits((const char *)(*(_QWORD *)(a1 + 104) + 28LL));
        if ( ProviderGroupFromTraits )
        {
          v15 = *(_OWORD *)ProviderGroupFromTraits;
          v8 = EtwpAddRegEntryToGroup(a1, &v15, 0LL, 0, &v14);
          if ( !v8 )
          {
LABEL_7:
            *(_BYTE *)(a1 + 102) = 1;
            return v8;
          }
          EtwpReleaseProviderTraitsReference(a1);
        }
      }
      if ( !v8 )
        goto LABEL_7;
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v12, v11, v13, a1, v8);
  return v8;
}
