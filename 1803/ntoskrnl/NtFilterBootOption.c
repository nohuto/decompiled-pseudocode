/*
 * XREFs of NtFilterBootOption @ 0x14079357C
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x14009F580 (RtlCheckTokenMembership.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140793F60 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
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
  NTSTATUS v8; // edi
  ULONG v9; // r15d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // edx
  _DWORD *v14; // r9
  __int64 v15; // r8
  __int16 v16; // cx
  BOOLEAN IsMember[4]; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v21[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = ObjectType;
  v7 = FilterOperation;
  P = 0LL;
  IsMember[0] = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember[0] && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0]) )
  {
    v8 = -1073741790;
    goto LABEL_57;
  }
  if ( !qword_1403E98E8 )
  {
    v8 = -2143092730;
    goto LABEL_57;
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
              v11 = dword_1403EC8C8;
              if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
              {
LABEL_22:
                v8 = 0;
                goto LABEL_57;
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
                    v19 = -1073741801;
                    goto LABEL_57;
                  }
                  v12 = P;
                  memmove(P, Data, DataSize);
                  Data = v12;
                  v6 = ObjectType;
                }
                else
                {
                  memmove(v21, Data, DataSize);
                  Data = v21;
                }
                v7 = FilterOperation;
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
        goto LABEL_57;
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
              v10 = dword_1403EC8C8;
              if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
                goto LABEL_22;
LABEL_33:
              v13 = 0;
              v8 = 0;
              if ( *((_WORD *)qword_1403E98E8 + 18) )
              {
                while ( 1 )
                {
                  v14 = (_DWORD *)(qword_1403EC8D0 + 12LL * v13);
                  if ( v14[1] == ElementType && (!*v14 || *v14 == v6) )
                  {
                    v15 = (unsigned int)v14[2];
                    v16 = *(_WORD *)(v15 + qword_1403EC8E8);
                    if ( ((v16 & 0x20) == 0 || (dword_1403D1664 & 4) != 0)
                      && ((v16 & 0x40) == 0 || (dword_1403D1664 & 0x10) != 0) )
                    {
                      break;
                    }
                  }
                  if ( ++v13 >= *((unsigned __int16 *)qword_1403E98E8 + 18) )
                    goto LABEL_22;
                }
                if ( v7 == FilterBootOptionOperationSetElement )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(v14, Data, v9);
                }
                else
                {
                  v8 = 0;
                  if ( (v16 & 0x1F) != 8 || *(_WORD *)(v15 + qword_1403EC8E8 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_57;
            }
          }
        }
      }
    }
LABEL_56:
    v8 = -1073741811;
    goto LABEL_57;
  }
  if ( v6 || ElementType || Data || DataSize )
    goto LABEL_56;
  v19 = 0;
  if ( !_InterlockedCompareExchange(&dword_1403EC8D8, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd((unsigned int)v7);
    v19 = v8;
    if ( v8 < 0 )
      goto LABEL_57;
    _InterlockedExchange(&dword_1403EC8D8, 1);
  }
  v8 = v19;
LABEL_57:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
