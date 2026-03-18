/*
 * XREFs of ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x1801AA630
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CYCbCrSurface::ProcessUpdate(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_YCBCRSURFACE *a3)
{
  char v6; // r12
  char v7; // r15
  struct CResource *Resource; // r14
  __int64 v9; // rax
  int v10; // edi
  struct CResource *v11; // rbp
  int v12; // ebx
  int v13; // eax
  int v14; // eax

  v6 = 0;
  v7 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x25u);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x25u);
  v10 = *((_DWORD *)a3 + 4);
  v11 = (struct CResource *)v9;
  if ( (v9 == 0) != (Resource == 0LL) )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1Eu);
    return (unsigned int)v12;
  }
  v12 = 0;
  if ( Resource != this[7] )
  {
    v13 = CResource::RegisterNotifier((CResource *)this, Resource);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x23u);
      goto LABEL_14;
    }
    v6 = 1;
  }
  if ( v11 == this[8] )
  {
LABEL_9:
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
      this[7] = Resource;
    }
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
      this[8] = v11;
    }
    *((_DWORD *)this + 18) = v10;
    goto LABEL_14;
  }
  v14 = CResource::RegisterNotifier((CResource *)this, v11);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v7 = 1;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x29u);
LABEL_14:
  if ( v12 < 0 )
  {
    if ( v6 )
      CResource::UnRegisterNotifierInternal((CResource *)this, Resource);
    if ( v7 )
      CResource::UnRegisterNotifierInternal((CResource *)this, v11);
  }
  return (unsigned int)v12;
}
