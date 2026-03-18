/*
 * XREFs of NtGdiOpenDCW @ 0x1C00221E0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     FreeTmpBuffer @ 0x1C00223F0 (FreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C0026B64 (UserGetDesktopDC.c)
 *     AllocFreeTmpBuffer @ 0x1C003EB80 (AllocFreeTmpBuffer.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     CaptureDriverInfo2W @ 0x1C007C9C0 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C008CFC0 (CaptureDEVMODEW.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  char *v12; // r12
  void *v13; // rsi
  int v14; // ebx
  int v15; // eax
  struct _devicemodeW *v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]

  v10 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0LL, 1LL);
  v11 = *a1;
  v12 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v13 = (void *)AllocFreeTmpBuffer((unsigned int)(v11 + 2));
    if ( v13 )
    {
      if ( &v12[v11] < v12 || &v12[v11] > (char *)W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v13, v12, (unsigned int)v11);
      *((_WORD *)v13 + (v11 >> 1)) = 0;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( !a2 || (v17 = (struct _devicemodeW *)CaptureDEVMODEW(a2)) != 0LL )
  {
    v14 = 1;
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v14 = 1;
  }
  if ( !v15 || a8 && (v18 = CaptureDriverInfo2W()) == 0 )
    v14 = 0;
  if ( v14 )
    v10 = hdcOpenDCW((PCWSTR)v13, v17, a7, 0LL, v18, a9, a6);
  if ( v13 )
    FreeTmpBuffer(v13);
  if ( v17 )
  {
    PopThreadGuardedObject(&v17[-1].dmICMMethod);
    Win32FreePool(&v17[-1].dmICMMethod);
  }
  if ( v18 )
  {
    PopThreadGuardedObject((_QWORD *)(v18 - 32));
    Win32FreePool(v18 - 32);
  }
  return v10;
}
