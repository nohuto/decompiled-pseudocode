/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0201370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DpiCallDrvSetBrightness @ 0x1C0201E5C (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *Arg0, unsigned __int8 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  int v7; // edi
  bool v8; // zf
  _QWORD v9[10]; // [rsp+30h] [rbp-29h] BYREF

  v2 = Arg0[8];
  v3 = 0LL;
  if ( *(_WORD *)(v2 + 4562) == 2 )
    v3 = v2 + 4560;
  if ( !v3 )
    return 3221225659LL;
  v7 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v3 + 40) )
  {
    v7 = DpiAcquireCoreSyncAccessSafe((__int64)Arg0, 0);
    if ( v7 >= 0 )
    {
      v8 = *(_BYTE *)(v2 + 4272) == 0;
      *(_BYTE *)(v2 + 4280) = a2;
      if ( !v8 || *(_BYTE *)(v2 + 4273) )
      {
        v7 = 0;
      }
      else
      {
        v7 = DpiCallDrvSetBrightness(Arg0);
        if ( v7 >= 0 )
          *(_BYTE *)(v2 + 4192) = a2;
        if ( *(_BYTE *)(v2 + 4274) )
        {
          memset(v9, 0, 0x48uLL);
          memset(&v9[1], 0, 36);
          HIDWORD(v9[6]) = a2;
          v9[8] = *(_QWORD *)(v2 + 2536);
          v9[0] = 0x480000001ELL;
          LODWORD(v9[6]) = 67;
          v9[7] = (unsigned int)v7;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
        }
      }
      DpiReleaseCoreSyncAccessSafe((__int64)Arg0, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4288), 0);
  return (unsigned int)v7;
}
