/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00BAAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C0091F94 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PayloadSize@UmfdFontCacheEntry@@QEBAIXZ @ 0x1C00BACC4 (-PayloadSize@UmfdFontCacheEntry@@QEBAIXZ.c)
 *     EngFntCacheLookUp @ 0x1C00BACE0 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  _DWORD *v6; // rsi
  ULONG v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // eax
  char *v12; // rax
  char *v13; // rbx
  __int64 i; // r8
  unsigned int v15; // eax
  __int64 v16; // rax
  _DWORD *v18; // [rsp+28h] [rbp-20h] BYREF
  ULONG v19[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 2 )
    return 3221225495LL;
  v6 = EngFntCacheLookUp(*((_DWORD *)this + 30), v19);
  v18 = v6;
  v7 = v6 != 0LL ? v19[0] : 0;
  v19[0] = v7;
  v8 = v7 > 0x10 ? v7 - 16 : 0;
  v9 = v8 + 7;
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v10 = v9 & 0xFFFFFFF8;
  v11 = (v9 & 0xFFFFFFF8) + 208;
  if ( v10 >= 0xFFFFFF30 )
    return 3221225495LL;
  v12 = (char *)UmfdTls::CommitUMBuffer(a2, v11, 0);
  v13 = v12;
  if ( !v12 )
    return 3221225495LL;
  *((_QWORD *)v12 + 25) = v12 + 208;
  memset(v12, 0, 0xD0uLL);
  *((_QWORD *)v13 + 1) = v13 + 16;
  *((_QWORD *)v13 + 5) = v13 + 48;
  *((_QWORD *)v13 + 9) = v13 + 80;
  *(_DWORD *)v13 = *((_DWORD *)this + 6);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    *(_QWORD *)(*((_QWORD *)v13 + 1) + 8 * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v13 + 5) + 8 * i) = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    *(_DWORD *)(*((_QWORD *)v13 + 9) + 4 * i) = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * i);
  }
  if ( *((_QWORD *)this + 17) )
  {
    *((_QWORD *)v13 + 14) = v13 + 120;
    v16 = *((_QWORD *)this + 17);
    *(_OWORD *)(v13 + 120) = *(_OWORD *)v16;
    *(_OWORD *)(v13 + 136) = *(_OWORD *)(v16 + 16);
    *(_OWORD *)(v13 + 152) = *(_OWORD *)(v16 + 32);
    *(_OWORD *)(v13 + 168) = *(_OWORD *)(v16 + 48);
    *((_QWORD *)v13 + 23) = *(_QWORD *)(v16 + 64);
  }
  *((_DWORD *)v13 + 23) = *((_DWORD *)this + 29);
  *((_DWORD *)v13 + 24) = *((_DWORD *)this + 30);
  v15 = UmfdFontCacheEntry::PayloadSize((UmfdFontCacheEntry *)&v18);
  if ( v15 )
  {
    *((_DWORD *)v13 + 25) = *v6;
    *((_DWORD *)v13 + 48) = v15;
    memmove(v13 + 200, v6 + 4, v15);
  }
  else
  {
    *((_DWORD *)v13 + 25) = -1;
  }
  *a3 = v13;
  return 0LL;
}
