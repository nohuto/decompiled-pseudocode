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

__int64 __fastcall NtFilterBootOption(unsigned int a1, int a2, unsigned int a3, _BYTE *a4, size_t Size)
{
  int v6; // esi
  int v8; // edi
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r9d
  unsigned __int16 v13; // r12
  int v14; // eax
  __int64 v15; // r10
  __int16 v16; // cx
  int v18; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v20[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
    v8 = -1073741790;
    goto LABEL_54;
  }
  if ( !qword_1403A3388 )
  {
    v8 = -2143092730;
    goto LABEL_54;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
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
              v11 = dword_1403A8070;
              if ( !_bittest(&v11, HIBYTE(a3) & 0xF) )
              {
LABEL_20:
                v8 = 0;
                goto LABEL_54;
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
                    goto LABEL_54;
                  }
                  memmove(P, a4, (unsigned int)Size);
                  a4 = P;
                  v6 = a2;
                }
                else
                {
                  memmove(v20, a4, (unsigned int)Size);
                  a4 = v20;
                }
              }
              goto LABEL_30;
            }
          }
        }
      }
    }
    else
    {
      if ( a1 != 2 )
      {
        v8 = -1073741585;
        goto LABEL_54;
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
              v10 = dword_1403A8070;
              if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
                goto LABEL_20;
LABEL_30:
              v12 = 0;
              v13 = *((_WORD *)qword_1403A3388 + 18);
              v8 = 0;
              if ( v13 )
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)(qword_1403A8068 + 12LL * v12 + 4) == a3 )
                  {
                    v14 = *(_DWORD *)(qword_1403A8068 + 12LL * v12);
                    if ( !v14 || v14 == v6 )
                    {
                      v15 = *(unsigned int *)(qword_1403A8068 + 12LL * v12 + 8);
                      v16 = *(_WORD *)(v15 + qword_1403A8078);
                      if ( ((v16 & 0x20) == 0 || (dword_14038D6FC & 4) != 0)
                        && ((v16 & 0x40) == 0 || (dword_14038D6FC & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  if ( ++v12 >= v13 )
                    goto LABEL_20;
                }
                if ( a1 == 1 )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_1403A8068 + 12LL * v12, a4, v9);
                }
                else
                {
                  v8 = 0;
                  if ( (v16 & 0x1F) != 8 || *(_WORD *)(v15 + qword_1403A8078 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_54;
            }
          }
        }
      }
    }
LABEL_53:
    v8 = -1073741811;
    goto LABEL_54;
  }
  if ( v6 || a3 || a4 || (_DWORD)Size )
    goto LABEL_53;
  v18 = 0;
  if ( !_InterlockedCompareExchange(&dword_1403A8060, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd(a1);
    v18 = v8;
    if ( v8 < 0 )
      goto LABEL_54;
    _InterlockedExchange(&dword_1403A8060, 1);
  }
  v8 = v18;
LABEL_54:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
