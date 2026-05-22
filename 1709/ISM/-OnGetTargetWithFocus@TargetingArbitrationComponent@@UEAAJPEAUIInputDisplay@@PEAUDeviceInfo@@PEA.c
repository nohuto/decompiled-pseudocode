/*
 * XREFs of ?OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A4540
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x1800A4E04 (-Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CB554 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TargetingArbitrationComponent::OnGetTargetWithFocus(
        TargetingArbitrationComponent *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct InputTargetingDecision *a5)
{
  unsigned int v6; // r13d
  int v7; // r12d
  struct IInputTarget *v8; // rdi
  int v9; // r14d
  unsigned int v10; // eax
  struct IInputTarget **v11; // rsi
  char *v12; // r15
  __int64 *v13; // rcx
  __int64 v14; // rcx
  struct IInputTarget *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  struct IInputTarget *v18; // rdx
  struct IInputTarget *v19; // rbx
  struct IInputTarget *v20; // rcx
  unsigned int v21; // r14d
  _BYTE *v22; // rbx
  __int64 v23; // rcx
  struct IInputTarget *v24; // rcx
  struct IInputTarget *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct IInputTarget *v28; // rbx
  struct IInputTarget *v29; // rcx
  struct InputTargetingDecision *v30; // rbx
  __int64 v31; // rcx
  struct IInputTarget *v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rbx
  __int64 v35; // rcx
  char v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+34h] [rbp-CCh]
  struct IInputTarget *v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  struct IInputTarget *v41; // [rsp+48h] [rbp-B8h]
  char *v42; // [rsp+58h] [rbp-A8h]
  struct IInputTarget *v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  struct IInputTarget *v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+78h] [rbp-88h]
  struct DeviceInfo *v47; // [rsp+80h] [rbp-80h]
  struct IInputDisplay *v48; // [rsp+88h] [rbp-78h]
  struct InputTargetingDecision *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  char v51[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v52[120]; // [rsp+A8h] [rbp-58h] BYREF

  v50 = -2LL;
  v43 = a4;
  v47 = a3;
  v48 = a2;
  v49 = a5;
  v6 = 0;
  v7 = 0;
  v44 = 0;
  v8 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v37 = 0;
  `eh vector constructor iterator'(
    v51,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>);
  v9 = 0;
  v38 = 0;
  v10 = 0;
  LODWORD(v39) = 0;
  v11 = (struct IInputTarget **)v52;
  v12 = v51;
  v13 = (__int64 *)((char *)this + 24);
  v42 = (char *)this + 24;
  while ( 1 )
  {
    v14 = *v13;
    if ( v14 )
      break;
LABEL_27:
    LODWORD(v39) = ++v10;
    v13 = (__int64 *)(v42 + 8);
    v42 += 8;
    if ( v10 >= 5 )
    {
      v15 = v43;
LABEL_39:
      if ( v37 )
      {
        v39 = 0LL;
        v26 = BufferedInputTarget::Create(v15, (struct InputTargetingDecision *)v51, v9, &v39);
        v6 = v26;
        if ( v26 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 323, v26);
          v25 = v39;
          if ( v39 )
            goto LABEL_37;
          goto LABEL_64;
        }
        v7 = 1;
        v44 = 1;
        v28 = v39;
        if ( v8 != v39 )
        {
          if ( v39 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v39 + 8LL))(v39);
          v29 = v8;
          v8 = v28;
          v45 = v28;
          if ( v29 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v29 + 16LL))(v29);
        }
        if ( v28 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v28 + 16LL))(v28);
      }
LABEL_52:
      v30 = v49;
      *(_DWORD *)v49 = v7;
      if ( *((struct IInputTarget **)v30 + 1) != v8 )
      {
        if ( v8 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 8LL))(v8);
        v31 = *((_QWORD *)v30 + 1);
        *((_QWORD *)v30 + 1) = v8;
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        v45 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v32 + 16LL))(v32);
      }
      v33 = v9;
      if ( v9 > 0 )
      {
        v34 = (__int64 *)v52;
        do
        {
          v35 = *v34;
          if ( *v34 )
          {
            *v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          }
          v34 += 3;
          --v33;
        }
        while ( v33 );
      }
      goto LABEL_64;
    }
  }
  v41 = 0LL;
  v15 = v43;
  v16 = (*(__int64 (__fastcall **)(__int64, struct IInputDisplay *, struct DeviceInfo *, struct IInputTarget *, int *))(*(_QWORD *)v14 + 32LL))(
          v14,
          v48,
          v47,
          v43,
          &v40);
  v6 = v16;
  if ( v16 >= 0 )
  {
    if ( v40 == 1 )
    {
      if ( !v37 )
      {
        v7 = 1;
        v44 = 1;
        v24 = v41;
        if ( v41 )
        {
          v8 = v41;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v41 + 8LL))(v41);
          v45 = v8;
          v24 = v41;
        }
        if ( v24 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v24 + 16LL))(v24);
          goto LABEL_39;
        }
        goto LABEL_52;
      }
      *(_DWORD *)v12 = 1;
    }
    else
    {
      if ( v40 != 2 )
      {
        v18 = v41;
LABEL_22:
        if ( v18 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
          v18 = v41;
        }
        if ( v18 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v10 = (unsigned int)v39;
        goto LABEL_27;
      }
      if ( !v37 )
      {
        v37 = 1;
        v21 = 0;
        v22 = v52;
        do
        {
          *((_DWORD *)v22 - 2) = 0;
          v23 = *(_QWORD *)v22;
          *(_QWORD *)v22 = 0LL;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          *((_DWORD *)v22 + 2) = 0;
          ++v21;
          v22 += 24;
        }
        while ( v21 < 5 );
        v9 = v38;
      }
      *(_DWORD *)v12 = 2;
    }
    v18 = v41;
    if ( *v11 != v41 )
    {
      v19 = v41;
      if ( v41 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v41 + 8LL))(v41);
        v18 = v41;
      }
      v20 = *v11;
      *v11 = v19;
      if ( v20 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
        v18 = v41;
      }
    }
    v38 = ++v9;
    v12 += 24;
    v11 += 3;
    goto LABEL_22;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 251, v16);
  v25 = v41;
  if ( v41 )
  {
    v41 = 0LL;
LABEL_37:
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_64:
  `eh vector destructor iterator'(
    v51,
    0x18uLL,
    5uLL,
    (void (*)(void *))std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>);
  if ( v8 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  return v6;
}
