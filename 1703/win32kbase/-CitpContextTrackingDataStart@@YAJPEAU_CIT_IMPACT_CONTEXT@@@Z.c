/*
 * XREFs of ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0086DF8
 * Callers:
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0086D84 (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C0053F28 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C01531C0 (--$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z.c)
 *     ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C0153B80 (-CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, const char *a2)
{
  unsigned int v2; // ebx
  char v5; // bp
  unsigned __int64 v6; // rcx
  void *v7; // rax
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  void *v11; // rax
  unsigned int v12; // r14d
  char *v13; // r15
  __int64 v14; // rdi
  char **v15; // rax
  char *v16; // rdi
  struct _CIT_BITMAP *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // eax
  char i; // cl
  __int64 v23; // rax
  char *v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _QWORD v28[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !byte_1C018E8B8 )
    return v2;
  v5 = -1;
  v6 = *(unsigned int *)((char *)&qword_1C018E8BA + 2) * (unsigned __int64)(unsigned int)(qword_1C018E85C + 7);
  if ( v6 > 0xFFFFFFFF )
  {
    *((_DWORD *)a1 + 102) = -1;
    v9 = 690;
    goto LABEL_34;
  }
  *((_DWORD *)a1 + 102) = v6;
  v7 = CitAllocZero((unsigned int)v6);
  *((_QWORD *)a1 + 50) = v7;
  if ( !v7 )
  {
    v8 = -1073741670;
    v9 = 698;
LABEL_35:
    v2 = v8;
    CitpLogFailureWorker(v8, a2, v9);
    return v2;
  }
  v10 = 176LL * (unsigned int)qword_1C018E85C;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = 709;
LABEL_34:
    v8 = -1073741675;
    goto LABEL_35;
  }
  v11 = CitAllocZero((unsigned int)v10);
  *((_QWORD *)a1 + 38) = v11;
  if ( !v11 )
  {
    v8 = -1073741670;
    v9 = 717;
    goto LABEL_35;
  }
  v12 = 0;
  v28[0] = *((_QWORD *)a1 + 50);
  v28[1] = *((unsigned int *)a1 + 102);
  if ( (_DWORD)qword_1C018E85C )
  {
    v13 = (char *)a1 + 312;
    do
    {
      v14 = *((_QWORD *)a1 + 38) + 176LL * v12;
      *(_WORD *)(v14 + 32) = 1;
      *(_QWORD *)v14 = 0LL;
      memset((void *)(v14 + 40), 0, 0x28uLL);
      CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(v14 + 88, v28);
      v15 = (char **)*((_QWORD *)a1 + 40);
      v16 = (char *)(v14 + 16);
      if ( *v15 != v13 )
        __fastfail(3u);
      *(_QWORD *)v16 = v13;
      ++v12;
      *((_QWORD *)v16 + 1) = v15;
      *v15 = v16;
      *((_QWORD *)a1 + 40) = v16;
    }
    while ( v12 < (unsigned int)qword_1C018E85C );
  }
  CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>((char *)a1 + 216, v28);
  v17 = a1;
  v18 = 6LL;
  do
  {
    CitpBitmapInitialize(v17, (struct _CIT_BITMAP *)v28, *(unsigned int *)((char *)&qword_1C018E8BA + 2));
    v17 = (struct _CIT_BITMAP *)(v19 + 16);
    --v18;
  }
  while ( v18 );
  v20 = (unsigned int)qword_1C018E85C;
  v21 = qword_1C018E85C - ((unsigned int)qword_1C018E85C >> 2);
  *((_DWORD *)a1 + 90) = qword_1C018E85C;
  *((_DWORD *)a1 + 93) = v21;
  if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
  {
    for ( i = -1; (_DWORD)v20; LODWORD(v20) = (unsigned int)v20 >> 1 )
      ++i;
    v20 = (unsigned int)(1 << i);
  }
  v23 = Win32AllocPool((unsigned int)(8 * v20), 0x49637355u);
  *((_QWORD *)a1 + 49) = v23;
  v24 = (char *)v23;
  if ( !v23 )
  {
    v8 = -1073741670;
    v9 = 778;
    goto LABEL_35;
  }
  v25 = (unsigned __int64)a1 + 376;
  if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
  {
    for ( ; (_DWORD)v20; LODWORD(v20) = (unsigned int)v20 >> 1 )
      ++v5;
    v20 = (unsigned int)(1 << v5);
  }
  *(_DWORD *)v25 = 0;
  *((_QWORD *)a1 + 48) = v24;
  if ( (unsigned int)v20 > 0x4000000 )
    v20 = 0x4000000LL;
  *((_DWORD *)a1 + 95) = 32 * v20;
  v26 = v25 | 1;
  v27 = (unsigned __int64)(8 * v20 + 7) >> 3;
  if ( v24 > &v24[8 * v20] )
    v27 = 0LL;
  if ( v27 )
    memset64(v24, v26, v27);
  return v2;
}
