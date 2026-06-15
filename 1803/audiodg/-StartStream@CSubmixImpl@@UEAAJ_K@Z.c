/*
 * XREFs of ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140005770
 * Callers:
 *     ?StartStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140002680 (-StartStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140034810 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140004940 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::StartStream(CSubmixImpl *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *Next; // rax
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v14 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v14);
      v4 = *Next;
      if ( *(_QWORD *)(*Next + 8) == a2 )
        break;
      if ( !v14 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v4 = 0LL;
  }
  if ( v4 )
  {
    *(_BYTE *)(v4 + 16) = 1;
    updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
    v7 = updated;
    if ( updated >= 0 )
    {
      v7 = 0;
      goto LABEL_6;
    }
    v10 = (unsigned int)updated;
    v9 = 685LL;
  }
  else
  {
    v7 = -2005139430;
    v9 = 679LL;
    v10 = 2289827866LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v10,
    (int)lpCriticalSection);
LABEL_6:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
