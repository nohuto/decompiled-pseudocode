/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002250C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18000E2D8 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180012D20 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18002FDC0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180034C60 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v2; // ebx
  CBaseObject *v3; // rsi
  CBaseObject *v4; // r14
  int v6; // eax
  char v7; // r12
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rcx
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
    v6 = *((_DWORD *)this + 92);
    if ( v6 == 3 || (v7 = 0, v6 == 6) )
      v7 = 1;
    v8 = CPushTransformInstruction::Create(*((struct CResource **)this + 43), &v28);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x27Fu);
    }
    else
    {
      v9 = CRenderDataVisual::AddInstruction(this, v28);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x280u);
      }
      else
      {
        v10 = (_DWORD *)*((_QWORD *)this + 42);
        v11 = v10[22];
        v12 = v10[20] - v10[23];
        v26 = v10[24];
        v27 = __PAIR64__(v10[21] - v10[25], v12);
        v25 = v11;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 44) + 16LL) + 1136LL))(
                *(_QWORD *)(*((_QWORD *)this + 44) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 44) + 24LL));
        v2 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x28Cu);
        }
        else
        {
          v14 = CPushTransformInstruction::Create(*((struct CResource **)this + 44), &CVIForAnimation);
          v15 = CVIForAnimation;
          v2 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x28Eu);
          }
          else
          {
            v16 = CRenderDataVisual::AddInstruction(this, CVIForAnimation);
            v2 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x28Fu);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                  *((CSecondaryWindowRepresentation **)this + 42),
                                  v7);
              v17 = CDrawBitmapInstruction::Create(CVIForAnimation, &v24);
              v18 = v24;
              v2 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x294u);
              }
              else
              {
                v19 = CRenderDataVisual::AddInstruction(this, v24);
                v2 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x295u);
                }
                else
                {
                  v20 = CPopInstruction::Create(&v29);
                  v2 = v20;
                  if ( v20 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x298u);
                    v3 = v29;
                  }
                  else
                  {
                    v3 = v29;
                    v21 = CRenderDataVisual::AddInstruction(this, v29);
                    v2 = v21;
                    if ( v21 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x299u);
                    }
                    else if ( v28 )
                    {
                      v22 = CPopInstruction::Create(&v30);
                      v2 = v22;
                      if ( v22 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x29Du);
                        v4 = v30;
                      }
                      else
                      {
                        v4 = v30;
                        v23 = CRenderDataVisual::AddInstruction(this, v30);
                        v2 = v23;
                        if ( v23 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x29Eu);
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
