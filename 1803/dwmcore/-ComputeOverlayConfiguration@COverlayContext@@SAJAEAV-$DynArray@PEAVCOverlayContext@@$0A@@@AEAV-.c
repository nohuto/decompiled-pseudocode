/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180079180
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x1800790DC (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013F0AC (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneInfo@COverlayContext@@I@Z @ 0x180152244 (-AddMultipleAndSet@-$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneI.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801670B4 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801676F8 (-RemoveAtOrderNotPreserved@-$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
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
  __int64 v23; // r9
  char *v24; // rdx
  unsigned int i; // ebx
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  const void *v27; // [rsp+38h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v29; // [rsp+50h] [rbp-B8h]
  int v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+5Ch] [rbp-ACh]
  _BYTE v32[32]; // [rsp+68h] [rbp-A0h] BYREF
  void *v33; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v34; // [rsp+90h] [rbp-78h]
  int v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v37[32]; // [rsp+A8h] [rbp-60h] BYREF
  void *v38; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v39; // [rsp+D0h] [rbp-38h]
  int v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+DCh] [rbp-2Ch]
  _BYTE v42[576]; // [rsp+E8h] [rbp-20h] BYREF
  void *v43; // [rsp+328h] [rbp+220h] BYREF
  _BYTE *v44; // [rsp+330h] [rbp+228h]
  int v45; // [rsp+338h] [rbp+230h]
  __int64 v46; // [rsp+33Ch] [rbp+234h]
  _BYTE v47[576]; // [rsp+348h] [rbp+240h] BYREF

  v2 = a1[6];
  lpMem = v32;
  v29 = v32;
  v33 = v37;
  v34 = v37;
  v30 = 4;
  v38 = v42;
  v31 = 4LL;
  v39 = v42;
  v43 = v47;
  v44 = v47;
  v27 = *(const void **)a1;
  v35 = 4;
  v36 = 4LL;
  v40 = 4;
  v41 = 4LL;
  v45 = 4;
  v46 = 4LL;
  v5 = DynArrayImpl<0>::Grow((unsigned int)&lpMem, 8, v2, 0, (__int64)&v27);
  if ( v5 < 0 )
  {
    v26 = 237;
    goto LABEL_48;
  }
  memcpy_0((char *)lpMem + (unsigned int)(8 * HIDWORD(v31)), v27, (unsigned int)(8 * v2));
  HIDWORD(v31) += v2;
  v6 = *(_DWORD *)(a2 + 24);
  v27 = *(const void **)a2;
  v5 = DynArrayImpl<0>::Grow((unsigned int)&v38, 144, v6, 0, (__int64)&v27);
  if ( v5 < 0 )
  {
    v26 = 238;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v26);
    goto LABEL_18;
  }
  memcpy_0((char *)v38 + (unsigned int)(144 * HIDWORD(v41)), v27, (unsigned int)(144 * v6));
  HIDWORD(v41) += v6;
  if ( HIDWORD(v31) )
  {
    while ( 1 )
    {
      v7 = *(_BYTE *)(*(_QWORD *)lpMem + 1185LL);
      v8 = *(const void **)(*(_QWORD *)lpMem + 80LL);
      v27 = v8;
      v9 = DynArray<COverlayContext *,0>::AddMultipleAndSet((__int64)&v33, lpMem);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v10 = HIDWORD(v31);
      if ( HIDWORD(v31) )
      {
        if ( HIDWORD(v31) != 1 )
        {
          *(_QWORD *)lpMem = *((_QWORD *)lpMem + (unsigned int)(HIDWORD(v31) - 1));
          v10 = HIDWORD(v31);
        }
        v11 = v10 - 1;
        HIDWORD(v31) = v11;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x21Fu);
        v11 = HIDWORD(v31);
      }
      v12 = HIDWORD(v27);
      v13 = 0;
      if ( !v7 && v11 )
      {
        do
        {
          if ( *(_QWORD *)(*((_QWORD *)lpMem + v13) + 80LL) == __PAIR64__(v12, (unsigned int)v8) )
          {
            DynArray<COverlayContext *,0>::AddMultipleAndSet((__int64)&v33, (_QWORD *)lpMem + v13);
            DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(&lpMem, v13, v22, v23);
            v11 = HIDWORD(v31);
          }
          else
          {
            ++v13;
          }
        }
        while ( v13 < v11 );
      }
      v14 = HIDWORD(v41);
      v15 = 0;
      while ( v15 < v14 )
      {
        v24 = (char *)v38 + 144 * v15;
        if ( *((_DWORD *)v24 + 32) == (_DWORD)v8 && *((_DWORD *)v24 + 33) == v12 )
        {
          DynArray<COverlayContext::ReservedPlaneInfo,0>::AddMultipleAndSet(&v43, v24);
          DynArray<COverlayContext::ReservedPlaneInfo,0>::RemoveAtOrderNotPreserved(&v38, v15);
          v14 = HIDWORD(v41);
        }
        else
        {
          ++v15;
        }
      }
      v16 = COverlayContext::ComputeOverlayConfigurationForAdapter(&v33, &v43);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x135u);
        goto LABEL_18;
      }
      HIDWORD(v36) = 0;
      DynArrayImpl<0>::ShrinkToSize(&v33, 8LL);
      HIDWORD(v46) = 0;
      DynArrayImpl<0>::ShrinkToSize(&v43, 144LL);
      if ( !HIDWORD(v31) )
        goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFEu);
  }
  else
  {
LABEL_14:
    if ( a1[6] )
    {
      v17 = 0;
      v18 = *(_QWORD *)(**(_QWORD **)a1 + 1208LL);
      do
      {
        v19 = 0;
        v20 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v17);
        if ( *(_DWORD *)(v20 + 280) )
        {
          while ( !COverlayContext::IsRevokable(
                     (COverlayContext *)v20,
                     (const struct COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v20 + 256) + 248LL * v19)) )
          {
            if ( ++v19 >= *(_DWORD *)(v20 + 280) )
              goto LABEL_17;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v18 + 552) + 104LL))(
            *(_QWORD *)(v18 + 552),
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
  if ( v43 != v44 )
  {
    operator delete(v43);
    v43 = 0LL;
  }
  if ( v38 != v39 )
  {
    operator delete(v38);
    v38 = 0LL;
  }
  if ( v33 != v34 )
  {
    operator delete(v33);
    v33 = 0LL;
  }
  if ( lpMem != v29 )
    operator delete(lpMem);
  return (unsigned int)v5;
}
