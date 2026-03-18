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

__int64 __fastcall NtFilterBootOption(unsigned int a1, int a2, unsigned int a3, _BYTE *a4, size_t Size)
{
  int v6; // esi
  unsigned int v7; // r12d
  int v8; // ebx
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // eax
  _BYTE *v12; // rsi
  unsigned int v13; // ecx
  unsigned __int16 v14; // r9
  int v15; // eax
  __int16 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  BOOLEAN v20[4]; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v23[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  v7 = a1;
  P = 0LL;
  v20[0] = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !v20[0] && ((int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid, v20) < 0 || !v20[0]) )
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
    if ( v7 == 1 )
    {
      if ( v6 )
      {
        if ( a3 )
        {
          if ( a4 )
          {
            v9 = Size;
            if ( (_DWORD)Size )
            {
              v11 = dword_14038C438;
              if ( !_bittest(&v11, HIBYTE(a3) & 0xF) )
              {
LABEL_21:
                v8 = 0;
                goto LABEL_58;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)&a4[(unsigned int)Size] > 0x7FFFFFFF0000LL || &a4[(unsigned int)Size] < a4 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                if ( (unsigned int)Size > 8 )
                {
                  P = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x62536553u);
                  if ( !P )
                  {
                    v8 = -1073741801;
                    v21 = -1073741801;
                    goto LABEL_58;
                  }
                  v12 = P;
                  memmove(P, a4, (unsigned int)Size);
                  a4 = v12;
                  v6 = a2;
                }
                else
                {
                  memmove(v23, a4, (unsigned int)Size);
                  a4 = v23;
                }
                v8 = v21;
                v7 = a1;
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
      if ( v7 != 2 )
      {
        v8 = -1073741585;
        goto LABEL_58;
      }
      if ( v6 )
      {
        if ( a3 )
        {
          if ( !a4 )
          {
            v9 = Size;
            if ( !(_DWORD)Size )
            {
              v10 = dword_14038C438;
              if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
                goto LABEL_21;
LABEL_33:
              v13 = 0;
              v14 = *((_WORD *)qword_140387F50 + 18);
              if ( v14 )
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)(qword_14038C448 + 12LL * v13 + 4) == a3 )
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
                if ( v7 == 1 )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_14038C448 + 4 * v17, a4, v9);
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
  if ( v6 || a3 || a4 || (_DWORD)Size )
    goto LABEL_48;
  if ( !_InterlockedCompareExchange(&dword_14038C43C, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd(v7);
    v21 = v8;
    if ( v8 < 0 )
      goto LABEL_58;
    _InterlockedExchange(&dword_14038C43C, 1);
  }
  v8 = v21;
LABEL_58:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
