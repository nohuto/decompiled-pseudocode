/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00F09F0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int16 *v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 216;
  v7 = *(unsigned int *)(v2 + 80);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v8 >= (unsigned int)v7 || *(_DWORD *)(v2 + 24) <= 0xD8u) && (v8 <= 0xD8 || *(_DWORD *)(v2 + 24) > 0xD8u) )
  {
    memmove((void *)(v4 + 80), (const void *)(v2 + 80), v7 - 80);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)a2
                                        - 104
                                        + *(_QWORD *)this
                                        + 104LL;
    return 1LL;
  }
  if ( (unsigned int)v7 > 0xD8 )
    v6 = *(_DWORD *)(v2 + 80);
  v18 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, v6);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17, v10, v11, v12);
  if ( v17 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v17, a2);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v17);
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v17, v15, v16);
    return 1LL;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v17, v13, v14);
  return 0LL;
}
