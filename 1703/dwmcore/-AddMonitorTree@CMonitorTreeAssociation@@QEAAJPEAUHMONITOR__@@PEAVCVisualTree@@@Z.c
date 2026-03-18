/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800C91BC
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180069FC0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006A648 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801A43C0 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CMonitorTreeAssociation::AddMonitorTree(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree *a3)
{
  int v3; // edi
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  _QWORD *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h]

  v3 = 0;
  if ( a3 )
  {
    *((_QWORD *)&v16 + 1) = a3;
    v6 = 0;
    v7 = *((_DWORD *)this + 10);
    v8 = v7;
    *(_QWORD *)&v16 = a2;
    if ( v7 )
    {
      while ( *(HMONITOR *)(*((_QWORD *)this + 2) + 16LL * v6) != a2 )
      {
        if ( ++v6 >= v7 )
          goto LABEL_3;
      }
      v8 = v6;
    }
LABEL_3:
    if ( v8 < v7 )
    {
      v14 = 2LL * v8;
      CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 2) + 16LL * v8 + 8));
      *(_OWORD *)(*((_QWORD *)this + 2) + 8 * v14) = v16;
    }
    else
    {
      v9 = v17;
      v10 = (_QWORD *)((char *)this + 16);
      v11 = *((_DWORD *)this + 10);
      v12 = v11 + 1;
      if ( v11 + 1 >= v11 )
        v9 = v11 + 1;
      v3 = v12 < v11 ? 0x80070216 : 0;
      if ( v12 < v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)this + 9) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10, 0x10u, 1, &v16);
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*v10 + 16LL * v11) = v16;
        *((_DWORD *)this + 10) = v9;
      }
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4Cu);
        return (unsigned int)v3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  }
  return (unsigned int)v3;
}
