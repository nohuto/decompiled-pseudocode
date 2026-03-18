/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003A688 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0043370 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0043420 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00465B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00A0240 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax

  if ( W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4) )
  {
    v5 = *(_QWORD **)this;
    if ( v5 )
    {
      v6 = v5 + 6;
      if ( v5 != (_QWORD *)-48LL )
      {
        KeEnterCriticalRegion();
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
        v5[8] = v5;
        v5[9] = CleanUpRegion;
        if ( ThreadWin32Thread )
        {
          v11 = *(_QWORD *)(ThreadWin32Thread + 88);
          v12 = (_QWORD *)(ThreadWin32Thread + 88);
          if ( *(_QWORD **)(v11 + 8) != v12 )
            __fastfail(3u);
          *v6 = v11;
          v5[7] = v12;
          *(_QWORD *)(v11 + 8) = v6;
          *v12 = v6;
        }
        else
        {
          v5[7] = v5 + 6;
          *v6 = v6;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
