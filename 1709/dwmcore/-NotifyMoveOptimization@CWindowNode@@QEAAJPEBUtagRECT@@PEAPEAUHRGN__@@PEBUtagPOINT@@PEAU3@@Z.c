/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180178EAC
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800BB98C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18014E850 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     McTemplateU0xn @ 0x180179EC8 (McTemplateU0xn.c)
 *     McTemplateU0xnn @ 0x180179F3C (McTemplateU0xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CWindowNode *this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  signed int v15; // eax
  void *v16; // rcx

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
  if ( *(_DWORD *)(v10 + 80) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagRECT *, HRGN *))(*(_QWORD *)v11 + 272LL))(
             v11,
             a2,
             a3) )
      {
        break;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v10 + 80) )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v6);
  }
LABEL_6:
  if ( (*((_BYTE *)this + 93) & 1) != 0 )
  {
    *((_DWORD *)this + 144) = 0;
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 145) = 1;
    *((_BYTE *)this + 93) &= ~1u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1032));
  }
  if ( !*((_BYTE *)this + 1020) && qword_18026EEA8 && CDisplaySet::NeedsDesktopMoves(qword_18026EEA8) && v5 )
  {
    if ( a2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      {
LABEL_17:
        v15 = (*(__int64 (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v5 + 224LL))(v5, this);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1F9u);
        }
        else
        {
          *((_BYTE *)this + 1019) = 1;
          if ( a2 )
            CDwmMetaRegion::AddMoveRectangle((CWindowNode *)((char *)this + 1032), a2, a4);
          v16 = (void *)*((_QWORD *)this + 128);
          if ( v16 )
            DeleteObject(v16);
          *((_QWORD *)this + 128) = 0LL;
        }
        return v4;
      }
      McTemplateU0xnn(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
        *((_QWORD *)this + 74),
        v14,
        (__int64)a2);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xn(v13, v12, *((_QWORD *)this + 74), v14, (__int64)a4);
    goto LABEL_17;
  }
  return v4;
}
