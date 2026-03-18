/*
 * XREFs of AlpcpReferenceReplyTargetPorts @ 0x1404DF134
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

__int64 __fastcall AlpcpReferenceReplyTargetPorts(__int64 Object, signed __int64 a2)
{
  _DWORD *v3; // rdi

  v3 = (_DWORD *)Object;
  if ( Object )
    v3 = (_DWORD *)(-(__int64)(ObReferenceObjectSafe(Object) != 0) & Object);
  if ( a2 )
    a2 &= -(__int64)(ObReferenceObjectSafe(a2) != 0);
  if ( v3 )
  {
    if ( a2 )
    {
      if ( (v3[104] & 0x20) == 0 && (*(_DWORD *)(a2 + 416) & 0x20) == 0 )
        return 0LL;
      ObfDereferenceObject(v3);
      goto LABEL_13;
    }
    ObfDereferenceObject(v3);
  }
  if ( a2 )
LABEL_13:
    ObfDereferenceObject((PVOID)a2);
  return 3221225527LL;
}
