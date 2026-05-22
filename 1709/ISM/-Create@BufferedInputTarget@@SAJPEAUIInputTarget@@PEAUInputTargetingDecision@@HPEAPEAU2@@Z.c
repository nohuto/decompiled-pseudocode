/*
 * XREFs of ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x1800A4E04
 * Callers:
 *     ?OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A40B0 (-OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarg.c)
 *     ?OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A4540 (-OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEA.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0BufferedInputTarget@@IEAA@XZ @ 0x1800A4A6C (--0BufferedInputTarget@@IEAA@XZ.c)
 *     ?Initialize@BufferedInputTarget@@IEAAJPEAUIInputTarget@@PEAUInputTargetingDecision@@H@Z @ 0x1800A4C1C (-Initialize@BufferedInputTarget@@IEAAJPEAUIInputTarget@@PEAUInputTargetingDecision@@H@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BufferedInputTarget::Create(
        struct IInputTarget *a1,
        struct InputTargetingDecision *a2,
        int a3,
        struct IInputTarget **a4)
{
  BufferedInputTarget *v8; // rax
  BufferedInputTarget *v9; // rbx
  BufferedInputTarget *v10; // rdi
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx

  if ( a1 && a2 && a4 )
  {
    v8 = (BufferedInputTarget *)malloc(0xD0uLL);
    v9 = v8;
    if ( v8 )
      memset(v8, 0, 0xD0uLL);
    if ( v9 )
      v10 = BufferedInputTarget::BufferedInputTarget(v9);
    else
      v10 = 0LL;
    if ( v10 )
    {
      v13 = BufferedInputTarget::Initialize(v10, a1, a2, a3);
      v11 = v13;
      if ( v13 >= 0 )
      {
        *a4 = v10;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 111, v13);
      }
      if ( v11 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 1) + 24LL))((__int64)v10 + 8, 1LL);
    }
    else
    {
      v11 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 105;
LABEL_20:
        McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v12, v11);
      }
    }
  }
  else
  {
    v11 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 98;
      goto LABEL_20;
    }
  }
  return (unsigned int)v11;
}
