/*
 * XREFs of ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180017240
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003DF00 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x180030F70 (--_E-$CTimeline@M@@UEAAPEAXI@Z.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180031064 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180044F84 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
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
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  struct _SINGLE_LIST_ENTRY *v12; // xmm0_8
  struct _SINGLE_LIST_ENTRY *v13; // rbx
  char v14; // bp
  struct _SINGLE_LIST_ENTRY *Next; // rax
  __int64 (__fastcall ***v16)(void *); // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  __int64 (__fastcall *v20)(void *); // rax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationRecalc_Start);
  if ( CDesktopManager::s_fTimelineDirty )
  {
    v13 = &CDesktopManager::s_listTimeline;
    v14 = 1;
    CDesktopManager::s_fTimelineDirty = 0;
    if ( CDesktopManager::s_listTimeline.Next )
    {
      do
      {
        Next = v13->Next;
        if ( v13->Next )
          v16 = (__int64 (__fastcall ***)(void *))&Next[-2];
        else
          v16 = 0LL;
        if ( *((_DWORD *)v16 + 2) )
        {
          if ( v14
            && *((_BYTE *)v16 + 73)
            && (int)CTimelineBase::UpdateBeforeTickWorker((CTimelineBase *)v16, (CDesktopManager *)((char *)this + 288)) < 0 )
          {
            v14 = 0;
          }
          v13 = v13->Next;
        }
        else
        {
          if ( Next )
            v13->Next = Next->Next;
          v20 = **v16;
          if ( v20 == CTimeline<float>::`vector deleting destructor' )
            CTimeline<float>::`vector deleting destructor'(v16);
          else
            ((void (__fastcall *)(__int64 (__fastcall ***)(void *), __int64))v20)(v16, 1LL);
        }
      }
      while ( v13->Next );
    }
    v17 = *((_QWORD *)this + 38);
    if ( v17 && v14 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 88LL))(v17, v2, 0LL) < 0 )
      v14 = 0;
    v18 = *((_QWORD *)this + 38);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      *((_QWORD *)this + 38) = 0LL;
    }
    for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
    {
      if ( BYTE1(i[7].Next) )
      {
        if ( !v14 )
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
      v21 = 0LL;
      if ( v9 && ((int (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *))v9->Next[9].Next)(v9, &v21) >= 0 )
      {
        v10 = v21;
        LOBYTE(v8[9].Next) = v21 == 0;
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v21 = 0LL;
        }
      }
      else
      {
        LOBYTE(v8[9].Next) = 1;
      }
      v11 = v8[8].Next;
      if ( LOBYTE(v8[9].Next) )
      {
        if ( v11 )
        {
          ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *))v11->Next[2].Next)(v11);
          v8[8].Next = 0LL;
        }
        if ( *(double *)&v8[3].Next < 0.0 )
          v12 = v8[4].Next;
        else
          v12 = v8[5].Next;
        v8[6].Next = v12;
        LOBYTE(v8[9].Next) = 1;
      }
      else
      {
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v11->Next[3].Next)(v11, v8 + 6);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimationRecalc_Stop);
}
