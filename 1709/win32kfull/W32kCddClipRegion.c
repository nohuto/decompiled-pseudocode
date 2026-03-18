/*
 * XREFs of W32kCddClipRegion @ 0x1C0252D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C01446A4 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C0144718 (--1EngModeState@@QEAA@XZ.c)
 */

__int64 __fastcall W32kCddClipRegion(HRGN a1, HRGN a2, __int64 a3, __int64 a4)
{
  struct RGNOBJ *v7; // rbp
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v12, (__int64)a2, a3, a4);
  v7 = (struct RGNOBJ *)((a3 + 56) & -(__int64)(a3 != 0));
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v10, a2, 1);
  v8 = 0;
  if ( v11[0] && v10[0] )
    v8 = RGNOBJAPI::iCombine((RGNOBJAPI *)v11, (struct RGNOBJ *)v10, v7, 1);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v10);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  EngModeState::~EngModeState((EngModeState *)&v12);
  return v8;
}
