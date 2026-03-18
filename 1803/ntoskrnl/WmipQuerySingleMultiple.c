/*
 * XREFs of WmipQuerySingleMultiple @ 0x1407A4320
 * Callers:
 *     WmipIoControl @ 0x14051ACC0 (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x1407A2660 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x14051B0F8 (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        IRP *a1,
        KPROCESSOR_MODE a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int *a9)
{
  unsigned int *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r11
  int v13; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v15; // r14
  int v16; // r15d
  char v17; // r13
  unsigned int *v18; // r8
  _BYTE *v19; // r12
  unsigned int v20; // r10d
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  unsigned int v25; // esi
  unsigned int *v26; // r13
  void *v27; // rdx
  char *v28; // r8
  unsigned int v29; // eax
  unsigned int *i; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rsi
  int v34; // eax
  char v36; // [rsp+40h] [rbp-348h]
  unsigned int v37; // [rsp+44h] [rbp-344h]
  unsigned __int16 v39; // [rsp+4Ah] [rbp-33Eh]
  unsigned int v40; // [rsp+50h] [rbp-338h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-334h]
  int v42; // [rsp+58h] [rbp-330h]
  unsigned int *v43; // [rsp+60h] [rbp-328h]
  int v44; // [rsp+68h] [rbp-320h]
  unsigned int v45; // [rsp+6Ch] [rbp-31Ch]
  int v46; // [rsp+70h] [rbp-318h]
  void *Src; // [rsp+78h] [rbp-310h]
  unsigned int *v48; // [rsp+80h] [rbp-308h]
  void *v49; // [rsp+88h] [rbp-300h]
  __int64 v50; // [rsp+90h] [rbp-2F8h]
  __int64 v51; // [rsp+98h] [rbp-2F0h]
  __int64 v52; // [rsp+A0h] [rbp-2E8h]
  PVOID Object; // [rsp+A8h] [rbp-2E0h]
  __int64 v54; // [rsp+B0h] [rbp-2D8h]
  PVOID v55; // [rsp+B8h] [rbp-2D0h]
  PVOID v56; // [rsp+C0h] [rbp-2C8h]
  int *v57; // [rsp+C8h] [rbp-2C0h]
  __int128 v58; // [rsp+D0h] [rbp-2B8h]
  PIRP Irp; // [rsp+E0h] [rbp-2A8h]
  unsigned int *v60; // [rsp+E8h] [rbp-2A0h]
  __int64 v61; // [rsp+F0h] [rbp-298h]
  _BYTE P[592]; // [rsp+100h] [rbp-288h] BYREF

  v37 = a4;
  v9 = a3;
  v49 = a3;
  Irp = a1;
  v57 = a9;
  v61 = (__int64)a9;
  v60 = a3;
  v10 = a6;
  v41 = a6;
  v11 = a7;
  v50 = a7;
  v12 = a8;
  v51 = a8;
  LODWORD(v54) = 0;
  v13 = 0;
  v42 = 0;
  if ( a7 )
  {
    v15 = 0LL;
    v55 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * a6, 0x70696D57u);
    v15 = PoolWithTag;
    v55 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, (const void *)(a5 + 8), 24LL * a6);
    else
      v13 = -1073741670;
    v9 = (unsigned int *)v49;
    v11 = v50;
    a4 = v37;
    v10 = v41;
    v12 = v51;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  v16 = 0;
  v17 = 0;
  v36 = 0;
  v48 = 0LL;
  v18 = v9;
  v43 = v9;
  v19 = P;
  v56 = P;
  v20 = 580;
  v46 = 580;
  v21 = 0;
  Object = 0LL;
  while ( 1 )
  {
    v45 = v21;
    if ( v21 >= v10 )
      break;
    v22 = v21;
    if ( v11 )
    {
      v58 = *(_OWORD *)(v12 + 16LL * v21);
      Object = *(PVOID *)(v11 + 8LL * v21);
      v52 = 0LL;
      Src = (void *)*((_QWORD *)&v58 + 1);
      v24 = v58;
    }
    else
    {
      v23 = 3LL * v21;
      v24 = v15[12 * v22 + 4];
      Src = *(void **)&v15[4 * v23 + 8];
      *((_QWORD *)&v58 + 1) = Src;
      v52 = *(_QWORD *)&v15[4 * v23];
    }
    v39 = v24;
    v25 = (v24 + 73) & 0xFFFFFFF8;
    if ( v17 || a4 < v25 )
    {
      if ( v25 > v20 )
      {
        if ( v19 != P )
          ExFreePoolWithTag(v19, 0);
        v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x70696D57u);
        v56 = v19;
        if ( !v19 )
        {
          v13 = -1073741670;
          break;
        }
        v46 = v25;
      }
      v26 = (unsigned int *)v19;
      v44 = v25;
      v48 = 0LL;
      v36 = 1;
    }
    else
    {
      v26 = v18;
      v44 = a4;
    }
    memset(v26, 0, 0x40uLL);
    v26[11] = 2;
    *v26 = v25;
    *((_QWORD *)v26 + 2) = v52;
    v26[12] = 64;
    v26[14] = v25;
    *((_WORD *)v26 + 32) = v39;
    if ( a2 == 1 && v39 )
    {
      if ( (BYTE8(v58) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = Src;
      v28 = (char *)Src + v39;
      if ( (unsigned __int64)v28 > 0x7FFFFFFF0000LL || v28 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v27 = Src;
    }
    memmove((char *)v26 + 66, v27, v39);
    v40 = *v26;
    if ( (int)WmipQuerySetExecuteSI(Object, Irp, a2, 1u, (__int64)v26, v44, &v40) < 0 )
      goto LABEL_37;
    v29 = v26[11];
    if ( (v29 & 0x100) != 0 )
      goto LABEL_37;
    ++v42;
    if ( (v29 & 0x20) != 0 )
    {
      v16 += (v26[12] + 7) & 0xFFFFFFF8;
      v17 = 1;
      v36 = 1;
      goto LABEL_38;
    }
    if ( v36 )
    {
      v16 += (v40 + 7) & 0xFFFFFFF8;
LABEL_37:
      v17 = v36;
LABEL_38:
      v18 = v43;
      a4 = v37;
      goto LABEL_39;
    }
    if ( v48 )
      v48[3] = v54;
    for ( i = v26; ; i = (unsigned int *)((char *)i + v31) )
    {
      v48 = i;
      v31 = i[3];
      if ( !(_DWORD)v31 )
        break;
    }
    v32 = (v40 + 7) & 0xFFFFFFF8;
    v16 += v32;
    a4 = v37 - v32;
    v37 -= v32;
    v18 = (unsigned int *)((char *)v43 + v32);
    v43 = v18;
    v54 = (unsigned int)((_DWORD)v18 - (_DWORD)i);
    v17 = 0;
LABEL_39:
    v21 = v45 + 1;
    v11 = v50;
    v20 = v46;
    v10 = v41;
    v12 = v51;
  }
  v33 = v49;
  if ( v19 != P )
    ExFreePoolWithTag(v19, 0);
  if ( !v42 )
    v13 = -1073741163;
  if ( v13 >= 0 && v17 )
  {
    v34 = 56;
    *v33 = 56;
    v33[11] = 32;
    v33[12] = v16;
  }
  else
  {
    v34 = v16;
  }
  *v57 = v34;
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v13;
}
