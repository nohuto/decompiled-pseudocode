/*
 * XREFs of ValidateHandleSecure @ 0x1C0040F90
 * Callers:
 *     HMValidateHandle @ 0x1C004488C (HMValidateHandle.c)
 * Callees:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0040ED8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00718B8 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall ValidateHandleSecure(void *a1, __int64 a2, __int64 a3)
{
  char v4; // di
  char *v5; // rbx

  v4 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v5 = (char *)qword_1C0189E38 + (unsigned int)(unsigned __int16)a1 * dword_1C0189E40;
  if ( WORD1(a1) != *((_WORD *)v5 + 13) && WORD1(a1) != 0xFFFF && (WORD1(a1) || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( !v5[24] || (v4 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v5) || (v4 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v5, a2, a3);
  return 1LL;
}
