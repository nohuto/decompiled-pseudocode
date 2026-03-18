/*
 * XREFs of ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x180135B60
 * Callers:
 *     ?AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z @ 0x180132E30 (-AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMoveOptimizationNode(CHwndRenderTarget *this, struct CWindowNode *a2)
{
  signed int v3; // ebx
  char *v4; // rcx
  unsigned int v5; // eax
  __int64 v7; // r8
  struct CWindowNode **v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // eax
  unsigned int v13; // [rsp+40h] [rbp+8h]
  CMILCOMBase *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = 0;
  v4 = (char *)this + 648;
  v5 = 0;
  v7 = *((unsigned int *)v4 + 6);
  if ( (_DWORD)v7 )
  {
    v8 = *(struct CWindowNode ***)v4;
    do
    {
      if ( a2 == *v8 )
        break;
      ++v5;
      ++v8;
    }
    while ( v5 < (unsigned int)v7 );
  }
  if ( v5 >= *((_DWORD *)this + 168) )
  {
    v9 = v13;
    v10 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
      v9 = v7 + 1;
    v3 = v10 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( v10 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)v4 + 5) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v14);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8 * v7) = v14;
      *((_DWORD *)v4 + 6) = v9;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x145u);
    else
      CMILCOMBase::InternalAddRef(v14);
  }
  return (unsigned int)v3;
}
