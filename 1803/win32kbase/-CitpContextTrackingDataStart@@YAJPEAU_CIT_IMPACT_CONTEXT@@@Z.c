/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01609A8
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C016427C (-CitpResetTracking@@YAJXZ.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0164570 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C006AB50 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, const char *a2)
{
  unsigned int v2; // ebx
  char v4; // bp
  unsigned __int64 v5; // rcx
  int v6; // ecx
  unsigned int v7; // r8d
  void *v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // r14d
  char *v11; // r15
  __int64 v12; // rdi
  char **v13; // rax
  char *v14; // rdi
  char i; // cl
  __int64 v16; // rax
  char *v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v2 = 0;
  if ( HIBYTE(word_1C01A16A8) )
  {
    v4 = -1;
    v5 = 96LL * dword_1C01A1684;
    if ( v5 > 0xFFFFFFFF )
    {
      v6 = -1073741675;
      v7 = 450;
LABEL_4:
      v2 = v6;
      CitpLogFailureWorker(v6, a2, v7);
      return v2;
    }
    v8 = CitAllocZero((unsigned int)v5);
    *(_QWORD *)a1 = v8;
    if ( !v8 )
    {
      v6 = -1073741670;
      v7 = 458;
      goto LABEL_4;
    }
    v9 = dword_1C01A1684;
    v10 = 0;
    if ( dword_1C01A1684 )
    {
      v11 = (char *)a1 + 8;
      do
      {
        v12 = *(_QWORD *)a1 + 96LL * v10;
        *(_WORD *)(v12 + 32) = 1;
        *(_QWORD *)v12 = 0LL;
        memset((void *)(v12 + 40), 0, 0x28uLL);
        v13 = (char **)*((_QWORD *)a1 + 2);
        v14 = (char *)(v12 + 16);
        if ( *v13 != v11 )
          __fastfail(3u);
        *(_QWORD *)v14 = v11;
        ++v10;
        *((_QWORD *)v14 + 1) = v13;
        *v13 = v14;
        *((_QWORD *)a1 + 2) = v14;
        v9 = dword_1C01A1684;
      }
      while ( v10 < dword_1C01A1684 );
    }
    *((_DWORD *)a1 + 14) = v9;
    *((_DWORD *)a1 + 17) = v9 - ((unsigned int)v9 >> 2);
    if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
    {
      for ( i = -1; (_DWORD)v9; LODWORD(v9) = (unsigned int)v9 >> 1 )
        ++i;
      v9 = (unsigned int)(1 << i);
    }
    v16 = Win32AllocPool((unsigned int)(8 * v9), 0x49637355u);
    *((_QWORD *)a1 + 11) = v16;
    v17 = (char *)v16;
    if ( !v16 )
    {
      v6 = -1073741670;
      v7 = 502;
      goto LABEL_4;
    }
    v18 = (unsigned __int64)a1 + 72;
    if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = (unsigned int)v9 >> 1 )
        ++v4;
      v9 = (unsigned int)(1 << v4);
    }
    *(_DWORD *)v18 = 0;
    *((_QWORD *)a1 + 10) = v17;
    if ( (unsigned int)v9 > 0x4000000 )
      v9 = 0x4000000LL;
    *((_DWORD *)a1 + 19) = 32 * v9;
    v19 = v18 | 1;
    v20 = (unsigned int)v9;
    if ( v17 > &v17[8 * v9] )
      v20 = 0LL;
    if ( v20 )
      memset64(v17, v19, v20);
  }
  return v2;
}
