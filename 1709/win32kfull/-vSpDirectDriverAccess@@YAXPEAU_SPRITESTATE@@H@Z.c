/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED06C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00ECF8C (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00ECFD8 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0065628 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KTHREAD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _KTHREAD *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // [rsp+30h] [rbp+8h] BYREF

  v66 = *(_QWORD *)a1;
  v5 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v7 = ThreadWin32Thread;
  if ( v5 )
  {
    if ( ThreadWin32Thread
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v66)
      && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
    {
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 280) + 4LL) = *((_DWORD *)a1 + 25);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 280) + 8LL) = *((_DWORD *)a1 + 26);
      CurrentThread = KeGetCurrentThread();
      v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread, v22, v23, v24) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread, v26, v27, v28) + 280) + 20LL) = *(_DWORD *)(v25 + 4);
      v29 = KeGetCurrentThread();
      v33 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)v29, v30, v31, v32) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)v29, v34, v35, v36) + 280) + 24LL) = *(_DWORD *)(v33 + 8);
      vSpTlSpriteStateDirectDriverAccess(a1, v5, v37, v38);
      **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 280) = 1;
    }
    else
    {
      PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v66);
      v11 = *((_DWORD *)a1 + 25);
      *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v11;
      v12 = *((_DWORD *)a1 + 26);
      *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v12;
      *((_DWORD *)a1 + 24) = 1;
    }
  }
  else if ( ThreadWin32Thread
         && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v66)
         && (*(_DWORD *)(v7 + 104) || *(_DWORD *)(v7 + 108)) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 280) + 12LL) = *((_DWORD *)a1 + 27);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280) + 16LL) = *((_DWORD *)a1 + 28);
    v45 = KeGetCurrentThread();
    v49 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)v45, v46, v47, v48) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)v45, v50, v51, v52) + 280) + 20LL) = *(_DWORD *)(v49 + 12);
    v53 = KeGetCurrentThread();
    v57 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)v53, v54, v55, v56) + 280);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)v53, v58, v59, v60) + 280) + 24LL) = *(_DWORD *)(v57 + 16);
    vSpTlSpriteStateDirectDriverAccess(a1, 0LL, v61, v62);
    **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 280) = 0;
  }
  else
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v66);
    v16 = *((_DWORD *)a1 + 27);
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) = v16;
    v17 = *((_DWORD *)a1 + 28);
    *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 100) = v17;
    *((_DWORD *)a1 + 24) = 0;
  }
}
