/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C003F600
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0037DD4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  char *v11; // rax
  _DWORD *v12; // r8
  __int64 v13; // rax

  v5 = *((_DWORD *)this + 15);
  v6 = v5 + 7;
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  v7 = v6 & 0xFFFFFFF8;
  v8 = (v6 & 0xFFFFFFF8) + 16;
  if ( v7 + 16 < v7 )
    return 3221225495LL;
  v9 = v8;
  v10 = v8 + 56;
  if ( v9 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v10, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v11 + 56;
  v13 = (__int64)&v11[v7 + 56];
  *((_QWORD *)this + 13) = v13;
  *((_QWORD *)this + 14) = v13 + 8;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v12 = **((_QWORD **)this + 5);
  v12[2] = *((_DWORD *)this + 12);
  v12[3] = *((_DWORD *)this + 13);
  v12[4] = *((_DWORD *)this + 14);
  *((_QWORD *)v12 + 3) = *((_QWORD *)this + 12);
  v12[5] = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 9) )
    *((_QWORD *)v12 + 4) = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    *((_QWORD *)v12 + 5) = *((_QWORD *)this + 14);
  *a3 = v12;
  return 0LL;
}
