/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140045B20
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x140039074 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_1400860C8);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_1400860F8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_1400860F8 )
    {
      v3 = qword_1400860B0;
    }
    else
    {
      if ( (int)v2 >= (int)qword_1400860F8 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x140045B95LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_1400860C8);
  return v3;
}
