/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00219B8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003C7C0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C003CA70 (GreUnlockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C00748B0 (UserReferenceDwmApiPort.c)
 */

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, PVOID *a2, void *a3)
{
  ULONG64 v5; // r8
  PVOID v6; // rbx
  int v7; // edi
  CompositionObject *v8; // rsi
  PVOID v9; // rax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v5 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v5 > MmUserProbeAddress )
    a2 = (PVOID *)MmUserProbeAddress;
  v6 = *a2;
  Object = *a2;
  LOBYTE(v5) = 1;
  v7 = DirectComposition::ResourceObject::ResolveHandle(
         a3,
         1LL,
         v5,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v7 >= 0 )
  {
    v8 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 134 )
    {
      GreLockDwmState();
      Object = 0LL;
      v7 = CompositionObject::OpenDwmHandle(v8, &Object);
      if ( v7 >= 0 )
      {
        v9 = UserReferenceDwmApiPort();
        v7 = DwmAsyncRegisterSharedVirtualDesktopVisual(v9, a1, v6, Object);
      }
      GreUnlockDwmState();
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
