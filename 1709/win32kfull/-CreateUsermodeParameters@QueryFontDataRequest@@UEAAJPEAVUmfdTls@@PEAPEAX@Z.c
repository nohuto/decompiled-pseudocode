/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0037BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0037DD4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // esi
  unsigned int v10; // ecx
  char v11; // al
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  const void *v16; // rdx
  int v18; // ecx
  unsigned int v19; // [rsp+40h] [rbp+8h]

  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v18 = *((_DWORD *)this + 12) - 2;
    if ( v18 )
    {
      if ( v18 == 1 )
        *((_DWORD *)this + 20) = 124;
    }
    else
    {
      *((_QWORD *)a2 + 5) = v6;
      *((_DWORD *)this + 20) = 8;
    }
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
  }
  v7 = *((_QWORD *)this + 8) != 0LL ? 0x40 : 0;
  v8 = *((_DWORD *)this + 20);
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v9 = (v7 + 7) & 0xFFFFFFF8;
  if ( v8 + 7 < v8 )
  {
    v11 = 0;
    v10 = v19;
  }
  else
  {
    v10 = (v8 + 7) & 0xFFFFFFF8;
    v11 = 1;
  }
  if ( !v11 )
    return 3221225495LL;
  if ( v9 + v10 < v9 )
    return 3221225495LL;
  if ( v9 + v10 + 64 < 0x40 )
    return 3221225495LL;
  if ( v9 + v10 + 64 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v12 = UmfdTls::CommitUMBuffer(a2, v9 + v10 + 112, 1);
  v13 = v12;
  if ( !v12 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v12 + 6;
  *((_QWORD *)this + 12) = v12 + 14;
  *((_QWORD *)this + 13) = (char *)v12 + v9 + 112;
  v14 = *((_QWORD *)this + 11);
  v15 = *((_QWORD *)this + 7);
  *(_OWORD *)v14 = *(_OWORD *)v15;
  *(_OWORD *)(v14 + 16) = *(_OWORD *)(v15 + 16);
  *(_OWORD *)(v14 + 32) = *(_OWORD *)(v15 + 32);
  *(_OWORD *)(v14 + 48) = *(_OWORD *)(v15 + 48);
  *(_QWORD *)(v14 + 48) = 0LL;
  *(_QWORD *)(v14 + 24) = **(_QWORD **)(v15 + 24);
  *((_QWORD *)a2 + 4) = v15;
  v12[2] = *((_QWORD *)this + 11);
  *v12 = *((_QWORD *)this + 5);
  *((_DWORD *)v12 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v12 + 3) = *((_DWORD *)this + 13);
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  v12[3] = *((_QWORD *)this + 12);
  v16 = (const void *)*((_QWORD *)this + 9);
  if ( v16 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      memmove(*((void **)this + 13), v16, *((unsigned int *)this + 20));
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v13[4] = *((_QWORD *)this + 13);
  *((_DWORD *)v13 + 10) = *((_DWORD *)this + 20);
  *a3 = v13;
  return 0LL;
}
