/*
 * XREFs of KiOpPreprocessAccessViolation @ 0x140131CBC
 * Callers:
 *     KiPreprocessFault @ 0x1401311D8 (KiPreprocessFault.c)
 * Callees:
 *     <none>
 */

char __fastcall KiOpPreprocessAccessViolation(__int64 a1, __int64 a2)
{
  int v2; // r9d
  void *v4; // rax
  void *v5; // r8
  char result; // al
  struct _KTHREAD *CurrentThread; // rcx
  void *v8; // rax
  unsigned __int16 SListFaultCount; // ax
  unsigned __int16 v10; // ax

  v2 = *(unsigned __int16 *)(a2 + 56);
  if ( v2 == 16 )
  {
    v4 = &ExpInterlockedPopEntrySListFault;
    v5 = &ExpInterlockedPopEntrySListResume;
  }
  else
  {
    if ( *(_WORD *)(a2 + 56) != 51 )
      return 0;
    v4 = (void *)KeUserPopEntrySListFault;
    v5 = (void *)KeUserPopEntrySListResume;
  }
  if ( *(void **)(a2 + 248) != v4 )
    return 0;
  if ( (_WORD)v2 != 16 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(void **)(a1 + 40);
    if ( v8 == CurrentThread->SListFaultAddress )
    {
      SListFaultCount = CurrentThread->SListFaultCount;
      if ( SListFaultCount > 0x400u )
      {
        result = 0;
        CurrentThread->SListFaultCount = 0;
        return result;
      }
      v10 = SListFaultCount + 1;
    }
    else
    {
      CurrentThread->SListFaultAddress = v8;
      v10 = 0;
    }
    CurrentThread->SListFaultCount = v10;
  }
  result = 1;
  *(_QWORD *)(a2 + 248) = v5;
  return result;
}
