/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1C0109784
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00CD430 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     SetImeHotKey @ 0x1C01095CC (SetImeHotKey.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C0109704 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 > 0x7F )
    return 0;
  else
    return (unsigned __int16)word_1C02E30B0[(unsigned __int64)a1 >> 4];
}
