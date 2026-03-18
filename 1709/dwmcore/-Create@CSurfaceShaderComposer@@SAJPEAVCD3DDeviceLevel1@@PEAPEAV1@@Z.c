/*
 * XREFs of ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180074CC4
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020FAC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDeviceLevel1@@@Z @ 0x180075100 (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 */

__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDeviceLevel1 *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  int v6; // eax
  unsigned int v7; // ebx
  CSurfaceShaderComposer *v8; // rax
  struct CSurfaceShaderComposer *v9; // rax
  unsigned int v11; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v12; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v13; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v14; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v15; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v17[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  const char *v22; // [rsp+B0h] [rbp-50h] BYREF
  int v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+BCh] [rbp-44h]
  int v25; // [rsp+C4h] [rbp-3Ch]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  const char *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+DCh] [rbp-24h]
  int v30; // [rsp+E4h] [rbp-1Ch]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  const char *v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F8h] [rbp-8h]
  __int64 v34; // [rsp+FCh] [rbp-4h]
  int v35; // [rsp+104h] [rbp+4h]
  __int64 v36; // [rsp+108h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 81);
  v3 = *((_QWORD *)a1 + 82);
  v22 = "POSITION";
  v15 = 0LL;
  v14 = 0LL;
  v27 = "TEXCOORD";
  v32 = "TEXCOORD";
  v13 = 0LL;
  v12 = 0LL;
  v16 = 0LL;
  v17[0] = 37632;
  v17[1] = 40960;
  v23 = 0;
  v24 = 16LL;
  v25 = -1;
  v26 = 0LL;
  v28 = 0;
  v29 = 16LL;
  v30 = -1;
  v31 = 0LL;
  v33 = 1;
  v34 = 16LL;
  v35 = -1;
  v36 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v18[0] = 0LL;
  v18[1] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL))(
         v2,
         &unk_1801EFF90,
         832LL,
         0LL,
         &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 115;
    goto LABEL_19;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v6 = (*(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL))(
         v2,
         &v22,
         3LL,
         &unk_1801EFF90,
         832LL,
         &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 124;
    goto LABEL_19;
  }
  v19 = 0x200000090LL;
  v18[0] = &unk_1801F0300;
  v20 = 0x1000000000001LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL))(
         v2,
         &v19,
         v18,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 137;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 376LL))(v2, 1LL, v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 147;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v11);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  (*(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL))(v3, v12, &v16);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v14);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, int *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v13,
    &unk_1801F02DC,
    &`CBaseExpression::SetTargetObjectHandle'::`2'::sc_defaultValue);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v15,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 222));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 223), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v16, 0LL);
  v8 = (CSurfaceShaderComposer *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
  if ( v8 )
    v9 = CSurfaceShaderComposer::CSurfaceShaderComposer(v8, v15, v14, v13, v12, a1);
  else
    v9 = 0LL;
  *a2 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xBCu);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v7;
}
