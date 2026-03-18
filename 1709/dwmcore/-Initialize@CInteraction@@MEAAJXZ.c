/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x180091910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z @ 0x180091F50 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B7CD0 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800BE588 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned __int64 v3; // rcx
  struct IInteractionContextWrapper *v4; // rbx
  CInteractionContextWrapper *v5; // rax
  unsigned __int64 v6; // rcx
  struct IInteractionContextWrapper *v7; // rdi
  CInteractionContextWrapper *v8; // rax
  signed int v9; // eax
  unsigned int v10; // ebx
  struct IInteractionContextWrapper *v12; // [rsp+58h] [rbp+10h] BYREF
  CInteractionContextWrapper *v13; // [rsp+60h] [rbp+18h] BYREF
  struct IInteractionContextWrapper *v14; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( v2 )
  {
    v4 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
    v14 = v4;
  }
  else
  {
    v4 = 0LL;
    v14 = 0LL;
  }
  if ( !v4 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x76u);
LABEL_19:
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v14);
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v12);
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v13);
    return v10;
  }
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
  if ( v5 )
  {
    v7 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
    v12 = v7;
  }
  else
  {
    v7 = 0LL;
    v12 = 0LL;
  }
  if ( !v7 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x79u);
    goto LABEL_19;
  }
  v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v6);
  if ( v8 )
    v8 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
  v13 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x7Cu);
    goto LABEL_19;
  }
  v9 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 368), v4, v7, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x7Eu);
    goto LABEL_19;
  }
  return v10;
}
