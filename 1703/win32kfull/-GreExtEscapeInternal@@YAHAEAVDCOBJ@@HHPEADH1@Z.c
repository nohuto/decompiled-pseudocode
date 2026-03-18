/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F36A0
 * Callers:
 *     GreExtEscape @ 0x1C00F360C (GreExtEscape.c)
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003235C (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00743C8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C00F393C (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C00F3980 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0254BCC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02555A8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // rsi
  __int64 v10; // rcx
  HDEV v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r14
  struct _SURFOBJ *v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  HDEV DeviceHdev; // r8
  __int64 v29; // r10
  int v30; // eax
  HDEV v31; // [rsp+40h] [rbp-148h] BYREF
  void *v32; // [rsp+48h] [rbp-140h]
  unsigned __int16 v33; // [rsp+50h] [rbp-138h]
  int v34; // [rsp+54h] [rbp-134h]
  int v35; // [rsp+58h] [rbp-130h]
  __int64 v36; // [rsp+60h] [rbp-128h] BYREF
  int v37; // [rsp+6Ch] [rbp-11Ch]
  _BYTE v38[80]; // [rsp+70h] [rbp-118h] BYREF
  struct _RECTL v39; // [rsp+C0h] [rbp-C8h] BYREF
  struct _SURFOBJ v40; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+120h] [rbp-68h] BYREF
  int v42; // [rsp+130h] [rbp-58h]
  __int64 *v43; // [rsp+138h] [rbp-50h]

  v6 = a4;
  v32 = a6;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v31 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 656);
  v14 = 0;
  if ( a2 == 8 )
  {
    if ( a3 < 4 )
      return 0LL;
    v34 = *(_DWORD *)a4;
    v14 = v34;
    if ( (unsigned int)(v34 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
    goto LABEL_5;
  }
  if ( a2 - 4352 > 1 )
  {
    if ( a2 == 4354 )
    {
      if ( !*(_DWORD *)(v10 + 32) )
        return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
      return 0LL;
    }
    if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
      return 0LL;
LABEL_5:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v38, this);
    if ( !(unsigned int)fBlockExtEscape(this) )
    {
      v15 = *(_QWORD *)this;
      if ( !*(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
LABEL_9:
        v36 = 0LL;
        v37 = 0;
        if ( a2 != 25 )
          goto LABEL_10;
        if ( *((int *)v31 + 460) >= 0 )
        {
LABEL_48:
          v25 = *(_QWORD *)this;
          v26 = *(_QWORD *)(*(_QWORD *)this + 512LL);
          if ( v26 && (*(_DWORD *)(v26 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v31 + 460) < 0) )
          {
            v27 = *(_DWORD *)(v25 + 2540);
            *(_DWORD *)v6 -= *(_DWORD *)(v25 + 2536);
            *((_DWORD *)v6 + 1) -= v27;
          }
LABEL_10:
          if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
          {
            v21 = DoFontManagement(this, a2, a3, v6, a5, v32);
          }
          else if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v14 - 4119) <= 1 )
          {
            v21 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v31, a2, a3, v6, a5, v32);
          }
          else
          {
            if ( (unsigned int)XDCOBJ::bValidSurf(this) && !v32 )
              ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 512LL) + 92LL);
            v17 = *(_QWORD *)this;
            v18 = (*(_QWORD *)(*(_QWORD *)this + 512LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 512LL) != 0LL);
            v19 = (struct _SURFOBJ *)v18;
            if ( ((_DWORD)v31[8] & 0x20000) != 0 && a2 == 8 && (v14 == 4353 || v14 == 4352) )
            {
              v39 = *(struct _RECTL *)(v17 + 1448);
              DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v17 + 48), &v39, 0LL);
              v19 = (struct _SURFOBJ *)v18;
              if ( DeviceHdev )
              {
                if ( *(_QWORD *)(*(_QWORD *)this + 512LL) == *((_QWORD *)v31 + 321) )
                {
                  v29 = *((_QWORD *)DeviceHdev + 321);
                  if ( v29 )
                    v19 = (struct _SURFOBJ *)(v29 + 24);
                  else
                    v19 = 0LL;
                }
                v31 = DeviceHdev;
              }
            }
            if ( !*((_QWORD *)v31 + 362) )
              goto LABEL_24;
            if ( !v19 )
            {
              memset(&v40, 0, sizeof(v40));
              v20 = *(_QWORD *)this;
              v40.dhpdev = *(DHPDEV *)(*(_QWORD *)this + 24LL);
              v40.hdev = *(HDEV *)(v20 + 48);
              v40.iType = 1;
              v19 = &v40;
              if ( a2 == 17 && a3 >= 2 )
              {
                v33 = *(_WORD *)v6;
                *(_DWORD *)(v20 + 2524) = v33;
                PDEVOBJ::Escape((PDEVOBJ *)&v31, &v40, 0x11u, a3, v6, a5, v32);
LABEL_67:
                DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
                return 1LL;
              }
              if ( a2 == 33 && a3 >= 2 )
              {
                v30 = *(unsigned __int16 *)v6;
                v35 = v30;
                if ( v30 )
                  *(_DWORD *)(v20 + 36) |= 0x400u;
                else
                  *(_DWORD *)(v20 + 36) &= ~0x400u;
                goto LABEL_67;
              }
            }
            v21 = PDEVOBJ::Escape((PDEVOBJ *)&v31, v19, a2, a3, v6, a5, v32);
          }
          v12 = v21;
LABEL_24:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
          return v12;
        }
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v36, this, 516);
        if ( a3 == 20 )
        {
          v41 = *(_OWORD *)v6;
          v42 = *((_DWORD *)v6 + 4);
          v43 = &v36;
          v6 = (char *)&v41;
          a3 = 32;
          goto LABEL_48;
        }
        goto LABEL_39;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 32LL) & 0x80u) == 0 )
      {
        v23 = *(_QWORD *)(v15 + 512);
        if ( !v23 )
          goto LABEL_39;
        v24 = *(_WORD *)(v23 + 100) == 3;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 512);
        if ( !v16 )
          goto LABEL_9;
        v24 = *(_QWORD *)(v16 + 40) == *((_QWORD *)v31 + 227);
      }
      if ( v24 )
        goto LABEL_9;
    }
LABEL_39:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v38);
    return 0LL;
  }
  if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
    return 0LL;
  return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
}
