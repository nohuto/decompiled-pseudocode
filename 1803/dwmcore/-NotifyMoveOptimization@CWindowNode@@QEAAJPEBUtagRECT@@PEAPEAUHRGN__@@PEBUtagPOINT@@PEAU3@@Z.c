/*
 * XREFs of ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801A9BD8
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800C23B0 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x1801780A0 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 *     McTemplateU0xn @ 0x1801AA3C4 (McTemplateU0xn.c)
 *     McTemplateU0xnn @ 0x1801AA438 (McTemplateU0xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyMoveOptimization(
        CWindowNode *this,
        const struct tagRECT *a2,
        HRGN *a3,
        const struct tagPOINT *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // r8d
  int v17; // eax
  void *v18; // rcx

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
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
  if ( (*((_BYTE *)this + 93) & 0x10) != 0 )
  {
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 148) = 0;
    *((_DWORD *)this + 147) = 1;
    *((_BYTE *)this + 93) &= ~0x10u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 936));
  }
  if ( !*((_BYTE *)this + 924) )
  {
    if ( qword_1802D6428 )
    {
      v12 = 0LL;
      if ( *((_DWORD *)qword_1802D6428 + 18) )
      {
        v13 = *((_QWORD *)qword_1802D6428 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v13 + 8 * v12)) )
        {
          v12 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v12 >= v16 )
            return v4;
        }
        if ( v5 )
        {
          if ( a2 )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
            {
LABEL_21:
              v17 = (*(__int64 (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v5 + 224LL))(v5, this);
              v4 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1F5u);
              }
              else
              {
                *((_BYTE *)this + 923) = 1;
                if ( a2 )
                  CDwmMetaRegion::AddMoveRectangle((CWindowNode *)((char *)this + 936), a2, a4);
                v18 = (void *)*((_QWORD *)this + 116);
                if ( v18 )
                  DeleteObject(v18);
                *((_QWORD *)this + 116) = 0LL;
              }
              return v4;
            }
            McTemplateU0xnn(
              (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
              (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEBLTTRANSLATION_RECT,
              *((_QWORD *)this + 75),
              v13,
              (__int64)a2);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0xn(v15, v14, *((_QWORD *)this + 75), v13, (__int64)a4);
          goto LABEL_21;
        }
      }
    }
  }
  return v4;
}
