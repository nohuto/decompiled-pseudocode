/*
 * XREFs of ?CRotationManagerSync_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180039508
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Make@VCRotationManagerSync@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRotationManagerSync@@@12@XZ @ 0x18003A24C (--$Make@VCRotationManagerSync@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCRotationManagerSync@@@12@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  const struct _GUID *v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  const struct _GUID *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  *a2 = 0LL;
  v3 = (_QWORD *)Microsoft::WRL::Details::Make<CRotationManagerSync>(&v10);
  v4 = *v3 + 56LL;
  v5 = -(__int64)(*v3 != 0LL);
  *v3 = 0LL;
  v6 = v10;
  v7 = v4 & v5;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v6->Data1 + 16LL))(v6);
  }
  v8 = v7 == 0 ? 0x8007000E : 0;
  if ( v7 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v7)(v7, &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
