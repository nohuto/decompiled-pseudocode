/*
 * XREFs of ?vStripSolidDiagonalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02ABBD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // r13d
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // esi
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // r9
  int v12; // r15d
  __int64 v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-78h]
  unsigned int v15; // [rsp+24h] [rbp-74h]
  char *v16; // [rsp+28h] [rbp-70h]
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-68h]
  char *v18; // [rsp+38h] [rbp-60h]
  _DWORD v19[4]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v6 = 1;
  v16 = (char *)a1 + 28;
  v7 = -4 * *((_DWORD *)a1 + 2);
  v18 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  v14 = *((_DWORD *)a3 + 1);
  if ( v7 <= 0 )
    v6 = -1;
  v8 = abs32(v7);
  v9 = ((int)v5 - *((_DWORD *)a1 + 110)) / v8;
  v10 = (((int)v5 - *((_DWORD *)a1 + 110)) % v8) >> 2;
  v11 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v17 = v11;
  do
  {
    v12 = *(_DWORD *)v3;
    while ( 1 )
    {
      v13 = *((_QWORD *)a1 + 54);
      v19[0] = v10;
      v19[3] = v9 + 1;
      v15 = v10++;
      v19[1] = v9;
      v19[2] = v10;
      v11(v13, v14, v19);
      v5 += 4LL;
      if ( !--v12 )
        break;
      v11 = v17;
      v5 += v7;
      v9 += v6;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v10 = v15;
      v5 += v7 - 4;
      v9 += v6;
    }
    v11 = v17;
    v3 = v16 + 4;
    v16 = v3;
  }
  while ( v3 < v18 );
  *((_QWORD *)a1 + 2) = v5;
}
