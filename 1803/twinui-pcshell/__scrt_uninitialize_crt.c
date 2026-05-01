/*
 * XREFs of __scrt_uninitialize_crt @ 0x180098A20
 * Callers:
 *     dllmain_crt_process_detach @ 0x180097F7C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_SupportsBack@UAPViewWrapper@@EEAA_NXZ @ 0x180096310 (-v_SupportsBack@UAPViewWrapper@@EEAA_NXZ.c)
 */

char __fastcall _scrt_uninitialize_crt(UAPViewWrapper *a1, char a2)
{
  char v2; // bl
  UAPViewWrapper *v3; // rcx

  v2 = (char)a1;
  if ( !byte_180437BC8 || !a2 )
  {
    UAPViewWrapper::v_SupportsBack(a1);
    LOBYTE(v3) = v2;
    UAPViewWrapper::v_SupportsBack(v3);
  }
  return 1;
}
