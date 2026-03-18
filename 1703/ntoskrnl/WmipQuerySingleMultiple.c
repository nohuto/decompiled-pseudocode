/*
 * XREFs of WmipQuerySingleMultiple @ 0x140708650
 * Callers:
 *     WmipIoControl @ 0x140554B70 (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x140706A90 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x1405807A8 (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
        _DWORD *a9)
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
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  unsigned int v24; // esi
  unsigned int *v25; // r13
  void *v26; // rdx
  char *v27; // r8
  unsigned int v28; // eax
  unsigned int *i; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rsi
  char v34; // [rsp+40h] [rbp-338h]
  unsigned int v35; // [rsp+44h] [rbp-334h]
  unsigned __int16 v37; // [rsp+4Ah] [rbp-32Eh]
  unsigned int v38; // [rsp+50h] [rbp-328h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-324h]
  int v40; // [rsp+58h] [rbp-320h]
  unsigned int *v41; // [rsp+60h] [rbp-318h]
  unsigned int v42; // [rsp+68h] [rbp-310h]
  int v43; // [rsp+6Ch] [rbp-30Ch]
  int v44; // [rsp+70h] [rbp-308h]
  int v45; // [rsp+74h] [rbp-304h]
  void *Src; // [rsp+78h] [rbp-300h]
  unsigned int *v47; // [rsp+80h] [rbp-2F8h]
  void *v48; // [rsp+88h] [rbp-2F0h]
  __int64 v49; // [rsp+90h] [rbp-2E8h]
  __int64 v50; // [rsp+98h] [rbp-2E0h]
  _DWORD *v51; // [rsp+A0h] [rbp-2D8h]
  __int64 v52; // [rsp+A8h] [rbp-2D0h]
  void *v53; // [rsp+B0h] [rbp-2C8h]
  PVOID v54; // [rsp+B8h] [rbp-2C0h]
  PVOID v55; // [rsp+C0h] [rbp-2B8h]
  __int128 v56; // [rsp+C8h] [rbp-2B0h]
  IRP *v57; // [rsp+D8h] [rbp-2A0h]
  unsigned int *v58; // [rsp+E0h] [rbp-298h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v35 = a4;
  v9 = a3;
  v48 = a3;
  v57 = a1;
  v58 = a3;
  v10 = a6;
  v39 = a6;
  v11 = a7;
  v49 = a7;
  v12 = a8;
  v50 = a8;
  v51 = a9;
  v43 = 0;
  v13 = 0;
  v40 = 0;
  if ( a7 )
  {
    v15 = 0LL;
    v54 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * a6, 0x70696D57u);
    v15 = PoolWithTag;
    v54 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, (const void *)(a5 + 8), 24LL * a6);
    else
      v13 = -1073741670;
    v9 = (unsigned int *)v48;
    v11 = v49;
    a4 = v35;
    v10 = v39;
    v12 = v50;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  v16 = 0;
  v17 = 0;
  v34 = 0;
  v47 = 0LL;
  v18 = v9;
  v41 = v9;
  v19 = P;
  v55 = P;
  v20 = 580;
  v45 = 580;
  v21 = 0LL;
  v53 = 0LL;
  while ( 1 )
  {
    v44 = v21;
    if ( (unsigned int)v21 >= v10 )
      break;
    if ( v11 )
    {
      v56 = *(_OWORD *)(v12 + 16 * v21);
      v53 = *(void **)(v11 + 8LL * (unsigned int)v21);
      v52 = 0LL;
      Src = (void *)*((_QWORD *)&v56 + 1);
      v23 = v56;
    }
    else
    {
      v22 = 3 * v21;
      v23 = v15[12 * v21 + 4];
      Src = *(void **)&v15[4 * v22 + 8];
      *((_QWORD *)&v56 + 1) = Src;
      v52 = *(_QWORD *)&v15[4 * v22];
    }
    v37 = v23;
    v24 = (v23 + 73) & 0xFFFFFFF8;
    if ( v17 || a4 < v24 )
    {
      if ( v24 > v20 )
      {
        if ( v19 != P )
          ExFreePoolWithTag(v19, 0);
        v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x70696D57u);
        v55 = v19;
        if ( !v19 )
        {
          v13 = -1073741670;
          break;
        }
        v45 = v24;
      }
      v25 = (unsigned int *)v19;
      v42 = v24;
      v47 = 0LL;
      v34 = 1;
    }
    else
    {
      v25 = v18;
      v42 = a4;
    }
    memset(v25, 0, 0x40uLL);
    v25[11] = 2;
    *v25 = v24;
    *((_QWORD *)v25 + 2) = v52;
    v25[12] = 64;
    v25[14] = v24;
    *((_WORD *)v25 + 32) = v37;
    if ( a2 == 1 && v37 )
    {
      if ( (BYTE8(v56) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = Src;
      v27 = (char *)Src + v37;
      if ( (unsigned __int64)v27 > 0x7FFFFFFF0000LL || v27 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v26 = Src;
    }
    memmove((char *)v25 + 66, v26, v37);
    v38 = *v25;
    if ( (int)WmipQuerySetExecuteSI(v53, v57, a2, 1u, (__int64)v25, v42, &v38) < 0 )
      goto LABEL_43;
    v28 = v25[11];
    if ( (v28 & 0x100) != 0 )
      goto LABEL_43;
    ++v40;
    if ( (v28 & 0x20) != 0 )
    {
      v16 += (v25[12] + 7) & 0xFFFFFFF8;
      v17 = 1;
      v34 = 1;
      goto LABEL_44;
    }
    if ( v34 )
    {
      v16 += (v38 + 7) & 0xFFFFFFF8;
LABEL_43:
      v17 = v34;
LABEL_44:
      a4 = v35;
      v18 = v41;
      goto LABEL_45;
    }
    if ( v47 )
      v47[3] = v43;
    for ( i = v25; ; i = (unsigned int *)((char *)i + v30) )
    {
      v47 = i;
      v30 = i[3];
      if ( !(_DWORD)v30 )
        break;
    }
    v31 = (v38 + 7) & 0xFFFFFFF8;
    v16 += v31;
    a4 = v35 - v31;
    v35 -= v31;
    v18 = (unsigned int *)((char *)v41 + v31);
    v41 = v18;
    v43 = (_DWORD)v18 - (_DWORD)i;
    v17 = 0;
LABEL_45:
    v21 = (unsigned int)(v44 + 1);
    v11 = v49;
    v20 = v45;
    v10 = v39;
    v12 = v50;
  }
  v32 = v48;
  if ( v19 != P )
    ExFreePoolWithTag(v19, 0);
  if ( !v40 )
    v13 = -1073741163;
  if ( v13 >= 0 && v17 )
  {
    *v32 = 56;
    v32[11] = 32;
    v32[12] = v16;
    *v51 = 56;
  }
  else
  {
    *v51 = v16;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v13;
}
