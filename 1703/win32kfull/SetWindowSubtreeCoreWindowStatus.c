/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C0018D90
 * Callers:
 *     NtUserSetCoreWindow @ 0x1C0017E50 (NtUserSetCoreWindow.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 */

__int64 __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // ebp

  result = a2 != 0;
  if ( (*(_DWORD *)(a1 + 304) & 0x4000000u) >> 26 != (_DWORD)result && ((*(_DWORD *)(a1 + 304) & 0x2000000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, a1, 64260LL, 1LL);
    v5 = *(_QWORD *)(a1 + 112);
LABEL_6:
    while ( v5 && v5 != a1 )
    {
      if ( (*(_DWORD *)(v5 + 304) & 0x2000000) == 0 || a2 )
      {
        v6 = 0;
        SetOrClrWF(a2, v5, 64260LL, 1LL);
      }
      else
      {
        v6 = 1;
      }
      result = *(_QWORD *)(v5 + 112);
      if ( !result || v6 )
      {
        result = *(_QWORD *)(v5 + 88);
        if ( !result )
        {
          while ( 1 )
          {
            v5 = *(_QWORD *)(v5 + 104);
            if ( !v5 )
              return result;
            if ( *(_QWORD *)(v5 + 88) )
            {
              v5 = *(_QWORD *)(v5 + 88);
              goto LABEL_6;
            }
            if ( v5 == a1 )
              goto LABEL_6;
          }
        }
      }
      v5 = result;
    }
  }
  return result;
}
