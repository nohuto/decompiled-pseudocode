/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082DD0
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01559B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C008E368 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, const char *a2)
{
  unsigned int v2; // ebx
  char v5; // bp
  unsigned __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // r8d
  void *v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // r14d
  char *v12; // r15
  __int64 v13; // rdi
  char **v14; // rax
  char *v15; // rdi
  char i; // cl
  __int64 v17; // rax
  char *v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx

  v2 = 0;
  if ( !BYTE5(qword_1C0193740) )
    return v2;
  v5 = -1;
  v6 = 96LL * (unsigned int)dword_1C0193724;
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = -1073741675;
    v8 = 436;
LABEL_6:
    v2 = v7;
    CitpLogFailureWorker(v7, a2, v8);
    return v2;
  }
  v9 = CitAllocZero((unsigned int)v6);
  *(_QWORD *)a1 = v9;
  if ( !v9 )
  {
    v7 = -1073741670;
    v8 = 444;
    goto LABEL_6;
  }
  v10 = (unsigned int)dword_1C0193724;
  v11 = 0;
  if ( dword_1C0193724 )
  {
    v12 = (char *)a1 + 8;
    do
    {
      v13 = *(_QWORD *)a1 + 96LL * v11;
      *(_WORD *)(v13 + 32) = 1;
      *(_QWORD *)v13 = 0LL;
      memset((void *)(v13 + 40), 0, 0x28uLL);
      v14 = (char **)*((_QWORD *)a1 + 2);
      v15 = (char *)(v13 + 16);
      if ( *v14 != v12 )
        __fastfail(3u);
      *(_QWORD *)v15 = v12;
      ++v11;
      *((_QWORD *)v15 + 1) = v14;
      *v14 = v15;
      *((_QWORD *)a1 + 2) = v15;
      v10 = (unsigned int)dword_1C0193724;
    }
    while ( v11 < dword_1C0193724 );
  }
  *((_DWORD *)a1 + 14) = v10;
  *((_DWORD *)a1 + 17) = v10 - ((unsigned int)v10 >> 2);
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    for ( i = -1; (_DWORD)v10; LODWORD(v10) = (unsigned int)v10 >> 1 )
      ++i;
    v10 = (unsigned int)(1 << i);
  }
  v17 = Win32AllocPool((unsigned int)(8 * v10), 0x49637355u);
  *((_QWORD *)a1 + 11) = v17;
  v18 = (char *)v17;
  if ( !v17 )
  {
    v7 = -1073741670;
    v8 = 488;
    goto LABEL_6;
  }
  v19 = (unsigned __int64)a1 + 72;
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    for ( ; (_DWORD)v10; LODWORD(v10) = (unsigned int)v10 >> 1 )
      ++v5;
    v10 = (unsigned int)(1 << v5);
  }
  *(_DWORD *)v19 = 0;
  *((_QWORD *)a1 + 10) = v18;
  if ( (unsigned int)v10 > 0x4000000 )
    v10 = 0x4000000LL;
  *((_DWORD *)a1 + 19) = 32 * v10;
  v20 = v19 | 1;
  v21 = (unsigned int)v10;
  if ( v18 > &v18[8 * v10] )
    v21 = 0LL;
  if ( v21 )
    memset64(v18, v20, v21);
  return v2;
}
