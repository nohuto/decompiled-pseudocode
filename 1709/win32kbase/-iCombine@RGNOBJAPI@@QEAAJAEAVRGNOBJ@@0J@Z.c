/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0043370
 * Callers:
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0043500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(RGNOBJAPI *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int16 *v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  v13 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, *(_DWORD *)(*(_QWORD *)this + 80LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
  if ( !v12
    || (RGNOBJ::vCopy((RGNOBJ *)&v12, this), (v10 = RGNOBJ::iCombine((RGNOBJ *)&v12, a2, a3, a4)) == 0)
    || !(unsigned int)RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v12) )
  {
    v10 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v12, v8, v9);
  return v10;
}
