/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x1800227C8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18002E518 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180033C78 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x1800355B0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180035620 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r14
  int v6; // eax
  bool v7; // r12
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // r12
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct CRenderDataInstruction *v23; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *CVIForAnimation; // [rsp+48h] [rbp-20h]
  int v25; // [rsp+50h] [rbp-18h]
  int v26; // [rsp+54h] [rbp-14h]
  struct CRenderDataInstruction *v27; // [rsp+A0h] [rbp+38h] BYREF
  struct CRenderDataInstruction *v28; // [rsp+A8h] [rbp+40h] BYREF
  struct CPopInstruction *v29; // [rsp+B0h] [rbp+48h] BYREF
  struct CPopInstruction *v30; // [rsp+B8h] [rbp+50h] BYREF

  v1 = 0;
  v2 = 0LL;
  v23 = 0LL;
  v3 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( !*((_DWORD *)this + 68) )
  {
    v6 = *((_DWORD *)this + 92);
    v7 = v6 == 3 || v6 == 6;
    v8 = CPushTransformInstruction::Create(*((struct CResource **)this + 43), &v27);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x27Fu);
    }
    else
    {
      v9 = CRenderDataVisual::AddInstruction(this, v27);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x280u);
      }
      else
      {
        v10 = (_DWORD *)*((_QWORD *)this + 42);
        v11 = v10[22];
        v12 = v10[20] - v10[23];
        HIDWORD(CVIForAnimation) = v10[24];
        v26 = v10[21] - v10[25];
        LODWORD(CVIForAnimation) = v11;
        v25 = v12;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 44) + 16LL) + 1152LL))(
                *(_QWORD *)(*((_QWORD *)this + 44) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 44) + 24LL));
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x28Cu);
        }
        else
        {
          v14 = CPushTransformInstruction::Create(*((struct CResource **)this + 44), &v28);
          v1 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x28Eu);
          }
          else
          {
            v15 = CRenderDataVisual::AddInstruction(this, v28);
            v1 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x28Fu);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                  *((CSecondaryWindowRepresentation **)this + 42),
                                  v7);
              v16 = CDrawBitmapInstruction::Create(CVIForAnimation, &v23);
              v17 = v23;
              v1 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x294u);
              }
              else
              {
                v18 = CRenderDataVisual::AddInstruction(this, v23);
                v1 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x295u);
                }
                else
                {
                  v19 = CPopInstruction::Create(&v29);
                  v1 = v19;
                  if ( v19 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x298u);
                    v2 = v29;
                  }
                  else
                  {
                    v2 = v29;
                    v20 = CRenderDataVisual::AddInstruction(this, v29);
                    v1 = v20;
                    if ( v20 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x299u);
                    }
                    else if ( v27 )
                    {
                      v21 = CPopInstruction::Create(&v30);
                      v1 = v21;
                      if ( v21 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x29Du);
                        v3 = v30;
                      }
                      else
                      {
                        v3 = v30;
                        v22 = CRenderDataVisual::AddInstruction(this, v30);
                        v1 = v22;
                        if ( v22 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x29Eu);
                      }
                    }
                  }
                }
              }
              if ( CVIForAnimation )
                CBaseObject::Release(CVIForAnimation);
              if ( v17 )
                CBaseObject::Release(v17);
            }
          }
          if ( v28 )
            CBaseObject::Release(v28);
          if ( v2 )
            CBaseObject::Release(v2);
        }
      }
    }
    if ( v27 )
      CBaseObject::Release(v27);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return v1;
}
