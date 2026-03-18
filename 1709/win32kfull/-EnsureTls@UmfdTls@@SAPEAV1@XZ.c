/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00B84AC
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00B83AC (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00FE314 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0133A00 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C011F2BC (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *__fastcall UmfdTls::EnsureTls(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v5; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v5 = result;
  if ( result )
  {
    if ( !*((_QWORD *)result + 43) )
      *((_QWORD *)result + 43) = UmfdTls::Create();
    return (struct UmfdTls *)*((_QWORD *)v5 + 43);
  }
  return result;
}
