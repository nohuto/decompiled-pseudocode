/*
 * XREFs of ?DeliverInputToTarget@PointerProcessor@@AEAAJPEAUISystemInputRouter@@PEAUIInputDisplay@@PEAUInputInfo@@PEAPEAUPointer@@KPEAUIInputTarget@@@Z @ 0x180071884
 * Callers:
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PointerProcessor::DeliverInputToTarget(
        PointerProcessor *this,
        struct ISystemInputRouter *a2,
        struct IInputDisplay *a3,
        struct InputInfo *a4,
        struct Pointer **a5,
        unsigned int a6,
        struct IInputTarget *a7)
{
  struct Pointer **v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // r9d
  struct IInputTarget *v16; // r8
  PointerProcessor *v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = this;
  if ( a6 )
  {
    v9 = a5;
    v10 = a6;
    do
    {
      *((_DWORD *)*v9 + 5) = *((_DWORD *)*v9 + 3);
      v11 = (__int64)*v9++;
      *(_DWORD *)(v11 + 24) = *(_DWORD *)(v11 + 16);
      --v10;
    }
    while ( v10 );
  }
  v12 = (*(__int64 (__fastcall **)(struct IInputDisplay *, PointerProcessor **))(*(_QWORD *)a3 + 24LL))(a3, &v18);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v16 = a7;
    *((_QWORD *)a4 + 4) = v18;
    v12 = (*(__int64 (__fastcall **)(struct ISystemInputRouter *, struct InputInfo *, struct IInputTarget *))(*(_QWORD *)a2 + 72LL))(
            a2,
            a4,
            v16);
    v14 = v12;
    if ( v12 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v15 = 585;
      goto LABEL_10;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v15 = 580;
LABEL_10:
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, v15, v12);
  }
  return v14;
}
