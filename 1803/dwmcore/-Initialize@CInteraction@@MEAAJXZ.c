/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x1800284D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x180025248 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800253AC (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z @ 0x180028EEC (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x18019193C (--$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  struct IInteractionContextWrapper *v3; // rbx
  CInteractionContextWrapper *v4; // rax
  struct IInteractionContextWrapper *v5; // rdi
  CInteractionContextWrapper *v6; // rax
  struct IInteractionContextWrapper *v7; // rsi
  CInteractionContextWrapper *v8; // rax
  int v9; // ebx
  unsigned int v11; // eax
  struct IInteractionContextWrapper *v12; // [rsp+58h] [rbp+10h] BYREF
  struct IInteractionContextWrapper *v13; // [rsp+60h] [rbp+18h] BYREF
  struct IInteractionContextWrapper *v14; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v2 )
    v3 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
  else
    v3 = 0LL;
  v14 = v3;
  if ( !v3 )
  {
    v9 = -2147024882;
    v11 = 124;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v11);
    SAFE_DELETE<IInteractionContextWrapper>(&v14);
    SAFE_DELETE<IInteractionContextWrapper>(&v12);
    SAFE_DELETE<IInteractionContextWrapper>(&v13);
    return (unsigned int)v9;
  }
  v4 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v4 )
    v5 = CInteractionContextWrapper::CInteractionContextWrapper(v4);
  else
    v5 = 0LL;
  v12 = v5;
  if ( !v5 )
  {
    v9 = -2147024882;
    v11 = 127;
    goto LABEL_24;
  }
  v6 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v6 )
    v7 = CInteractionContextWrapper::CInteractionContextWrapper(v6);
  else
    v7 = 0LL;
  v13 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    v11 = 130;
    goto LABEL_24;
  }
  v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v8 )
    v8 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
  if ( !v8 )
  {
    v9 = -2147024882;
    v11 = 133;
    goto LABEL_24;
  }
  v9 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 336), v3, v5, v7, v8);
  if ( v9 < 0 )
  {
    v11 = 135;
    goto LABEL_24;
  }
  return (unsigned int)v9;
}
