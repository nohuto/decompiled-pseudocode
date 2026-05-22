/*
 * XREFs of ?Create@TargetingArbitrationComponent@@SAJPEAPEAV1@@Z @ 0x1800A3F50
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0TargetingArbitrationComponent@@IEAA@XZ @ 0x1800A3DE4 (--0TargetingArbitrationComponent@@IEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TargetingArbitrationComponent::Create(struct TargetingArbitrationComponent **a1)
{
  unsigned int v2; // ebx
  char v3; // al
  int v4; // r9d
  TargetingArbitrationComponent *v5; // rax
  TargetingArbitrationComponent *v6; // rdi
  struct TargetingArbitrationComponent *v7; // rax

  v2 = 0;
  if ( a1 )
  {
    v5 = (TargetingArbitrationComponent *)malloc(0x48uLL);
    v6 = v5;
    if ( v5 )
      memset(v5, 0, 0x48uLL);
    if ( v6 )
      v7 = TargetingArbitrationComponent::TargetingArbitrationComponent(v6);
    else
      v7 = 0LL;
    if ( v7 )
    {
      *a1 = v7;
      return v2;
    }
    v3 = 14;
    v2 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 46;
      goto LABEL_12;
    }
  }
  else
  {
    v3 = 87;
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 39;
LABEL_12:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v4, v3);
    }
  }
  return v2;
}
