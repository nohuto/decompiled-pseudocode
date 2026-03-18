/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C004C00C
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025073C (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C004C554 (DwmSyncCaptureSurfaceBits.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C008D104 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        int a2,
        __int64 a3,
        struct XDCOBJ *a4,
        HSURF a5,
        float a6,
        int a7,
        int a8,
        struct ERECTL *a9,
        struct REGION *a10)
{
  HANDLE v13; // r13
  PVOID v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rbx
  int v21; // eax
  int v22; // esi
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 CurrentProcess; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  HSURF v30; // rdi
  struct _SURFOBJ *v31; // rdx
  _BYTE *v32; // r14
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v34; // rdx
  __int64 v35; // rax
  DYNAMICMODECHANGESHARELOCK *v36; // rcx
  int v38; // [rsp+38h] [rbp-C8h]
  _BYTE v39[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v44; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  char v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A4h] [rbp-5Ch]
  PVOID v48; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  HSURF v50; // [rsp+B8h] [rbp-48h] BYREF
  struct ERECTL *v51; // [rsp+C0h] [rbp-40h]
  _QWORD v52[5]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v53[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  _BYTE v56[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v57[52]; // [rsp+144h] [rbp+44h] BYREF
  __int64 v58; // [rsp+178h] [rbp+78h]
  __int64 v59; // [rsp+190h] [rbp+90h]
  int v60; // [rsp+198h] [rbp+98h]
  int v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1D0h] [rbp+D0h]

  LODWORD(v43[0]) = a2;
  v13 = 0LL;
  Object = a1;
  v50 = a5;
  v51 = a9;
  Handle = 0LL;
  v14 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  memset(v52, 0, 0x20uLL);
  HIDWORD(v52[0]) = *((_DWORD *)a9 + 2) - *(_DWORD *)a9;
  LODWORD(v52[1]) = *((_DWORD *)a9 + 3) - *((_DWORD *)a9 + 1);
  v52[2] = 0LL;
  LODWORD(v52[3]) = 1;
  UserEnterUserCritSecShared();
  v15 = UserReferenceDwmProcess();
  v20 = (void *)UserReferenceDwmApiPort(v17, v16, v18, v19);
  UserLeaveUserCritSec();
  LODWORD(v40) = 88;
  if ( v15 && v20 )
  {
    v21 = DwmSyncCaptureSurfaceBits(v20, a7, a8, SHIDWORD(v52[0]), v52[1], a3, (__int64)&v40, (__int64)&Handle);
    v13 = Handle;
    v22 = v21;
  }
  else
  {
    v22 = -1073741823;
    UserDereferenceDwmApiPort(v20);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v39);
  v54 = 0LL;
  v55 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v53, a4, 0);
  if ( (v53[24] & 1) == 0 )
    v22 = -1073741823;
  if ( v22 >= 0 )
  {
    LOBYTE(v38) = 0;
    v22 = ObDuplicateObject(v15, v13, 0LL, &Handle, 4, 512, 1, v38);
    if ( v22 >= 0 )
    {
      v23 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v14 = Object;
      v22 = v23;
      v48 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v15);
  if ( v22 >= 0 )
  {
    v43[0] = 0LL;
    v40 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v25, v24);
    v22 = MmMapViewOfSection(v14, CurrentProcess, &v44, 0LL, 0LL, &v40, v43, 2, 0, 2);
    if ( v22 >= 0 )
    {
      LODWORD(v52[0]) = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v45, (struct _DEVBITMAPINFO *)v52, v44, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v22 = -1073741823;
      if ( v22 >= 0 )
      {
        v41 = 0;
        v40 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v40, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v27 = v45;
          v41 = 1;
          v43[0] = *(_QWORD *)(v45 + 128);
          if ( v43[0] )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)v43);
            v27 = v45;
          }
          *(_QWORD *)(v27 + 128) = v40;
          if ( v40 )
            INC_SHARE_REF_CNT(v40);
        }
        else
        {
          v22 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v40);
        if ( v22 >= 0 )
        {
          LOBYTE(v24) = 5;
          v28 = HmgShareLockCheck(v50, v24);
          v29 = v28;
          if ( v28 )
          {
            if ( *(_DWORD *)(v28 + 96) == 6 )
            {
              v30 = *(HSURF *)(*(_QWORD *)a4 + 48LL);
              v50 = v30;
              if ( v45 )
                v31 = (struct _SURFOBJ *)(v45 + 24);
              else
                v31 = 0LL;
              v40 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v40, v31);
              v43[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v43, (struct _SURFOBJ *)(v29 + 24));
              if ( v40 && v43[0] && **(_QWORD **)(*(_QWORD *)a4 + 512LL) == *(_QWORD *)v29 )
              {
                v59 = 0LL;
                v32 = 0LL;
                v60 = 0;
                v61 = 1;
                v62 = 0LL;
                v58 = 0LL;
                if ( a10 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v56, a10, v51, 0);
                  v32 = v56;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v50) )
                {
                  v33 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 512LL) + 112LL) & 0x400) != 0 )
                {
                  v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v30 + 357);
                }
                else
                {
                  v33 = EngCopyBits;
                }
                if ( !v32 || !ERECTL::bEmpty((ERECTL *)v57) )
                {
                  if ( v45 )
                    v34 = v45 + 24;
                  else
                    v34 = 0LL;
                  ((void (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v33)(
                    v29 + 24,
                    v34,
                    v32,
                    0LL,
                    v51,
                    &gptlZero);
                }
                v14 = v48;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v40);
            }
            DEC_SHARE_REF_CNT(v29);
          }
        }
      }
    }
  }
  if ( a10 )
    REGION::vDeleteREGION(a10);
  if ( v44 )
  {
    v35 = PsGetCurrentProcess(v25, v24);
    MmUnmapViewOfSection(v35, v44);
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v53);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v36);
  SURFMEM::~SURFMEM((SURFMEM *)&v45);
  return v22 >= 0;
}
