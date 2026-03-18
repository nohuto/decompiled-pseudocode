/*
 * XREFs of RawInputManagerObjectOpen @ 0x1C008854C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C00884DC (RIMObjectManagerCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectOpen(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rsi
  int ProcessSessionId; // eax

  v1 = 0;
  v2 = *(_DWORD **)(a1 + 16);
  if ( (unsigned __int16)*(_DWORD *)(a1 + 24) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 8)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 8));
      if ( ProcessSessionId == -1 || ProcessSessionId != *v2 )
        return (unsigned int)-1073741790;
    }
  }
  return v1;
}
