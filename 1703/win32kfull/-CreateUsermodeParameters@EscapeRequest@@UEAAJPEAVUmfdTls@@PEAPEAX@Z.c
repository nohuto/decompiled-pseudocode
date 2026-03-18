/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02B9D70
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0091F94 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  unsigned int v7; // esi
  unsigned int v8; // ecx
  char v9; // al
  char *v10; // rax
  _DWORD *v11; // rdi
  const void *v12; // rdx
  unsigned int v14; // [rsp+30h] [rbp+8h]

  v5 = *((_DWORD *)this + 12);
  v6 = *((_DWORD *)this + 9);
  if ( v6 + 7 < v6 )
    return 3221225495LL;
  v7 = (v6 + 7) & 0xFFFFFFF8;
  if ( v5 + 7 < v5 )
  {
    v9 = 0;
    v8 = v14;
  }
  else
  {
    v8 = (v5 + 7) & 0xFFFFFFF8;
    v9 = 1;
  }
  if ( !v9 )
    return 3221225495LL;
  if ( v7 + v8 < v7 )
    return 3221225495LL;
  if ( v7 + v8 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v10 = (char *)UmfdTls::CommitUMBuffer(a2, v7 + v8 + 48, 1);
  v11 = v10;
  if ( !v10 )
    return 3221225495LL;
  *((_QWORD *)this + 9) = v10 + 48;
  *((_QWORD *)this + 10) = &v10[v7 + 48];
  v12 = (const void *)*((_QWORD *)this + 5);
  if ( v12 )
    memmove(*((void **)this + 9), v12, *((unsigned int *)this + 9));
  else
    *((_QWORD *)this + 9) = 0LL;
  if ( !*((_QWORD *)this + 7) )
    *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)v11 = 0LL;
  v11[2] = *((_DWORD *)this + 8);
  v11[3] = *((_DWORD *)this + 9);
  *((_QWORD *)v11 + 2) = *((_QWORD *)this + 9);
  v11[6] = *((_DWORD *)this + 12);
  *((_QWORD *)v11 + 4) = *((_QWORD *)this + 10);
  *a3 = v11;
  return 0LL;
}
