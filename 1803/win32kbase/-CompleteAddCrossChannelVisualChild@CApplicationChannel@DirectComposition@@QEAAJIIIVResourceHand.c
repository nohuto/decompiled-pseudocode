/*
 * XREFs of ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C000A950
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0013D90 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C000B938 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C0014120 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0016058 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0149A7C (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 CrossChannelVisualChildNoRef; // r15
  unsigned __int64 v9; // r10
  struct DirectComposition::CResourceMarshaler *v10; // rbp
  struct DirectComposition::CResourceMarshaler *v14; // r14
  unsigned int v15; // ebx
  struct DirectComposition::CResourceMarshaler *v16; // rax
  struct DirectComposition::CResourceMarshaler *v17; // rsi
  int v18; // ebx
  __int64 v19; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  unsigned __int64 v23; // rdx
  DirectComposition::CResourceMarshaler *v24; // rbx
  char v25; // [rsp+78h] [rbp+10h] BYREF

  CrossChannelVisualChildNoRef = 0LL;
  v9 = (unsigned int)(a2 - 1);
  v10 = 0LL;
  if ( a2 && v9 < *((_QWORD *)a1 + 10) )
  {
    _mm_lfence();
    v14 = *(struct DirectComposition::CResourceMarshaler **)(v9 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    goto LABEL_22;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 120LL))(
          v14,
          151LL) )
    goto LABEL_29;
  if ( a7 )
  {
    v21 = (unsigned int)(a7 - 1);
    if ( v21 < *((_QWORD *)a1 + 10) )
    {
      _mm_lfence();
      CrossChannelVisualChildNoRef = *(_QWORD *)(v21 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
    }
    if ( !CrossChannelVisualChildNoRef )
      goto LABEL_22;
    v22 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)CrossChannelVisualChildNoRef + 120LL))(
            CrossChannelVisualChildNoRef,
            151LL) == 0;
  }
  else
  {
    if ( !a8 )
      goto LABEL_8;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v14);
    v22 = CrossChannelVisualChildNoRef == 0;
  }
  if ( v22 )
    goto LABEL_29;
LABEL_8:
  if ( a4 )
  {
    v23 = (unsigned int)(a4 - 1);
    if ( v23 >= *((_QWORD *)a1 + 10) )
    {
      v24 = 0LL;
    }
    else
    {
      _mm_lfence();
      v24 = *(DirectComposition::CResourceMarshaler **)(v23 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
    }
    if ( v24 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v24 + 120LL))(
             v24,
             151LL) )
      {
        v10 = v24;
        DirectComposition::CResourceMarshaler::AddRef(v24);
LABEL_17:
        v19 = *(_QWORD *)v14;
        v25 = 0;
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(v19 + 248))(
                v14,
                a1,
                v10,
                a6,
                CrossChannelVisualChildNoRef,
                &v25);
        if ( v18 >= 0 && v25 )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v14);
        goto LABEL_20;
      }
LABEL_29:
      v18 = -1073741811;
      goto LABEL_20;
    }
LABEL_22:
    v18 = -1073741790;
    goto LABEL_20;
  }
  v15 = a5;
  if ( a5 )
  {
    v16 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0x120uLL);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0x120uLL);
      *((_DWORD *)v17 + 6) = 0;
      *(_QWORD *)v17 = &DirectComposition::CCrossChannelParentVisualMarshaler::`vftable';
      *((_DWORD *)v17 + 5) = 1;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      v18 = -1073741801;
      goto LABEL_20;
    }
    v18 = DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(v17, a1, v15, a3);
    if ( v18 < 0 || (v18 = DirectComposition::CApplicationChannel::RegisterResource(a1, v17), v18 < 0) )
    {
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v17 + 112LL))(
        v17,
        a1);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v17 + 104LL))(
        v17,
        1LL);
    }
    else
    {
      v10 = v17;
    }
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v18 >= 0 )
    goto LABEL_17;
LABEL_20:
  DirectComposition::CApplicationChannel::ReleaseResource(a1, v10);
  return (unsigned int)v18;
}
