/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180020698
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180010F00 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001189C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&CriticalSection);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_18003AED8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_18003AED8 )
    {
      v3 = qword_18003AE90;
    }
    else
    {
      if ( (int)v2 >= (int)qword_18003AED8 )
      {
        ATL::_AtlRaiseException();
        JUMPOUT(0x1800206FDLL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
