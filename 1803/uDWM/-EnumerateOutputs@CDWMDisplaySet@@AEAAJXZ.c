/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180033FD8
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180034160 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800326E8 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180034D44 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180034DD0 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180034E28 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180034EF4 (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rsi
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  __int64 v7; // r14
  DXGIOutputInfo *v9; // rdi
  int updated; // eax
  CDWMDisplay *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-38h]
  CDWMDisplay *v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  v17 = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(v1 + 80) )
  {
    v5 = (unsigned int)v17;
    while ( 1 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 56) + 8 * v3);
      if ( *(_DWORD *)(v7 + 376) )
        break;
LABEL_4:
      v1 = *((_QWORD *)this + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 80) )
        goto LABEL_5;
    }
    while ( 1 )
    {
      v9 = (DXGIOutputInfo *)(*(_QWORD *)(v7 + 352) + 280LL * v6);
      updated = DXGIOutputInfo::UpdateDesc(v9);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( *((_DWORD *)v9 + 46) || *((_DWORD *)v9 + 47) || *((_DWORD *)v9 + 48) || *((_DWORD *)v9 + 49) )
      {
        CAnalogCompositorManager::GetInstance();
        updated = DXGIOutputInfo::Validate(v9);
        v2 = updated;
        if ( updated < 0 )
        {
          v16 = 257;
          goto LABEL_35;
        }
        v11 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               224LL);
        if ( v11 )
          v11 = CDWMDisplay::CDWMDisplay(v11, (struct CDWMDXGIAdapter *)v7, v9);
        v17 = v11;
        if ( !v11 )
        {
          v2 = -2147024882;
          v16 = 265;
          goto LABEL_33;
        }
        v12 = *((unsigned int *)this + 16);
        v13 = v12 + 1;
        if ( (int)v12 + 1 >= (unsigned int)v12 )
          v5 = v12 + 1;
        v2 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
        if ( v13 < (unsigned int)v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
        }
        else if ( v5 <= *((_DWORD *)this + 15) )
        {
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v12) = v17;
          *((_DWORD *)this + 16) = v5;
        }
        else
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v17);
          v2 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
        }
        if ( v2 < 0 )
        {
          v16 = 267;
LABEL_33:
          v15 = v2;
          goto LABEL_36;
        }
        v17 = 0LL;
      }
      if ( ++v6 >= *(_DWORD *)(v7 + 376) )
        goto LABEL_4;
    }
    v16 = 243;
LABEL_35:
    v15 = updated;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16);
LABEL_5:
    if ( v17 )
      CDWMDisplay::Release(v17);
  }
  return (unsigned int)v2;
}
