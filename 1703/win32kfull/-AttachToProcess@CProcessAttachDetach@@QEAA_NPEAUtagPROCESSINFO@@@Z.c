/*
 * XREFs of ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C013E308
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C004E638 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00DD088 (xxxSetWindowLong.c)
 *     xxxSetWindowWord @ 0x1C01376A4 (xxxSetWindowWord.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessAttachDetach::AttachToProcess(CProcessAttachDetach *this, struct tagPROCESSINFO *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  bool result; // al

  v2 = *((_QWORD *)a2 + 103);
  v5 = *(_QWORD *)(PsGetCurrentProcessWin32Process(this, a2) + 824);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v5 <= (unsigned int)v2 )
    {
      if ( (_DWORD)v5 != (_DWORD)v2
        || (v8 = HIDWORD(v5), (_DWORD)v8 != HIDWORD(v2)) && (v7 = 0xFFFFFFFFLL, (_DWORD)v8 != -1) && HIDWORD(v2) != -1 )
      {
        if ( *(int *)(PsGetCurrentProcessWin32Process(v7, v6) + 12) >= 0 )
          return 0;
      }
    }
  }
  KeAttachProcess(*(PRKPROCESS *)a2);
  result = 1;
  *(_BYTE *)this = 1;
  return result;
}
