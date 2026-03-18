/*
 * XREFs of ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x18012DCD0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CYCbCrSurface::ProcessUpdate(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_YCBCRSURFACE *a3)
{
  int v6; // ebp
  char v7; // r12
  char v8; // r15
  struct CResource *Resource; // r14
  __int64 v10; // rax
  int v11; // edi
  struct CResource *v12; // rbx
  int v13; // eax
  int v14; // eax

  v6 = 0;
  v7 = 0;
  v8 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x61u);
  v10 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x61u);
  v11 = *((_DWORD *)a3 + 4);
  v12 = (struct CResource *)v10;
  if ( (v10 == 0) != (Resource == 0LL) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1Eu);
    return (unsigned int)v6;
  }
  if ( Resource != this[7] )
  {
    v13 = CResource::RegisterNotifier((CResource *)this, Resource);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x23u);
      goto LABEL_14;
    }
    v7 = 1;
  }
  if ( v12 == this[8] )
  {
LABEL_9:
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
      this[7] = Resource;
    }
    if ( v8 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
      this[8] = v12;
    }
    *((_DWORD *)this + 18) = v11;
    goto LABEL_14;
  }
  v14 = CResource::RegisterNotifier((CResource *)this, v12);
  v6 = v14;
  if ( v14 >= 0 )
  {
    v8 = 1;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x29u);
LABEL_14:
  if ( v6 < 0 )
  {
    if ( v7 )
      CResource::UnRegisterNotifierInternal((CResource *)this, Resource);
    if ( v8 )
      CResource::UnRegisterNotifierInternal((CResource *)this, v12);
  }
  return (unsigned int)v6;
}
