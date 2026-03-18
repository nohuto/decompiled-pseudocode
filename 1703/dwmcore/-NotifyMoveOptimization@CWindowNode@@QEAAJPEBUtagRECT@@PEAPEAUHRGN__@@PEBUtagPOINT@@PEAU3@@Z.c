/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180162914
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18004FCFC (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x180159234 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     Template_xn @ 0x180163010 (Template_xn.c)
 *     Template_xnn @ 0x180163080 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CWindowNode *this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r9d
  int v14; // eax
  void *v15; // rcx

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_DWORD *)(v10 + 80) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagRECT *, HRGN *))(*(_QWORD *)v11 + 264LL))(
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
  if ( (*((_BYTE *)this + 90) & 1) != 0 )
  {
    *((_DWORD *)this + 140) = 0;
    *((_DWORD *)this + 142) = 0;
    *((_DWORD *)this + 141) = 1;
    *((_BYTE *)this + 90) &= ~1u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1008));
  }
  if ( !*((_BYTE *)this + 995) && qword_18023E528 && CDisplaySet::NeedsDesktopMoves(qword_18023E528) && v5 )
  {
    if ( a2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      {
LABEL_17:
        v14 = (*(__int64 (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v5 + 216LL))(v5, this);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x213u);
        }
        else
        {
          *((_BYTE *)this + 994) = 1;
          if ( a2 )
            CDwmMetaRegion::AddMoveRectangle((CWindowNode *)((char *)this + 1008), a2, a4);
          v15 = (void *)*((_QWORD *)this + 125);
          if ( v15 )
            DeleteObject(v15);
          *((_QWORD *)this + 125) = 0LL;
        }
        return v4;
      }
      Template_xnn(
        v12,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
        *((_QWORD *)this + 72),
        v13,
        (__int64)a2);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xn(
        v12,
        (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_POINT,
        *((_QWORD *)this + 72),
        8,
        (__int64)a4);
    goto LABEL_17;
  }
  return v4;
}
