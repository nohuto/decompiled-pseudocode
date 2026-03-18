/*
 * XREFs of ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0081D38
 * Callers:
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C0082080 (CreateFontFromUserProfile.c)
 * Callees:
 *     ValidateExternalLogFont @ 0x1C00812F0 (ValidateExternalLogFont.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct tagLOGFONTW *__fastcall GetLogFontFromUserProfile(
        struct tagLOGFONTW *__return_ptr retstr,
        struct _UNICODE_STRING *a2,
        unsigned int a3)
{
  LONG v6; // ebx
  LONG v7; // eax
  int v9; // ecx

  memset(retstr, 0, sizeof(struct tagLOGFONTW));
  retstr->lfCharSet = gSystemCPCharSet;
  FastGetProfileValue(a2, 23LL, a3, 0LL, retstr, 92, 0);
  if ( !retstr->lfFaceName[0] )
  {
    *(_OWORD *)retstr->lfFaceName = xmmword_1C02E2578;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
  }
  if ( !retstr->lfHeight )
    retstr->lfHeight = 8;
  if ( retstr->lfHeight > 0 )
    retstr->lfHeight = (retstr->lfHeight * *(unsigned __int16 *)(gpsi + 9974LL) + 36) / -72;
  v6 = 400;
  if ( !retstr->lfWeight )
  {
    v7 = 400;
    if ( a3 == 139 )
      v7 = 700;
    retstr->lfWeight = v7;
  }
  *(_WORD *)&retstr->lfOutPrecision = 0;
  retstr->lfQuality = 0;
  if ( !ValidateExternalLogFont((__int64)retstr) )
  {
    memset(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = gSystemCPCharSet;
    *(_OWORD *)retstr->lfFaceName = xmmword_1C02E2578;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
    retstr->lfHeight = 8;
    v9 = *(unsigned __int16 *)(gpsi + 9974LL);
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
    retstr->lfHeight = (8 * v9 + 36) / -72;
    if ( a3 == 139 )
      v6 = 700;
    retstr->lfWeight = v6;
  }
  return retstr;
}
