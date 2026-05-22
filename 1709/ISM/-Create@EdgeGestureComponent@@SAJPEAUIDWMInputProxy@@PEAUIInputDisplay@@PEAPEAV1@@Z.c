/*
 * XREFs of ?Create@EdgeGestureComponent@@SAJPEAUIDWMInputProxy@@PEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180029FEC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0EdgeGestureComponent@@IEAA@XZ @ 0x180029D6C (--0EdgeGestureComponent@@IEAA@XZ.c)
 *     ?Initialize@CShellEdgyNotifier@@QEAAJXZ @ 0x18002BD18 (-Initialize@CShellEdgyNotifier@@QEAAJXZ.c)
 *     ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x18002E488 (-Initialize@InputEdgyNotifier@@QEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureComponent::Create(
        struct IDWMInputProxy *a1,
        struct IInputDisplay *a2,
        struct EdgeGestureComponent **a3)
{
  unsigned int v6; // ebx
  int v7; // r9d
  EdgeGestureComponent *v8; // rax
  EdgeGestureComponent *v9; // rbx
  EdgeGestureComponent *v10; // rsi
  int v11; // edi
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  _DWORD *v16; // r14
  int v17; // eax
  int v18; // r9d

  if ( a3 )
  {
    v8 = (EdgeGestureComponent *)malloc(0x148uLL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0x148uLL);
    if ( v9 )
      v10 = EdgeGestureComponent::EdgeGestureComponent(v9);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v7 = 82;
      goto LABEL_4;
    }
    if ( !a1 )
    {
      v6 = -2147024809;
      v11 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 49;
LABEL_16:
        McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v12, 87);
        goto LABEL_37;
      }
      goto LABEL_40;
    }
    *((_QWORD *)v10 + 9) = a1;
    if ( !a2 )
    {
      v6 = -2147024809;
      v11 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 52;
        goto LABEL_16;
      }
LABEL_40:
      if ( v11 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 2) + 24LL))((__int64)v10 + 16, 1LL);
      return v6;
    }
    if ( *((struct IInputDisplay **)v10 + 10) != a2 )
    {
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
      v14 = *((_QWORD *)v10 + 10);
      *((_QWORD *)v10 + 10) = a2;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (_DWORD *)((char *)v10 + 36);
    v16 = (_DWORD *)((char *)v10 + 32);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v10 + 10) + 32LL))(
            *((_QWORD *)v10 + 10),
            (__int64)v10 + 32,
            (__int64)v10 + 36);
    v11 = v17;
    if ( v17 >= 0 )
    {
      if ( !*v16 && !*v15 )
      {
        *v16 = 1024;
        *v15 = 768;
      }
      v17 = InputEdgyNotifier::Initialize((EdgeGestureComponent *)((char *)v10 + 112));
      v11 = v17;
      if ( v17 >= 0 )
      {
        v17 = CShellEdgyNotifier::Initialize((EdgeGestureComponent *)((char *)v10 + 224));
        v11 = v17;
        if ( v17 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_36;
        v18 = 64;
        goto LABEL_35;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v18 = 63;
        goto LABEL_35;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v18 = 55;
LABEL_35:
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, v18, v17);
    }
LABEL_36:
    v6 = v11;
    if ( v11 < 0 )
    {
LABEL_37:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 84, v11);
      goto LABEL_40;
    }
    *a3 = v10;
    goto LABEL_40;
  }
  v6 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 79;
LABEL_4:
    McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v7, v6);
  }
  return v6;
}
