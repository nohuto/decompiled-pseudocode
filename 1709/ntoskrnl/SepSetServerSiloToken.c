/*
 * XREFs of SepSetServerSiloToken @ 0x140728934
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x140728644 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14012BB1C (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x14045CEFC (SepReferenceLogonSessionSilo.c)
 *     SepAddTokenLogonSession @ 0x14072EF40 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x14072F3CC (SepRemoveTokenLogonSession.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo((_DWORD *)(a1 + 24), a2, &v8);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( SeTokenLeakTracking )
      SepRemoveTokenLogonSession(a1);
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_QWORD *)(a1 + 216) = v8;
    if ( SeTokenLeakTracking )
      SepAddTokenLogonSession(a1);
  }
  if ( v5 >= 0 )
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_10:
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
