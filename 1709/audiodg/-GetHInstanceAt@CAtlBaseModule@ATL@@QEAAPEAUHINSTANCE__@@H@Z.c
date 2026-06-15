/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140046A90
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400387EC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_14008A0C8);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_14008A0F8 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_14008A0F8 )
    {
      v3 = qword_14008A0B0;
    }
    else
    {
      if ( (int)v2 >= (int)qword_14008A0F8 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x140046B05LL);
      }
      v3 = *((_QWORD *)qword_14008A0F0 + v2);
    }
  }
  LeaveCriticalSection(&stru_14008A0C8);
  return v3;
}
