/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02AFBE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r12
  __int64 v5; // rsi
  int v7; // r9d
  unsigned int v8; // r10d
  int v9; // ebp
  int v10; // edi
  int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r11
  int v16; // r12d
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // [rsp+24h] [rbp-74h]
  int v20; // [rsp+28h] [rbp-70h]
  unsigned int v21; // [rsp+2Ch] [rbp-6Ch]
  char *v22; // [rsp+30h] [rbp-68h]
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-60h]
  char *v24; // [rsp+40h] [rbp-58h]
  _DWORD v25[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v7 = 1;
  v22 = (char *)a1 + 28;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 22);
  v10 = *((_DWORD *)a3 + 12);
  v11 = -4 * *((_DWORD *)a1 + 2);
  v24 = (char *)a1 + 4 * *(int *)a1 + 28;
  v21 = *((_DWORD *)a3 + 1);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v11 = 4 * *((_DWORD *)a1 + 2);
  v19 = v11;
  if ( v11 <= 0 )
    v7 = -1;
  v20 = v7;
  v12 = abs32(v11);
  v13 = ((int)v5 - *((_DWORD *)a1 + 110)) / v12;
  v14 = (((int)v5 - *((_DWORD *)a1 + 110)) % v12) >> 2;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v23 = v15;
  do
  {
    v16 = *(_DWORD *)v3;
    while ( 1 )
    {
      v17 = v14;
      if ( !v9 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v25[2] = v14 + 1;
        v25[0] = v14;
        v25[3] = v13 + 1;
        v25[1] = v13;
        v15(v18, v8, v25);
        v11 = v19;
        v17 = v14;
        v7 = v20;
        v8 = v21;
        v15 = v23;
      }
      v5 += 4LL;
      ++v14;
      if ( !--v16 )
        break;
      v10 -= *((_DWORD *)a3 + 4);
      v13 += v7;
      v5 += v11;
      if ( v10 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v10 += **((_DWORD **)a3 + 5);
        v9 = v9 == 0;
      }
    }
    v10 -= *((_DWORD *)a3 + 2);
    if ( v10 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v10 += **((_DWORD **)a3 + 5);
      v9 = v9 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v14 = v17;
      v5 += v11 - 4;
      v13 += v7;
    }
    v3 = v22 + 4;
    v22 = v3;
  }
  while ( v3 < v24 );
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 22) = v9;
  *((_DWORD *)a3 + 12) = v10;
}
