/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1800D1530
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x18008A4BC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18012C298);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_18012C2C8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_18012C2C8 )
    {
      v3 = qword_18012C280;
    }
    else
    {
      if ( (int)v2 >= (int)qword_18012C2C8 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800D15A5LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_18012C298);
  return v3;
}
