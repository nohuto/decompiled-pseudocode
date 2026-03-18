/*
 * XREFs of ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180164F84
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180164CB4 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x1801787F0 (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 */

void __fastcall CFlipChain::CacheSharedHandlesForRect(CFlipChain *this, int a2, RECT *a3)
{
  signed int CurrentDisplaySet; // eax
  CDisplaySet *v6; // rsi
  int v7; // edi
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rdi
  signed int v12; // eax
  unsigned int v13; // edi
  signed int v14; // eax
  CDisplaySet *v15; // [rsp+30h] [rbp-79h] BYREF
  RECT *lprcSrc1; // [rsp+38h] [rbp-71h]
  struct _LUID v17; // [rsp+40h] [rbp-69h] BYREF
  HMONITOR v18; // [rsp+48h] [rbp-61h]
  bool v19; // [rsp+50h] [rbp-59h]
  _BYTE v20[72]; // [rsp+58h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+A0h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+B0h] [rbp+7h] BYREF

  v15 = 0LL;
  lprcSrc1 = a3;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v15);
  v6 = v15;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0x3FCu);
  }
  else
  {
    v7 = *((_DWORD *)v15 + 18);
    *((_DWORD *)this + 64) = 0;
    LODWORD(v15) = v7;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 232, 0x58u);
    memset_0(v20, 0, 0x40uLL);
    v8 = *((_DWORD *)this + 42);
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
        if ( v9 >= (unsigned int)v15 )
          goto LABEL_19;
      }
      v17 = *(struct _LUID *)(v11 + 224);
      if ( a2 >= 0 )
        v18 = 0LL;
      else
        v18 = *(HMONITOR *)(*(_QWORD *)(v11 + 128) + 16LL);
      v19 = (a2 & 8) != 0;
      v12 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((char *)this + 232, &v17);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x425u);
      }
      else
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = CFlipChain::CacheSharedHandle(this, v17, v18, v19, v13);
          if ( v14 < 0 )
            break;
          if ( ++v13 >= v8 )
            goto LABEL_14;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x42Cu);
      }
    }
  }
LABEL_19:
  if ( v6 )
    CDisplaySet::Release(v6);
}
