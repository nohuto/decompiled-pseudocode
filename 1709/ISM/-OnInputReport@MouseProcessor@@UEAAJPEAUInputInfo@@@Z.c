/*
 * XREFs of ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006BEC0
 * Callers:
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18006F1C8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetDisplayInformation@MouseProcessor@@AEAAJXZ @ 0x18006CB64 (-GetDisplayInformation@MouseProcessor@@AEAAJXZ.c)
 *     ?DoAcceleration@MouseAccelerator@@QEAAJPEAJ0@Z @ 0x18006D3D4 (-DoAcceleration@MouseAccelerator@@QEAAJPEAJ0@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::OnInputReport(MouseProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // edi
  char v5; // al
  bool v6; // cf
  __int16 v7; // ax
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // cx
  __int64 v14; // rcx
  char *v15; // rdx
  int DisplayInformation; // eax
  __int64 v17; // rcx
  int v18; // r9d
  bool v19; // r13
  char v20; // bp
  char v21; // al
  __int16 v22; // ax
  int v23; // ecx
  __int16 v24; // ax
  int v25; // ecx
  __int16 v26; // ax
  __int16 v27; // ax
  __int64 v28; // rcx
  int v29; // ecx
  int *v30; // r15
  int *v31; // r14
  bool v32; // zf
  int *v33; // rbp
  int *v34; // r12
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // rax
  __int64 v41; // rcx
  char *v42; // rdx
  char v44; // [rsp+30h] [rbp-68h]
  int v45; // [rsp+34h] [rbp-64h] BYREF
  int v46; // [rsp+38h] [rbp-60h] BYREF
  char v47[16]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  if ( (*(_DWORD *)a2 & 2) == 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 260, 87);
    return v4;
  }
  if ( (gdwMitConfig & 1) != 0 )
  {
    *((_DWORD *)this + 54) = *((_DWORD *)a2 + 177);
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 178);
    v5 = *((_BYTE *)a2 + 2760);
    *((_BYTE *)this + 576) = v5;
    *((_BYTE *)this + 228) = v5;
    v6 = v5 != 0;
    v7 = *((_WORD *)a2 + 350);
    v8 = v6 ? 32 : 16;
    if ( (v7 & 1) != 0 )
    {
      *((_DWORD *)this + 56) |= v8;
    }
    else if ( (v7 & 2) != 0 )
    {
      *((_DWORD *)this + 56) &= ~v8;
    }
    v9 = *((_WORD *)a2 + 350);
    v10 = *((_BYTE *)this + 576) != 0 ? 16 : 32;
    if ( (v9 & 4) != 0 )
    {
      *((_DWORD *)this + 56) |= v10;
    }
    else if ( (v9 & 8) != 0 )
    {
      *((_DWORD *)this + 56) &= ~v10;
    }
    v11 = *((_WORD *)a2 + 350);
    if ( (v11 & 0x10) != 0 )
    {
      *((_DWORD *)this + 56) |= 0x40u;
    }
    else if ( (v11 & 0x20) != 0 )
    {
      *((_DWORD *)this + 56) &= ~0x40u;
    }
    v12 = *((_WORD *)a2 + 350);
    if ( (v12 & 0x40) != 0 )
    {
      *((_DWORD *)this + 56) |= 0x80u;
    }
    else if ( (v12 & 0x80u) != 0 )
    {
      *((_DWORD *)this + 56) &= ~0x80u;
    }
    v13 = *((_WORD *)a2 + 350);
    if ( (v13 & 0x100) != 0 )
    {
      *((_DWORD *)this + 56) |= 0x100u;
    }
    else if ( (v13 & 0x200) != 0 )
    {
      *((_DWORD *)this + 56) &= ~0x100u;
    }
    v14 = *((_QWORD *)this + 32);
    v15 = (char *)this + 208;
    if ( v14 )
    {
      DisplayInformation = (*(__int64 (__fastcall **)(__int64, char *, struct InputInfo *))(*(_QWORD *)v14 + 24LL))(
                             v14,
                             v15,
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 296;
    }
    else
    {
      DisplayInformation = (*(__int64 (__fastcall **)(char *, char *, struct InputInfo *))(*((_QWORD *)this + 22) + 24LL))(
                             (char *)this + 176,
                             v15,
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 300;
    }
    goto LABEL_117;
  }
  v19 = (*((_DWORD *)this + 56) & 0x10) != 0;
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 88LL))(*((_QWORD *)this + 30));
  v44 = v20;
  *((_BYTE *)this + 576) = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    DisplayInformation = MouseProcessor::GetDisplayInformation(this);
    v4 = DisplayInformation;
    if ( DisplayInformation < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 311;
      goto LABEL_117;
    }
  }
  if ( GetSystemMetrics(23) && (*(_BYTE *)a2 & 0x20) == 0 )
    *((_BYTE *)this + 576) = 1;
  v21 = *((_BYTE *)this + 576);
  *((_BYTE *)this + 228) = v21;
  v6 = v21 != 0;
  v22 = *((_WORD *)a2 + 350);
  v23 = v6 ? 32 : 16;
  if ( (v22 & 1) != 0 )
  {
    *((_DWORD *)this + 56) |= v23;
  }
  else if ( (v22 & 2) != 0 )
  {
    *((_DWORD *)this + 56) &= ~v23;
  }
  v24 = *((_WORD *)a2 + 350);
  v25 = *((_BYTE *)this + 576) != 0 ? 16 : 32;
  if ( (v24 & 4) != 0 )
  {
    *((_DWORD *)this + 56) |= v25;
  }
  else if ( (v24 & 8) != 0 )
  {
    *((_DWORD *)this + 56) &= ~v25;
  }
  v26 = *((_WORD *)a2 + 350);
  if ( (v26 & 0x10) != 0 )
  {
    *((_DWORD *)this + 56) |= 0x40u;
  }
  else if ( (v26 & 0x20) != 0 )
  {
    *((_DWORD *)this + 56) &= ~0x40u;
  }
  v27 = *((_WORD *)a2 + 350);
  if ( (v27 & 0x40) != 0 )
  {
    *((_DWORD *)this + 56) |= 0x80u;
  }
  else if ( (v27 & 0x80u) != 0 )
  {
    *((_DWORD *)this + 56) &= ~0x80u;
  }
  v28 = *((unsigned __int16 *)a2 + 350);
  if ( (v28 & 0x100) != 0 )
  {
    *((_DWORD *)this + 56) |= 0x100u;
  }
  else if ( (v28 & 0x200) != 0 )
  {
    *((_DWORD *)this + 56) &= ~0x100u;
  }
  if ( *((_BYTE *)this + 264) || !v20 )
  {
    DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 5) + 32LL))(
                           *((_QWORD *)this + 5),
                           &v45,
                           &v46);
    v4 = DisplayInformation;
    if ( DisplayInformation < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 360;
      goto LABEL_117;
    }
    v28 = *((_WORD *)a2 + 349) & 1;
    if ( (*((_WORD *)a2 + 349) & 1) != 0 )
    {
      if ( (_DWORD)v28 == 1 )
      {
        v29 = v46;
        *((_DWORD *)this + 52) = (v45 - 1) * *((_DWORD *)a2 + 177) / 0xFFFF;
        v28 = (unsigned int)(v29 - 1);
        *((_DWORD *)this + 53) = (int)v28 * *((_DWORD *)a2 + 178) / 0xFFFF;
      }
      goto LABEL_92;
    }
    v30 = (int *)((char *)this + 212);
    v31 = (int *)((char *)this + 208);
    DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 30) + 32LL))(
                           *((_QWORD *)this + 30),
                           (char *)this + 208,
                           (char *)this + 212);
    v4 = DisplayInformation;
    if ( DisplayInformation < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 366;
      goto LABEL_117;
    }
    v32 = *((_BYTE *)this + 560) == 0;
    v33 = (int *)((char *)this + 216);
    v34 = (int *)((char *)this + 220);
    *((_DWORD *)this + 54) = *((_DWORD *)a2 + 177);
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 178);
    if ( !v32 )
    {
      DisplayInformation = MouseAccelerator::DoAcceleration(
                             (MouseProcessor *)((char *)this + 280),
                             (int *)this + 54,
                             (int *)this + 55);
      v4 = DisplayInformation;
      if ( DisplayInformation < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v18 = 373;
        goto LABEL_117;
      }
    }
    v35 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5)) - 1;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 != 1 )
          {
LABEL_84:
            if ( *v31 < 0 )
              *v31 = 0;
            if ( *v31 >= v45 )
              *v31 = v45 - 1;
            if ( *v30 < 0 )
              *v30 = 0;
            v20 = v44;
            if ( *v30 >= v46 )
              *v30 = v46 - 1;
            goto LABEL_92;
          }
          *v31 += *v34;
          v38 = *v33;
        }
        else
        {
          *v31 -= *v33;
          v38 = *v34;
        }
        *v30 -= v38;
        goto LABEL_84;
      }
      *v31 -= *v34;
      v39 = *v33;
    }
    else
    {
      *v31 += *v33;
      v39 = *v34;
    }
    *v30 += v39;
    goto LABEL_84;
  }
LABEL_92:
  *((_DWORD *)a2 + 12) = 1;
  *((_DWORD *)a2 + 17) = *((_DWORD *)this + 52);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 53);
  *((_DWORD *)a2 + 15) = 1;
  *((_DWORD *)a2 + 14) = 0;
  if ( !*((_BYTE *)this + 264) )
  {
    if ( v20
      || (DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 24LL))(
                                 *((_QWORD *)this + 30),
                                 *((unsigned int *)this + 52),
                                 *((unsigned int *)this + 53)),
          v4 = DisplayInformation,
          DisplayInformation >= 0) )
    {
      *(_OWORD *)((char *)a2 + 648) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 30)
                                                                                           + 40LL))(
                                                   *((_QWORD *)this + 30),
                                                   v47);
      *((_DWORD *)a2 + 136) = *((_DWORD *)this + 56);
      if ( *((_DWORD *)this + 56) )
        *((_DWORD *)a2 + 15) |= 2u;
      v41 = *((_QWORD *)this + 32);
      v42 = (char *)this + 208;
      if ( v41 )
      {
        DisplayInformation = (*(__int64 (__fastcall **)(__int64, char *, struct InputInfo *))(*(_QWORD *)v41 + 24LL))(
                               v41,
                               v42,
                               a2);
        v4 = DisplayInformation;
        if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v18 = 481;
      }
      else
      {
        DisplayInformation = (*(__int64 (__fastcall **)(char *, char *, struct InputInfo *))(*((_QWORD *)this + 22)
                                                                                           + 24LL))(
                               (char *)this + 176,
                               v42,
                               a2);
        v4 = DisplayInformation;
        if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v4;
        v18 = 485;
      }
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 468;
    }
LABEL_117:
    McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, v18, DisplayInformation);
    return v4;
  }
  v40 = (_DWORD *)*((_QWORD *)this + 34);
  if ( v40 )
  {
    *((_DWORD *)a2 + 1) = *v40;
    *(_DWORD *)a2 = 8;
    if ( (*((_BYTE *)this + 224) & 0x10) != 0 )
    {
      *((_DWORD *)a2 + 15) |= 2u;
      DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 3) + 24LL))(
                             *((_QWORD *)this + 3),
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 449;
    }
    else
    {
      if ( !v19 )
        return v4;
      *((_DWORD *)a2 + 15) &= ~1u;
      DisplayInformation = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 3) + 24LL))(
                             *((_QWORD *)this + 3),
                             a2);
      v4 = DisplayInformation;
      if ( DisplayInformation >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v4;
      v18 = 455;
    }
    goto LABEL_117;
  }
  v4 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v28, &MinInput_Warning_CheckResult, 0, 439, 255);
  return v4;
}
