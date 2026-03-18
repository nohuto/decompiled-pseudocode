/*
 * XREFs of ULongLongAdd @ 0x1C010C39C
 * Callers:
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rax

  v3 = -1LL;
  if ( ullAugend + ullAddend >= ullAugend )
    v3 = ullAugend + ullAddend;
  *pullResult = v3;
  return ullAugend + ullAddend < ullAugend ? 0x80070216 : 0;
}
