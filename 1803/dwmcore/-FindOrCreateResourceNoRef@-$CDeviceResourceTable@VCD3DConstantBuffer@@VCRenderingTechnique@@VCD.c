/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180070ADC
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002123C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800219D0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct CD3DDeviceLevel1 *this,
        CMILPoolResource **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rsi
  char v5; // r12
  __int64 v6; // r9
  __int64 v10; // rdx
  CMILPoolResource *v11; // rax
  __int64 v13; // rdi
  int v14; // eax
  CMILPoolResource *v15; // r10
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int DefaultD3DDevice; // eax
  int v22; // eax
  CMILPoolResource *v23; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v24; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v24 = 0LL;
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_12;
  while ( 1 )
  {
    v10 = *((_QWORD *)a1 + 2);
    if ( !this || *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v6) + 16LL) + 80LL) == this )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
      goto LABEL_12;
  }
  v11 = *(CMILPoolResource **)(v10 + 8 * v6);
  v23 = v11;
  if ( !v11 )
  {
LABEL_12:
    if ( !this )
    {
      DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v24);
      v3 = DefaultD3DDevice;
      if ( DefaultD3DDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD3DDevice, 0x4Fu);
        v4 = v24;
        goto LABEL_6;
      }
      v4 = v24;
      this = v24;
    }
    v13 = *((_QWORD *)a1 + 1);
    v14 = CD3DConstantBuffer::Create(
            this,
            *(_DWORD *)(v13 + 88) + *(_DWORD *)(v13 + 280),
            (enum D3D11_USAGE)a3,
            0LL,
            &v23);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x235u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x53u);
      goto LABEL_6;
    }
    *(_BYTE *)(v13 + 284) = 1;
    v15 = v23;
    v24 = a1;
    v16 = *((_DWORD *)v23 + 24);
    v17 = v16 + 1;
    v3 = v16 + 1 < v16 ? 0x80070216 : 0;
    if ( v16 + 1 < v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v17 > *((_DWORD *)v23 + 23) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)v23 + 72, 8LL, 1LL, &v24);
      v3 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v23 + 9) + 8LL * v16) = v24;
      *((_DWORD *)v15 + 24) = v17;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x55u);
      goto LABEL_6;
    }
    v18 = *((_DWORD *)a1 + 10);
    v5 = 1;
    v19 = v18 + 1;
    v3 = v18 + 1 < v18 ? 0x80070216 : 0;
    if ( v18 + 1 < v18 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v19 > *((_DWORD *)a1 + 9) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)a1 + 16, 8LL, 1LL, &v23);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v18) = v23;
      *((_DWORD *)a1 + 10) = v19;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x58u);
      goto LABEL_6;
    }
    v11 = v23;
  }
  v23 = 0LL;
  *a3 = v11;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v23 )
        goto LABEL_9;
      CD3DResource::RemoveResourceNotifier((CMILPoolResource *)((char *)v23 + 24), a1);
    }
  }
  if ( v23 )
    CMILPoolResource::Release(v23);
LABEL_9:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 472));
  return (unsigned int)v3;
}
