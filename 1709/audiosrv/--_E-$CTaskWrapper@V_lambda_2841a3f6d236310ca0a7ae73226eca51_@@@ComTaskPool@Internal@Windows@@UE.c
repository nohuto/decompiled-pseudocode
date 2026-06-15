/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_2841a3f6d236310ca0a7ae73226eca51_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180005F40
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2841a3f6d236310ca0a7ae73226eca51_>::`vector deleting destructor'(
        _DWORD *lpMem,
        char a2)
{
  HANDLE ProcessHeap; // rax

  lpMem[3] = -1073741823;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
