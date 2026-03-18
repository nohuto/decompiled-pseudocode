/*
 * XREFs of ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C004FDC4
 * Callers:
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C004DC28 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C0052234 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 */

__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, unsigned __int64 a2, struct CFlipPropertySet *a3)
{
  char *v3; // rbx
  unsigned __int64 v5; // r11
  __int64 result; // rax
  char **v7; // rcx
  char *v8; // r8
  struct CContentResourceState *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (char *)this + 72;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
    return 3221225485LL;
  result = CContentResource::Create(v5, a3, &v9);
  if ( (int)result >= 0 )
  {
    v7 = (char **)*((_QWORD *)v3 + 1);
    v8 = (char *)(((unsigned __int64)v9 + 8) & -(__int64)(v9 != 0LL));
    if ( *v7 != v3 )
      __fastfail(3u);
    *(_QWORD *)v8 = v3;
    *((_QWORD *)v8 + 1) = v7;
    *v7 = v8;
    *((_QWORD *)v3 + 1) = v8;
  }
  return result;
}
