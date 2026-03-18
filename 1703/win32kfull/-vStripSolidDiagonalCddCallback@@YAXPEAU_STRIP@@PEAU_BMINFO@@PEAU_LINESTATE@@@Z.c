/*
 * XREFs of ?vStripSolidDiagonalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02AF5E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  __int64 v5; // rdi
  unsigned int v6; // r9d
  int v7; // r12d
  int v8; // r13d
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // ebx
  void (__fastcall *v12)(__int64, _QWORD, unsigned int *); // r10
  __int64 v13; // rcx
  int v14; // ebp
  unsigned int v15; // ebp
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-78h]
  int v18; // [rsp+24h] [rbp-74h]
  char *v19; // [rsp+28h] [rbp-70h]
  void (__fastcall *v20)(__int64, _QWORD, unsigned int *); // [rsp+30h] [rbp-68h]
  char *v21; // [rsp+38h] [rbp-60h]
  unsigned int v22; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-54h]
  unsigned int v24; // [rsp+48h] [rbp-50h]
  unsigned int v25; // [rsp+4Ch] [rbp-4Ch]

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = 1;
  v19 = (char *)a1 + 28;
  v17 = v6;
  v21 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v18 = v8;
  if ( v8 <= 0 )
    v7 = -1;
  v9 = abs32(v8);
  v10 = ((int)v5 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v5 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(__int64, _QWORD, unsigned int *))(*((_QWORD *)a1 + 54) + 8LL);
  v20 = v12;
  do
  {
    v13 = *((_QWORD *)a1 + 54);
    v14 = *(_DWORD *)v3;
    v22 = v11;
    v25 = v10 + 1;
    ++v11;
    v23 = v10;
    v24 = v11;
    v12(v13, v6, &v22);
    v5 += 4LL;
    v15 = v14 - 1;
    if ( v15 )
    {
      v5 += v15 * (v8 + 4LL);
      do
      {
        v16 = *((_QWORD *)a1 + 54);
        v10 += v7;
        v22 = v11++;
        v23 = v10;
        v24 = v11;
        v25 = v10 + 1;
        v20(v16, v17, &v22);
        --v15;
      }
      while ( v15 );
      v3 = v19;
      v8 = v18;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v10 += v7;
      v5 += v8 - 4;
      --v11;
    }
    v6 = v17;
    v3 += 4;
    v12 = v20;
    v19 = v3;
  }
  while ( v3 < v21 );
  *((_QWORD *)a1 + 2) = v5;
}
