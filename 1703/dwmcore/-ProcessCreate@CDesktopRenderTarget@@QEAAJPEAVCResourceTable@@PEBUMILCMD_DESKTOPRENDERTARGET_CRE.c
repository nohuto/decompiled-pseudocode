/*
 * XREFs of ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x180069364
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCreate(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CREATE *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // edi
  int v12; // eax
  struct CResourceTable *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0;
  if ( (*((_BYTE *)a3 + 32) & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v13 = (CDesktopRenderTarget *)((char *)this + 112);
    v7 = (_DWORD)this + 112;
    v8 = *(unsigned int *)(v6 + 80);
    v9 = v8 + 1;
    if ( (int)v8 + 1 >= (unsigned int)v8 )
      v7 = v8 + 1;
    v10 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
    if ( v9 < (unsigned int)v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB5u);
    }
    else if ( v7 > *(_DWORD *)(v6 + 76) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 56, 8LL, 1LL, &v13);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8 * v8) = v13;
      *(_DWORD *)(v6 + 80) = v7;
    }
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x376u);
    *((_DWORD *)this + 86) = *((_DWORD *)a3 + 8);
    *((_BYTE *)this + 376) = *((_DWORD *)a3 + 9) != 0;
    *(_OWORD *)((char *)this + 348) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 90) = 1065353216;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x479u);
  }
  return v3;
}
