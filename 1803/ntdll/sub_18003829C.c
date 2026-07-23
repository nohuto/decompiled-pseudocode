/*
 * XREFs of sub_18003829C @ 0x18003829C
 * Callers:
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     sub_180038944 @ 0x180038944 (sub_180038944.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B490 @ 0x18006B490 (sub_18006B490.c)
 *     sub_18006B5EC @ 0x18006B5EC (sub_18006B5EC.c)
 *     sub_1800717A0 @ 0x1800717A0 (sub_1800717A0.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

int __fastcall sub_18003829C(
        PUNICODE_STRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PVOID *a7,
        int *a8)
{
  int result; // eax
  int *v10; // rbx
  char v11; // di
  int v12; // eax
  __int64 v13; // rdx
  PVOID v14; // rax
  int v15; // eax
  int v16; // eax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      427,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  BaseAddress = 0LL;
  result = sub_180038510(a1);
  if ( result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      sub_1800435B4(0LL);
    }
    if ( !a6 || v11 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      sub_180056DF4();
      v10 = a8;
      v12 = sub_180040D60(a1, a5, (__int64)&BaseAddress, (__int64)a8);
      if ( v12 == -1073741515 )
      {
        LOBYTE(v13) = 1;
        sub_1800426E8(*((_QWORD *)BaseAddress + 22), v13);
      }
      else if ( v12 != -1073741267 && v12 < 0 )
      {
        *a8 = v12;
      }
    }
    else
    {
      v10 = a8;
      *a8 = -1073741515;
    }
    result = sub_1800435B4(1LL);
    if ( BaseAddress )
    {
      v14 = (PVOID)sub_18006B5EC();
      *a7 = v14;
      if ( BaseAddress != v14 )
      {
        sub_18006B460(BaseAddress);
        BaseAddress = *a7;
      }
      if ( *((_QWORD *)BaseAddress + 22) )
        sub_1800717A0(*((_QWORD *)BaseAddress + 19));
      if ( *v10 >= 0 )
      {
        v15 = sub_18002DF14((__int64)BaseAddress, (__int64)v10);
        *v10 = v15;
        if ( v15 >= 0 )
        {
          v16 = sub_180038944(a6, BaseAddress);
          *v10 = v16;
          if ( v16 >= 0 && !dword_18015CFB8 )
            sub_180059158(BaseAddress);
        }
      }
      sub_18006B490(*((_QWORD *)BaseAddress + 19), v10);
      result = ~*v10;
      if ( *v10 < 0 )
      {
        *a7 = 0LL;
        sub_180046E54(BaseAddress, 0LL);
        result = sub_18001F5FC((char *)BaseAddress);
      }
    }
    else
    {
      *v10 = -1073741801;
    }
    if ( !v11 )
      result = sub_180047B2C();
  }
  else
  {
    v10 = a8;
    *a8 = result;
  }
  if ( (dword_180156A70 & 9) != 0 )
    return sub_1800CA554(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             657,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v10);
  return result;
}
