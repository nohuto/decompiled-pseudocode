/*
 * XREFs of EmpParseTargetRuleStringIndexList @ 0x1408AAC84
 * Callers:
 *     EmpParseTargetRules @ 0x1408AAA58 (EmpParseTargetRules.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x1400C3294 (RtlStringCopyWorkerA_0.c)
 *     strchr @ 0x140189DB0 (strchr.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCharToInteger @ 0x14062AF20 (RtlCharToInteger.c)
 *     EmpInfParseGetStringIndexFromName @ 0x1408AAEDC (EmpInfParseGetStringIndexFromName.c)
 */

bool __fastcall EmpParseTargetRuleStringIndexList(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  unsigned int v7; // esi
  char v9; // di
  int v10; // r12d
  unsigned int v11; // ebp
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // r13
  const char *v15; // r15
  size_t *v16; // r8
  CHAR *PoolWithTag; // r14
  __int64 v18; // rcx
  int v20; // [rsp+30h] [rbp-58h]
  ULONG Value[21]; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+10h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]
  unsigned int v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v7 = 0;
  v9 = 0;
  Value[0] = 0;
  v10 = 0;
  v11 = 0;
  v23 = 0;
  v12 = *a7;
  v20 = *a7;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = v9 == 0;
          if ( v9 )
            return v13;
          if ( v10 )
            break;
          if ( *a2 != 123 )
            goto LABEL_29;
LABEL_7:
          ++a2;
          v10 = 1;
        }
        if ( v10 == 1 )
          break;
        if ( v10 != 2 )
        {
          if ( !*a2 && v11 == a3 && v7 == a4 )
          {
            *a7 = v11 + v12 + v7;
            return v9 == 0;
          }
          goto LABEL_29;
        }
        if ( *a2 == 46 )
          goto LABEL_7;
        if ( *a2 == 125 )
        {
LABEL_37:
          ++a2;
          v10 = 3;
        }
        else
        {
LABEL_29:
          v9 = 1;
        }
      }
      if ( *a2 == 125 )
        goto LABEL_37;
      if ( v11 > a3 || v7 > a4 || (v14 = v12 + v7 + v11, (unsigned int)v14 >= a6) )
      {
        v9 = 1;
        return v9 == 0;
      }
      v15 = a2;
      do
      {
        if ( strchr(".}", *a2) )
          break;
        ++a2;
      }
      while ( a2 );
      if ( a2 - v15 != -1 )
      {
        PoolWithTag = (CHAR *)ExAllocatePoolWithTag(PagedPool, a2 - v15 + 1, 0x74694D45u);
        if ( PoolWithTag )
        {
          if ( (unsigned __int64)(a2 - v15 + 1) <= 0x7FFFFFFF )
          {
            if ( (unsigned __int64)(a2 - v15) > 0x7FFFFFFE )
            {
              *PoolWithTag = 0;
            }
            else if ( RtlStringCopyWorkerA_0(PoolWithTag, a2 - v15 + 1, v16, v15, a2 - v15) >= 0 )
            {
              if ( v11 < v24 )
              {
                v7 = v23;
                if ( (int)EmpInfParseGetStringIndexFromName(a1, PoolWithTag, Value) < 0 )
                  goto LABEL_38;
                v18 = v11 + v20;
                ++v11;
                *(_DWORD *)(a5 + 4 * v18) = Value[0];
LABEL_23:
                v10 = 2;
              }
              else
              {
                v7 = v23;
                if ( RtlCharToInteger(PoolWithTag, 0x10u, Value) >= 0 )
                {
                  v7 = ++v23;
                  *(_DWORD *)(a5 + 4 * v14) = Value[0];
                  goto LABEL_23;
                }
LABEL_38:
                v9 = 1;
              }
              ExFreePoolWithTag(PoolWithTag, 0x74694D45u);
              goto LABEL_25;
            }
          }
        }
      }
      v7 = v23;
      v9 = 1;
LABEL_25:
      v12 = v20;
      a3 = v24;
      a4 = v25;
    }
  }
  return 0;
}
