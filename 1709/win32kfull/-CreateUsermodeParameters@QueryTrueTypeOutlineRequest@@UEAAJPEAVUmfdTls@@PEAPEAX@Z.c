/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0131870
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0037DD4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C01319F4 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // r14
  _QWORD *v10; // rax
  char *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16[13]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v16,
          0x40u,
          &v15,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          &v17,
          *((_DWORD *)this + 18),
          &v18) )
    return 3221225495LL;
  v6 = v17;
  v7 = v17 + v18;
  if ( v17 + v18 < v17 )
    return 3221225495LL;
  v8 = v15;
  if ( v15 + v7 < v15 )
    return 3221225495LL;
  v9 = v16[0];
  if ( v15 + v7 + v16[0] < v16[0] )
    return 3221225495LL;
  v10 = UmfdTls::CommitUMBuffer(a2, v15 + v7 + v16[0], 1);
  if ( !v10 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = (char *)v10 + v9;
  v11 = (char *)v10 + v9 + v8;
  *((_QWORD *)this + 13) = v11;
  *((_QWORD *)this + 14) = (unsigned __int64)&v11[v6] & -(__int64)(*((_QWORD *)this + 10) != 0LL);
  *v10 = *((_QWORD *)this + 5);
  v12 = *((_QWORD *)this + 12);
  v13 = *((_QWORD *)this + 6);
  *(_OWORD *)v12 = *(_OWORD *)v13;
  *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + 16);
  *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + 32);
  *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
  *(_QWORD *)(v12 + 48) = 0LL;
  *(_QWORD *)(v12 + 24) = **(_QWORD **)(v13 + 24);
  a2[4] = (UmfdUMBuffer *)v13;
  v10[1] = *((_QWORD *)this + 12);
  *((_DWORD *)v10 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v10 + 5) = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 8) )
    v10[3] = *((_QWORD *)this + 13);
  v10[5] = *((_QWORD *)this + 14);
  *((_DWORD *)v10 + 8) = *((_DWORD *)this + 18);
  *a3 = v10;
  return 0LL;
}
