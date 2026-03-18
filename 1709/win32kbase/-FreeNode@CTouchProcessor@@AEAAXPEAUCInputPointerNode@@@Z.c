/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011D874
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011AAF8 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C011D7C4 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreeNode(CTouchProcessor *this, struct CInputPointerNode ***a2)
{
  struct CInputPointerNode **v2; // rcx
  struct CInputPointerNode **v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v2 = *a2;
  if ( (*a2)[1] != (struct CInputPointerNode *)a2 || (v4 = a2[1], *v4 != (struct CInputPointerNode *)a2) )
    __fastfail(3u);
  *v4 = (struct CInputPointerNode *)v2;
  v2[1] = (struct CInputPointerNode *)v4;
  v5 = a2 + 2;
  a2[1] = (struct CInputPointerNode **)a2;
  *a2 = (struct CInputPointerNode **)a2;
  if ( (_QWORD *)*v5 != v5 )
  {
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  if ( *((_DWORD *)a2 + 12) )
    CInputDest::SetEmpty((CInputDest *)(a2 + 6));
  Win32FreePool((__int64)a2);
}
