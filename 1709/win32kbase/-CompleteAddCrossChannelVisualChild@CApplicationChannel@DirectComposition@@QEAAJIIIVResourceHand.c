/*
 * XREFs of ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C002F06C
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0091030 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C002B8FC (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002F768 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00306B0 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C0093320 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  _QWORD *CrossChannelVisualChildNoRef; // r15
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
    goto LABEL_35;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 120LL))(
          v14,
          134LL) )
    goto LABEL_26;
  if ( a7 )
  {
    v21 = (unsigned int)(a7 - 1);
    if ( v21 < *((_QWORD *)a1 + 10) )
    {
      _mm_lfence();
      CrossChannelVisualChildNoRef = *(_QWORD **)(v21 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
    }
    if ( !CrossChannelVisualChildNoRef )
      goto LABEL_35;
    v22 = (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*CrossChannelVisualChildNoRef + 120LL))(
            CrossChannelVisualChildNoRef,
            134LL) == 0;
  }
  else
  {
    if ( !a8 )
      goto LABEL_8;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(
                                     (__int64)v14,
                                     a8);
    v22 = CrossChannelVisualChildNoRef == 0LL;
  }
  if ( v22 )
    goto LABEL_26;
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
             134LL) )
      {
        v10 = v24;
        DirectComposition::CResourceMarshaler::AddRef(v24);
LABEL_17:
        v19 = *(_QWORD *)v14;
        v25 = 0;
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD *, char *))(v19 + 240))(
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
LABEL_26:
      v18 = -1073741811;
      goto LABEL_20;
    }
LABEL_35:
    v18 = -1073741790;
    goto LABEL_20;
  }
  v15 = a5;
  if ( a5 )
  {
    v16 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuotaZInit(0xF8uLL, 0x70784344u);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0xF8uLL);
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
