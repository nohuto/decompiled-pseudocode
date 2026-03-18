/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180071A64
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18001F4A4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rsi
  char v5; // r13
  __int64 v6; // r9
  struct CD3DDeviceLevel1 *v8; // r14
  struct CD3DPixelShader *v10; // rax
  struct CD3DPixelShader *v11; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  const void *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  int DefaultD3DDevice; // eax
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
    while ( 1 )
    {
      a2 = *(struct CD3DDeviceLevel1 **)(a1 + 16);
      if ( !v8 || *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)a2 + v6) + 16LL) + 80LL) == v8 )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_12;
    }
    v10 = (struct CD3DPixelShader *)*((_QWORD *)a2 + v6);
    v22 = v10;
    if ( v10 )
      goto LABEL_5;
  }
LABEL_12:
  if ( !v8 )
  {
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v23);
    v3 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD3DDevice, 0x4Fu);
      v4 = v23;
LABEL_31:
      v11 = v22;
      goto LABEL_6;
    }
    v4 = v23;
    v8 = v23;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v14 = (*(__int64 (__fastcall **)(__int64, struct CD3DDeviceLevel1 *, struct CD3DPixelShader **, __int64))(*(_QWORD *)v13 + 32LL))(
          v13,
          a2,
          a3,
          v6);
  v15 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  v16 = CD3DPixelShader::Create(v8, v15, v14, &v22);
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x53u);
    goto LABEL_31;
  }
  v17 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v22 + 3) + 24LL))((char *)v22 + 24, a1);
  v3 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x55u);
    goto LABEL_31;
  }
  v18 = *(_DWORD *)(a1 + 40);
  v5 = 1;
  v19 = v18 + 1;
  v3 = v18 + 1 < v18 ? 0x80070216 : 0;
  if ( v18 + 1 < v18 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v19 > *(_DWORD *)(a1 + 36) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 16, 8LL, 1LL, &v22);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v18) = v22;
    *(_DWORD *)(a1 + 40) = v19;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x58u);
    goto LABEL_31;
  }
  v10 = v22;
LABEL_5:
  v11 = 0LL;
  *a3 = v10;
  v22 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v11 )
        goto LABEL_9;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v11 + 3) + 32LL))((__int64)v11 + 24, a1);
      v11 = v22;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_9:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 472));
  return (unsigned int)v3;
}
