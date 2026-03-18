/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C01E3750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiCallDrvSetBrightness @ 0x1C01E3D78 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *Arg0, unsigned __int8 a2)
{
  __int64 v2; // rbx
  int v5; // edi
  bool v6; // zf
  _QWORD v8[10]; // [rsp+30h] [rbp-29h] BYREF

  v2 = Arg0[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4528) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)Arg0, 0);
    if ( v5 >= 0 )
    {
      v6 = *(_BYTE *)(v2 + 4272) == 0;
      *(_BYTE *)(v2 + 4280) = a2;
      if ( !v6 || *(_BYTE *)(v2 + 4273) )
      {
        v5 = 0;
      }
      else
      {
        v5 = DpiCallDrvSetBrightness(Arg0);
        if ( v5 >= 0 )
          *(_BYTE *)(v2 + 4192) = a2;
        if ( *(_BYTE *)(v2 + 4274) )
        {
          memset(v8, 0, 0x48uLL);
          memset(&v8[1], 0, 36);
          HIDWORD(v8[6]) = a2;
          v8[8] = *(_QWORD *)(v2 + 2536);
          v8[0] = 0x480000001ELL;
          LODWORD(v8[6]) = 67;
          v8[7] = (unsigned int)v5;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
        }
      }
      DpiReleaseCoreSyncAccessSafe((__int64)Arg0, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4288), 0);
  return (unsigned int)v5;
}
