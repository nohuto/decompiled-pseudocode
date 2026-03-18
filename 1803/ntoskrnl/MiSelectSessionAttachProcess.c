/*
 * XREFs of MiSelectSessionAttachProcess @ 0x1400E174C
 * Callers:
 *     MiGetNextSession @ 0x140074C24 (MiGetNextSession.c)
 *     MiAttachToOwningSession @ 0x1400C6954 (MiAttachToOwningSession.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140257C28 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 7872) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 104;
      if ( (*((_BYTE *)i + 633) & 1) == 0
        && (*((_DWORD *)v3 + 193) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1467) & 0x60) != 0x40
        && (unsigned __int8)ObReferenceObjectSafeWithTag(i - 104, 1953261124LL) )
      {
        return i - 104;
      }
    }
  }
  return 0LL;
}
