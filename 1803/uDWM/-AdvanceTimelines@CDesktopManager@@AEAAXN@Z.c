/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180024E10
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003C5B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180013B24 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x180013CF0 (--_E-$CTimeline@M@@UEAAPEAXI@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180048B64 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

void __fastcall CDesktopManager::AdvanceTimelines(CDesktopManager *this, double a2)
{
  __int64 v2; // rdx
  double v4; // xmm6_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _SINGLE_LIST_ENTRY *j; // rbx
  struct _SINGLE_LIST_ENTRY *v8; // rdi
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  struct _SINGLE_LIST_ENTRY *v12; // rcx
  struct _SINGLE_LIST_ENTRY *v13; // xmm0_8
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v15; // rbx
  char v16; // bp
  CTimelineBase *v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  _QWORD *(__fastcall *v22)(CTimelineBase *, char); // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationRecalc_Start);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    Next = CDesktopManager::s_listTimeline.Next;
    v15 = &CDesktopManager::s_listTimeline;
    v16 = 1;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        v17 = (CTimelineBase *)&Next[-2];
        if ( LODWORD(Next[-1].Next) )
        {
          if ( v16 )
          {
            if ( *((_BYTE *)v17 + 73) )
            {
              v18 = CTimelineBase::UpdateBeforeTickWorker(v17, (CDesktopManager *)((char *)this + 288));
              Next = v15->Next;
            }
            else
            {
              v18 = 0;
            }
            if ( v18 < 0 )
              v16 = 0;
          }
          v15 = Next;
        }
        else
        {
          if ( Next )
            v15->Next = Next->Next;
          v22 = **(_QWORD *(__fastcall ***)(CTimelineBase *, char))v17;
          if ( (char *)v22 == (char *)CTimeline<float>::`vector deleting destructor' )
            CTimeline<float>::`vector deleting destructor'(v17, 1);
          else
            v22(v17, 1);
        }
        Next = v15->Next;
      }
      while ( v15->Next );
    }
    v19 = *((_QWORD *)this + 38);
    if ( v19 && v16 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 88LL))(v19, v2, 0LL) < 0 )
      v16 = 0;
    v20 = *((_QWORD *)this + 38);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *((_QWORD *)this + 38) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v16 )
          CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
        BYTE1(i[7].Next) = 0;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7)
                                                          + 64LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         2LL)
    && (GetKeyState(16) & 0xFF80) != 0 )
  {
    v4 = a2 / 20.0;
  }
  v6 = *((_QWORD *)this + 36);
  *((double *)this + 35) = v4 + *((double *)this + 35);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, v5, 0LL);
  for ( j = CDesktopManager::s_listTimeline.Next; j; j = j->Next )
  {
    v8 = j - 2;
    if ( !LOBYTE(j[7].Next) )
    {
      v9 = v8[8].Next;
      v23 = 0LL;
      if ( v9 && ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *))v9->Next[9].Next)(v9, &v23) >= 0 )
      {
        v10 = v23;
        v11 = v23 == 0;
        LOBYTE(v8[9].Next) = v23 == 0;
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v11 = (char)v8[9].Next;
          v23 = 0LL;
        }
      }
      else
      {
        LOBYTE(v8[9].Next) = 1;
        v11 = 1;
      }
      v12 = v8[8].Next;
      if ( v11 )
      {
        if ( v12 )
        {
          ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *))v12->Next[2].Next)(v12);
          v8[8].Next = 0LL;
        }
        if ( *(double *)&v8[3].Next < 0.0 )
          v13 = v8[4].Next;
        else
          v13 = v8[5].Next;
        v8[6].Next = v13;
        LOBYTE(v8[9].Next) = 1;
      }
      else
      {
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v12->Next[3].Next)(v12, v8 + 6);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationRecalc_Stop);
}
