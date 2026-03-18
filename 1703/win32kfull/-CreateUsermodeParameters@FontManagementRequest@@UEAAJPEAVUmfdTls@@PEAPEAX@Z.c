/*
 * XREFs of ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02B9E90
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0091F94 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C012E508 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall FontManagementRequest::CreateUsermodeParameters(
        FontManagementRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // r15
  char *v10; // rax
  _QWORD *v11; // rdi
  char *v12; // rdx
  const void *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v18,
          0x40u,
          &v17,
          *((_DWORD *)this + 11),
          &v19,
          *((_DWORD *)this + 14),
          &v20) )
    return 3221225495LL;
  v6 = v19;
  v7 = v19 + v20;
  if ( v19 + v20 < v19 )
    return 3221225495LL;
  v8 = v17;
  if ( v17 + v7 < v17 )
    return 3221225495LL;
  v9 = v18[0];
  if ( v17 + v7 + v18[0] < v18[0] )
    return 3221225495LL;
  v10 = (char *)UmfdTls::CommitUMBuffer(a2, v17 + v7 + v18[0], 1);
  v11 = v10;
  if ( !v10 )
    return 3221225495LL;
  *((_QWORD *)this + 10) = &v10[v9];
  v12 = &v10[v9 + v8];
  *((_QWORD *)this + 11) = v12;
  *((_QWORD *)this + 12) = &v12[v6];
  v13 = (const void *)*((_QWORD *)this + 6);
  if ( v13 )
    memmove(*((void **)this + 11), v13, *((unsigned int *)this + 11));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  v14 = *((_QWORD *)this + 4);
  if ( v14 )
  {
    v15 = *((_QWORD *)this + 10);
    *(_OWORD *)v15 = *(_OWORD *)v14;
    *(_OWORD *)(v15 + 16) = *(_OWORD *)(v14 + 16);
    *(_OWORD *)(v15 + 32) = *(_OWORD *)(v14 + 32);
    *(_OWORD *)(v15 + 48) = *(_OWORD *)(v14 + 48);
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_QWORD *)(v15 + 24) = **(_QWORD **)(v14 + 24);
    a2[4] = (UmfdUMBuffer *)v14;
    v11[1] = *((_QWORD *)this + 10);
  }
  *v11 = 0LL;
  *((_DWORD *)v11 + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)v11 + 5) = *((_DWORD *)this + 11);
  v11[3] = *((_QWORD *)this + 11);
  *((_DWORD *)v11 + 8) = *((_DWORD *)this + 14);
  v11[5] = *((_QWORD *)this + 12);
  *a3 = v11;
  return 0LL;
}
