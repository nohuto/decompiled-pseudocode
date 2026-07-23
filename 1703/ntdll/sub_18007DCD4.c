/*
 * XREFs of sub_18007DCD4 @ 0x18007DCD4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     sub_18007DDA4 @ 0x18007DDA4 (sub_18007DDA4.c)
 */

void sub_18007DCD4()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // r8
  ULONG_PTR ScpArm64EcCfgCheckFunction; // rax
  ULONG_PTR ScpArm64EcCfgCheckESFunction; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  sub_18001DEA8(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))sub_18007DDA4(i);
    if ( !v1 )
      break;
    v2 = BYTE5(LdrSystemDllInitBlock.ScpArm64EcCallCheck);
    if ( v1 == RtlRaiseException )
      v2 = i;
    BYTE5(LdrSystemDllInitBlock.ScpArm64EcCallCheck) = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    *((_QWORD *)&LdrSystemDllInitBlock + v5 + 38) = v3;
    v8 = v4 + EndAddress;
    *((_QWORD *)&LdrSystemDllInitBlock + v5 + 37) = v4;
    ScpArm64EcCfgCheckFunction = LdrSystemDllInitBlock.ScpArm64EcCfgCheckFunction;
    if ( v7 < LdrSystemDllInitBlock.ScpArm64EcCfgCheckFunction )
      ScpArm64EcCfgCheckFunction = v7;
    LdrSystemDllInitBlock.ScpArm64EcCfgCheckFunction = ScpArm64EcCfgCheckFunction;
    ScpArm64EcCfgCheckESFunction = LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction;
    if ( v8 > LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction )
      ScpArm64EcCfgCheckESFunction = v8;
    LdrSystemDllInitBlock.ScpArm64EcCfgCheckESFunction = ScpArm64EcCfgCheckESFunction;
  }
  LODWORD(LdrSystemDllInitBlock.ScpArm64EcCallCheck) = i;
  sub_18001DEA8(1);
}
