/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1800DE0A0
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180070428 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&CriticalSection);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_18014C608 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_18014C608 )
    {
      v3 = qword_18014C5C0;
    }
    else
    {
      if ( (int)v2 >= (int)qword_18014C608 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800DE115LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
