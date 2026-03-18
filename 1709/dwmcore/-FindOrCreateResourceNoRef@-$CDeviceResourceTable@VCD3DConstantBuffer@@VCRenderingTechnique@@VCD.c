/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18006E380
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18006D054 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18007ECD0 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180092890 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801A57A4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct CD3DDeviceLevel1 *this,
        CMILPoolResource **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rsi
  char v6; // r12
  __int64 v7; // rdx
  CMILPoolResource *v10; // rdx
  __int64 v12; // rdi
  int v13; // eax
  CMILPoolResource *v14; // r10
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // eax
  int FirstAvailableD3DDevice; // eax
  int v23; // eax
  CMILPoolResource *v24; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v24 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v7 = 0LL;
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_12;
  while ( this
       && *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v7) + 16LL) + 80LL) != this )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)a1 + 10) )
      goto LABEL_12;
  }
  v10 = *(CMILPoolResource **)(*((_QWORD *)a1 + 2) + 8 * v7);
  v24 = v10;
  if ( !v10 )
  {
LABEL_12:
    if ( !this )
    {
      FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  &v25);
      v3 = FirstAvailableD3DDevice;
      if ( FirstAvailableD3DDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x4Fu);
        v4 = v25;
        goto LABEL_6;
      }
      v4 = v25;
      this = v25;
    }
    v12 = *((_QWORD *)a1 + 1);
    v13 = CD3DConstantBuffer::Create(
            this,
            *(_DWORD *)(v12 + 88) + *(_DWORD *)(v12 + 232),
            (enum D3D11_USAGE)a3,
            0LL,
            &v24);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x231u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x53u);
      goto LABEL_6;
    }
    *(_BYTE *)(v12 + 236) = 1;
    v14 = v24;
    v15 = (unsigned int)v24;
    v25 = a1;
    v16 = *((unsigned int *)v24 + 24);
    v17 = v16 + 1;
    if ( (int)v16 + 1 >= (unsigned int)v16 )
      v15 = v16 + 1;
    v3 = v17 < (unsigned int)v16 ? 0x80070216 : 0;
    if ( v17 < (unsigned int)v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v15 > *((_DWORD *)v24 + 23) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24 + 72, 8u, 1, &v25);
      v3 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v24 + 9) + 8 * v16) = v25;
      *((_DWORD *)v14 + 24) = v15;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x55u);
      goto LABEL_6;
    }
    v18 = *((unsigned int *)a1 + 10);
    v6 = 1;
    v19 = (unsigned int)v24;
    v20 = v18 + 1;
    if ( (int)v18 + 1 >= (unsigned int)v18 )
      v19 = v18 + 1;
    v3 = v20 < (unsigned int)v18 ? 0x80070216 : 0;
    if ( v20 < (unsigned int)v18 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v19 > *((_DWORD *)a1 + 9) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v24);
      v3 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v18) = v24;
      *((_DWORD *)a1 + 10) = v19;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x58u);
      goto LABEL_6;
    }
    v10 = v24;
  }
  v24 = 0LL;
  *a3 = v10;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !v24 )
        goto LABEL_9;
      CD3DResource::RemoveResourceNotifier((CMILPoolResource *)((char *)v24 + 24), a1);
    }
  }
  if ( v24 )
    CMILPoolResource::Release(v24);
LABEL_9:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 472));
  return (unsigned int)v3;
}
