/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x180034CC8
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180044550 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801FBC58 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::AddMonitorTree(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree *a3)
{
  int v3; // edi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  char *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v12; // rbx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *((_QWORD *)&v14 + 1) = a3;
    v5 = 0;
    v6 = *((_DWORD *)this + 10);
    v7 = v6;
    *(_QWORD *)&v14 = a2;
    if ( v6 )
    {
      while ( *(HMONITOR *)(*((_QWORD *)this + 2) + 16LL * v5) != a2 )
      {
        if ( ++v5 >= v6 )
          goto LABEL_3;
      }
      v7 = v5;
    }
LABEL_3:
    v8 = (char *)this + 16;
    if ( v7 < v6 )
    {
      v12 = 2LL * v7;
      CMILRefCountBase::Release(*(CMILRefCountBase **)(*(_QWORD *)v8 + 16LL * v7 + 8));
      *(_OWORD *)(*(_QWORD *)v8 + 8 * v12) = v14;
    }
    else
    {
      v9 = *((unsigned int *)this + 10);
      v10 = v9 + 1;
      v3 = (int)v9 + 1 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( (int)v9 + 1 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)v8 + 5) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet(v8, 16LL, 1LL, &v14);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)v8 + 16 * v9) = v14;
        *((_DWORD *)v8 + 6) = v10;
      }
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x4Cu);
        return (unsigned int)v3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  }
  return (unsigned int)v3;
}
