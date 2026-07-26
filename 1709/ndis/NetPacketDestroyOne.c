/*
 * XREFs of NetPacketDestroyOne @ 0x1C00FC000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall NetPacketDestroyOne(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  void (__fastcall *v5)(_QWORD, __int64); // rax

  if ( (dword_1C0098810 & 2) != 0 )
  {
    for ( i = P; i; i = (_QWORD *)i[3] )
    {
      v5 = (void (__fastcall *)(_QWORD, __int64))i[6];
      if ( v5 )
        v5(i[4], a2 + *((unsigned int *)i + 4));
    }
  }
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 1uLL);
}
