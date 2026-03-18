/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00465B0
 * Callers:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C0044D98 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0044E0C (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int16 *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v11 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v10, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10, v4, v5, v6);
  if ( v10 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v10, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v10);
    v3 = 1;
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v10, v7, v8);
  return v3;
}
