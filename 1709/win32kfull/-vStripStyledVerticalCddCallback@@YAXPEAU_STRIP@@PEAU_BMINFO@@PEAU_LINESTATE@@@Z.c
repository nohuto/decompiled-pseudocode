/*
 * XREFs of ?vStripStyledVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02AC750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
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
  __int64 v15; // rax
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // r9
  unsigned int v17; // r15d
  int v18; // r12d
  __int64 v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+24h] [rbp-84h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  char *v23; // [rsp+30h] [rbp-78h]
  void (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-68h]
  char *v26; // [rsp+48h] [rbp-60h]
  _DWORD v27[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v7 = -4 * *((_DWORD *)a1 + 2);
  v23 = (char *)a1 + 28;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 22);
  v10 = *((_DWORD *)a3 + 12);
  v26 = (char *)a1 + 4 * *(int *)a1 + 28;
  v20 = v8;
  v11 = 1;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  if ( v7 <= 0 )
    v11 = -1;
  v21 = v11;
  v12 = abs32(v7);
  v13 = ((int)v5 - *((_DWORD *)a1 + 110)) % v12;
  v14 = ((int)v5 - *((_DWORD *)a1 + 110)) / v12;
  v15 = v7;
  v22 = v7;
  v16 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v17 = v13 >> 2;
  v25 = v16;
  do
  {
    v18 = *(_DWORD *)v3;
    do
    {
      if ( !v9 )
      {
        v19 = *((_QWORD *)a1 + 54);
        v27[2] = v17 + 1;
        v27[0] = v17;
        v27[3] = v14 + 1;
        v27[1] = v14;
        v16(v19, v8, v27);
        v15 = v22;
        v8 = v20;
        v16 = v25;
      }
      v14 += v21;
      v5 += v15;
      v10 -= *((_DWORD *)a3 + 2);
      if ( v10 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v10 += **((_DWORD **)a3 + 5);
        v9 = v9 == 0;
        v15 = v22;
      }
      --v18;
    }
    while ( v18 );
    v10 -= *((_DWORD *)a3 + 3);
    v5 += 4LL;
    ++v17;
    if ( v10 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v10 += **((_DWORD **)a3 + 5);
      v9 = v9 == 0;
    }
    v15 = v22;
    v3 = v23 + 4;
    v23 = v3;
  }
  while ( v3 < v26 );
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 22) = v9;
  *((_DWORD *)a3 + 12) = v10;
}
