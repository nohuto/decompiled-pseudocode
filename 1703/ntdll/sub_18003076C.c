/*
 * XREFs of sub_18003076C @ 0x18003076C
 * Callers:
 *     sub_180004F9C @ 0x180004F9C (sub_180004F9C.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18003076C(PVOID *a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  WCHAR *v5; // rbx
  PVOID *v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ebx
  PVOID v11; // rdi
  unsigned int v13; // eax
  int v14; // [rsp+30h] [rbp-A1h] BYREF
  int v15; // [rsp+34h] [rbp-9Dh]
  PVOID BaseAddress; // [rsp+38h] [rbp-99h] BYREF
  __int64 v17; // [rsp+40h] [rbp-91h] BYREF
  __int128 v18; // [rsp+48h] [rbp-89h] BYREF
  PWSTR Path[16]; // [rsp+60h] [rbp-71h] BYREF

  v5 = (WCHAR *)a1[10];
  v17 = a2;
  v14 = a3;
  v7 = a1;
  BaseAddress = a1;
  v15 = a4;
  v8 = 0;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v5;
  while ( 1 )
  {
    v9 = sub_180030914(v7[6]);
    v10 = v9;
    if ( v9 != -1073741267 )
      break;
    v13 = v8++;
    if ( v13 >= 0x20 )
    {
      v10 = -1073741701;
      goto LABEL_9;
    }
    v10 = sub_180079A1C(*a5, &v18, &v17, &v14);
    if ( v10 < 0 )
      goto LABEL_9;
    LODWORD(Path[3]) = *((_DWORD *)v7 + 68);
    v10 = sub_18003BB58(&v18, Path, a1, v7, 2, &BaseAddress);
    if ( v10 < 0 )
      goto LABEL_9;
    v7 = (PVOID *)BaseAddress;
    sub_18003015C((char *)BaseAddress);
  }
  if ( (v15 & 1) != 0 && v9 >= 0 )
  {
    v11 = v7[6];
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      if ( (unsigned __int64)v11 < *((_QWORD *)&xmmword_18016B4C0 + 1)
        || (unsigned __int64)v11 >= *((_QWORD *)&xmmword_18016B4C0 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18016B4D0 )
      {
        sub_180034A40(v11);
      }
      else
      {
        v18 = xmmword_18016B4C0;
      }
      if ( *((PVOID *)&v18 + 1) != v11 )
        __fastfail(0x18u);
    }
  }
LABEL_9:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  return (unsigned int)v10;
}
