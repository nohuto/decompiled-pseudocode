/*
 * XREFs of ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x180015E40
 * Callers:
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180015C5C (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Initialize(
        CDrawTileImageInstruction *this,
        struct CResource *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4,
        float a5)
{
  CBaseObject *v7; // rcx

  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( a2 )
  {
    *((_QWORD *)this + 6) = a2;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
  *((struct tagRECT *)this + 1) = *a3;
  *((float *)this + 10) = a5;
  *((struct tagPOINT *)this + 4) = *a4;
  return 0LL;
}
