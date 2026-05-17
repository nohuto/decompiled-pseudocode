/*
 * XREFs of sub_18001DF1C @ 0x18001DF1C
 * Callers:
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 * Callees:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_18001A7FC @ 0x18001A7FC (sub_18001A7FC.c)
 *     sub_18001A828 @ 0x18001A828 (sub_18001A828.c)
 *     sub_18001A984 @ 0x18001A984 (sub_18001A984.c)
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 *     sub_18001AA5C @ 0x18001AA5C (sub_18001AA5C.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18001BE0C @ 0x18001BE0C (sub_18001BE0C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18001DF1C(
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
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      416,
      (unsigned int)"LdrpLoadDllInternal",
      3,
      "DLL name: %wZ\n",
      a1);
  *a7 = 0LL;
  v20 = 0LL;
  result = sub_18001E19C(a1, a3, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      sub_18001AE14(0);
    }
    if ( !a6 || v13 || *(_DWORD *)(*(_QWORD *)(a6 + 152) + 24LL) )
    {
      sub_18001A9B4();
      v12 = a8;
      v14 = sub_18001AA5C(a1, a2, a3, a4, a5, &v20, (__int64)a8);
      if ( v14 == -1073741515 )
      {
        sub_180019170(*(_QWORD *)(v20 + 176), 1);
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
    result = (__int64)sub_18001AE14(1);
    if ( v20 )
    {
      v15 = sub_18001A984(v20);
      *a7 = v15;
      if ( v20 != v15 )
      {
        sub_180086EA8();
        v20 = *a7;
      }
      if ( *(_QWORD *)(v20 + 176) )
        sub_18001A7FC(*(_QWORD *)(v20 + 152));
      if ( *v12 >= 0 )
      {
        v18 = sub_18001A58C(v20, (__int64)v12, v16, v17);
        *v12 = v18;
        if ( ~v18 < 0 )
        {
          v19 = sub_18001BE0C(a6, v20);
          *v12 = v19;
          if ( ~v19 < 0 && !dword_18015C018 )
            sub_18001A084(v20);
        }
      }
      sub_18001A828(*(_QWORD **)(v20 + 152), (__int64)v12);
      result = (unsigned int)~*v12;
      if ( (result & 0x80000000) == 0 )
      {
        *a7 = 0LL;
        sub_180011D94(v20, 0);
        result = sub_18003015C(v20);
      }
    }
    else
    {
      *v12 = -1073741801;
    }
    if ( !v13 )
      result = sub_18001A338();
  }
  else
  {
    v12 = a8;
    *a8 = result;
  }
  if ( (dword_180155A10 & 9) != 0 )
    return sub_1800D5274(
             (unsigned int)"minkernel\\ntdll\\ldrapi.c",
             646,
             (unsigned int)"LdrpLoadDllInternal",
             4,
             "Status: 0x%08lx\n",
             *v12);
  return result;
}
