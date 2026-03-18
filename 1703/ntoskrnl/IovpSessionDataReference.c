/*
 * XREFs of IovpSessionDataReference @ 0x14077D140
 * Callers:
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 *     IovpCompleteRequest2 @ 0x14076DDF0 (IovpCompleteRequest2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovpSessionDataReference(_DWORD *a1)
{
  __int64 result; // rax

  if ( !a1[2] )
  {
    result = *(_QWORD *)a1;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)a1 + 20LL));
  }
  ++a1[2];
  return result;
}
