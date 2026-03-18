/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00E8F78
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C024ECC8 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002869C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00E94C0 (DwmSyncCaptureSurfaceBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
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
  __int64 v24; // rcx
  __int64 CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbx
  HSURF v31; // rdi
  struct _SURFOBJ *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  _BYTE *v36; // r14
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v38; // rdx
  __int64 v39; // rax
  DYNAMICMODECHANGESHARELOCK *v40; // rcx
  int v42; // [rsp+38h] [rbp-C8h]
  _BYTE v43[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v47[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h] BYREF
  char v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A4h] [rbp-5Ch]
  PVOID v52; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  HSURF v54; // [rsp+B8h] [rbp-48h] BYREF
  struct ERECTL *v55; // [rsp+C0h] [rbp-40h]
  _QWORD v56[5]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v57[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  _BYTE v60[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v61[52]; // [rsp+144h] [rbp+44h] BYREF
  __int64 v62; // [rsp+178h] [rbp+78h]
  __int64 v63; // [rsp+190h] [rbp+90h]
  int v64; // [rsp+198h] [rbp+98h]
  int v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+D0h]

  LODWORD(v47[0]) = a2;
  v13 = 0LL;
  Object = a1;
  v54 = a5;
  v55 = a9;
  Handle = 0LL;
  v14 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  memset(v56, 0, 0x20uLL);
  HIDWORD(v56[0]) = *((_DWORD *)a9 + 2) - *(_DWORD *)a9;
  LODWORD(v56[1]) = *((_DWORD *)a9 + 3) - *((_DWORD *)a9 + 1);
  v56[2] = 0LL;
  LODWORD(v56[3]) = 1;
  UserEnterUserCritSecShared();
  v15 = UserReferenceDwmProcess();
  v20 = (void *)UserReferenceDwmApiPort(v17, v16, v18, v19);
  UserLeaveUserCritSec();
  LODWORD(v44) = 88;
  if ( v15 && v20 )
  {
    v21 = DwmSyncCaptureSurfaceBits(v20, a7, a8, SHIDWORD(v56[0]), v56[1], a3, (__int64)&v44, (__int64)&Handle);
    v13 = Handle;
    v22 = v21;
  }
  else
  {
    v22 = -1073741823;
    UserDereferenceDwmApiPort(v20);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v43);
  v58 = 0LL;
  v59 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, a4, 0);
  if ( (v57[24] & 1) == 0 )
    v22 = -1073741823;
  if ( v22 >= 0 )
  {
    LOBYTE(v42) = 0;
    v22 = ObDuplicateObject(v15, v13, 0LL, &Handle, 4, 512, 1, v42);
    if ( v22 >= 0 )
    {
      v23 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v14 = Object;
      v22 = v23;
      v52 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v15);
  if ( v22 >= 0 )
  {
    v47[0] = 0LL;
    v44 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v24);
    v22 = MmMapViewOfSection(v14, CurrentProcess, &v48, 0LL, 0LL, &v44, v47, 2, 0, 2);
    if ( v22 >= 0 )
    {
      LODWORD(v56[0]) = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v49, (struct _DEVBITMAPINFO *)v56, v48, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v22 = -1073741823;
      if ( v22 >= 0 )
      {
        v45 = 0;
        v44 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v44, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v27 = v49;
          v45 = 1;
          v47[0] = *(_QWORD *)(v49 + 128);
          if ( v47[0] )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)v47);
            v27 = v49;
          }
          *(_QWORD *)(v27 + 128) = v44;
          if ( v44 )
            INC_SHARE_REF_CNT(v44, v26);
        }
        else
        {
          v22 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v44);
        if ( v22 >= 0 )
        {
          LOBYTE(v28) = 5;
          v29 = HmgShareLockCheck(v54, v28);
          v30 = v29;
          if ( v29 )
          {
            if ( *(_DWORD *)(v29 + 96) == 6 )
            {
              v31 = *(HSURF *)(*(_QWORD *)a4 + 48LL);
              v54 = v31;
              if ( v49 )
                v32 = (struct _SURFOBJ *)(v49 + 24);
              else
                v32 = 0LL;
              v44 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v44, v32);
              v47[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v47, (struct _SURFOBJ *)(v30 + 24));
              v35 = 0LL;
              if ( v44 && v47[0] && **(_QWORD **)(*(_QWORD *)a4 + 512LL) == *(_QWORD *)v30 )
              {
                v63 = 0LL;
                v36 = 0LL;
                v64 = 0;
                v65 = 1;
                v66 = 0LL;
                v62 = 0LL;
                if ( a10 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v60, a10, v55, 0);
                  v36 = v60;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v54, v35, v33, v34) )
                {
                  v37 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 512LL) + 112LL) & 0x400) != 0 )
                {
                  v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v31 + 357);
                }
                else
                {
                  v37 = EngCopyBits;
                }
                if ( !v36 || !ERECTL::bEmpty((ERECTL *)v61) )
                {
                  if ( v49 )
                    v38 = v49 + 24;
                  else
                    v38 = 0LL;
                  ((void (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v37)(
                    v30 + 24,
                    v38,
                    v36,
                    0LL,
                    v55,
                    &gptlZero);
                }
                v14 = v52;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v47);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v44);
            }
            DEC_SHARE_REF_CNT(v30);
          }
        }
      }
    }
  }
  if ( a10 )
    REGION::vDeleteREGION(a10);
  if ( v48 )
  {
    v39 = PsGetCurrentProcess(v24);
    MmUnmapViewOfSection(v39, v48);
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v40);
  SURFMEM::~SURFMEM((SURFMEM *)&v49);
  return v22 >= 0;
}
