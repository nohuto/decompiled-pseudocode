/*
 * XREFs of ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z @ 0x18013BA34
 * Callers:
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x18013405C (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::AddDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        unsigned int *a2,
        struct CDesktopRenderTarget *a3)
{
  signed int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // eax
  signed int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v4 = ++CUINTDesktopAssociation::g_uintGlobalId;
  if ( a3 )
  {
    v6 = *((unsigned int *)this + 6);
    *((_QWORD *)&v12 + 1) = a3;
    v7 = 0;
    LODWORD(v12) = v4;
    if ( (_DWORD)v6 )
    {
      while ( *(_DWORD *)(*(_QWORD *)this + 16LL * v7) != v4 )
      {
        if ( ++v7 >= (unsigned int)v6 )
          goto LABEL_5;
      }
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x39u);
    }
    else
    {
LABEL_5:
      v8 = v13;
      v9 = v6 + 1;
      if ( (int)v6 + 1 >= (unsigned int)v6 )
        v8 = v6 + 1;
      v3 = v9 < (unsigned int)v6 ? 0x80070216 : 0;
      if ( v9 < (unsigned int)v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)this + 5) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, 1, &v12);
        v3 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)this + 16 * v6) = v12;
        *((_DWORD *)this + 6) = v8;
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x3Du);
    }
  }
  *a2 = v4;
  return (unsigned int)v3;
}
