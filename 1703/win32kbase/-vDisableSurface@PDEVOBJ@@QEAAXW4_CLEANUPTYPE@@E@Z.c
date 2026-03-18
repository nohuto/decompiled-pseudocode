/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0038A90
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009FA3C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::vDisableSurface(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 32) & 0x80000) == 0 )
    vDisableSynchronize(v3);
  if ( (int)IsvSpDisableSpritesSupported() >= 0 )
    vSpDisableSpritesWrap(*a1, a2);
  result = *a1;
  v8 = *(_QWORD *)(*a1 + 2568);
  if ( !v8 || !a3 )
  {
    *(_QWORD *)(result + 2568) = 0LL;
    return result;
  }
  *(_QWORD *)(result + 2568) = 0LL;
  v9 = (*(_DWORD *)(v3 + 32) & 0x8000) == 0;
  v11 = v8;
  if ( v9 || !a2 )
  {
    HmgDecrementShareReferenceCount(v8);
    result = *(_QWORD *)(v3 + 2736);
    v10 = 0LL;
    if ( !result )
      return result;
    result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(*a1 + 1816));
  }
  else
  {
    result = SURFREF::bDeleteSurface(&v11, a2);
    v10 = v11;
  }
  if ( v10 )
    return HmgDecrementShareReferenceCount(v10);
  return result;
}
