/*
 * XREFs of ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180130D78
 * Callers:
 *     ?NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ @ 0x1801284C4 (-NotifyDesktopDirectScreenWrite@CComposition@@QEAAJXZ.c)
 *     ??1CRemotingRenderTarget@@EEAA@XZ @ 0x180139F0C (--1CRemotingRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801361E0 (-NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CRenderTargetManager::PushDesktopMetaData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  int v4; // ebp
  unsigned int v5; // edi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  signed int v12; // eax
  _OWORD v14[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( v2 )
  {
    v8 = 0LL;
    while ( !v4 )
    {
      v9 = *(_QWORD *)(v8 + *(_QWORD *)(a1 + 24));
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 70LL)
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 224LL))(v9) )
      {
        v10 = *(_OWORD *)(a2 + 16);
        v14[0] = *(_OWORD *)a2;
        v11 = *(_OWORD *)(a2 + 32);
        v14[1] = v10;
        *(_QWORD *)&v10 = *(_QWORD *)(a2 + 48);
        v14[2] = v11;
        v15 = v10;
        v12 = CHwndRenderTarget::NotifyMetaData(v9, v14);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x186u);
          return v3;
        }
        v4 = 1;
      }
      ++v5;
      v8 += 8LL;
      if ( v5 >= v2 )
        return v3;
    }
  }
  return v3;
}
