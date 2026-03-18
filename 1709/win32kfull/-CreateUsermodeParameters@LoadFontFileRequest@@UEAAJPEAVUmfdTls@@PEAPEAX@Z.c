/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0041020
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0037DD4 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     EngFntCacheLookUp @ 0x1C0041230 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  _DWORD *v6; // r15
  ULONG v7; // esi
  unsigned int v8; // ecx
  ULONG v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // eax
  char *v13; // rax
  char *v14; // rbx
  unsigned int i; // r8d
  ULONG v16; // eax
  ULONG v17; // eax
  __int64 v18; // rax
  ULONG v20[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 2 )
    return 3221225495LL;
  v6 = EngFntCacheLookUp(*((_DWORD *)this + 34), v20);
  v7 = v6 != 0LL ? v20[0] : 0;
  if ( v7 <= 0x10 )
  {
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v8 = v7 - 16;
    v9 = 0;
  }
  v10 = v8 + 7;
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v11 = v10 & 0xFFFFFFF8;
  v12 = (v10 & 0xFFFFFFF8) + 208;
  if ( v11 >= 0xFFFFFF30 )
    return 3221225495LL;
  v13 = (char *)UmfdTls::CommitUMBuffer(a2, v12, 0);
  v14 = v13;
  if ( !v13 )
    return 3221225495LL;
  *((_QWORD *)v13 + 25) = v13 + 208;
  memset(v13, 0, 0xD0uLL);
  *((_QWORD *)v14 + 1) = v14 + 16;
  *((_QWORD *)v14 + 5) = v14 + 48;
  *((_QWORD *)v14 + 9) = v14 + 80;
  *(_DWORD *)v14 = *((_DWORD *)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    *(_QWORD *)(*((_QWORD *)v14 + 1) + 8LL * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v14 + 5) + 8LL * i) = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * i);
    *(_DWORD *)(*((_QWORD *)v14 + 9) + 4LL * i) = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v14 + 14) = v14 + 120;
    v18 = *((_QWORD *)this + 19);
    *(_OWORD *)(v14 + 120) = *(_OWORD *)v18;
    *(_OWORD *)(v14 + 136) = *(_OWORD *)(v18 + 16);
    *(_OWORD *)(v14 + 152) = *(_OWORD *)(v18 + 32);
    *(_OWORD *)(v14 + 168) = *(_OWORD *)(v18 + 48);
    *((_QWORD *)v14 + 23) = *(_QWORD *)(v18 + 64);
  }
  *((_DWORD *)v14 + 23) = *((_DWORD *)this + 33);
  *((_DWORD *)v14 + 24) = *((_DWORD *)this + 34);
  if ( v7 <= 0x10 )
    v16 = 0;
  else
    v16 = v7 - 16;
  if ( v16 )
  {
    *((_DWORD *)v14 + 25) = *v6;
    if ( v7 <= 0x10 )
      v17 = 0;
    else
      v17 = v7 - 16;
    *((_DWORD *)v14 + 48) = v17;
    if ( v7 > 0x10 )
      v9 = v7 - 16;
    memmove(v14 + 200, v6 + 4, v9);
  }
  else
  {
    *((_DWORD *)v14 + 25) = -1;
  }
  *a3 = v14;
  return 0LL;
}
