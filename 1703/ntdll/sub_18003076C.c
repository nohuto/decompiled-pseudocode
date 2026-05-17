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

__int64 __fastcall sub_18003076C(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // r14
  int v8; // r13d
  unsigned __int64 v9; // rdi
  unsigned int v10; // esi
  int v11; // eax
  int v12; // ebx
  unsigned __int64 v13; // rdi
  unsigned int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-A1h] BYREF
  int v17; // [rsp+34h] [rbp-9Dh]
  unsigned __int64 v18; // [rsp+38h] [rbp-99h] BYREF
  __int64 v19; // [rsp+40h] [rbp-91h] BYREF
  __int128 v20; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v21[16]; // [rsp+60h] [rbp-71h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v19 = a2;
  v16 = a3;
  v9 = a1;
  v18 = a1;
  v17 = a4;
  v10 = 0;
  memset(v21, 0, sizeof(v21));
  LODWORD(v21[3]) = 0;
  v21[4] = v5;
  while ( 1 )
  {
    v11 = sub_180030914(*(_QWORD *)(v9 + 48), v7, v6, a5);
    v12 = v11;
    if ( v11 != -1073741267 )
      break;
    v15 = v10++;
    if ( v15 >= 0x20 )
    {
      v12 = -1073741701;
      goto LABEL_9;
    }
    v12 = sub_180079A1C(*a5, &v20, &v19, &v16);
    if ( v12 < 0 )
      goto LABEL_9;
    LODWORD(v21[3]) = *(_DWORD *)(v9 + 272);
    v12 = sub_18003BB58((unsigned int)&v20, (unsigned int)v21, v8, v9, 2, (__int64)&v18);
    if ( v12 < 0 )
      goto LABEL_9;
    v9 = v18;
    sub_18003015C(v18);
    v7 = v19;
    v6 = v16;
  }
  if ( (v17 & 1) != 0 && v11 >= 0 )
  {
    v13 = *(_QWORD *)(v9 + 48);
    if ( qword_18016B370 )
    {
      if ( v13 < *((_QWORD *)&xmmword_18016B4C0 + 1)
        || v13 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
      {
        sub_180034A40(v13, &v20);
      }
      else
      {
        v20 = xmmword_18016B4C0;
      }
      if ( *((_QWORD *)&v20 + 1) != v13 )
        __fastfail(0x18u);
    }
  }
LABEL_9:
  if ( BYTE4(v21[15]) )
    RtlReleasePath(v21[0]);
  return (unsigned int)v12;
}
