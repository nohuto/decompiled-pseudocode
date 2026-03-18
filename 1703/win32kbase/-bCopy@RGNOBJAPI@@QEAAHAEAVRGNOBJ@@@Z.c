/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003E430
 * Callers:
 *     GreCopyVisRgn @ 0x1C0028A30 (GreCopyVisRgn.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C003D620 (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003D750 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003E500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int16 *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0;
  if ( (unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(this, a2, &v8) )
  {
    v7 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v6, v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v6);
    if ( v6 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v6, a2);
      v2 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v6);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v6);
    return v2;
  }
  else
  {
    memmove(
      (void *)(*(_QWORD *)this + 80LL),
      (const void *)(*(_QWORD *)a2 + 80LL),
      *(unsigned int *)(*(_QWORD *)a2 + 80LL) - 80LL);
    result = 1LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)a2
                                        - 104
                                        + *(_QWORD *)this
                                        + 104LL;
  }
  return result;
}
