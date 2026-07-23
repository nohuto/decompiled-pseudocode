/*
 * XREFs of NtFilterBootOption @ 0x14072F5EC
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400FA8F0 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x14072FA34 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14072FFF0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  ULONG v6; // esi
  NTSTATUS v8; // edi
  ULONG v9; // r15d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // r9d
  unsigned __int16 v14; // r12
  int v15; // eax
  __int64 v16; // r10
  __int16 v17; // cx
  BOOLEAN IsMember[4]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v22[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = ObjectType;
  P = 0LL;
  IsMember[0] = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember[0] && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0]) )
  {
    v8 = -1073741790;
    goto LABEL_56;
  }
  if ( !qword_1403A3388 )
  {
    v8 = -2143092730;
    goto LABEL_56;
  }
  if ( FilterOperation )
  {
    if ( FilterOperation == FilterBootOptionOperationSetElement )
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
              v11 = dword_1403A8070;
              if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
              {
LABEL_22:
                v8 = 0;
                goto LABEL_56;
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
                    v20 = -1073741801;
                    goto LABEL_56;
                  }
                  v12 = P;
                  memmove(P, Data, DataSize);
                  Data = v12;
                  v6 = ObjectType;
                }
                else
                {
                  memmove(v22, Data, DataSize);
                  Data = v22;
                }
              }
              goto LABEL_32;
            }
          }
        }
      }
    }
    else
    {
      if ( FilterOperation != FilterBootOptionOperationDeleteElement )
      {
        v8 = -1073741585;
        goto LABEL_56;
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
              v10 = dword_1403A8070;
              if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
                goto LABEL_22;
LABEL_32:
              v13 = 0;
              v14 = *((_WORD *)qword_1403A3388 + 18);
              v8 = 0;
              if ( v14 )
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)(qword_1403A8068 + 12LL * v13 + 4) == ElementType )
                  {
                    v15 = *(_DWORD *)(qword_1403A8068 + 12LL * v13);
                    if ( !v15 || v15 == v6 )
                    {
                      v16 = *(unsigned int *)(qword_1403A8068 + 12LL * v13 + 8);
                      v17 = *(_WORD *)(v16 + qword_1403A8078);
                      if ( ((v17 & 0x20) == 0 || (dword_14038D6FC & 4) != 0)
                        && ((v17 & 0x40) == 0 || (dword_14038D6FC & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  if ( ++v13 >= v14 )
                    goto LABEL_22;
                }
                if ( FilterOperation == FilterBootOptionOperationSetElement )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_1403A8068 + 12LL * v13, Data, v9);
                }
                else
                {
                  v8 = 0;
                  if ( (v17 & 0x1F) != 8 || *(_WORD *)(v16 + qword_1403A8078 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_56;
            }
          }
        }
      }
    }
LABEL_55:
    v8 = -1073741811;
    goto LABEL_56;
  }
  if ( v6 || ElementType || Data || DataSize )
    goto LABEL_55;
  v20 = 0;
  if ( !_InterlockedCompareExchange(&dword_1403A8060, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd((unsigned int)FilterOperation);
    v20 = v8;
    if ( v8 < 0 )
      goto LABEL_56;
    _InterlockedExchange(&dword_1403A8060, 1);
  }
  v8 = v20;
LABEL_56:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
