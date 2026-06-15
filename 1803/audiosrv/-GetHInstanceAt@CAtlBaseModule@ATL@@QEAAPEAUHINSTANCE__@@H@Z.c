/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18010BBB0
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800A885C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18018AA88);
  v3 = 0LL;
  if ( (int)v2 <= dword_18018AAB8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_18018AAB8 )
    {
      v3 = qword_18018AA70;
    }
    else
    {
      if ( (int)v2 >= dword_18018AAB8 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18010BC24LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_18018AA88);
  return v3;
}
