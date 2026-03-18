/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358
 * Callers:
 *     GreExtEscape @ 0x1C01012BC (GreExtEscape.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B154 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003D604 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0101610 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0101654 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025669C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0256A90 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0257078 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0282168 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r14
  __int64 v10; // rcx
  HDEV v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r15
  struct _SURFOBJ *v20; // r10
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v24; // eax
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  HDEV DeviceHdev; // rax
  __int64 v31; // r10
  int v32; // eax
  int v33; // [rsp+40h] [rbp-158h]
  struct PDEV *v34; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int16 v35; // [rsp+58h] [rbp-140h]
  int v36; // [rsp+5Ch] [rbp-13Ch]
  int v37; // [rsp+60h] [rbp-138h]
  __int64 v38; // [rsp+68h] [rbp-130h] BYREF
  int v39; // [rsp+74h] [rbp-124h]
  _BYTE v40[80]; // [rsp+80h] [rbp-118h] BYREF
  struct _RECTL v41; // [rsp+D0h] [rbp-C8h] BYREF
  struct _SURFOBJ v42; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+130h] [rbp-68h] BYREF
  int v44; // [rsp+140h] [rbp-58h]
  __int64 *v45; // [rsp+148h] [rbp-50h]

  v6 = a4;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v34 = (struct PDEV *)v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 656);
  v14 = 0;
  v33 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v33 = *(_DWORD *)a4;
    v36 = *(_DWORD *)a4;
    v14 = v36;
    if ( (unsigned int)(v36 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
LABEL_5:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v40, this);
    if ( !(unsigned int)fBlockExtEscape(this) )
    {
      v15 = *(_QWORD *)this;
      if ( !*(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
LABEL_9:
        v38 = 0LL;
        v39 = 0;
        if ( a2 != 25 )
          goto LABEL_10;
        if ( *((int *)v11 + 460) >= 0 )
        {
LABEL_49:
          v27 = *(_QWORD *)this;
          v28 = *(_QWORD *)(*(_QWORD *)this + 512LL);
          if ( v28 && (*(_DWORD *)(v28 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 460) < 0) )
          {
            v29 = *(_DWORD *)(v27 + 2540);
            *(_DWORD *)v6 -= *(_DWORD *)(v27 + 2536);
            *((_DWORD *)v6 + 1) -= v29;
          }
LABEL_10:
          if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
          {
            v24 = DoFontManagement(this, a2, a3, v6, a5, a6);
          }
          else
          {
            if ( a2 - 4119 > 1 && (a2 != 8 || (unsigned int)(v14 - 4119) > 1) )
            {
              if ( (unsigned int)XDCOBJ::bValidSurf(this) && !a6 )
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 512LL) + 92LL) += v17;
              v18 = *(_QWORD *)this;
              v19 = (*(_QWORD *)(*(_QWORD *)this + 512LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 512LL) != 0LL);
              v20 = (struct _SURFOBJ *)v19;
              if ( ((_DWORD)v11[8] & 0x20000) != 0 && a2 == 8 && (v33 == 4353 || v33 == 4352) )
              {
                v41 = *(struct _RECTL *)(v18 + 1448);
                DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v18 + 48), &v41, 0LL);
                v20 = (struct _SURFOBJ *)v19;
                if ( DeviceHdev )
                {
                  if ( *(_QWORD *)(*(_QWORD *)this + 512LL) == *((_QWORD *)v11 + 321) )
                  {
                    v31 = *((_QWORD *)DeviceHdev + 321);
                    if ( v31 )
                      v20 = (struct _SURFOBJ *)(v31 + 24);
                    else
                      v20 = 0LL;
                  }
                  v11 = DeviceHdev;
                  v34 = (struct PDEV *)DeviceHdev;
                }
              }
              if ( *((_QWORD *)v11 + 362) )
              {
                if ( !v20 )
                {
                  memset(&v42, 0, sizeof(v42));
                  v21 = *(_QWORD *)this;
                  v42.dhpdev = *(DHPDEV *)(*(_QWORD *)this + 24LL);
                  v42.hdev = *(HDEV *)(v21 + 48);
                  v22 = 1;
                  v42.iType = 1;
                  v20 = &v42;
                  if ( a2 == 17 && a3 >= 2 )
                  {
                    v35 = *(_WORD *)v6;
                    *(_DWORD *)(v21 + 2524) = v35;
                    PDEVOBJ::Escape(&v34, &v42, 17LL, a3, v6, a5, a6);
                    goto LABEL_23;
                  }
                  if ( a2 == 33 && a3 >= 2 )
                  {
                    v32 = *(unsigned __int16 *)v6;
                    v37 = v32;
                    if ( v32 )
                      *(_DWORD *)(v21 + 36) |= 0x400u;
                    else
                      *(_DWORD *)(v21 + 36) &= ~0x400u;
                    goto LABEL_23;
                  }
                }
                v22 = PDEVOBJ::Escape(&v34, v20, a2, a3, v6, a5, a6);
LABEL_23:
                DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
                return v22;
              }
LABEL_26:
              DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
              return v12;
            }
            v24 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v34, a2, a3, v6, a5, a6);
          }
          v12 = v24;
          goto LABEL_26;
        }
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v38, this, 516);
        if ( a3 == 20 )
        {
          v43 = *(_OWORD *)v6;
          v44 = *((_DWORD *)v6 + 4);
          v45 = &v38;
          v6 = (char *)&v43;
          a3 = 32;
          goto LABEL_49;
        }
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 32LL) & 0x80u) == 0 )
      {
        v25 = *(_QWORD *)(v15 + 512);
        if ( !v25 )
          goto LABEL_40;
        v26 = *(_WORD *)(v25 + 100) == 3;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 512);
        if ( !v16 )
          goto LABEL_9;
        v26 = *(_QWORD *)(v16 + 40) == *((_QWORD *)v11 + 227);
      }
      if ( v26 )
        goto LABEL_9;
    }
LABEL_40:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
    return 0LL;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( a2 != 4354 )
    {
      if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
        return 0LL;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v10 + 32) )
      return 0LL;
    return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
  }
}
