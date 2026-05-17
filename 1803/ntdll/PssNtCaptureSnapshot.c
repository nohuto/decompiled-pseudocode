/*
 * XREFs of PssNtCaptureSnapshot @ 0x180109790
 * Callers:
 *     <none>
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800848E0 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x18009B460 (ZwCreateProcessEx.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180109F00 @ 0x180109F00 (sub_180109F00.c)
 *     sub_18010A158 @ 0x18010A158 (sub_18010A158.c)
 *     sub_18010A2AC @ 0x18010A2AC (sub_18010A2AC.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r13
  __int64 result; // rax
  int v8; // r15d
  __int64 v9; // rbx
  int v10; // esi
  void *v11; // rcx
  int v12; // r12d
  int v13; // r12d
  int Process; // ebx
  int v15; // r15d
  int v16; // [rsp+28h] [rbp-69h]
  int v17; // [rsp+30h] [rbp-61h]
  _DWORD *v18; // [rsp+58h] [rbp-39h]
  __int64 v19; // [rsp+60h] [rbp-31h] BYREF
  __int64 v20; // [rsp+68h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v26[9]; // [rsp+A0h] [rbp+Fh] BYREF

  v5 = a2;
  if ( (a3 & 0x3FFC000) != 0 )
    return 3221225485LL;
  v8 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v9 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25[0] = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v10 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v9 = MEMORY[0x7FFE0300];
    v23 = MEMORY[0x7FFE0300];
    sub_180109F00(v25, &v24);
  }
  v11 = *a1;
  v12 = 0;
  v18 = *a1;
  if ( !*a1 )
  {
    v17 = 4;
    v16 = 4096;
    v25[1] = 1144LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
    v11 = 0LL;
    v12 = 1;
    *a1 = 0LL;
  }
  memset(v11, 0, 0x478uLL);
  *v18 = 1146311504;
  v18[1] = v12;
  v18[2] = a3;
  v13 = sub_18010A2AC(v18, v5, a3);
  if ( v13 < 0 )
    goto LABEL_11;
  if ( (a3 & 2) != 0 )
  {
    if ( v10 )
      sub_180109F00(&v22, &v21);
    v26[0] = 2147352576LL;
    v13 = sub_18010A448(v18, v5, a3, v26, v16, v17);
    if ( v13 < 0 )
      goto LABEL_11;
    if ( v10 )
    {
      sub_180109F00(&v20, &v19);
      *((_QWORD *)v18 + 135) = v19 - v21;
      *((_QWORD *)v18 + 136) = 1000000 * (v20 - v22) / v9;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v10 )
      sub_180109F00(&v22, &v21);
    v13 = sub_18010A810(v18, v5, a3);
    if ( v13 >= 0 )
    {
      if ( v10 )
      {
        sub_180109F00(&v20, &v19);
        *((_QWORD *)v18 + 133) = v19 - v21;
        *((_QWORD *)v18 + 134) = 1000000 * (v20 - v22) / v9;
      }
      goto LABEL_24;
    }
LABEL_11:
    PssNtFreeSnapshot((__int64)v18);
    *a1 = 0LL;
    return (unsigned int)v13;
  }
LABEL_24:
  if ( (a3 & 1) == 0 )
    goto LABEL_39;
  if ( v10 )
    sub_180109F00(&v22, &v21);
  do
  {
    while ( 1 )
    {
      Process = ZwCreateProcessEx();
      if ( Process >= 0 )
        goto LABEL_33;
      if ( (v8 & 0x4000000) == 0 )
        goto LABEL_36;
      if ( (v8 & 0x10000000) == 0 )
        break;
      v8 &= ~0x10000000u;
    }
    if ( (v8 & 0x8000000) == 0 )
    {
LABEL_36:
      PssNtFreeSnapshot((__int64)v18);
      *a1 = 0LL;
      return (unsigned int)Process;
    }
    v8 &= ~0x8000000u;
    Process = -1073741267;
LABEL_33:
    ;
  }
  while ( Process == -1073741267 );
  *((_QWORD *)v18 + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)v18 + 109) = v26[1];
  if ( v10 )
  {
    sub_180109F00(&v20, &v19);
    v9 = v23;
    *((_QWORD *)v18 + 131) = v19 - v21;
    *((_QWORD *)v18 + 132) = 1000000 * (v20 - v22) / v9;
  }
  else
  {
    v9 = v23;
  }
  v5 = a2;
LABEL_39:
  if ( (a3 & 4) != 0 )
  {
    if ( v10 )
      sub_180109F00(&v22, &v21);
    v15 = sub_18010AD6C(v18, v5, a3);
    if ( v15 < 0 )
    {
LABEL_43:
      PssNtFreeSnapshot((__int64)v18);
      *a1 = 0LL;
      return (unsigned int)v15;
    }
    if ( v10 )
    {
      sub_180109F00(&v20, &v19);
      *((_QWORD *)v18 + 137) = v19 - v21;
      *((_QWORD *)v18 + 138) = 1000000 * (v20 - v22) / v9;
    }
  }
  if ( (a3 & 0x80u) == 0 )
  {
LABEL_52:
    if ( v10 )
    {
      sub_180109F00(&v20, &v19);
      *((_QWORD *)v18 + 129) = v19 - v24;
      *((_QWORD *)v18 + 130) = 1000000 * (v20 - v25[0]) / v9;
    }
  }
  else
  {
    if ( v10 )
      sub_180109F00(&v22, &v21);
    v15 = sub_18010B78C(v18, v5, a3, a4);
    if ( v15 < 0 )
      goto LABEL_43;
    if ( v10 )
    {
      sub_180109F00(&v20, &v19);
      *((_QWORD *)v18 + 139) = v19 - v21;
      *((_QWORD *)v18 + 140) = 1000000 * (v20 - v22) / v9;
      goto LABEL_52;
    }
  }
  if ( (a3 & 0x2000) != 0 )
    sub_18010A158(v18, v5);
  return 0LL;
}
