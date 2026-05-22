/*
 * XREFs of ?OnHitTest@MagnifierComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A58D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x1800A610C (-Initialize@MagnifierTarget@@IEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierComponent::OnHitTest(
        MagnifierComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  unsigned int v8; // r15d
  __int64 v9; // rbx
  HMODULE LibraryA; // rax
  int v11; // ebp
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  int v17; // r14d
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx

  v8 = 0;
  v9 = 0LL;
  if ( *((_BYTE *)this + 57) && !*((_QWORD *)this + 8) )
  {
    LibraryA = LoadLibraryA("MobileUIRes.dll");
    *((_QWORD *)this + 8) = LibraryA;
    if ( LibraryA )
      *((_QWORD *)this + 9) = GetProcAddress(LibraryA, "MagnifierSetRect");
    else
      *((_QWORD *)this + 9) = 0LL;
    *((_BYTE *)this + 57) = 0;
  }
  if ( *((_QWORD *)this + 9) && (((*(_DWORD *)a3 & 0x88) == 8) & *((_BYTE *)this + 56)) != 0 )
  {
    v11 = 2;
    if ( !*((_QWORD *)this + 10) )
    {
      v12 = *((_QWORD *)this + 10);
      if ( v12 )
      {
        *((_QWORD *)this + 10) = 0LL;
        (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v12 + 16LL))(v12, a2);
      }
      v13 = malloc(0x60uLL);
      v15 = v13;
      if ( v13 )
        memset(v13, 0, 0x60uLL);
      if ( v15 )
      {
        v15[3] = &RefCountedObject::`vftable';
        *((_DWORD *)v15 + 8) = 1;
        *v15 = &MagnifierTarget::`vftable'{for `IBufferedInputClient'};
        v15[1] = &MagnifierTarget::`vftable'{for `IInputTarget'};
        v15[2] = &MagnifierTarget::`vftable'{for `ITouchInfoAdapterClient'};
        v15[3] = &MagnifierTarget::`vftable'{for `RefCountedObject'};
        v15[6] = 0LL;
        v15[7] = 0LL;
        v15[8] = 0LL;
        *((_WORD *)v15 + 36) = 1;
        v15[5] = this;
        v16 = v15[7];
        if ( v16 )
        {
          v15[7] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v14 = v15[6];
        if ( v14 )
        {
          v15[6] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        v18 = MagnifierTarget::Initialize((MagnifierTarget *)v15);
        v17 = v18;
        if ( v18 >= 0 )
        {
          *((_QWORD *)this + 10) = v15;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 105, v18);
        }
        if ( v17 < 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(v15[3] + 24LL))(v15 + 3, 1LL);
      }
      else
      {
        v8 = -2147024882;
        v17 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 102, 14);
          goto LABEL_30;
        }
      }
      v8 = v17;
      if ( v17 < 0 )
      {
LABEL_30:
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 199, v17);
        goto LABEL_42;
      }
    }
    v19 = *((_QWORD *)this + 10);
    v20 = v19 + 8;
    v21 = -v19;
    v9 = v20 & -(__int64)(v21 != 0);
    if ( v9 )
      (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v9 + 8LL))(v20 & -(__int64)(v21 != 0), a2);
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)a6 = v11;
  if ( *((_QWORD *)a6 + 1) != v9 )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v9 + 8LL))(v9, a2);
    v22 = *((_QWORD *)a6 + 1);
    *((_QWORD *)a6 + 1) = v9;
    if ( v22 )
      (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v22 + 16LL))(v22, a2);
  }
  *((_DWORD *)a6 + 4) = 0;
LABEL_42:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
