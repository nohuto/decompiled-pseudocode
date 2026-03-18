/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800BAFB8
 * Callers:
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180134910 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801BEF28 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::AddMonitorTree(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree *a3)
{
  DWORD v3; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  _QWORD *v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v13; // r8
  __int64 v14; // rsi
  signed int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h]

  v3 = 0;
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 10);
    v7 = 0;
    *(_QWORD *)&v16 = a2;
    *((_QWORD *)&v16 + 1) = a3;
    if ( !v6 )
      goto LABEL_3;
    v13 = *((_QWORD *)this + 2);
    while ( *(HMONITOR *)(v13 + 16LL * v7) != a2 )
    {
      if ( ++v7 >= v6 )
        goto LABEL_3;
    }
    if ( v7 < v6 )
    {
      v14 = 2LL * v7;
      CMILRefCountBase::Release(*(CMILRefCountBase **)(v13 + 16LL * v7 + 8));
      *(_OWORD *)(*((_QWORD *)this + 2) + 8 * v14) = v16;
    }
    else
    {
LABEL_3:
      v8 = v17;
      v9 = (_QWORD *)((char *)this + 16);
      v10 = *((_DWORD *)this + 10);
      v11 = v10 + 1;
      if ( v10 + 1 >= v10 )
        v8 = v10 + 1;
      v3 = v11 < v10 ? 0x80070216 : 0;
      if ( v11 < v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)this + 9) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 0x10u, 1, &v16);
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*v9 + 16LL * v10) = v16;
        *((_DWORD *)this + 10) = v8;
      }
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x4Cu);
        return v3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  }
  return v3;
}
