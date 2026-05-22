/*
 * XREFs of ?s_InteractionOutputCallback@TapProcessor@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800B6670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TapProcessor::s_InteractionOutputCallback(_QWORD *a1, const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]

  if ( *(_DWORD *)a2 == 2 )
  {
    v2 = (int)*((float *)a2 + 4);
    v9 = 0LL;
    v10 = 0;
    v3 = (int)*((float *)a2 + 3);
    v4 = *((_DWORD *)a2 + 2);
    HIDWORD(v9) = v3;
    v5 = v4 - 1;
    if ( v5 && (v6 = v5 - 1) != 0 )
    {
      v7 = v6 - 1;
      if ( v7 )
        LODWORD(v9) = v7 == 1;
      else
        LODWORD(v9) = 16;
    }
    else
    {
      LODWORD(v9) = 2;
    }
    if ( *((_BYTE *)a1 + 72) )
    {
      v8 = a1[7];
      v10 = v2;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v9);
    }
  }
}
