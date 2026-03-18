/*
 * XREFs of WmipQueryAllDataMultiple @ 0x140741EB0
 * Callers:
 *     WmipIoControl @ 0x140579E20 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x140740550 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipQueryAllData @ 0x14051B564 (WmipQueryAllData.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        void **a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        _DWORD *a8)
{
  void **v8; // rax
  _DWORD *v10; // r14
  _DWORD *v11; // r13
  __int64 v12; // rbp
  _BYTE *PoolWithTag; // rax
  _BYTE *v14; // rsi
  _QWORD *v15; // rcx
  int v16; // ebp
  char v17; // r12
  char *v18; // r15
  char *v19; // rcx
  char *v20; // rbx
  _BYTE *v22; // rdx
  void **v23; // rsi
  void **v24; // r13
  int v25; // edi
  void *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  int v33; // [rsp+34h] [rbp-F4h]
  void **v34; // [rsp+38h] [rbp-F0h] BYREF
  char *v35; // [rsp+40h] [rbp-E8h]
  int v36; // [rsp+48h] [rbp-E0h]
  void *v37; // [rsp+50h] [rbp-D8h]
  __int64 v38; // [rsp+58h] [rbp-D0h]
  _BYTE *v39; // [rsp+60h] [rbp-C8h]
  signed __int64 v40; // [rsp+68h] [rbp-C0h]
  IRP *v41; // [rsp+70h] [rbp-B8h]
  _DWORD *v42; // [rsp+78h] [rbp-B0h]
  __int64 v43; // [rsp+80h] [rbp-A8h]
  _BYTE v44[80]; // [rsp+90h] [rbp-98h] BYREF

  v36 = 0;
  v8 = a2;
  v37 = 0LL;
  v33 = 0;
  v10 = a5;
  v11 = a8;
  v41 = a3;
  v34 = a2;
  v42 = a5;
  v43 = (__int64)a8;
  if ( a2 )
  {
    v14 = 0LL;
    v39 = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    v12 = *(unsigned int *)a7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v12, 0x70696D57u);
    v39 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( a1 )
    {
      v15 = PoolWithTag;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + a7 - PoolWithTag + 8);
        ++v15;
        --v12;
      }
      while ( v12 );
    }
    v8 = v34;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = (char *)a5;
  v35 = (char *)a5;
  v20 = (char *)a5;
  if ( !a1 )
    goto LABEL_26;
  v22 = v14;
  v23 = v34;
  v24 = v8;
  v40 = v22 - (_BYTE *)v8;
  v38 = a1;
  do
  {
    if ( v20 == v44 || a6 < 0x48 )
    {
      v20 = v44;
      v25 = 72;
      v18 = 0LL;
    }
    else
    {
      v20 = v19;
      v25 = a6;
    }
    memset(v20, 0, 0x48uLL);
    *((_DWORD *)v20 + 11) = 1;
    *(_DWORD *)v20 = 48;
    if ( v23 )
    {
      v27 = *v24;
      v37 = *v24;
    }
    else
    {
      *((_QWORD *)v20 + 2) = *(void **)((char *)v24 + v40);
      v27 = v37;
    }
    if ( (int)WmipQueryAllData(v27, v41, a4, (__int64)v20, v25, (unsigned int *)&v34) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v20 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++v33;
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v20 + 12);
      v20 = v44;
LABEL_22:
      v17 = 1;
      v16 += (v29 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v35;
      goto LABEL_24;
    }
    if ( v20 == v44 )
    {
      v29 = (int)v34;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v36;
    v30 = *((unsigned int *)v20 + 3);
    v18 = v20;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v30 = *((unsigned int *)v18 + 3);
    }
    v31 = ((_DWORD)v34 + 7) & 0xFFFFFFF8;
    v19 = &v35[v31];
    v16 += v31;
    a6 -= v31;
    v35 = v19;
    v36 = (_DWORD)v19 - (_DWORD)v18;
LABEL_24:
    ++v24;
    --v38;
  }
  while ( v38 );
  v14 = v39;
  v10 = v42;
  v11 = (_DWORD *)v43;
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v33 )
    return 3221226133LL;
  if ( v17 )
  {
    v10[11] = 32;
    *v10 = 56;
    v10[12] = v16;
    *v11 = 56;
  }
  else
  {
    *v11 = v16;
  }
  return 0LL;
}
