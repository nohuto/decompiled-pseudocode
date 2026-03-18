/*
 * XREFs of ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C01444B8
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C00A3D38 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00EF5D8 (xxxSetWindowLong.c)
 *     xxxSetWindowWord @ 0x1C013E384 (xxxSetWindowWord.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessAttachDetach::AttachToProcess(CProcessAttachDetach *this, struct tagPROCESSINFO *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  bool result; // al

  v2 = *((_QWORD *)a2 + 104);
  v5 = *(_QWORD *)(PsGetCurrentProcessWin32Process(this) + 832);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v5 <= (unsigned int)v2 )
    {
      if ( (_DWORD)v5 != (_DWORD)v2
        || (v7 = HIDWORD(v5), (_DWORD)v7 != HIDWORD(v2)) && (v6 = 0xFFFFFFFFLL, (_DWORD)v7 != -1) && HIDWORD(v2) != -1 )
      {
        if ( *(int *)(PsGetCurrentProcessWin32Process(v6) + 12) >= 0 )
          return 0;
      }
    }
  }
  KeAttachProcess(*(PRKPROCESS *)a2);
  result = 1;
  *(_BYTE *)this = 1;
  return result;
}
