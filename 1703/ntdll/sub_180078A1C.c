/*
 * XREFs of sub_180078A1C @ 0x180078A1C
 * Callers:
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_180078A1C(_QWORD *a1)
{
  int v2; // ebx
  struct _PEB *v3; // rax
  _WORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  _ACTIVATION_CONTEXT *v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( qword_18015BF40 )
  {
    v3 = NtCurrentPeb();
    if ( a1 != (_QWORD *)qword_18015AE50 || !v3->ActivationContextData )
    {
      v4 = (_WORD *)a1[10];
      if ( a1 == (_QWORD *)qword_18015AE50
        && *v4 == 92
        && v4[1] == 63
        && v4[2] == 63
        && v4[3] == 92
        && v4[4]
        && v4[5] == 58
        && v4[6] == 92 )
      {
        v4 += 4;
      }
      v5 = ((__int64 (__fastcall *)(_QWORD, _WORD *, __int64 *))qword_18015BF40)(a1[6], v4, &v9);
      v2 = v5;
      if ( (unsigned int)(v5 + 1073741687) <= 2
        || v5 == -1073741637
        || v5 == -1073741809
        || v5 == -1073741822
        || v5 == -1073741308 )
      {
        if ( (dword_180155A10 & 5) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            577,
            (unsigned int)"LdrpFindDllActivationContext",
            2,
            "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
            a1 + 9,
            v5);
        v2 = 0;
      }
      v6 = v9;
      if ( v9 )
      {
        v8 = (_ACTIVATION_CONTEXT *)a1[17];
        if ( v8 )
        {
          RtlReleaseActivationContext(v8);
          v6 = v9;
        }
        a1[17] = v6;
      }
    }
  }
  if ( v2 < 0 )
  {
    if ( (dword_180155A10 & 3) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        606,
        (unsigned int)"LdrpFindDllActivationContext",
        0,
        "Querying the active activation context failed with status 0x%08lx\n",
        v2);
    if ( (dword_180155A10 & 0x10) != 0 )
      __debugbreak();
  }
  return (unsigned int)v2;
}
