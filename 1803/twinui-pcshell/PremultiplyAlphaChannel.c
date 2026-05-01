/*
 * XREFs of PremultiplyAlphaChannel @ 0x180101830
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x18026E5A0 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x18010187C (_GetProcFromComCtl32.c)
 */

__int64 (__fastcall *__fastcall PremultiplyAlphaChannel(__int64 a1))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, _QWORD))qword_180437570;
  if ( qword_180437570 == -1 )
  {
    GetProcFromComCtl32(&qword_180437570, 392LL);
    result = (__int64 (__fastcall *)(__int64, _QWORD))qword_180437570;
  }
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, 0LL);
  return result;
}
