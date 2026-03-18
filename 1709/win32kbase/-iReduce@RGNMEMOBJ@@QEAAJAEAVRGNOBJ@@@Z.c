/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318
 * Callers:
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int16 *v11; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+28h] [rbp-18h]
  struct _RECTL v13; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0;
  v12 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11, v5, v6, v7);
  v13.left = -134217728;
  v13.right = 0x7FFFFFF;
  v13.top = -134217728;
  v13.bottom = 0x7FFFFFF;
  if ( v11
    && (RGNOBJ::vSet((RGNOBJ *)&v11, &v13),
        *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000,
        *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000,
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v11, a2, byte_1C018E255)) )
  {
    v4 = RGNOBJ::iComplexity(this);
  }
  else
  {
    v9 = *(_QWORD *)this;
    *(_DWORD *)(v9 + 80) = 120;
    v8 = v9 + 104;
    *(_QWORD *)(v9 + 84) = 1LL;
    *(_QWORD *)(v9 + 92) = 0LL;
    *(_DWORD *)(v9 + 100) = 0;
    *(_DWORD *)(v9 + 104) = 0;
    *(_DWORD *)(v9 + 108) = 0x80000000;
    *(_QWORD *)(v9 + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(v9 + 40) = v9 + 120;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v11, v8, v9);
  return v4;
}
