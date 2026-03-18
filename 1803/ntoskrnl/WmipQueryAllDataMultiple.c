/*
 * XREFs of WmipQueryAllDataMultiple @ 0x1407A3F88
 * Callers:
 *     WmipIoControl @ 0x14051ACC0 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x1407A2590 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     WmipQueryAllData @ 0x14051A7B0 (WmipQueryAllData.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        void **a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        int *a8)
{
  int v8; // r13d
  void **v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rsi
  _BYTE *PoolWithTag; // rax
  _BYTE *v14; // rbp
  _QWORD *v15; // rcx
  int v16; // esi
  char v17; // r12
  char *v18; // r14
  char *v19; // rdx
  _BYTE *v20; // rcx
  void **v21; // r13
  void **v22; // rbp
  char *v23; // rbx
  int v25; // edi
  void *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  int v33; // eax
  int v35; // [rsp+34h] [rbp-F4h]
  void **v36; // [rsp+38h] [rbp-F0h] BYREF
  char *v37; // [rsp+40h] [rbp-E8h]
  void *v38; // [rsp+48h] [rbp-E0h]
  __int64 v39; // [rsp+50h] [rbp-D8h]
  __int64 v40; // [rsp+58h] [rbp-D0h]
  _BYTE *v41; // [rsp+60h] [rbp-C8h]
  signed __int64 v42; // [rsp+68h] [rbp-C0h]
  IRP *v43; // [rsp+70h] [rbp-B8h]
  _DWORD *v44; // [rsp+78h] [rbp-B0h]
  int *v45; // [rsp+80h] [rbp-A8h]
  _BYTE v46[80]; // [rsp+90h] [rbp-98h] BYREF

  LODWORD(v39) = 0;
  v8 = 0;
  v38 = 0LL;
  v10 = a2;
  v11 = a5;
  v45 = a8;
  v43 = a3;
  v36 = a2;
  v44 = a5;
  v35 = 0;
  if ( a2 )
  {
    v14 = 0LL;
    v41 = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    v12 = *(unsigned int *)a7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v12, 0x70696D57u);
    v41 = PoolWithTag;
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
    v10 = v36;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = (char *)a5;
  v37 = (char *)a5;
  if ( !a1 )
    goto LABEL_26;
  v20 = v14;
  v21 = v10;
  v22 = v36;
  v23 = (char *)a5;
  v40 = a1;
  v42 = v20 - (_BYTE *)v10;
  do
  {
    if ( v23 == v46 || a6 < 0x48 )
    {
      v23 = v46;
      v25 = 72;
      v18 = 0LL;
    }
    else
    {
      v23 = v19;
      v25 = a6;
    }
    memset(v23, 0, 0x48uLL);
    *((_DWORD *)v23 + 11) = 1;
    *(_DWORD *)v23 = 48;
    if ( v22 )
    {
      v27 = *v21;
      v38 = *v21;
    }
    else
    {
      *((_QWORD *)v23 + 2) = *(void **)((char *)v21 + v42);
      v27 = v38;
    }
    if ( (int)WmipQueryAllData(v27, v43, a4, (__int64)v23, v25, (unsigned int *)&v36) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v23 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++v35;
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v23 + 12);
      v23 = v46;
LABEL_22:
      v17 = 1;
      v16 += (v29 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v37;
      goto LABEL_24;
    }
    if ( v23 == v46 )
    {
      v29 = (int)v36;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v39;
    v30 = *((unsigned int *)v23 + 3);
    v18 = v23;
    v31 = (int)v23;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v31 = (int)v18;
      v30 = *((unsigned int *)v18 + 3);
    }
    v32 = ((_DWORD)v36 + 7) & 0xFFFFFFF8;
    v19 = &v37[v32];
    v16 += v32;
    a6 -= v32;
    v37 = v19;
    v39 = (unsigned int)((_DWORD)v19 - v31);
LABEL_24:
    ++v21;
    --v40;
  }
  while ( v40 );
  v14 = v41;
  v11 = v44;
  v8 = v35;
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v8 )
    return 3221226133LL;
  if ( v17 )
  {
    v33 = 56;
    v11[11] = 32;
    *v11 = 56;
    v11[12] = v16;
  }
  else
  {
    v33 = v16;
  }
  *v45 = v33;
  return 0LL;
}
