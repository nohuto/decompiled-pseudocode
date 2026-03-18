/*
 * XREFs of ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005DB08
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0113D78 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005E39C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

struct tagWND *__fastcall DCETopLevelSpeedHitTest(
        struct tagDESKTOP *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3)
{
  __int64 v4; // rdi
  __int64 i; // rbx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  for ( i = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
  {
    if ( (unsigned int)DCEIsWindowHit((struct tagWND *)i, a2, a3) )
    {
      v4 = i;
      if ( *(char *)(i + 59) < 0 )
        v4 = 0LL;
      break;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  return (struct tagWND *)v4;
}
