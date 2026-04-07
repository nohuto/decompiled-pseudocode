/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180017D30
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180017828 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800327A8 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18003285C (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x1800329DC (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180032C08 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180032E30 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  struct CDWMDisplaySet *v2; // rax
  struct CDWMDXGIEnumeration **v4; // rsi
  __int64 v5; // rcx
  CDWMDisplaySet *v6; // rcx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  _DWORD *v11; // rax
  struct CDWMDXGIEnumeration *v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 19);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 144);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *v4 = 0LL;
  }
  v6 = (CDWMDisplaySet *)*((_QWORD *)this + 19);
  if ( v6 )
  {
    CDWMDisplaySet::Release(v6);
    *((_QWORD *)this + 19) = 0LL;
  }
  v7 = CDWMDXGIEnumeration::Create(v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x395u);
    return (unsigned int)v8;
  }
  v9 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   112LL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 1;
    v11 = v9 + 18;
    v10[16] = 0;
    *((_QWORD *)v10 + 5) = v11;
    *((_QWORD *)v10 + 6) = v11;
    v10[14] = 4;
    v10[15] = 4;
    v10[7] = 0;
    v10[6] = 0;
    v10[5] = 0;
    v10[4] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 19) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v22 = 918;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v22);
    return (unsigned int)v8;
  }
  v12 = *v4;
  *((_QWORD *)v10 + 1) = *v4;
  if ( v12 )
    (**(void (__fastcall ***)(struct CDWMDXGIEnumeration *))v12)(v12);
  v13 = CDWMDisplaySet::EnumerateOutputs((CDWMDisplaySet *)v10);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA290, 1u, v13, 0x76u);
  }
  else
  {
    v14 = CDWMDisplaySet::ArrangeCloneDisplays((CDWMDisplaySet *)v10);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA290, 1u, v14, 0x78u);
    else
      CDWMDisplaySet::ComputeDisplayBounds((CDWMDisplaySet *)v10);
  }
  if ( v8 < 0 )
  {
    v22 = 919;
    goto LABEL_37;
  }
  *((_DWORD *)this + 30) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 96, 8LL);
  v15 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 19) + 64LL) )
  {
    v16 = v23;
    while ( 1 )
    {
      v17 = *((unsigned int *)this + 30);
      v18 = v17 + 1;
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 19) + 40LL) + 8 * v15) + 88LL) + 16LL);
      v19 = v17 + 1;
      if ( (int)v17 + 1 < (unsigned int)v17 )
        v19 = v16;
      v8 = v18 < (unsigned int)v17 ? 0x80070216 : 0;
      v16 = v19;
      if ( v18 < (unsigned int)v17 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
      }
      else if ( v19 <= *((_DWORD *)this + 29) )
      {
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v17) = v23;
        *((_DWORD *)this + 30) = v19;
      }
      else
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 96, 8LL, 1LL, &v23);
        v8 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
      }
      if ( v8 < 0 )
        break;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(*((_QWORD *)this + 19) + 64LL) )
        return (unsigned int)v8;
    }
    v22 = 925;
    goto LABEL_37;
  }
  return (unsigned int)v8;
}
