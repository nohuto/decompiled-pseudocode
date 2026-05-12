/*
 * XREFs of RaCallMiniportFreeResources @ 0x1C002EE40
 * Callers:
 *     RaDeleteMiniport @ 0x1C0066100 (RaDeleteMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaCallMiniportFreeResources(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  void (__fastcall *v3)(__int64); // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 232);
    if ( v1 )
    {
      v2 = *(_QWORD *)(a1 + 240);
      if ( v2 )
      {
        if ( (*(_BYTE *)(a1 + 248) & 4) != 0 )
        {
          v3 = *(void (__fastcall **)(__int64))(v1 + 136);
          if ( v3 )
            v3(v2 + 16);
        }
      }
    }
  }
}
