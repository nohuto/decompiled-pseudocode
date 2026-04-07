/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002DFD8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180015B10 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001A700 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18001ADA8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18002C924 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x180039E20 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CSecondaryWindowRepresentation **this)
{
  unsigned int v2; // ebx
  CBaseObject *v3; // rsi
  CBaseObject *v4; // r14
  __int64 v6; // rcx
  bool ShouldFreezeAnimationCVI; // r12
  int v8; // eax
  int v9; // eax
  CSecondaryWindowRepresentation *v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  CBaseObject *v15; // r13
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // r12
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  struct CRenderDataInstruction *v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+4Ch] [rbp-14h]
  unsigned __int64 v27; // [rsp+50h] [rbp-10h]
  struct CRenderDataInstruction *v28; // [rsp+A0h] [rbp+40h] BYREF
  struct CPopInstruction *v29; // [rsp+A8h] [rbp+48h] BYREF
  struct CPopInstruction *v30; // [rsp+B0h] [rbp+50h] BYREF
  struct CRenderDataInstruction *CVIForAnimation; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  v24 = 0LL;
  v3 = 0LL;
  CVIForAnimation = 0LL;
  v4 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  if ( !*((_DWORD *)this + 68) )
  {
    ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)this);
    v8 = CPushTransformInstruction::Create(*(struct CResource **)(v6 + 344), &v28);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x27Fu);
    }
    else
    {
      v9 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v28);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x280u);
      }
      else
      {
        v10 = this[42];
        v11 = *((_DWORD *)v10 + 22);
        v12 = *((_DWORD *)v10 + 20) - *((_DWORD *)v10 + 23);
        v26 = *((_DWORD *)v10 + 24);
        v27 = __PAIR64__(*((_DWORD *)v10 + 21) - *((_DWORD *)v10 + 25), v12);
        v25 = v11;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[44] + 2) + 1136LL))(
                *((_QWORD *)this[44] + 2),
                *((unsigned int *)this[44] + 6));
        v2 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x28Cu);
        }
        else
        {
          v14 = CPushTransformInstruction::Create(this[44], &CVIForAnimation);
          v15 = CVIForAnimation;
          v2 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x28Eu);
          }
          else
          {
            v16 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, CVIForAnimation);
            v2 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x28Fu);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                  this[42],
                                  ShouldFreezeAnimationCVI);
              v17 = CDrawBitmapInstruction::Create(CVIForAnimation, &v24);
              v18 = v24;
              v2 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x294u);
              }
              else
              {
                v19 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v24);
                v2 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x295u);
                }
                else
                {
                  v20 = CPopInstruction::Create(&v29);
                  v2 = v20;
                  if ( v20 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x298u);
                    v3 = v29;
                  }
                  else
                  {
                    v3 = v29;
                    v21 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v29);
                    v2 = v21;
                    if ( v21 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x299u);
                    }
                    else if ( v28 )
                    {
                      v22 = CPopInstruction::Create(&v30);
                      v2 = v22;
                      if ( v22 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x29Du);
                        v4 = v30;
                      }
                      else
                      {
                        v4 = v30;
                        v23 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v30);
                        v2 = v23;
                        if ( v23 < 0 )
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x29Eu);
                      }
                    }
                  }
                }
              }
              if ( CVIForAnimation )
                CBaseObject::Release(CVIForAnimation);
              if ( v18 )
                CBaseObject::Release(v18);
            }
          }
          if ( v15 )
            CBaseObject::Release(v15);
          if ( v3 )
            CBaseObject::Release(v3);
        }
      }
    }
    if ( v28 )
      CBaseObject::Release(v28);
    if ( v4 )
      CBaseObject::Release(v4);
  }
  return v2;
}
