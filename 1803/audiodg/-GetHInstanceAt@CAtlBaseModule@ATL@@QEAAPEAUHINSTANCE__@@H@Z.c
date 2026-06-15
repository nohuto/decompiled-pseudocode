/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140044D00
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400373CC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_1400880D8);
  v3 = 0LL;
  if ( (int)v2 <= dword_140088108 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_140088108 )
    {
      v3 = qword_1400880C0;
    }
    else
    {
      if ( (int)v2 >= dword_140088108 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x140044D74LL);
      }
      v3 = *((_QWORD *)qword_140088100 + v2);
    }
  }
  LeaveCriticalSection(&stru_1400880D8);
  return v3;
}
