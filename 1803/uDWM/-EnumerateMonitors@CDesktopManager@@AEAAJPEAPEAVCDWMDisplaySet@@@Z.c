/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180025258
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180034160 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800342A0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180034300 (-InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  struct CDWMDisplaySet *v2; // rax
  __int64 v4; // rcx
  CDWMDisplaySet *v5; // rcx
  __int64 v6; // rax
  CDWMDXGIEnumeration *v7; // rdi
  int inited; // eax
  int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 19);
  *a2 = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)v2);
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 18) = 0LL;
  }
  v5 = (CDWMDisplaySet *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    CDWMDisplaySet::Release(v5);
    *((_QWORD *)this + 19) = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         88LL);
  v7 = (CDWMDXGIEnumeration *)v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CDWMDXGIEnumeration::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_DWORD *)(v6 + 80) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3788, 1u, -2147024882, 0x38u);
LABEL_28:
    v19 = 972;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v19);
    return (unsigned int)v9;
  }
  (**(void (__fastcall ***)(CDWMDXGIEnumeration *))v7)(v7);
  inited = CDWMDXGIEnumeration::InitDXGI(v7);
  v9 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B3788, 1u, inited, 0x3Cu);
  }
  else
  {
    *((_QWORD *)this + 18) = v7;
    v7 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(CDWMDXGIEnumeration *))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v9 < 0 )
    goto LABEL_28;
  v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v10 )
  {
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 40) = v10 + 72;
    *(_QWORD *)(v10 + 48) = v10 + 72;
    *(_DWORD *)(v10 + 56) = 4;
    *(_QWORD *)(v10 + 60) = 4LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 19) = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    v19 = 973;
    goto LABEL_41;
  }
  v11 = CDWMDisplaySet::Init((CDWMDisplaySet *)v10, *((const struct CDWMDXGIEnumeration **)this + 18));
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3CEu);
  }
  else
  {
    *((_DWORD *)this + 30) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 96, 8u);
    v12 = *((_QWORD *)this + 19);
    v13 = 0;
    if ( *(_DWORD *)(v12 + 64) )
    {
      v14 = v20;
      while ( 1 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 8LL * v13) + 88LL) + 16LL);
        v16 = *((unsigned int *)this + 30);
        v17 = v16 + 1;
        if ( (int)v16 + 1 >= (unsigned int)v16 )
          v14 = v16 + 1;
        v9 = v17 < (unsigned int)v16 ? 0x80070216 : 0;
        if ( v17 >= (unsigned int)v16 )
        {
          if ( v14 > *((_DWORD *)this + 29) )
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 96, 8, 1, &v20);
            v9 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v16) = v20;
            *((_DWORD *)this + 30) = v14;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
        }
        if ( v9 < 0 )
          break;
        v12 = *((_QWORD *)this + 19);
        if ( ++v13 >= *(_DWORD *)(v12 + 64) )
          return (unsigned int)v9;
      }
      v19 = 980;
      goto LABEL_41;
    }
  }
  return (unsigned int)v9;
}
