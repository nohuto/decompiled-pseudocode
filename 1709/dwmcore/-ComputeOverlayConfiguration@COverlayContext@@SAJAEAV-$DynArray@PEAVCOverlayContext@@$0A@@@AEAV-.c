/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18001B620 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x180068440 (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18011C390 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneInfo@COverlayContext@@I@Z @ 0x18013083C (-AddMultipleAndSet@-$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneI.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180143B20 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801445BC (-RemoveAtOrderNotPreserved@-$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(_DWORD *a1, __int64 a2)
{
  int v2; // ebx
  int v5; // edi
  int v6; // ebx
  char v7; // r14
  const void *v8; // rbx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // r15d
  unsigned int v13; // edi
  unsigned int v14; // r8d
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r13
  unsigned int v19; // r15d
  __int64 v20; // r14
  __int64 v22; // r8
  char *v23; // rdx
  unsigned int i; // ebx
  unsigned int v25; // [rsp+28h] [rbp-E0h]
  const void *v26; // [rsp+38h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+5Ch] [rbp-ACh]
  _BYTE v31[32]; // [rsp+68h] [rbp-A0h] BYREF
  void *v32; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v33; // [rsp+90h] [rbp-78h]
  int v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v36[32]; // [rsp+A8h] [rbp-60h] BYREF
  void *v37; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v38; // [rsp+D0h] [rbp-38h]
  int v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+DCh] [rbp-2Ch]
  _BYTE v41[576]; // [rsp+E8h] [rbp-20h] BYREF
  void *v42; // [rsp+328h] [rbp+220h] BYREF
  _BYTE *v43; // [rsp+330h] [rbp+228h]
  int v44; // [rsp+338h] [rbp+230h]
  __int64 v45; // [rsp+33Ch] [rbp+234h]
  _BYTE v46[576]; // [rsp+348h] [rbp+240h] BYREF

  v2 = a1[6];
  lpMem = v31;
  v28 = v31;
  v32 = v36;
  v33 = v36;
  v29 = 4;
  v37 = v41;
  v30 = 4LL;
  v38 = v41;
  v42 = v46;
  v43 = v46;
  v26 = *(const void **)a1;
  v34 = 4;
  v35 = 4LL;
  v39 = 4;
  v40 = 4LL;
  v44 = 4;
  v45 = 4LL;
  v5 = DynArrayImpl<0>::Grow((unsigned int)&lpMem, 8, v2, 0, (__int64)&v26);
  if ( v5 < 0 )
  {
    v25 = 236;
    goto LABEL_48;
  }
  memcpy_0((char *)lpMem + (unsigned int)(8 * HIDWORD(v30)), v26, (unsigned int)(8 * v2));
  HIDWORD(v30) += v2;
  v6 = *(_DWORD *)(a2 + 24);
  v26 = *(const void **)a2;
  v5 = DynArrayImpl<0>::Grow((unsigned int)&v37, 144, v6, 0, (__int64)&v26);
  if ( v5 < 0 )
  {
    v25 = 237;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v25);
    goto LABEL_18;
  }
  memcpy_0((char *)v37 + (unsigned int)(144 * HIDWORD(v40)), v26, (unsigned int)(144 * v6));
  HIDWORD(v40) += v6;
  if ( HIDWORD(v30) )
  {
    while ( 1 )
    {
      v7 = *(_BYTE *)(*(_QWORD *)lpMem + 1173LL);
      v8 = *(const void **)(*(_QWORD *)lpMem + 80LL);
      v26 = v8;
      v9 = DynArray<COverlayContext *,0>::AddMultipleAndSet(&v32, lpMem);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v10 = HIDWORD(v30);
      if ( HIDWORD(v30) )
      {
        if ( HIDWORD(v30) != 1 )
        {
          *(_QWORD *)lpMem = *((_QWORD *)lpMem + (unsigned int)(HIDWORD(v30) - 1));
          v10 = HIDWORD(v30);
        }
        v11 = v10 - 1;
        HIDWORD(v30) = v11;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x216u);
        v11 = HIDWORD(v30);
      }
      v12 = HIDWORD(v26);
      v13 = 0;
      if ( !v7 && v11 )
      {
        do
        {
          if ( *(_QWORD *)(*((_QWORD *)lpMem + v13) + 80LL) == __PAIR64__(v12, (unsigned int)v8) )
          {
            DynArray<COverlayContext *,0>::AddMultipleAndSet(&v32, (char *)lpMem + 8 * v13);
            DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(&lpMem, v13, v22);
            v11 = HIDWORD(v30);
          }
          else
          {
            ++v13;
          }
        }
        while ( v13 < v11 );
      }
      v14 = HIDWORD(v40);
      v15 = 0;
      while ( v15 < v14 )
      {
        v23 = (char *)v37 + 144 * v15;
        if ( *((_DWORD *)v23 + 32) == (_DWORD)v8 && *((_DWORD *)v23 + 33) == v12 )
        {
          DynArray<COverlayContext::ReservedPlaneInfo,0>::AddMultipleAndSet(&v42, v23);
          DynArray<COverlayContext::ReservedPlaneInfo,0>::RemoveAtOrderNotPreserved(&v37, v15);
          v14 = HIDWORD(v40);
        }
        else
        {
          ++v15;
        }
      }
      v16 = COverlayContext::ComputeOverlayConfigurationForAdapter((__int64 *)&v32, (__int64 *)&v42);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x134u);
        goto LABEL_18;
      }
      HIDWORD(v35) = 0;
      DynArrayImpl<0>::ShrinkToSize(&v32, 8LL);
      HIDWORD(v45) = 0;
      DynArrayImpl<0>::ShrinkToSize(&v42, 144LL);
      if ( !HIDWORD(v30) )
        goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFDu);
  }
  else
  {
LABEL_14:
    if ( a1[6] )
    {
      v17 = 0;
      v18 = *(_QWORD *)(**(_QWORD **)a1 + 1200LL);
      do
      {
        v19 = 0;
        v20 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v17);
        if ( *(_DWORD *)(v20 + 272) )
        {
          while ( !COverlayContext::IsRevokable(
                     (COverlayContext *)v20,
                     (const struct COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v20 + 248) + 248LL * v19)) )
          {
            if ( ++v19 >= *(_DWORD *)(v20 + 272) )
              goto LABEL_17;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v18 + 528) + 104LL))(
            *(_QWORD *)(v18 + 528),
            CCommonRegistryData::m_dwOverlayDisqualifyInterval,
            0x10000LL);
        }
LABEL_17:
        ++v17;
      }
      while ( v17 < a1[6] );
    }
  }
LABEL_18:
  if ( v5 < 0 )
  {
    for ( i = 0; i < a1[6]; ++i )
      COverlayContext::Reset(*(COverlayContext **)(*(_QWORD *)a1 + 8LL * i));
  }
  if ( v42 != v43 )
  {
    WPF::ProcessHeapImpl::Free(v42);
    v42 = 0LL;
  }
  if ( v37 != v38 )
  {
    WPF::ProcessHeapImpl::Free(v37);
    v37 = 0LL;
  }
  if ( v32 != v33 )
  {
    WPF::ProcessHeapImpl::Free(v32);
    v32 = 0LL;
  }
  if ( lpMem != v28 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return (unsigned int)v5;
}
