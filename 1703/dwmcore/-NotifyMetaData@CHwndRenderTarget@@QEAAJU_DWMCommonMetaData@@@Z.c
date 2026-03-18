/*
 * XREFs of ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180146208
 * Callers:
 *     ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180144D70 (-PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::NotifyMetaData(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 (__fastcall *v10)(__int64 *, _OWORD *); // rax
  int v11; // eax
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 424LL))(v4) )
    {
      v6 = *(__int64 **)(a1 + 120);
      if ( v6 )
      {
        v7 = *(_OWORD *)(a2 + 16);
        v8 = *v6;
        v13[0] = *(_OWORD *)a2;
        v9 = *(_OWORD *)(a2 + 32);
        v13[1] = v7;
        *(_QWORD *)&v7 = *(_QWORD *)(a2 + 48);
        v10 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v8 + 224);
        v13[2] = v9;
        v14 = v7;
        v11 = v10(v6, v13);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1ADu);
      }
    }
  }
  return v3;
}
