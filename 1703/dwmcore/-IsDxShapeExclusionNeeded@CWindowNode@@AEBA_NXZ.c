/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180050528
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

bool __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  bool v1; // bl
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( (*((_QWORD *)this + 112) || *((_QWORD *)this + 115)) && *((_BYTE *)this + 990) )
  {
    CWindowNode::GetDxClipShape(this, v3);
    if ( v3[0] )
      v1 = (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v3[0] + 16LL))(v3[0]) == 0;
    CShapePtr::Release((CShapePtr *)v3);
  }
  return v1;
}
