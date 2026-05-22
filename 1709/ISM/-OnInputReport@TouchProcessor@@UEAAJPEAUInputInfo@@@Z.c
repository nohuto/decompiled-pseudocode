/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180073180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(TouchProcessor *this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int v6; // r9d
  __int64 v7; // r8
  char *v8; // rcx
  int *v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // r14
  _BYTE *v21; // r8
  unsigned int v22; // r10d
  _DWORD *v23; // rsi
  _DWORD *v24; // rdx
  int v25; // ecx
  int v26; // r14d
  _QWORD *i; // rsi
  int v28; // eax
  __int64 v29; // rcx
  int v30; // r9d
  POINT pt; // [rsp+30h] [rbp-69h] BYREF
  int v33; // [rsp+40h] [rbp-59h] BYREF
  int v34; // [rsp+44h] [rbp-55h]
  char v35; // [rsp+4Ch] [rbp-4Dh] BYREF

  v2 = 0;
  if ( (*(_DWORD *)a2 & 8) == 0 )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 107, 87);
    return v2;
  }
  if ( (gdwMitConfig & 4) != 0 )
  {
    *((_DWORD *)this + 262) = *((_DWORD *)a2 + 168);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 125) + 24LL))(*((_QWORD *)this + 125));
    return v2;
  }
  v33 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 12);
  if ( v5 > 10 )
    v5 = 10;
  v34 = v5;
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = &v35;
    v9 = (int *)((char *)a2 + 72);
    do
    {
      if ( v7 >= 10 )
        break;
      ++v6;
      ++v7;
      v10 = (float)*(v9 - 1);
      v11 = (float)*v9;
      v12 = *(v9 - 3);
      v9 += 12;
      *((_DWORD *)v8 + 1) = v12;
      *((float *)v8 - 1) = v10;
      *(float *)v8 = v11;
      v8 += 12;
    }
    while ( v6 < v34 );
  }
  if ( *((_DWORD *)a2 + 12) != 1
    || (pt = *(POINT *)((char *)a2 + 68), PtInRect((const RECT *)((char *)this + 1032), pt)) )
  {
    v13 = 0LL;
    if ( *((_DWORD *)a2 + 12) )
    {
      while ( (*((_BYTE *)a2 + 48 * v13 + 60) & 2) == 0 )
      {
        v13 = (unsigned int)(v13 + 1);
        if ( (_DWORD)v13 == *((_DWORD *)a2 + 12) )
          goto LABEL_17;
      }
      if ( *((_BYTE *)this + 1008) )
        goto LABEL_20;
      v19 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 1008) = 1;
      if ( (*(int (__fastcall **)(__int64, POINT *))(*(_QWORD *)v19 + 24LL))(v19, &pt) < 0 )
        goto LABEL_20;
      LOBYTE(v15) = 1;
    }
    else
    {
LABEL_17:
      v14 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 1008) = 0;
      if ( (*(int (__fastcall **)(__int64, POINT *))(*(_QWORD *)v14 + 24LL))(v14, &pt) < 0 )
        goto LABEL_20;
      v15 = 0LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, POINT))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), v15, pt);
LABEL_20:
    v16 = *((_QWORD *)this + 124);
    if ( v16 )
      *(_OWORD *)((char *)a2 + 648) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, POINT *))(*(_QWORD *)v16 + 40LL))(
                                                   v16,
                                                   &pt);
  }
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    v17 = *((unsigned int *)a2 + 12);
    if ( !dword_18010F400 )
    {
      dword_18010F400 = InitializeTouchInjection(256LL, 3LL);
      if ( dword_18010F400 != 1 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 225, 5);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    v20 = operator new[](saturated_mul(v17, 0x90uLL));
    memset(v20, 0, 144 * v17);
    v22 = 0;
    if ( (_DWORD)v17 )
    {
      v23 = (_DWORD *)((char *)a2 + 68);
      v21 = (char *)this + 1021;
      v24 = v20 + 3;
      do
      {
        v25 = *(v23 - 2);
        *(v24 - 3) = 2;
        *(v24 - 2) = v22;
        v24[5] = *v23;
        v24[6] = v23[1];
        if ( (v25 & 3) != 0 )
        {
          *v24 = 6;
          if ( *(v21 - 10) || *v21 )
          {
            *v24 = 131078;
          }
          else
          {
            *v24 = 65542;
            *(v21 - 10) = 1;
          }
          *v21 = 1;
        }
        else if ( *v21 )
        {
          *v24 = 262146;
          *(v21 - 10) = 0;
          *v21 = 0;
        }
        else
        {
          *v24 = 0;
        }
        ++v22;
        v23 += 12;
        ++v21;
        v24 += 36;
      }
      while ( v22 < (unsigned int)v17 );
    }
    InjectTouchInput((unsigned int)v17, v20, v21);
    operator delete(v20);
  }
  else
  {
    v28 = PointerProcessor::OnInputReport(this, a2);
    v2 = v28;
    if ( v28 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v30 = 191;
LABEL_56:
      McTemplateU0qqq(v29, &MinInput_Warning_CheckResult, 0, v30, v28);
      return v2;
    }
  }
  v26 = 0;
  for ( i = (_QWORD *)((char *)this + 184); ; i += 2 )
  {
    if ( *((_DWORD *)i - 2) )
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 122) + 160LL))(
              *((_QWORD *)this + 122),
              *i,
              &v33,
              128LL);
      v2 = v28;
      if ( v28 < 0 )
        break;
    }
    if ( (unsigned int)++v26 >= 0x32 )
      return v2;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v30 = 205;
    goto LABEL_56;
  }
  return v2;
}
