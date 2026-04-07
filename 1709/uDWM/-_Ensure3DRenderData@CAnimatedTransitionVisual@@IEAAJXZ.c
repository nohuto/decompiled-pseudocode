/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B88C
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B7B0 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180012D20 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18002FDC0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180034C60 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  int v4; // eax
  int v5; // eax
  CRenderDataVisual *v6; // rbp
  int v7; // eax
  struct CResource *v8; // rcx
  int v9; // eax
  CBaseObject *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CRenderDataInstruction *v15; // [rsp+60h] [rbp+8h] BYREF
  struct CPopInstruction *v16; // [rsp+68h] [rbp+10h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !*((_DWORD *)this + 70) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 40) + 16LL) + 1136LL))(
           *(_QWORD *)(*((_QWORD *)this + 40) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 40) + 24LL));
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = CPushTransformInstruction::Create(*((struct CResource **)this + 40), &v15);
      v1 = v5;
      if ( v5 >= 0 )
      {
        v6 = (CAnimatedTransitionVisual *)((char *)this + 8);
        v7 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v15);
        v1 = v7;
        if ( v7 >= 0 )
        {
          v8 = (struct CResource *)*((_QWORD *)this + 75);
          if ( !v8 )
            v8 = (struct CResource *)*((_QWORD *)this + 73);
          v9 = CDrawBitmapInstruction::Create(v8, &v17);
          v10 = v17;
          v1 = v9;
          if ( v9 >= 0 )
          {
            v11 = CRenderDataVisual::AddInstruction(v6, v17);
            v1 = v11;
            if ( v11 >= 0 )
            {
              v12 = CPopInstruction::Create(&v16);
              v1 = v12;
              if ( v12 >= 0 )
              {
                v2 = v16;
                v13 = CRenderDataVisual::AddInstruction(v6, v16);
                v1 = v13;
                if ( v13 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x676u);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x675u);
                v2 = v16;
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x672u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x671u);
          }
          if ( v10 )
            CBaseObject::Release(v10);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x66Fu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x66Eu);
      }
      if ( v15 )
        CBaseObject::Release(v15);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x66Du);
    }
  }
  return v1;
}
