/*
 * XREFs of ?AddDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAIPEAVCDesktopRenderTarget@@@Z @ 0x1800C9ED8
 * Callers:
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x1800452A4 (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::AddDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        unsigned int *a2,
        struct CDesktopRenderTarget *a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  v4 = ++CUINTDesktopAssociation::g_uintGlobalId;
  if ( a3 )
  {
    v7 = *((unsigned int *)this + 6);
    *((_QWORD *)&v12 + 1) = a3;
    v8 = 0;
    LODWORD(v12) = v4;
    if ( (_DWORD)v7 )
    {
      while ( *(_DWORD *)(*(_QWORD *)this + 16LL * v8) != v4 )
      {
        if ( ++v8 >= (unsigned int)v7 )
          goto LABEL_3;
      }
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u);
    }
    else
    {
LABEL_3:
      v9 = v7 + 1;
      v3 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( (int)v7 + 1 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 <= *((_DWORD *)this + 5) )
      {
        *(_OWORD *)(*(_QWORD *)this + 16 * v7) = v12;
        *((_DWORD *)this + 6) = v9;
      }
      else
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, 1, &v12);
        v3 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3Du);
    }
  }
  *a2 = v4;
  return (unsigned int)v3;
}
