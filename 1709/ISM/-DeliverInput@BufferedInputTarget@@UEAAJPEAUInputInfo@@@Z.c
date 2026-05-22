/*
 * XREFs of ?DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800A4FE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x1800676AC (--$emplace_back@AEAUInputInfo@@@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAAXA.c)
 *     ?DeliverBufferToTargetFromSample@BufferedInputTarget@@AEAAJPEAUIInputTarget@@K@Z @ 0x1800A5444 (-DeliverBufferToTargetFromSample@BufferedInputTarget@@AEAAJPEAUIInputTarget@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BufferedInputTarget::DeliverInput(BufferedInputTarget *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  char v5; // r12
  char v6; // r13
  char v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct IInputTarget *v20; // rcx
  struct IInputTarget *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct IInputTarget *v26; // rbx
  __int64 v27; // rcx
  struct IInputTarget *v28; // rcx
  __int64 v29; // rcx
  int v30; // r9d
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v35; // [rsp+88h] [rbp+48h]
  unsigned int v36; // [rsp+90h] [rbp+50h] BYREF
  __int64 v37; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a2 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 161, 87);
    return v4;
  }
  if ( *((int *)this + 44) <= 0 )
  {
LABEL_78:
    v31 = *((_QWORD *)this + 3);
    if ( v31 )
    {
      if ( !v5 )
      {
        v32 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v31 + 24LL))(v31, a2);
        v4 = v32;
        if ( v32 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v33, &MinInput_Warning_CheckResult, 0, 372, v32);
      }
    }
    else
    {
      std::vector<InputInfo>::emplace_back<InputInfo &>((__int64)this + 184, a2);
    }
    return v4;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v35 = 0;
  v9 = (_QWORD *)((char *)this + 40);
  v10 = 1LL;
  while ( 1 )
  {
    v11 = *((_DWORD *)v9 - 2);
    if ( !v11 )
      goto LABEL_57;
    if ( (unsigned int)(v11 - 1) <= 1 )
      break;
    if ( v7 )
      goto LABEL_28;
    if ( !v6 )
    {
      v12 = *v9;
      if ( *((_QWORD *)this + 3) != *v9 )
      {
        if ( v12 )
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v12 + 8LL))(*v9, v8, 1LL);
        v13 = *((_QWORD *)this + 3);
        *((_QWORD *)this + 3) = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v8, v10);
      }
      v7 = 1;
      switch ( *((_DWORD *)v9 - 2) )
      {
        case 3:
          v14 = BufferedInputTarget::DeliverBufferToTargetFromSample(this, (struct IInputTarget *)*v9, 0);
          v4 = v14;
          if ( v14 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 333, v14);
            return v4;
          }
          break;
        case 4:
          v16 = BufferedInputTarget::DeliverBufferToTargetFromSample(
                  this,
                  (struct IInputTarget *)*v9,
                  *((_DWORD *)v9 + 2));
          v4 = v16;
          if ( v16 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 339, v16);
            return v4;
          }
          break;
        case 5:
          v18 = BufferedInputTarget::DeliverBufferToTargetFromSample(
                  this,
                  (struct IInputTarget *)*v9,
                  *((_DWORD *)v9 + 2) + 1);
          v4 = v18;
          if ( v18 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 345, v18);
            return v4;
          }
          break;
      }
      *((_DWORD *)v9 - 2) = 0;
      v20 = (struct IInputTarget *)*v9;
      if ( *v9 )
      {
        *v9 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      --*((_DWORD *)this + 44);
      goto LABEL_56;
    }
LABEL_57:
    v8 = (unsigned int)(v8 + 1);
    v35 = v8;
    v9 += 3;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_78;
  }
  if ( v7 )
  {
LABEL_28:
    *((_DWORD *)v9 - 2) = 0;
    v21 = (struct IInputTarget *)*v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *, __int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, v8, 1LL);
      LODWORD(v8) = v35;
      v10 = 1LL;
    }
    --*((_DWORD *)this + 44);
    goto LABEL_57;
  }
  v37 = 0LL;
  v36 = 0;
  v22 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9)(
          *v9,
          &GUID_9541eccb_d3b7_47cd_bb5b_51b74da1c6bd,
          &v37);
  v4 = v22;
  if ( v22 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v30 = 199;
LABEL_74:
      McTemplateU0qqq(v23, &MinInput_Warning_CheckResult, 0, v30, v22);
    }
LABEL_75:
    v24 = v37;
    goto LABEL_76;
  }
  v24 = v37;
  if ( v37 )
  {
    (*(void (__fastcall **)(__int64, struct InputInfo *, unsigned int *))(*(_QWORD *)v37 + 32LL))(v37, a2, &v36);
    v23 = 1LL;
    ++*((_DWORD *)v9 + 2);
    v25 = v36;
    if ( v36 )
    {
      if ( v36 == 2 )
        goto LABEL_54;
      if ( v36 == 1 )
      {
        v6 = 1;
        goto LABEL_54;
      }
      if ( v6 )
      {
        *((_DWORD *)v9 - 2) = v36;
LABEL_54:
        v29 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
LABEL_56:
        LODWORD(v8) = v35;
        v10 = 1LL;
        goto LABEL_57;
      }
      v26 = (struct IInputTarget *)*v9;
      if ( *((_QWORD *)this + 3) != *v9 )
      {
        if ( v26 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 8LL))(*v9);
          v25 = v36;
        }
        v27 = *((_QWORD *)this + 3);
        *((_QWORD *)this + 3) = v26;
        if ( v27 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 16LL))(v27, v25);
          LODWORD(v25) = v36;
        }
        v23 = 1LL;
      }
      v7 = 1;
      if ( (_DWORD)v25 == 3 )
      {
        v22 = BufferedInputTarget::DeliverBufferToTargetFromSample(this, (struct IInputTarget *)*v9, 0);
        v4 = v22;
        if ( v22 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v30 = 267;
            goto LABEL_74;
          }
          goto LABEL_75;
        }
      }
      else
      {
        if ( (unsigned int)(v25 - 4) > 1 )
        {
          LOBYTE(v22) = -1;
          v4 = -2147418113;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v30 = 289;
            goto LABEL_74;
          }
          goto LABEL_75;
        }
        *((_QWORD *)this + 24) = *((_QWORD *)this + 23);
        v4 = 0;
        if ( (_DWORD)v25 == 5 )
          v5 = 1;
      }
    }
    *((_DWORD *)v9 - 2) = 0;
    v28 = (struct IInputTarget *)*v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    --*((_DWORD *)this + 44);
    goto LABEL_54;
  }
  v4 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 203, 255);
    v24 = v37;
  }
LABEL_76:
  if ( v24 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v4;
}
