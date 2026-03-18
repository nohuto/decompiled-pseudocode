/*
 * XREFs of ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180163AE0
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18012D7C8 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x18016248C (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 */

void __fastcall CFlipChain::CacheSharedHandlesForRect(CFlipChain *this, int a2, RECT *a3)
{
  int CurrentDisplaySet; // eax
  CDisplaySet *v6; // rsi
  int v7; // edi
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  CDisplaySet *v16; // [rsp+30h] [rbp-79h] BYREF
  RECT *lprcSrc1; // [rsp+38h] [rbp-71h]
  struct _LUID v18; // [rsp+40h] [rbp-69h] BYREF
  HMONITOR v19; // [rsp+48h] [rbp-61h]
  bool v20; // [rsp+50h] [rbp-59h]
  _BYTE v21[72]; // [rsp+58h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+A0h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+B0h] [rbp+7h] BYREF

  v16 = 0LL;
  lprcSrc1 = a3;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v16);
  v6 = v16;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x3FDu);
  }
  else
  {
    v7 = *((_DWORD *)v16 + 18);
    *((_DWORD *)this + 62) = 0;
    LODWORD(v16) = v7;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 224, 0x58u);
    memset_0(v21, 0, 0x40uLL);
    v8 = *((_DWORD *)this + 40);
    if ( !v8 )
      v8 = 1;
    v9 = 0;
    if ( v7 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + *((_QWORD *)v6 + 6));
        rcSrc2 = *(RECT *)(v11 + 96);
        if ( IntersectRect(&rcDst, lprcSrc1, &rcSrc2) )
          break;
LABEL_14:
        ++v9;
        v10 += 8LL;
        if ( v9 >= (unsigned int)v16 )
          goto LABEL_19;
      }
      v18 = *(struct _LUID *)(v11 + 224);
      if ( a2 >= 0 )
        v19 = 0LL;
      else
        v19 = *(HMONITOR *)(*(_QWORD *)(v11 + 128) + 16LL);
      v20 = (a2 & 8) != 0;
      v13 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((__int64)this + 224, (__int64)&v18, v12);
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x426u);
      }
      else
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = CFlipChain::CacheSharedHandle(this, v18, v19, v20, v14);
          if ( v15 < 0 )
            break;
          if ( ++v14 >= v8 )
            goto LABEL_14;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x42Du);
      }
    }
  }
LABEL_19:
  if ( v6 )
    CDisplaySet::Release(v6);
}
