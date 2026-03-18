/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0024A3C
 * Callers:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00A7C0C (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A7C58 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0024D74 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 *v21; // rax
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rax
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 *v35; // rax
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rbx
  __int64 *v39; // rax
  int v40; // ebx
  int v41; // ebx
  __int64 v42; // [rsp+40h] [rbp+8h] BYREF

  v42 = *(_QWORD *)a1;
  v3 = 0LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  if ( a2 )
  {
    if ( v5 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v42) && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
    {
      v7 = 0LL;
      v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v8 )
        v7 = *v8;
      v9 = *(_QWORD *)(v7 + 280);
      v10 = 0LL;
      *(_DWORD *)(v9 + 4) = *((_DWORD *)a1 + 25);
      v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v11 )
        v10 = *v11;
      v12 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v10 + 280) + 8LL) = *((_DWORD *)a1 + 26);
      v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v13 )
        v12 = *v13;
      v14 = 0LL;
      v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v15 )
        v14 = *v15;
      v16 = *(_QWORD *)(v12 + 280);
      v17 = 0LL;
      *(_DWORD *)(*(_QWORD *)(v14 + 280) + 20LL) = *(_DWORD *)(v16 + 4);
      v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v18 )
        v17 = *v18;
      v19 = 0LL;
      v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v20 )
        v19 = *v20;
      *(_DWORD *)(*(_QWORD *)(v19 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v17 + 280) + 8LL);
      vSpTlSpriteStateDirectDriverAccess(a1, a2);
      v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v21 )
        v3 = *v21;
      **(_DWORD **)(v3 + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v42);
      v22 = *((_DWORD *)a1 + 25);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v22;
      v23 = *((_DWORD *)a1 + 26);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v23;
      *((_DWORD *)a1 + 24) = 1;
    }
  }
  else if ( v5 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v42) && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    v24 = 0LL;
    v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v25 )
      v24 = *v25;
    v26 = *(_QWORD *)(v24 + 280);
    v27 = 0LL;
    *(_DWORD *)(v26 + 12) = *((_DWORD *)a1 + 27);
    v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v28 )
      v27 = *v28;
    v29 = 0LL;
    *(_DWORD *)(*(_QWORD *)(v27 + 280) + 16LL) = *((_DWORD *)a1 + 28);
    v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v30 )
      v29 = *v30;
    v31 = 0LL;
    v32 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v32 )
      v31 = *v32;
    v33 = *(_QWORD *)(v29 + 280);
    v34 = 0LL;
    *(_DWORD *)(*(_QWORD *)(v31 + 280) + 20LL) = *(_DWORD *)(v33 + 12);
    v35 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v35 )
      v34 = *v35;
    v36 = 0LL;
    v37 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v37 )
      v36 = *v37;
    *(_DWORD *)(*(_QWORD *)(v36 + 280) + 24LL) = *(_DWORD *)(*(_QWORD *)(v34 + 280) + 16LL);
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    v38 = 0LL;
    v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v39 )
      v38 = *v39;
    **(_DWORD **)(v38 + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v42);
    v40 = *((_DWORD *)a1 + 27);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v40;
    v41 = *((_DWORD *)a1 + 28);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v41;
    *((_DWORD *)a1 + 24) = 0;
  }
}
