/*
 * XREFs of ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8
 * Callers:
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008AA10 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B200 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B880 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800093C8 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x1800A3210 (-SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KPEAUPreviousState@InputInfoSanitizer@@@Z @ 0x1800A382C (-GetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KPEAUPreviou.c)
 *     ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x1800A3958 (-SetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviou.c)
 *     ?RemoveKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_K@Z @ 0x1800A3C8C (-RemoveKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_K@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputInfoSanitizer::OnInputReport(InputInfoSanitizer *this, struct InputInfo *a2, char a3)
{
  __int64 v4; // rcx
  int *v5; // rdx
  __int64 v6; // r9
  bool v7; // zf
  int v8; // edx
  __int64 v9; // r9
  unsigned int v10; // r8d
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  struct InputInfo *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // eax
  int PointerAtIndex; // eax
  InputInfoSanitizer *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // r9d
  int v37; // eax
  __int64 v38; // rcx
  InputInfoSanitizer *v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // r8d
  __int64 v43; // r11
  __int64 v44; // rbx
  __int64 v45; // r10
  char v48; // [rsp+31h] [rbp-D67h]
  unsigned int v49; // [rsp+34h] [rbp-D64h]
  int v50; // [rsp+34h] [rbp-D64h]
  int v52; // [rsp+40h] [rbp-D58h]
  struct Pointer *v53; // [rsp+48h] [rbp-D50h] BYREF
  _BYTE v54[520]; // [rsp+50h] [rbp-D48h] BYREF
  int v55; // [rsp+258h] [rbp-B40h]
  int v56; // [rsp+25Ch] [rbp-B3Ch]
  _BYTE v57[48]; // [rsp+260h] [rbp-B38h] BYREF
  int v58; // [rsp+290h] [rbp-B08h]
  int v59; // [rsp+47Ch] [rbp-91Ch]

  v55 = -1;
  memset(v54, 0, sizeof(v54));
  v5 = (int *)v54;
  v6 = 10LL;
  do
  {
    *v5 = v55;
    v5 += 13;
    --v6;
  }
  while ( v6 );
  v7 = (*(_BYTE *)a2 & 0x3B) == 0;
  v8 = 0;
  v56 = 0;
  v48 = 0;
  if ( v7 )
  {
    v33 = this;
LABEL_55:
    v34 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)v33 + 2) + 24LL))(
            *((_QWORD *)v33 + 2),
            a2);
    v35 = 0LL;
    v30 = v34;
    if ( v34 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v36 = 92;
        goto LABEL_58;
      }
      return v30;
    }
    v33 = this;
    goto LABEL_60;
  }
  v9 = *((_QWORD *)a2 + 69);
  if ( v9 == *((_QWORD *)this + 6) )
    goto LABEL_10;
  v10 = 0;
  if ( !*((_DWORD *)this + 10) )
    goto LABEL_10;
  while ( 1 )
  {
    v4 = 536LL * v10;
    if ( *(_QWORD *)(v4 + *((_QWORD *)this + 4)) == v9 )
      break;
    if ( ++v10 >= *((_DWORD *)this + 10) )
      goto LABEL_10;
  }
  DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::GetValueForKey(
    (char *)this + 32,
    (char *)a2 + 552,
    v54);
  v8 = v56;
  if ( !v56 )
  {
LABEL_10:
    if ( !*((_DWORD *)a2 + 135) )
      goto LABEL_18;
  }
  v11 = 0;
  if ( v8 )
  {
    v12 = v8 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        if ( (*((_DWORD *)a2 + 135) & 0xFFFFFFFD) == 0 )
        {
          v16 = 22LL;
          v17 = v57;
          v18 = a2;
          do
          {
            v19 = *((_OWORD *)v18 + 1);
            *v17 = *(_OWORD *)v18;
            v20 = *((_OWORD *)v18 + 2);
            v17[1] = v19;
            v21 = *((_OWORD *)v18 + 3);
            v17[2] = v20;
            v22 = *((_OWORD *)v18 + 4);
            v17[3] = v21;
            v23 = *((_OWORD *)v18 + 5);
            v17[4] = v22;
            v24 = *((_OWORD *)v18 + 6);
            v17[5] = v23;
            v25 = *((_OWORD *)v18 + 7);
            v18 = (struct InputInfo *)((char *)v18 + 128);
            v17[6] = v24;
            v17 += 8;
            *(v17 - 1) = v25;
            --v16;
          }
          while ( v16 );
          v26 = *((_OWORD *)v18 + 1);
          *v17 = *(_OWORD *)v18;
          v17[1] = v26;
          v59 = 4;
          v58 = 0;
          InputInfoSanitizer::OnInputReport(this, (struct InputInfo *)v57, 0);
          if ( *((_DWORD *)a2 + 135) == 2 )
            *((_DWORD *)a2 + 12) = 0;
        }
        goto LABEL_18;
      }
      if ( v13 != 2 )
      {
        v11 = -2147418113;
        goto LABEL_32;
      }
      if ( ((*((_DWORD *)a2 + 135) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_18;
    }
    else
    {
      v27 = *((_DWORD *)a2 + 135);
      if ( v27 != 4 )
      {
        if ( v27 == 1 )
          *((_DWORD *)a2 + 135) = 0;
        goto LABEL_18;
      }
      *((_DWORD *)a2 + 135) = 0;
    }
    *((_DWORD *)a2 + 12) = 0;
    goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + 135) == 4 )
  {
    *((_DWORD *)a2 + 135) = 0;
    *((_DWORD *)a2 + 12) = 0;
  }
LABEL_32:
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_74;
    v28 = 56;
    goto LABEL_73;
  }
LABEL_18:
  v14 = InputInfoSanitizer::SanitizePointerInput(
          (InputInfoSanitizer *)v4,
          a2,
          (struct InputInfoSanitizer::PreviousState *)v54);
  if ( v14 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 59, v14);
    goto LABEL_74;
  }
  v52 = *((_DWORD *)a2 + 12);
  v56 = *((_DWORD *)a2 + 135);
  v29 = DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::SetValueForKey(
          (char *)this + 32,
          (char *)a2 + 552,
          v54);
  v30 = v29;
  if ( v29 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 70, v29);
    goto LABEL_74;
  }
  if ( a3 )
  {
    v53 = 0LL;
    if ( !*((_DWORD *)a2 + 135) )
    {
      v31 = 0;
      v49 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        while ( 1 )
        {
          PointerAtIndex = GetPointerAtIndex(a2, v31, &v53);
          if ( PointerAtIndex < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 426, PointerAtIndex);
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          if ( (*((_BYTE *)v53 + 4) & 3) != 0 )
            break;
          v31 = v49 + 1;
          v49 = v31;
          if ( v31 >= *((_DWORD *)a2 + 12) )
            goto LABEL_50;
        }
      }
      else
      {
LABEL_50:
        v53 = (struct Pointer *)*((_QWORD *)a2 + 69);
        v48 = 1;
      }
    }
  }
  v33 = this;
  if ( v52 || *((_BYTE *)this + 25) )
    goto LABEL_55;
LABEL_60:
  if ( !a3 || !v48 )
    return v30;
  v37 = DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::RemoveKey((char *)v33 + 32, &v53);
  if ( v37 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v38, &MinInput_Warning_CheckResult, 0, 104, v37);
LABEL_74:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v39 = this;
  v50 = *((_DWORD *)this + 11);
  v30 = 0;
  if ( !v50 )
    return v30;
  while ( 1 )
  {
    v40 = (__int64)v39 + 32;
    v41 = 0;
    v42 = *((_DWORD *)v39 + 10);
    if ( !v42 )
    {
LABEL_70:
      LOBYTE(v11) = 5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_74;
      McTemplateU0qqq(v40, &MinInput_Warning_CheckResult, 0, 284, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_74;
      v28 = 109;
LABEL_73:
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, v28, v11);
      goto LABEL_74;
    }
    v43 = *(_QWORD *)v40;
    v44 = *(_QWORD *)(v40 + 16);
    while ( 1 )
    {
      v45 = *(_QWORD *)(536LL * v41 + v43);
      if ( v45 != v44 )
        break;
      if ( ++v41 >= v42 )
        goto LABEL_70;
    }
    *(_QWORD *)(536LL * v41 + v43) = v44;
    --*(_DWORD *)(v40 + 12);
    *((_DWORD *)a2 + 12) = 0;
    *((_QWORD *)a2 + 69) = v45;
    v34 = InputInfoSanitizer::OnInputReport(this, a2, 0);
    v30 = v34;
    if ( v34 < 0 )
      break;
    if ( !--v50 )
      return v30;
    v39 = this;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v36 = 112;
LABEL_58:
    McTemplateU0qqq(v35, &MinInput_Warning_CheckResult, 0, v36, v34);
  }
  return v30;
}
