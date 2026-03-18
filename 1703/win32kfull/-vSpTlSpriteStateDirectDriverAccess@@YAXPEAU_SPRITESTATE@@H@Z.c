/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0024D74
 * Callers:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0024A3C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 *v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 *v93; // rax
  __int64 *v94; // rax

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
  {
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    v7 = *(_QWORD *)(v5 + 280);
    v8 = 0LL;
    *(_QWORD *)(v7 + 32) = a1;
    v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v9 )
      v8 = *v9;
    v10 = *(_QWORD *)(v8 + 280);
    v11 = 0LL;
    *(_QWORD *)(v10 + 40) = *((_QWORD *)a1 + 152);
    v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
      v11 = *v12;
    v13 = *(_QWORD *)(v11 + 280);
    v14 = 0LL;
    *(_QWORD *)(v13 + 48) = *((_QWORD *)a1 + 153);
    v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v15 )
      v14 = *v15;
    v16 = *(_QWORD *)(v14 + 280);
    v17 = 0LL;
    *(_QWORD *)(v16 + 56) = *((_QWORD *)a1 + 154);
    v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v18 )
      v17 = *v18;
    v19 = *(_QWORD *)(v17 + 280);
    v20 = 0LL;
    *(_QWORD *)(v19 + 72) = *((_QWORD *)a1 + 156);
    v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v21 )
      v20 = *v21;
    v22 = *(_QWORD *)(v20 + 280);
    v23 = 0LL;
    *(_QWORD *)(v22 + 80) = *((_QWORD *)a1 + 157);
    v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v24 )
      v23 = *v24;
    v25 = *(_QWORD *)(v23 + 280);
    v26 = 0LL;
    *(_QWORD *)(v25 + 88) = *((_QWORD *)a1 + 158);
    v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v27 )
      v26 = *v27;
    v28 = *(_QWORD *)(v26 + 280);
    v29 = 0LL;
    *(_QWORD *)(v28 + 96) = *((_QWORD *)a1 + 159);
    v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v30 )
      v29 = *v30;
    v31 = *(_QWORD *)(v29 + 280);
    v32 = 0LL;
    *(_QWORD *)(v31 + 104) = *((_QWORD *)a1 + 160);
    v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v33 )
      v32 = *v33;
    v34 = *(_QWORD *)(v32 + 280);
    v35 = 0LL;
    *(_QWORD *)(v34 + 112) = *((_QWORD *)a1 + 161);
    v36 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v36 )
      v35 = *v36;
    v37 = *(_QWORD *)(v35 + 280);
    v38 = 0LL;
    *(_QWORD *)(v37 + 120) = *((_QWORD *)a1 + 162);
    v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v39 )
      v38 = *v39;
    v40 = *(_QWORD *)(v38 + 280);
    v41 = 0LL;
    *(_QWORD *)(v40 + 128) = *((_QWORD *)a1 + 163);
    v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v42 )
      v41 = *v42;
    v43 = *(_QWORD *)(v41 + 280);
    v44 = 0LL;
    *(_QWORD *)(v43 + 136) = *((_QWORD *)a1 + 164);
    v45 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v45 )
      v44 = *v45;
    v46 = *(_QWORD *)(v44 + 280);
    v47 = 0LL;
    *(_QWORD *)(v46 + 152) = *((_QWORD *)a1 + 166);
    v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v48 )
      v47 = *v48;
    *(_QWORD *)(*(_QWORD *)(v47 + 280) + 144LL) = *((_QWORD *)a1 + 165);
    v49 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v49 )
      v2 = *v49;
    *(_QWORD *)(*(_QWORD *)(v2 + 280) + 160LL) = *((_QWORD *)a1 + 167);
  }
  else
  {
    v50 = 0LL;
    v51 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v51 )
      v50 = *v51;
    v52 = *(_QWORD *)(v50 + 280);
    v53 = 0LL;
    *(_QWORD *)(v52 + 32) = 0LL;
    v54 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v54 )
      v53 = *v54;
    v55 = *(_QWORD *)(v53 + 280);
    v56 = 0LL;
    *(_QWORD *)(v55 + 40) = SpStrokeAndFillPath;
    v57 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v57 )
      v56 = *v57;
    v58 = *(_QWORD *)(v56 + 280);
    v59 = 0LL;
    *(_QWORD *)(v58 + 48) = SpStrokePath;
    v60 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v60 )
      v59 = *v60;
    v61 = *(_QWORD *)(v59 + 280);
    v62 = 0LL;
    *(_QWORD *)(v61 + 56) = SpFillPath;
    v63 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v63 )
      v62 = *v63;
    v64 = *(_QWORD *)(v62 + 280);
    v65 = 0LL;
    *(_QWORD *)(v64 + 72) = SpBitBlt;
    v66 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v66 )
      v65 = *v66;
    v67 = *(_QWORD *)(v65 + 280);
    v68 = 0LL;
    *(_QWORD *)(v67 + 80) = SpCopyBits;
    v69 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v69 )
      v68 = *v69;
    v70 = *(_QWORD *)(v68 + 280);
    v71 = 0LL;
    *(_QWORD *)(v70 + 88) = SpStretchBlt;
    v72 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v72 )
      v71 = *v72;
    v73 = *(_QWORD *)(v71 + 280);
    v74 = 0LL;
    *(_QWORD *)(v73 + 96) = SpTextOut;
    v75 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v75 )
      v74 = *v75;
    v76 = *(_QWORD *)(v74 + 280);
    v77 = 0LL;
    *(_QWORD *)(v76 + 104) = SpLineTo;
    v78 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v78 )
      v77 = *v78;
    v79 = *(_QWORD *)(v77 + 280);
    v80 = 0LL;
    *(_QWORD *)(v79 + 112) = SpTransparentBlt;
    v81 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v81 )
      v80 = *v81;
    v82 = *(_QWORD *)(v80 + 280);
    v83 = 0LL;
    *(_QWORD *)(v82 + 120) = SpAlphaBlend;
    v84 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v84 )
      v83 = *v84;
    v85 = *(_QWORD *)(v83 + 280);
    v86 = 0LL;
    *(_QWORD *)(v85 + 128) = SpPlgBlt;
    v87 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v87 )
      v86 = *v87;
    v88 = *(_QWORD *)(v86 + 280);
    v89 = 0LL;
    *(_QWORD *)(v88 + 136) = SpGradientFill;
    v90 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v90 )
      v89 = *v90;
    v91 = *(_QWORD *)(v89 + 280);
    v92 = 0LL;
    *(_QWORD *)(v91 + 152) = SpStretchBltROP;
    v93 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v93 )
      v92 = *v93;
    *(_QWORD *)(*(_QWORD *)(v92 + 280) + 144LL) = SpSaveScreenBits;
    v94 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v94 )
      v2 = *v94;
    *(_QWORD *)(*(_QWORD *)(v2 + 280) + 160LL) = SpDrawStream;
  }
}
