/*
 * XREFs of ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801B257C
 * Callers:
 *     ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x1801A64D0 (-CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180082270 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x18008233C (--0CD3DTexture@@IEAA@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DLockableTexture::Create(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        struct CD3DLockableTexture **a3)
{
  CD3DTexture *v6; // rcx
  __int64 v7; // rcx
  signed int v8; // eax
  DWORD v9; // edi
  const void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CD3DTexture *)HeapAlloc(WPF::g_processHeap, 0, 0xF0uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CD3DTexture::CD3DTexture(v6, 0);
  *a3 = (struct CD3DLockableTexture *)v7;
  *(_QWORD *)(v7 + 24) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v7 = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v8 = CD3DTexture::Init(*a3, a1, a2, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x7Bu);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x41u);
    if ( *a3 )
    {
      CMILPoolResource::Release(*a3);
      *a3 = 0LL;
    }
  }
  return v9;
}
