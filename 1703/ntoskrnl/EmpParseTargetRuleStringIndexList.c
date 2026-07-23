/*
 * XREFs of EmpParseTargetRuleStringIndexList @ 0x1408066F4
 * Callers:
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x140154C5C (RtlStringCopyWorkerA_0.c)
 *     strchr @ 0x14016B290 (strchr.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCharToInteger @ 0x1405A3680 (RtlCharToInteger.c)
 *     EmpInfParseGetStringIndexFromName @ 0x14080693C (EmpInfParseGetStringIndexFromName.c)
 */

char __fastcall EmpParseTargetRuleStringIndexList(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  unsigned int v7; // esi
  char v9; // bp
  int v10; // r13d
  unsigned int v11; // r15d
  int v12; // ecx
  char v13; // bl
  const char *v14; // r12
  size_t *v15; // r8
  CHAR *PoolWithTag; // r14
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-58h]
  ULONG Value; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-50h]
  unsigned int v23; // [rsp+98h] [rbp+10h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]
  unsigned int v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v7 = 0;
  v9 = 0;
  Value = 0;
  v10 = 0;
  v11 = 0;
  v23 = 0;
  v12 = *a7;
  v19 = *a7;
  if ( !a5 )
    return 0;
  v13 = 1;
  while ( !v9 )
  {
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( *a2 == 125 )
          goto LABEL_37;
        if ( v11 > a3 )
          return 0;
        if ( v7 > a4 )
          return 0;
        v21 = v11 + v12 + v7;
        if ( v21 >= a6 )
          return 0;
        v14 = a2;
        do
        {
          if ( strchr(".}", *a2) )
            break;
          ++a2;
        }
        while ( a2 );
        if ( a2 - v14 != -1 )
        {
          PoolWithTag = (CHAR *)ExAllocatePoolWithTag(PagedPool, a2 - v14 + 1, 0x74694D45u);
          if ( PoolWithTag )
          {
            if ( (unsigned __int64)(a2 - v14 + 1) <= 0x7FFFFFFF )
            {
              if ( (unsigned __int64)(a2 - v14) > 0x7FFFFFFE )
              {
                *PoolWithTag = 0;
              }
              else if ( RtlStringCopyWorkerA_0(PoolWithTag, a2 - v14 + 1, v15, v14, a2 - v14) >= 0 )
              {
                if ( v11 < v24 )
                {
                  v7 = v23;
                  if ( (int)EmpInfParseGetStringIndexFromName(a1, PoolWithTag, &Value) < 0 )
                    goto LABEL_38;
                  v17 = v11 + v19;
                  ++v11;
LABEL_24:
                  v10 = 2;
                  *(_DWORD *)(a5 + 4 * v17) = Value;
                }
                else
                {
                  v7 = v23;
                  if ( RtlCharToInteger(PoolWithTag, 0x10u, &Value) >= 0 )
                  {
                    v17 = v21;
                    v7 = ++v23;
                    goto LABEL_24;
                  }
LABEL_38:
                  v9 = 1;
                }
                ExFreePoolWithTag(PoolWithTag, 0x74694D45u);
                goto LABEL_26;
              }
            }
          }
        }
        v7 = v23;
        v9 = 1;
LABEL_26:
        v12 = v19;
        a3 = v24;
        a4 = v25;
      }
      else
      {
        if ( v10 != 2 )
        {
          if ( !*a2 && v11 == a3 && v7 == a4 )
          {
            *a7 = v11 + v12 + v7;
            return v13;
          }
          goto LABEL_30;
        }
        if ( *a2 == 46 )
          goto LABEL_8;
        if ( *a2 == 125 )
        {
LABEL_37:
          ++a2;
          v10 = 3;
        }
        else
        {
LABEL_30:
          v9 = 1;
        }
      }
    }
    else
    {
      if ( *a2 != 123 )
        goto LABEL_30;
LABEL_8:
      ++a2;
      v10 = 1;
    }
  }
  return 0;
}
