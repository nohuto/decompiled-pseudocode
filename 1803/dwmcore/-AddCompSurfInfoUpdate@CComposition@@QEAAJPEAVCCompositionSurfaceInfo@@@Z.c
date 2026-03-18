/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180013D64
 * Callers:
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x180007320 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180008F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  unsigned int v7; // ecx
  struct CCompositionSurfaceInfo **v9; // rcx
  int v10; // eax
  CMILCOMBase *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 712;
  v3 = 0;
  v4 = *((unsigned int *)this + 184);
  v5 = 0;
  v6 = *((_QWORD *)this + 89);
  if ( (_DWORD)v4 )
  {
    v9 = (struct CCompositionSurfaceInfo **)*((_QWORD *)this + 89);
    while ( a2 != *v9 )
    {
      ++v5;
      ++v9;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v7 = v4 + 1;
    v3 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v11);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)v2 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x329u);
    else
      CMILCOMBase::InternalAddRef(v11);
  }
  return (unsigned int)v3;
}
