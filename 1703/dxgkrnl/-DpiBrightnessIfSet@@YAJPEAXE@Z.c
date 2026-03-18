/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C01C9600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiCallDrvSetBrightness @ 0x1C01C9C28 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  int v5; // edi
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[10]; // [rsp+30h] [rbp-29h] BYREF

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4192), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4432) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      v7 = *(_BYTE *)(v2 + 4176) == 0;
      *(_BYTE *)(v2 + 4184) = a2;
      if ( !v7 || *(_BYTE *)(v2 + 4177) )
      {
        v5 = 0;
      }
      else
      {
        LOBYTE(v6) = a2;
        v5 = DpiCallDrvSetBrightness(a1, v2 + 4392, v6);
        if ( v5 >= 0 )
          *(_BYTE *)(v2 + 4096) = a2;
        if ( *(_BYTE *)(v2 + 4178) )
        {
          memset(v12, 0, 0x48uLL);
          memset(&v12[1], 0, 36);
          HIDWORD(v12[6]) = a2;
          v12[8] = *(_QWORD *)(v2 + 2536);
          v12[0] = 0x480000001ELL;
          LODWORD(v12[6]) = 67;
          v12[7] = (unsigned int)v5;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, v8, v9, v10);
        }
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4192), 0);
  return (unsigned int)v5;
}
