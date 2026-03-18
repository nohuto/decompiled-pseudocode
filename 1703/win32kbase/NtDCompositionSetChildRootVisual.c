/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C0003F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0010088 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C00275D0 (UserReferenceDwmApiPort.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0027680 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2)
{
  CompositionObject *v2; // rbx
  int v3; // edi
  __int64 v5; // rax
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v3 = DirectComposition::ResourceObject::ResolveHandle(a2, 1u, 1, (struct DirectComposition::ResourceObject **)&v7);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v2 = (CompositionObject *)v7;
  if ( v7 && *((_DWORD *)v7 + 9) != 31 )
  {
    v3 = -1073741811;
  }
  else
  {
LABEL_5:
    GreLockDwmState();
    v7 = 0LL;
    if ( v2 )
      v3 = CompositionObject::OpenDwmHandle(v2, &v7);
    if ( v3 >= 0 )
    {
      v5 = UserReferenceDwmApiPort();
      v3 = DwmAsyncSetChildRootVisual(v5, a1, v7);
    }
    GreUnlockDwmState();
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v3;
}
