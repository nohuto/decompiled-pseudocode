/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180032C08
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180017D30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180033950 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x1800339DC (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180033A34 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180033B00 (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800368F8 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  __int64 v7; // r15
  unsigned int v9; // r12d
  DXGIOutputInfo *v10; // rdi
  int updated; // eax
  CDWMDisplay *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-38h]
  CDWMDisplay *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  v2 = 0;
  v3 = *((_QWORD *)this + 1);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 80) )
  {
    v5 = (unsigned int)v17;
    while ( 1 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL * v4);
      if ( *(_DWORD *)(v7 + 376) )
        break;
LABEL_4:
      v3 = *((_QWORD *)this + 1);
      if ( ++v4 >= *(_DWORD *)(v3 + 80) )
        goto LABEL_5;
    }
    while ( 1 )
    {
      v9 = v5;
      v10 = (DXGIOutputInfo *)(*(_QWORD *)(v7 + 352) + 272LL * v6);
      updated = DXGIOutputInfo::UpdateDesc(v10);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( *((_DWORD *)v10 + 46) || *((_DWORD *)v10 + 47) || *((_DWORD *)v10 + 48) || *((_DWORD *)v10 + 49) )
      {
        CAnalogCompositorManager::GetInstance();
        updated = DXGIOutputInfo::Validate(v10);
        v2 = updated;
        if ( updated < 0 )
        {
          v16 = 257;
          goto LABEL_35;
        }
        v12 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               224LL);
        if ( v12 )
          v12 = CDWMDisplay::CDWMDisplay(v12, (struct CDWMDXGIAdapter *)v7, v10);
        v17 = v12;
        if ( !v12 )
        {
          v2 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x109u);
          goto LABEL_5;
        }
        v13 = *((unsigned int *)this + 16);
        v14 = v13 + 1;
        v5 = v13 + 1;
        if ( (int)v13 + 1 < (unsigned int)v13 )
          v5 = v9;
        v2 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v14 < (unsigned int)v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
        }
        else if ( v5 <= *((_DWORD *)this + 15) )
        {
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v13) = v17;
          *((_DWORD *)this + 16) = v5;
        }
        else
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v17);
          v2 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x10Bu);
          goto LABEL_5;
        }
        v17 = 0LL;
      }
      if ( ++v6 >= *(_DWORD *)(v7 + 376) )
        goto LABEL_4;
    }
    v16 = 243;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v16);
LABEL_5:
    if ( v17 )
      CDWMDisplay::Release(v17);
  }
  return (unsigned int)v2;
}
