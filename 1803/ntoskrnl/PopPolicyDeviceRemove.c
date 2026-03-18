/*
 * XREFs of PopPolicyDeviceRemove @ 0x14076B12C
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x14076B1A0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1)
{
  LONG_PTR result; // rax
  LONG_PTR *v3; // rcx
  __int64 v4; // rax

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v3 = *(LONG_PTR **)(a1 + 8), *v3 != a1) )
      __fastfail(3u);
    *v3 = result;
    *(_QWORD *)(result + 8) = v3;
    v4 = *(int *)(a1 + 16);
    *(_QWORD *)a1 = 0LL;
    (*((void (__fastcall **)(__int64))&unk_1403981A8 + 4 * v4))(a1);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}
