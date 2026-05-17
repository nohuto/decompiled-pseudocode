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

__int64 __fastcall sub_18003829C(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8)
{
  __int64 result; // rax
  int *v12; // rbx
  char v13; // di
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // [rsp+48h] [rbp-30h] BYREF

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      427,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v19 = 0LL;
  result = sub_180038510(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      sub_1800435B4(0LL);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      sub_180056DF4();
      v12 = a8;
      v14 = sub_180040D60(a1, a2, a3, a4, a5, (__int64)&v19, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        LOBYTE(v15) = 1;
        sub_1800426E8(*(_QWORD *)(v19 + 176), v15);
      }
      else if ( v14 != -1073741267 && v14 < 0 )
      {
        *a8 = v14;
      }
    }
    else
    {
      v12 = a8;
      *a8 = -1073741515;
    }
    result = sub_1800435B4(1LL);
    if ( v19 )
    {
      v16 = sub_18006B5EC();
      *a7 = v16;
      if ( v19 != v16 )
      {
        sub_18006B460();
        v19 = *a7;
      }
      if ( *(_QWORD *)(v19 + 176) )
        sub_1800717A0(*(_QWORD *)(v19 + 152));
      if ( *v12 >= 0 )
      {
        v17 = sub_18002DF14(v19, (__int64)v12);
        *v12 = v17;
        if ( v17 >= 0 )
        {
          v18 = sub_180038944(a6, v19);
          *v12 = v18;
          if ( v18 >= 0 && !dword_18015CFB8 )
            sub_180059158(v19);
        }
      }
      sub_18006B490(*(_QWORD *)(v19 + 152), v12);
      result = (unsigned int)~*v12;
      if ( *v12 < 0 )
      {
        *a7 = 0LL;
        sub_180046E54(v19, 0LL);
        result = sub_18001F5FC(v19);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = sub_180047B2C();
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (dword_180156A70 & 9) != 0 )
    return sub_1800CA554(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             657,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v12);
  return result;
}
