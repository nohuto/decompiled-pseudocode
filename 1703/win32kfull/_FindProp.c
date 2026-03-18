/*
 * XREFs of _FindProp @ 0x1C0062530
 * Callers:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0062490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     EditionIsCompositionInputWindow @ 0x1C00EAEA0 (EditionIsCompositionInputWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int i; // edx

  v4 = *(_QWORD *)(a1 + 184);
  if ( v4 )
  {
    if ( a2 )
    {
      result = v4 + 8;
      for ( i = *(_DWORD *)(v4 + 4); i; --i )
      {
        if ( *(_WORD *)(result + 8) == a2 )
        {
          if ( a3 )
          {
            if ( (*(_BYTE *)(result + 10) & 1) != 0 )
              return result;
          }
          else if ( (*(_BYTE *)(result + 10) & 1) == 0 )
          {
            return result;
          }
        }
        result += 16LL;
      }
    }
  }
  return 0LL;
}
