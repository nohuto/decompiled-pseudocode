/*
 * XREFs of PopPolicyDeviceRemove @ 0x1406CF4AC
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x1406CF520 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1)
{
  LONG_PTR result; // rax
  LONG_PTR *v3; // rcx
  __int64 v4; // rax

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(LONG_PTR **)(a1 + 8);
    if ( *(_QWORD *)(result + 8) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = result;
    *(_QWORD *)(result + 8) = v3;
    v4 = *(int *)(a1 + 16);
    *(_QWORD *)a1 = 0LL;
    (*((void (__fastcall **)(__int64))&unk_14033D308 + 4 * v4))(a1);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObject(*(PVOID *)(a1 + 48));
  }
  return result;
}
