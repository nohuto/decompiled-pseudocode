/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800019F0
 * Callers:
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 * Callees:
 *     sub_180001C74 @ 0x180001C74 (sub_180001C74.c)
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_1800026FC @ 0x1800026FC (sub_1800026FC.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A5CA0 (ZwCreateProcessEx.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r13
  int v7; // r14d
  __int64 v8; // rbx
  int v9; // edi
  _DWORD *v10; // rcx
  int v11; // r12d
  int v12; // r12d
  int v13; // r12d
  int v14; // eax
  int Process; // ebx
  __int64 result; // rax
  int v17; // r14d
  int v18; // esi
  _DWORD *v19; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  __int64 v24; // [rsp+80h] [rbp-11h]
  __int64 v25; // [rsp+88h] [rbp-9h] BYREF
  __int64 v26; // [rsp+90h] [rbp-1h] BYREF
  __int64 v27; // [rsp+98h] [rbp+7h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v29[8]; // [rsp+A8h] [rbp+17h] BYREF

  v5 = a2;
  if ( (a3 & 0x3FFE000) != 0 )
    return 3221225485LL;
  v7 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v8 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v9 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    v24 = MEMORY[0x7FFE0300];
    sub_180001C74(&v26, &v25);
  }
  v10 = *a1;
  v11 = 0;
  v19 = v10;
  if ( !v10 )
  {
    v27 = 1128LL;
    result = ZwAllocateVirtualMemory(-1LL, &v19, 0LL, &v27, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v19;
    v11 = 1;
    *a1 = v19;
  }
  memset(v10, 0, 0x468uLL);
  *v19 = 1146311504;
  v19[1] = v11;
  v19[2] = a3;
  v12 = sub_1800026FC(v19, v5, a3);
  if ( v12 < 0 )
    goto LABEL_32;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v28 = 2147352576LL;
    v12 = sub_1800024C4(v19, v5, a3, &v28);
    if ( v12 < 0 )
      goto LABEL_32;
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)v19 + 135) = v20 - v22;
      *((_QWORD *)v19 + 136) = 1000000 * (v21 - v23) / v8;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v12 = sub_180001E74(v19, v5, a3);
    if ( v12 >= 0 )
    {
      if ( v9 )
      {
        sub_180001C74(&v21, &v20);
        *((_QWORD *)v19 + 133) = v20 - v22;
        *((_QWORD *)v19 + 134) = 1000000 * (v21 - v23) / v8;
      }
      goto LABEL_19;
    }
LABEL_32:
    PssNtFreeSnapshot(v19);
    *a1 = 0LL;
    return (unsigned int)v12;
  }
LABEL_19:
  if ( (a3 & 1) == 0 )
    goto LABEL_44;
  if ( v9 )
    sub_180001C74(&v23, &v22);
  do
  {
    while ( 1 )
    {
      v13 = ((int)a3 >> 31) & 0x1000;
      v14 = v13;
      if ( (v7 & 0x10000000) != 0 )
      {
        v14 = v13 | 0x400;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v14 = v13 | 1;
      }
      Process = ZwCreateProcessEx(v29, 0x2000000LL, 0LL, a2, v14, 0LL, 0LL, 0LL, 0);
      if ( Process >= 0 )
        goto LABEL_39;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_26;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_26:
      PssNtFreeSnapshot(v19);
      *a1 = 0LL;
      return (unsigned int)Process;
    }
    v7 &= ~0x8000000u;
    Process = -1073741267;
LABEL_39:
    ;
  }
  while ( Process == -1073741267 );
  *((_QWORD *)v19 + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)v19 + 109) = v29[0];
  if ( v9 )
  {
    sub_180001C74(&v21, &v20);
    v8 = v24;
    *((_QWORD *)v19 + 131) = v20 - v22;
    *((_QWORD *)v19 + 132) = 1000000 * (v21 - v23) / v8;
  }
  else
  {
    v8 = v24;
  }
  v5 = a2;
LABEL_44:
  if ( (a3 & 4) != 0 )
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v17 = sub_180106D98(v19, v5, a3);
    if ( v17 < 0 )
    {
      PssNtFreeSnapshot(v19);
      *a1 = 0LL;
      return (unsigned int)v17;
    }
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)v19 + 137) = v20 - v22;
      *((_QWORD *)v19 + 138) = 1000000 * (v21 - v23) / v8;
    }
  }
  if ( (a3 & 0x80u) == 0 )
  {
LABEL_58:
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)v19 + 129) = v20 - v25;
      *((_QWORD *)v19 + 130) = 1000000 * (v21 - v26) / v8;
    }
  }
  else
  {
    if ( v9 )
      sub_180001C74(&v23, &v22);
    v18 = sub_1801077AC(v19, v5, a3, a4);
    if ( v18 < 0 )
    {
      PssNtFreeSnapshot(v19);
      *a1 = 0LL;
      return (unsigned int)v18;
    }
    if ( v9 )
    {
      sub_180001C74(&v21, &v20);
      *((_QWORD *)v19 + 139) = v20 - v22;
      *((_QWORD *)v19 + 140) = 1000000 * (v21 - v23) / v8;
      goto LABEL_58;
    }
  }
  return 0LL;
}
