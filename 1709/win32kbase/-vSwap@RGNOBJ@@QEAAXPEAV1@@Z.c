/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003A688 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0043500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00465B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // rdi
  _QWORD *v9; // r15
  _QWORD *v10; // rbp
  _QWORD *v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_QWORD *)this;
  v6 = *(unsigned int *)(*(_QWORD *)a2 + 36LL);
  v7 = *(unsigned int *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = v6;
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v7;
  v8 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v9 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
  v10 = (_QWORD *)*v8;
  v11 = (_QWORD *)*v9;
  if ( *(_QWORD *)this != -48LL )
  {
    KeEnterCriticalRegion();
    v12 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v13 = (_QWORD *)v8[1], (_QWORD *)*v13 != v8) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    v8[1] = v8;
    *v8 = v8;
    KeLeaveCriticalRegion();
  }
  v14 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( *(_QWORD *)a2 != -48LL )
  {
    KeEnterCriticalRegion();
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v14[1] = v14;
    *v14 = v14;
    KeLeaveCriticalRegion();
  }
  v17 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v17;
  if ( W32GetThreadWin32Thread(KeGetCurrentThread(), v6, v5, v7) )
  {
    if ( v10 != v8 )
    {
      v18 = *(_QWORD *)this;
      v19 = (_QWORD *)(*(_QWORD *)this + 48LL);
      if ( *(_QWORD *)this != -48LL )
      {
        KeEnterCriticalRegion();
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v20, v21, v22);
        v19[2] = v18;
        v19[3] = CleanUpRegion;
        if ( ThreadWin32Thread )
        {
          v24 = *(_QWORD *)(ThreadWin32Thread + 88);
          v25 = (_QWORD *)(ThreadWin32Thread + 88);
          if ( *(_QWORD **)(v24 + 8) != v25 )
            __fastfail(3u);
          *v19 = v24;
          v19[1] = v25;
          *(_QWORD *)(v24 + 8) = v19;
          *v25 = v19;
        }
        else
        {
          v19[1] = v19;
          *v19 = v19;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( v11 != v9 )
    {
      v26 = *(_QWORD *)a2;
      v27 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
      if ( *(_QWORD *)a2 != -48LL )
      {
        KeEnterCriticalRegion();
        v31 = W32GetThreadWin32Thread(KeGetCurrentThread(), v28, v29, v30);
        v27[2] = v26;
        v27[3] = CleanUpRegion;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 88);
          v33 = (_QWORD *)(v31 + 88);
          if ( *(_QWORD **)(v32 + 8) != v33 )
            __fastfail(3u);
          *v27 = v32;
          v27[1] = v33;
          *(_QWORD *)(v32 + 8) = v27;
          *v33 = v27;
        }
        else
        {
          v27[1] = v27;
          *v27 = v27;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
