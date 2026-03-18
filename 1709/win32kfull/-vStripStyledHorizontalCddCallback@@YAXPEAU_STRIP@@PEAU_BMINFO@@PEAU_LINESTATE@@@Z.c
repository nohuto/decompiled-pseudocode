/*
 * XREFs of ?vStripStyledHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C012E940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v5; // rbp
  int v7; // r8d
  unsigned int v8; // r10d
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // r13d
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r9
  unsigned int v16; // r15d
  int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  int v20; // [rsp+24h] [rbp-84h]
  char *v21; // [rsp+28h] [rbp-80h]
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  char *v25; // [rsp+48h] [rbp-60h]
  _DWORD v26[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v7 = -4 * *((_DWORD *)a1 + 2);
  v21 = (char *)a1 + 28;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 22);
  v10 = *((_DWORD *)a3 + 12);
  v25 = (char *)a1 + 4 * *(int *)a1 + 28;
  v19 = v8;
  v11 = 1;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  if ( v7 <= 0 )
    v11 = -1;
  v20 = v11;
  v12 = abs32(v7);
  v13 = ((int)v5 - *((_DWORD *)a1 + 110)) % v12;
  v14 = ((int)v5 - *((_DWORD *)a1 + 110)) / v12;
  v24 = v7;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v16 = v13 >> 2;
  v23 = v15;
  do
  {
    v17 = *(_DWORD *)v3;
    do
    {
      if ( !v9 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v26[2] = v16 + 1;
        v26[0] = v16;
        v26[3] = v14 + 1;
        v26[1] = v14;
        v15(v18, v8, v26);
        v8 = v19;
        v15 = v23;
      }
      v10 -= *((_DWORD *)a3 + 2);
      ++v16;
      v5 += 4LL;
      if ( v10 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v10 += **((_DWORD **)a3 + 5);
        v9 = v9 == 0;
      }
      --v17;
    }
    while ( v17 );
    v5 += v24;
    v14 += v20;
    v10 -= *((_DWORD *)a3 + 3);
    if ( v10 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v10 += **((_DWORD **)a3 + 5);
      v9 = v9 == 0;
    }
    v3 = v21 + 4;
    v21 = v3;
  }
  while ( v3 != v25 );
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 22) = v9;
  *((_DWORD *)a3 + 12) = v10;
}
