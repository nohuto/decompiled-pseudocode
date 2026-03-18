/*
 * XREFs of MiSelectSessionAttachProcess @ 0x140089D00
 * Callers:
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x1400B15E4 (MiGetNextSession.c)
 *     MiAttachToOwningSession @ 0x1400B4828 (MiAttachToOwningSession.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x14021BA84 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
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
      if ( (*((_BYTE *)i + 641) & 1) == 0
        && (*((_DWORD *)v3 + 193) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1475) & 0x60) != 0x40
        && ObReferenceObjectSafeWithTag((__int64)(i - 104)) )
      {
        return i - 104;
      }
    }
  }
  return 0LL;
}
