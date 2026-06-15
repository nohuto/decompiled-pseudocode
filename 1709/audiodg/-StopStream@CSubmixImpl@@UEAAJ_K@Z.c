/*
 * XREFs of ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011230
 * Callers:
 *     ?StopStream@CProcessSubmix@@UEAAJ_K@Z @ 0x140001A30 (-StopStream@CProcessSubmix@@UEAAJ_K@Z.c)
 *     ?StopStream@CStreamGroup@@UEAAJ_K@Z @ 0x140035C00 (-StopStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140010490 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::StopStream(CSubmixImpl *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *Next; // rax
  int updated; // eax
  unsigned int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v12);
      v4 = *Next;
      if ( *(_QWORD *)(*Next + 8) == a2 )
        break;
      if ( !v12 )
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
    *(_BYTE *)(v4 + 16) = 0;
    updated = CSubmixImpl::UpdateActiveStreamCount(this, -1);
    v7 = updated;
    if ( updated < 0 )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2C5,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)updated,
        (int)lpCriticalSection);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BF,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      (int)lpCriticalSection);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
