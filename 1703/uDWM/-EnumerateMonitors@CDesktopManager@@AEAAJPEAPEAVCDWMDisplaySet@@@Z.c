/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180022F44
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180022B68 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18000EBD0 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18000F780 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18000F908 (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18000FB28 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18000FDAC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 16);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2);
  v4 = (struct CDWMDXGIEnumeration **)((char *)this + 120);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *v4 = 0LL;
  }
  v6 = (CDWMDisplaySet *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    CDWMDisplaySet::Release(v6);
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = CDWMDXGIEnumeration::Create(v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x337u);
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
  *((_QWORD *)this + 16) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v21 = 824;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v21);
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
    MilInstrumentationCheckHR(0x14u, &dword_1800AB370, 1u, v13, 0x76u);
  }
  else
  {
    v14 = CDWMDisplaySet::ArrangeCloneDisplays((CDWMDisplaySet *)v10);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800AB370, 1u, v14, 0x78u);
    else
      CDWMDisplaySet::ComputeDisplayBounds((CDWMDisplaySet *)v10);
  }
  if ( v8 < 0 )
  {
    v21 = 825;
    goto LABEL_37;
  }
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 88, 8LL);
  v15 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 16) + 64LL) )
  {
    v16 = v22;
    while ( 1 )
    {
      v17 = *((unsigned int *)this + 28);
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 40LL) + 8 * v15) + 88LL) + 16LL);
      v18 = v17 + 1;
      if ( (int)v17 + 1 >= (unsigned int)v17 )
        v16 = v17 + 1;
      v8 = v18 < (unsigned int)v17 ? 0x80070216 : 0;
      if ( v18 < (unsigned int)v17 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
      }
      else if ( v16 <= *((_DWORD *)this + 27) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v17) = v22;
        *((_DWORD *)this + 28) = v16;
      }
      else
      {
        v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 88, 8LL, 1LL, &v22);
        v8 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
      }
      if ( v8 < 0 )
        break;
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(*((_QWORD *)this + 16) + 64LL) )
        return (unsigned int)v8;
    }
    v21 = 831;
    goto LABEL_37;
  }
  return (unsigned int)v8;
}
