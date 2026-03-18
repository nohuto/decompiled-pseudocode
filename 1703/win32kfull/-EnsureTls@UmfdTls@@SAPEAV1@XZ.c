/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C009BE0C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C009BD74 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D5ABC (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0114238 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0130250 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C0115580 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *UmfdTls::EnsureTls(void)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v1; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = result;
  if ( result )
  {
    if ( !*((_QWORD *)result + 43) )
      *((_QWORD *)result + 43) = UmfdTls::Create();
    return (struct UmfdTls *)*((_QWORD *)v1 + 43);
  }
  return result;
}
