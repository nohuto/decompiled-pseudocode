/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00691E0
 * Callers:
 *     GdiProcessCallout @ 0x1C0068BE0 (GdiProcessCallout.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 */

void __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  HSEMAPHORE v8; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  v8 = ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v2 = (_QWORD *)(a1 + 224);
  v3 = (_QWORD *)*v2;
  if ( *v2 )
  {
    while ( v3 != v2 )
    {
      v5 = v3;
      v3 = (_QWORD *)*v3;
      *(v5 - 23) = 0LL;
      *(v5 - 24) = 0LL;
      v6 = *v5;
      v7 = (_QWORD *)v5[1];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v5[1] = v5;
      *v5 = v5;
    }
  }
  v2[1] = v2;
  *v2 = v2;
  SEMOBJ::vUnlock((PERESOURCE *)&v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
}
