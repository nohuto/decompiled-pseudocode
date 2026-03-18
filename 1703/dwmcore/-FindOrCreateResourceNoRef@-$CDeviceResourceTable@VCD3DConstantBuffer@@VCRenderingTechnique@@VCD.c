/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180017FC4
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180017118 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001AEF4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002150C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004C070 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct _GUID *a1,
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
  int FirstAvailableD3DDevice; // eax
  int v22; // eax
  int v23; // eax
  CMILPoolResource *v24; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v24 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v7 = 0LL;
  if ( !*(_DWORD *)a1[2].Data4 )
    goto LABEL_12;
  while ( this
       && *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8 * v7) + 16LL) + 128LL) != this )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *(_DWORD *)a1[2].Data4 )
      goto LABEL_12;
  }
  v10 = *(CMILPoolResource **)(*(_QWORD *)&a1[1].Data1 + 8 * v7);
  v24 = v10;
  if ( !v10 )
  {
LABEL_12:
    if ( !this )
    {
      FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  a1 + 4,
                                  &v25);
      v3 = FirstAvailableD3DDevice;
      if ( FirstAvailableD3DDevice < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x56u);
        v4 = v25;
        goto LABEL_6;
      }
      v4 = v25;
      this = v25;
    }
    v12 = *(_QWORD *)a1->Data4;
    v13 = CD3DConstantBuffer::Create(
            this,
            *(_DWORD *)(v12 + 104) + *(_DWORD *)(v12 + 248),
            (enum D3D11_USAGE)a3,
            0LL,
            &v24);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x231u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Au);
      goto LABEL_6;
    }
    *(_BYTE *)(v12 + 252) = 1;
    v14 = v24;
    v15 = (unsigned int)v24;
    v25 = (struct CD3DDeviceLevel1 *)a1;
    v16 = *((unsigned int *)v24 + 26);
    v17 = v16 + 1;
    if ( (int)v16 + 1 >= (unsigned int)v16 )
      v15 = v16 + 1;
    v3 = v17 < (unsigned int)v16 ? 0x80070216 : 0;
    if ( v17 < (unsigned int)v16 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v15 > *((_DWORD *)v24 + 25) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)v24 + 80, 8LL, 1LL, &v25);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v24 + 10) + 8 * v16) = v25;
      *((_DWORD *)v14 + 26) = v15;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Cu);
      goto LABEL_6;
    }
    v18 = *(unsigned int *)a1[2].Data4;
    v6 = 1;
    v19 = (unsigned int)v24;
    v20 = v18 + 1;
    if ( (int)v18 + 1 >= (unsigned int)v18 )
      v19 = v18 + 1;
    v3 = v20 < (unsigned int)v18 ? 0x80070216 : 0;
    if ( v20 < (unsigned int)v18 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v19 > *(_DWORD *)&a1[2].Data2 )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet(&a1[1], 8LL, 1LL, &v24);
      v3 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8 * v18) = v24;
      *(_DWORD *)a1[2].Data4 = v19;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Fu);
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
      CD3DResource::RemoveResourceNotifier(
        (CMILPoolResource *)((char *)v24 + 24),
        (const struct IDeviceResourceNotify *)a1);
    }
  }
  if ( v24 )
    CMILPoolResource::Release(v24);
LABEL_9:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 488));
  return (unsigned int)v3;
}
