/*
 * XREFs of ?Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z @ 0x180014C74
 * Callers:
 *     ?OnHitTest@GestureTargetingComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180013940 (-OnHitTest@GestureTargetingComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@.c)
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z @ 0x18002C0E0 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z @ 0x1800149F8 (--0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureTargetingTarget::Create(
        struct GestureTargetingComponent *a1,
        struct IInputTarget *a2,
        struct GestureTargetingTarget **a3)
{
  unsigned int v6; // ebx
  char v7; // al
  int v8; // r9d
  GestureTargetingTarget *v9; // rax
  GestureTargetingTarget *v10; // rdi
  struct GestureTargetingTarget *v11; // rax

  v6 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a1 )
    {
      v9 = (GestureTargetingTarget *)malloc(0x80uLL);
      v10 = v9;
      if ( v9 )
        memset(v9, 0, 0x80uLL);
      if ( v10 )
        v11 = GestureTargetingTarget::GestureTargetingTarget(v10, a1, a2);
      else
        v11 = 0LL;
      if ( v11 )
      {
        *a3 = v11;
        return v6;
      }
      v7 = 14;
      v6 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 83;
        goto LABEL_15;
      }
    }
    else
    {
      v7 = 87;
      v6 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 74;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v7 = 3;
    v6 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 67;
LABEL_15:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 4, v8, v7);
    }
  }
  return v6;
}
