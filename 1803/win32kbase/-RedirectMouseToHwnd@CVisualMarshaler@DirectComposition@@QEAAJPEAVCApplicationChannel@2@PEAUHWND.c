/*
 * XREFs of ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000D1E8
 * Callers:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000B57C (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C0002B30 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0004124 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C00109C0 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0016058 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        unsigned int a5,
        unsigned int a6)
{
  struct DirectComposition::CResourceMarshaler *v6; // r10
  HWND v7; // rax
  int v8; // ebx
  _QWORD *v13; // rcx
  int WindowForInputType; // eax
  int v15; // eax
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  bool v21; // [rsp+30h] [rbp-D0h] BYREF
  struct DirectComposition::CResourceMarshaler *v22; // [rsp+38h] [rbp-C8h] BYREF
  HWND v23; // [rsp+40h] [rbp-C0h] BYREF
  void *v24; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[36]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 25);
  v7 = 0LL;
  v8 = 0;
  v23 = 0LL;
  v22 = v6;
  if ( !v6 )
    goto LABEL_5;
  v23 = 0LL;
  v13 = (_QWORD *)*((_QWORD *)v6 + 31);
  if ( v13 )
  {
    WindowForInputType = CompositionInputObject::GetWindowForInputType(v13, 1, &v23);
    v6 = v22;
    v8 = WindowForInputType;
    v7 = v23;
  }
  if ( v8 >= 0 )
  {
LABEL_5:
    if ( a3 == v7 )
    {
LABEL_6:
      if ( v8 >= 0 && v6 )
      {
        v15 = *((_DWORD *)v6 + 31);
        if ( (a5 & 0xF8000) != 0 )
        {
          if ( (a6 & 0xF8000) != 0 )
            v15 |= 0xF8000u;
          else
            v15 &= 0xFFF07FFF;
        }
        if ( (a5 & 0x100) != 0 )
        {
          if ( (a6 & 0x100) != 0 )
            v15 |= 0x100u;
          else
            v15 &= ~0x100u;
        }
        if ( v15 != *((_DWORD *)v6 + 31) )
        {
          *((_DWORD *)v6 + 13) |= 1u;
          *((_DWORD *)v6 + 31) = v15;
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a2, v22);
        }
      }
      return (unsigned int)v8;
    }
    v24 = 0LL;
    if ( *((_QWORD *)this + 25) )
    {
      v18 = *(_QWORD *)this;
      v21 = 0;
      v8 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64))(v18 + 176))(
             this,
             a2,
             23LL);
    }
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, _QWORD, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)this + 272LL))(
             this,
             a2,
             0LL,
             &v22);
      if ( v8 >= 0 )
      {
        memset(v25, 0, sizeof(v25));
        LODWORD(v25[0]) = 232;
        if ( a4 )
        {
          v19 = *(_OWORD *)a4;
          LODWORD(v25[1]) = 3;
          v20 = *((_OWORD *)a4 + 1);
          *(_OWORD *)&v25[3] = v19;
          v25[7] = *((_QWORD *)a4 + 4);
          *(_OWORD *)&v25[5] = v20;
        }
        else
        {
          LODWORD(v25[1]) = 2;
        }
        LODWORD(v25[8]) = 0;
        LODWORD(v25[15]) = 0;
        LODWORD(v25[22]) = 0;
        v25[2] = a3;
        v8 = CompositionInputObject::KernelCreateCompositionInputSink(
               (const struct COMPOSITION_INPUT_SINK_V2 *)v25,
               0,
               &v24);
        if ( v8 >= 0 )
        {
          v17 = DirectComposition::CInteractionMarshaler::SetInputSinkHelper(v22, v24, &v21);
          v6 = v22;
          v8 = v17;
          goto LABEL_6;
        }
      }
    }
  }
  return (unsigned int)v8;
}
