/*
 * XREFs of ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180034160
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180025258 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x180033E2C (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180033FD8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::Init(CDWMDisplaySet *this, const struct CDWMDXGIEnumeration *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  __int64 i; // r8
  int v7; // r10d
  _DWORD *v8; // rdx
  BOOL v9; // r9d
  int v10; // ecx
  BOOL v11; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(const struct CDWMDXGIEnumeration *))a2)(a2);
  v3 = CDWMDisplaySet::EnumerateOutputs(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3788, 1u, v3, 0x76u);
  }
  else
  {
    v5 = CDWMDisplaySet::ArrangeCloneDisplays(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3788, 1u, v5, 0x78u);
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
      {
        v7 = *((_DWORD *)this + 4);
        v8 = *(_DWORD **)(*((_QWORD *)this + 5) + 8 * i);
        v9 = *((_DWORD *)this + 6) <= v7 || *((_DWORD *)this + 7) <= *((_DWORD *)this + 5);
        v10 = v8[14];
        v11 = v8[16] <= v10 || v8[17] <= v8[15];
        if ( v9 )
        {
          if ( v11 )
          {
            *((_DWORD *)this + 7) = 0;
            *((_DWORD *)this + 6) = 0;
            *((_DWORD *)this + 5) = 0;
            *((_DWORD *)this + 4) = 0;
          }
          else
          {
            *((_OWORD *)this + 1) = *(_OWORD *)(v8 + 14);
          }
        }
        else if ( !v11 )
        {
          if ( v10 < v7 )
            *((_DWORD *)this + 4) = v10;
          v13 = v8[15];
          if ( v13 < *((_DWORD *)this + 5) )
            *((_DWORD *)this + 5) = v13;
          v14 = v8[16];
          if ( v14 > *((_DWORD *)this + 6) )
            *((_DWORD *)this + 6) = v14;
          v15 = v8[17];
          if ( v15 > *((_DWORD *)this + 7) )
            *((_DWORD *)this + 7) = v15;
        }
      }
    }
  }
  return v4;
}
