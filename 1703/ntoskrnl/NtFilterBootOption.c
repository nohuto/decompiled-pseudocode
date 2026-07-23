/*
 * XREFs of NtFilterBootOption @ 0x1406F79EC
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400674A0 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406F8418 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  ULONG v6; // esi
  FILTER_BOOT_OPTION_OPERATION v7; // r12d
  NTSTATUS v8; // ebx
  ULONG v9; // r15d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // ecx
  unsigned __int16 v14; // r9
  int v15; // eax
  __int16 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  BOOLEAN IsMember[4]; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v23[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = ObjectType;
  v7 = FilterOperation;
  P = 0LL;
  IsMember[0] = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember[0] && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0]) )
  {
    v8 = -1073741790;
    goto LABEL_58;
  }
  v8 = 0;
  v21 = 0;
  if ( !qword_140387F50 )
  {
    v8 = -2143092730;
    goto LABEL_58;
  }
  if ( v7 )
  {
    if ( v7 == FilterBootOptionOperationSetElement )
    {
      if ( v6 )
      {
        if ( ElementType )
        {
          if ( Data )
          {
            v9 = DataSize;
            if ( DataSize )
            {
              v11 = dword_14038C438;
              if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
              {
LABEL_21:
                v8 = 0;
                goto LABEL_58;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)Data + DataSize > 0x7FFFFFFF0000LL || (char *)Data + DataSize < Data )
                  MEMORY[0x7FFFFFFF0000] = 0;
                if ( DataSize > 8 )
                {
                  P = ExAllocatePoolWithTag(PagedPool, DataSize, 0x62536553u);
                  if ( !P )
                  {
                    v8 = -1073741801;
                    v21 = -1073741801;
                    goto LABEL_58;
                  }
                  v12 = P;
                  memmove(P, Data, DataSize);
                  Data = v12;
                  v6 = ObjectType;
                }
                else
                {
                  memmove(v23, Data, DataSize);
                  Data = v23;
                }
                v8 = v21;
                v7 = FilterOperation;
              }
              else
              {
                v8 = v21;
              }
              goto LABEL_33;
            }
          }
        }
      }
    }
    else
    {
      if ( v7 != FilterBootOptionOperationDeleteElement )
      {
        v8 = -1073741585;
        goto LABEL_58;
      }
      if ( v6 )
      {
        if ( ElementType )
        {
          if ( !Data )
          {
            v9 = DataSize;
            if ( !DataSize )
            {
              v10 = dword_14038C438;
              if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
                goto LABEL_21;
LABEL_33:
              v13 = 0;
              v14 = *((_WORD *)qword_140387F50 + 18);
              if ( v14 )
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)(qword_14038C448 + 12LL * v13 + 4) == ElementType )
                  {
                    v15 = *(_DWORD *)(qword_14038C448 + 12LL * v13);
                    if ( !v15 || v15 == v6 )
                    {
                      v16 = *(_WORD *)(*(unsigned int *)(qword_14038C448 + 12LL * v13 + 8) + qword_14038C450);
                      if ( ((v16 & 0x20) == 0 || (dword_14036EFEC & 4) != 0)
                        && ((v16 & 0x40) == 0 || (dword_14036EFEC & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  if ( ++v13 >= v14 )
                    goto LABEL_58;
                }
                v17 = 3LL * v13;
                if ( v7 == FilterBootOptionOperationSetElement )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_14038C448 + 4 * v17, Data, v9);
                }
                else
                {
                  v8 = 0;
                  v18 = *(unsigned int *)(qword_14038C448 + 4 * v17 + 8);
                  if ( (*(_BYTE *)(v18 + qword_14038C450) & 0x1F) != 8 || *(_WORD *)(v18 + qword_14038C450 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_48:
    v8 = -1073741811;
    goto LABEL_58;
  }
  if ( v6 || ElementType || Data || DataSize )
    goto LABEL_48;
  if ( !_InterlockedCompareExchange(&dword_14038C43C, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd((unsigned int)v7);
    v21 = v8;
    if ( v8 < 0 )
      goto LABEL_58;
    _InterlockedExchange(&dword_14038C43C, 1);
  }
  v8 = v21;
LABEL_58:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
