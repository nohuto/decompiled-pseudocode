/*
 * XREFs of ?OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A40B0
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
__int64 __fastcall TargetingArbitrationComponent::OnHitTest(
        TargetingArbitrationComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        int a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  unsigned int v7; // r13d
  int v8; // r15d
  struct IInputTarget *v9; // rdi
  int v10; // r14d
  unsigned int v11; // eax
  struct IInputTarget **v12; // rsi
  char *v13; // r12
  __int64 *v14; // rcx
  __int64 v15; // rcx
  struct IInputTarget *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  struct IInputTarget *v19; // rdx
  struct IInputTarget *v20; // rbx
  struct IInputTarget *v21; // rcx
  unsigned int v22; // r14d
  _BYTE *v23; // rbx
  __int64 v24; // rcx
  struct IInputTarget *v25; // rcx
  int v26; // esi
  struct IInputTarget *v27; // rcx
  int v28; // r12d
  int v29; // eax
  __int64 v30; // rcx
  struct IInputTarget *v31; // rbx
  struct IInputTarget *v32; // rcx
  struct InputTargetingDecision *v33; // r14
  __int64 v34; // rcx
  struct IInputTarget *v35; // rcx
  __int64 v36; // rsi
  __int64 *v37; // rbx
  __int64 v38; // rcx
  char v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+44h] [rbp-BCh]
  unsigned int v42; // [rsp+48h] [rbp-B8h]
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  struct IInputTarget *v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+60h] [rbp-A0h]
  struct IInputTarget *v46; // [rsp+68h] [rbp-98h] BYREF
  int v47; // [rsp+70h] [rbp-90h]
  struct IInputTarget *v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+80h] [rbp-80h]
  char *v50; // [rsp+88h] [rbp-78h]
  struct IInputTarget *v51; // [rsp+90h] [rbp-70h]
  struct InputInfo *v52; // [rsp+98h] [rbp-68h]
  struct IInputDisplay *v53; // [rsp+A0h] [rbp-60h]
  struct InputTargetingDecision *v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  char v56[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v57[120]; // [rsp+C8h] [rbp-38h] BYREF

  v55 = -2LL;
  LODWORD(v46) = a4;
  v52 = a3;
  v53 = a2;
  v51 = a5;
  v54 = a6;
  v7 = 0;
  v8 = 0;
  v47 = 0;
  v9 = 0LL;
  v48 = 0LL;
  v10 = 0;
  v49 = 0;
  v40 = 0;
  `eh vector constructor iterator'(
    v56,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>);
  v41 = 0;
  v11 = 0;
  v42 = 0;
  v12 = (struct IInputTarget **)v57;
  v13 = v56;
  v14 = (__int64 *)((char *)this + 24);
  v50 = (char *)this + 24;
  while ( 1 )
  {
    v15 = *v14;
    if ( v15 )
      break;
LABEL_29:
    v42 = ++v11;
    v14 = (__int64 *)(v50 + 8);
    v50 += 8;
    if ( v11 >= 5 )
    {
      v26 = v49;
      v16 = v51;
LABEL_41:
      if ( v40 )
      {
        v46 = 0LL;
        v28 = v41;
        v29 = BufferedInputTarget::Create(v16, (struct InputTargetingDecision *)v56, v41, &v46);
        v7 = v29;
        if ( v29 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v30, &MinInput_Warning_CheckResult, 0, 197, v29);
          v27 = v46;
          if ( v46 )
            goto LABEL_39;
          goto LABEL_67;
        }
        v8 = 1;
        v47 = 1;
        v31 = v46;
        if ( v9 != v46 )
        {
          if ( v46 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v46 + 8LL))(v46);
          v32 = v9;
          v9 = v31;
          v48 = v31;
          if ( v32 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v32 + 16LL))(v32);
        }
        if ( v31 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_55:
        v33 = v54;
        *(_DWORD *)v54 = v8;
        if ( *((struct IInputTarget **)v33 + 1) != v9 )
        {
          if ( v9 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 8LL))(v9);
          v34 = *((_QWORD *)v33 + 1);
          *((_QWORD *)v33 + 1) = v9;
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        *((_DWORD *)v33 + 4) = v26;
        v35 = v9;
        if ( v9 )
        {
          v9 = 0LL;
          v48 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v35 + 16LL))(v35);
        }
        v36 = v28;
        if ( v28 > 0 )
        {
          v37 = (__int64 *)v57;
          do
          {
            v38 = *v37;
            if ( *v37 )
            {
              *v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
            }
            v37 += 3;
            --v36;
          }
          while ( v36 );
        }
        goto LABEL_67;
      }
LABEL_54:
      v28 = v41;
      goto LABEL_55;
    }
  }
  v44 = 0LL;
  v16 = v51;
  v17 = (*(__int64 (__fastcall **)(__int64, struct IInputDisplay *, struct InputInfo *, _QWORD, struct IInputTarget *, int *))(*(_QWORD *)v15 + 24LL))(
          v15,
          v53,
          v52,
          (unsigned int)v46,
          v51,
          &v43);
  v7 = v17;
  if ( v17 >= 0 )
  {
    if ( v43 == 1 )
    {
      if ( !v40 )
      {
        v8 = 1;
        v47 = 1;
        v25 = v44;
        if ( v44 )
        {
          v9 = v44;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v44 + 8LL))(v44);
          v48 = v9;
          v25 = v44;
        }
        v26 = v45;
        v49 = v45;
        if ( v25 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
          goto LABEL_41;
        }
        goto LABEL_54;
      }
      *(_DWORD *)v13 = 1;
    }
    else
    {
      if ( v43 != 2 )
      {
        v19 = v44;
LABEL_22:
        if ( v43 )
        {
          v10 |= v45;
          v49 = v10;
        }
        if ( v19 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
          v19 = v44;
        }
        if ( v19 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v11 = v42;
        goto LABEL_29;
      }
      if ( !v40 )
      {
        v40 = 1;
        v22 = 0;
        v23 = v57;
        do
        {
          *((_DWORD *)v23 - 2) = 0;
          v24 = *(_QWORD *)v23;
          *(_QWORD *)v23 = 0LL;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          *((_DWORD *)v23 + 2) = 0;
          ++v22;
          v23 += 24;
        }
        while ( v22 < 5 );
        v10 = v49;
      }
      *(_DWORD *)v13 = 2;
    }
    v19 = v44;
    if ( *v12 != v44 )
    {
      v20 = v44;
      if ( v44 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v44 + 8LL))(v44);
        v19 = v44;
      }
      v21 = *v12;
      *v12 = v20;
      if ( v21 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v21 + 16LL))(v21);
        v19 = v44;
      }
    }
    ++v41;
    v13 += 24;
    v12 += 3;
    goto LABEL_22;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 119, v17);
  v27 = v44;
  if ( v44 )
  {
    v44 = 0LL;
LABEL_39:
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
  }
LABEL_67:
  `eh vector destructor iterator'(
    v56,
    0x18uLL,
    5uLL,
    (void (*)(void *))std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>);
  if ( v9 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
