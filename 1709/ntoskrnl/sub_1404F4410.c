/*
 * XREFs of sub_1404F4410 @ 0x1404F4410
 * Callers:
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404F4410(_QWORD *a1, _QWORD *a2)
{
  bool v2; // zf
  __int16 *v3; // rcx
  char *v4; // rax
  unsigned __int16 v5; // r8
  unsigned __int16 *v6; // rcx
  unsigned __int16 *v7; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  unsigned __int16 *v11; // r8
  signed __int64 v12; // r9
  int v13; // ecx
  int v14; // edx
  int v15; // ecx

  v2 = *(_BYTE *)a1 == 2;
  v3 = (__int16 *)a1[1];
  if ( v2 )
  {
    v4 = (char *)(v3 + 8);
    ++v3;
  }
  else
  {
    v4 = (char *)*((_QWORD *)v3 + 1);
  }
  v5 = *v3;
  v6 = (unsigned __int16 *)a2[1];
  if ( *(_BYTE *)a2 == 2 )
  {
    v7 = v6 + 8;
    ++v6;
  }
  else
  {
    v7 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
  }
  v8 = (unsigned __int64)*v6 >> 1;
  v9 = (unsigned __int64)v5 >> 1;
  v10 = v9;
  if ( v9 > v8 )
    v10 = v8;
  v11 = (unsigned __int16 *)&v4[2 * v10];
  if ( v4 >= (char *)v11 )
  {
LABEL_11:
    v15 = v9 - v8;
  }
  else
  {
    v12 = (char *)v7 - v4;
    while ( 1 )
    {
      v13 = *(unsigned __int16 *)v4;
      v14 = *(unsigned __int16 *)&v4[v12];
      if ( v13 != v14 )
        break;
      v4 += 2;
      if ( v4 >= (char *)v11 )
        goto LABEL_11;
    }
    v15 = v13 - v14;
  }
  if ( v15 > 0 )
    return 1LL;
  else
    return (unsigned int)(v15 >= 0) - 1;
}
