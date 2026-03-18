/*
 * XREFs of ?AddDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x180130780
 * Callers:
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x18013405C (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTargetManager::AddDesktopRenderTarget(
        CRenderTargetManager *this,
        struct CDesktopRenderTarget *a2)
{
  unsigned int v2; // edx
  char *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // eax
  signed int v6; // ebx
  signed int v7; // eax
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    v9 = (char *)a2 + 112;
  else
    v9 = 0LL;
  v2 = (unsigned int)v9;
  v3 = (char *)this + 56;
  v4 = *((unsigned int *)this + 20);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v2 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( v2 > *((_DWORD *)v3 + 5) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8u, 1, &v9);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v9;
    *((_DWORD *)v3 + 6) = v2;
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x2FAu);
  return (unsigned int)v6;
}
