/*
 * XREFs of DpiVerifyResources @ 0x1C01E0CE8
 * Callers:
 *     DpMapMemory @ 0x1C01DB4D0 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C011C340 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rdi
  signed __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 *v12; // r14
  char v13; // bp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD, __int64, _QWORD, BOOL *, __int64 *); // rax
  __int64 v17; // rdx
  char v18; // al
  unsigned int v19; // r15d
  unsigned int *v20; // r13
  unsigned int v21; // r12d
  unsigned __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *v24; // r8
  signed __int64 v25; // rdx
  signed __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  BOOL v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  unsigned int *v33; // [rsp+40h] [rbp-48h]
  __int64 v34; // [rsp+48h] [rbp-40h]
  __int64 v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+A0h] [rbp+18h]
  char v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v34 = *(_QWORD *)(a1 + 64);
  v7 = v34;
  v11 = a3;
  v12 = (__int64 *)a2;
  v13 = 0;
  LOBYTE(a3) = 0;
  *a7 = 0LL;
  v33 = *(unsigned int **)(v7 + 1152);
  if ( !v33 )
  {
LABEL_2:
    v8 = -1073741811;
    v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v14 + 24) = *v12;
    WdLogEvent5_WdWarning(v14);
    return v8;
  }
  v15 = *(_QWORD *)a2;
  a1 = 786432LL;
  if ( *(_QWORD *)a2 == 786432LL || v15 == 655360 || v15 == 944 || v15 == 960 )
  {
    if ( *(_BYTE *)(v7 + 1140) != 1 )
    {
      v8 = -1073741811;
      v29 = WdLogNewEntry5_WdError(786432LL);
      *(_QWORD *)(v29 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v29);
      return v8;
    }
    if ( v15 != 786432 )
    {
      v16 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, __int64 *))(v7 + 592);
      if ( v16 )
      {
        v17 = *(_QWORD *)a2;
        v31 = a4 != 0;
        v18 = v16(*(_QWORD *)(v7 + 568), v17, v11, &v31, &v32);
        a4 = v37;
        LOBYTE(a3) = 0;
        if ( v18 == 1 )
          *v12 = v32;
      }
    }
    v13 = 1;
  }
  v19 = 0;
  if ( v13 == 1 )
    goto LABEL_31;
  v20 = v33;
  do
  {
    if ( v19 >= *v20 )
      break;
    v21 = 0;
    a1 = 9LL * v19;
    a2 = (__int64)&v20[9 * v19 + 3];
    v35 = a2;
    if ( !*(_DWORD *)(a2 + 4) )
      goto LABEL_29;
    while ( 1 )
    {
      a1 = a2 + 4 * (v21 + 4LL * v21 + 2);
      if ( a4 == 1 )
        break;
      if ( !a4 && ((*(_BYTE *)a1 - 3) & 0xFB) == 0 )
      {
        v9 = *(_QWORD *)(a1 + 4);
        v22 = DpiDecodeResourceDescriptorLength((unsigned __int8 *)a1, a2, a3);
        a2 = v35;
        LOBYTE(a3) = 1;
        a4 = v37;
        v10 = v9 + v22;
      }
LABEL_23:
      if ( (_BYTE)a3 == 1 )
        goto LABEL_24;
LABEL_26:
      if ( ++v21 >= *(_DWORD *)(a2 + 4) )
        goto LABEL_29;
    }
    if ( *(_BYTE *)a1 != 1 )
      goto LABEL_23;
    v9 = *(_QWORD *)(a1 + 4);
    v10 = v9 + *(unsigned int *)(a1 + 12);
LABEL_24:
    a1 = *v12;
    LOBYTE(a3) = 0;
    if ( *v12 < v9 || a1 + v36 > v10 )
      goto LABEL_26;
    v13 = 1;
LABEL_29:
    ++v19;
  }
  while ( v13 != 1 );
  v7 = v34;
  v11 = v36;
LABEL_31:
  if ( !v13 )
    goto LABEL_2;
  KeWaitForSingleObject((PVOID)(v7 + 2384), Executive, 0, 0, 0LL);
  v23 = *(__int64 **)(v7 + 2368);
  v24 = v23;
  if ( (__int64 *)*v23 != v23 )
  {
    v25 = *v12;
    while ( 1 )
    {
      v26 = v23[4];
      if ( v25 < v26 + *((unsigned int *)v23 + 10) && v25 + v11 > v26 )
        break;
      v23 = (__int64 *)*v23;
      if ( (__int64 *)*v23 == v24 )
        goto LABEL_44;
    }
    v27 = *((unsigned int *)v23 + 14);
    *a6 = v27;
    if ( v23[4] == *v12
      && *((_DWORD *)v23 + 10) == v11
      && *((_BYTE *)v23 + 45) == a5
      && (!a5 || v23[6] == PsGetCurrentProcess(v27, v25)) )
    {
      v28 = v23[8];
      ++*((_DWORD *)v23 + 6);
      *a7 = v28;
    }
  }
LABEL_44:
  KeReleaseMutex((PRKMUTEX)(v7 + 2384), 0);
  return v8;
}
