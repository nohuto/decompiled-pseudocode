/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18006DF98
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18007FED4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801A57A4 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DPixelShader *a2,
        struct CD3DPixelShader **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rsi
  char v5; // r13
  __int64 v6; // r9
  struct CD3DDeviceLevel1 *v8; // r14
  struct CD3DPixelShader *v10; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  const void *v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int FirstAvailableD3DDevice; // eax
  int v21; // eax
  struct CD3DPixelShader *v22; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDeviceLevel1 *v23; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v23 = 0LL;
  v8 = a2;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( a2
         && *(struct CD3DPixelShader **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v6) + 16LL) + 80LL) != a2 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_12;
    }
    a2 = *(struct CD3DPixelShader **)(*(_QWORD *)(a1 + 16) + 8 * v6);
    v22 = a2;
    if ( a2 )
      goto LABEL_5;
  }
LABEL_12:
  if ( !v8 )
  {
    FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                                (CD3DDeviceManager *)&g_D3DDeviceManager,
                                &v23);
    v3 = FirstAvailableD3DDevice;
    if ( FirstAvailableD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x4Fu);
      v4 = v23;
LABEL_33:
      v10 = v22;
      goto LABEL_6;
    }
    v4 = v23;
    v8 = v23;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v13 = (*(__int64 (__fastcall **)(__int64, struct CD3DPixelShader *, struct CD3DPixelShader **, __int64))(*(_QWORD *)v12 + 32LL))(
          v12,
          a2,
          a3,
          v6);
  v14 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  v15 = CD3DPixelShader::Create(v8, v14, v13, &v22);
  v3 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x53u);
    goto LABEL_33;
  }
  v16 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v22 + 3) + 24LL))((char *)v22 + 24, a1);
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x55u);
    goto LABEL_33;
  }
  v17 = *(unsigned int *)(a1 + 40);
  v5 = 1;
  v18 = (unsigned int)v22;
  v19 = v17 + 1;
  if ( (int)v17 + 1 >= (unsigned int)v17 )
    v18 = v17 + 1;
  v3 = v19 < (unsigned int)v17 ? 0x80070216 : 0;
  if ( v19 < (unsigned int)v17 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v18 > *(_DWORD *)(a1 + 36) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 16, 8u, 1, &v22);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v17) = v22;
    *(_DWORD *)(a1 + 40) = v18;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x58u);
    goto LABEL_33;
  }
  a2 = v22;
LABEL_5:
  v10 = 0LL;
  *a3 = a2;
  v22 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v10 )
        goto LABEL_9;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 3) + 32LL))((__int64)v10 + 24, a1);
      v10 = v22;
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_9:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 472));
  return (unsigned int)v3;
}
