/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0044B50
 * Callers:
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0072744 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0024450 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     PushThreadGuardedObject @ 0x1C0044C70 (PushThreadGuardedObject.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0044D08 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00651D0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  struct _BASEOBJECT *v2; // rax
  struct _BASEOBJECT *v3; // rsi
  struct _BASEOBJECT *v4; // rbx

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 28) = 1;
  }
  v2 = (struct _BASEOBJECT *)AllocateIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>();
  v3 = v2;
  if ( v2 )
  {
    v4 = 0LL;
    if ( HmgInsertObjectInternal(v2, 3u, 7) )
    {
      *((_QWORD *)this + 1) = v3;
      v4 = v3;
      *((_DWORD *)v3 + 20) = 3;
      *(_QWORD *)this = 0LL;
    }
    else
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v3);
    }
    if ( v4 )
      _InterlockedDecrement((volatile signed __int32 *)v4 + 3);
  }
  return this;
}
