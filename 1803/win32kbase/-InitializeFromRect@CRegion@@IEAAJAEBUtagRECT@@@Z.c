/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C00447D0
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004442C (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0044630 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00C24EC (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, struct _RECTL *a2)
{
  unsigned int v4; // edi
  _DWORD *Object; // rax
  _DWORD *v6; // rbx
  _QWORD *v7; // rax
  struct _RECTL v9; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v11 = 0;
  v4 = -1073741801;
  Object = AllocateObject(0xD8uLL, 4u, 0);
  v10 = Object;
  v6 = Object;
  if ( Object )
  {
    Object[6] = 216;
    Object[20] = 0;
    Object[8] = 0;
    Object[7] = 0;
    Object[9] = 0;
    v7 = Object + 12;
    v7[1] = v7;
    *v7 = v7;
    v9 = *a2;
    RGNOBJ::vSet((RGNOBJ *)&v10, &v9);
    v4 = 0;
    *((_QWORD *)this + 2) = v6;
    *((_DWORD *)this + 3) = 2;
  }
  return v4;
}
