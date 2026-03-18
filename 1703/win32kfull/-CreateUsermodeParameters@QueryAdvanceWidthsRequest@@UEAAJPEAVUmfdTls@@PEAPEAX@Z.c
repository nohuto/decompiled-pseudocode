/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0090130
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0091F94 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v6; // r10d
  unsigned int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char v10; // al
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v16; // [rsp+40h] [rbp+8h]

  v6 = 2 * *((_DWORD *)this + 16);
  v7 = 4 * *((_DWORD *)this + 16);
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v8 = (v7 + 7) & 0xFFFFFFF8;
  if ( v6 + 7 < v6 )
  {
    v10 = 0;
    v9 = v16;
  }
  else
  {
    v9 = (v6 + 7) & 0xFFFFFFF8;
    v10 = 1;
  }
  if ( !v10 )
    return 3221225495LL;
  if ( v8 + v9 < v8 )
    return 3221225495LL;
  if ( v8 + v9 + 64 < 0x40 )
    return 3221225495LL;
  if ( v8 + v9 + 64 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v8 + v9 + 112, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 9) = v11 + 6;
  *((_QWORD *)this + 10) = v11 + 14;
  *((_QWORD *)this + 11) = (char *)v11 + v8 + 112;
  v13 = *((_QWORD *)this + 9);
  v14 = *((_QWORD *)this + 4);
  *(_OWORD *)v13 = *(_OWORD *)v14;
  *(_OWORD *)(v13 + 16) = *(_OWORD *)(v14 + 16);
  *(_OWORD *)(v13 + 32) = *(_OWORD *)(v14 + 32);
  *(_OWORD *)(v13 + 48) = *(_OWORD *)(v14 + 48);
  *(_QWORD *)(v13 + 48) = 0LL;
  *(_QWORD *)(v13 + 24) = **(_QWORD **)(v14 + 24);
  *((_QWORD *)a2 + 4) = v14;
  v11[1] = *((_QWORD *)this + 9);
  *v11 = *((_QWORD *)this + 3);
  *((_DWORD *)v11 + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)v11 + 10) = *((_DWORD *)this + 16);
  v11[3] = *((_QWORD *)this + 10);
  memmove(*((void **)this + 10), *((const void **)this + 6), 4LL * *((unsigned int *)this + 16));
  v12[4] = *((_QWORD *)this + 11);
  *a3 = v12;
  return 0LL;
}
