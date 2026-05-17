/*
 * XREFs of sub_18007DCD4 @ 0x18007DCD4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlLookupFunctionEntry @ 0x180034710 (RtlLookupFunctionEntry.c)
 *     sub_18007DDA4 @ 0x18007DDA4 (sub_18007DDA4.c)
 */

__int64 sub_18007DCD4()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  sub_18001DEA8(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))sub_18007DDA4(i);
    if ( !v1 )
      break;
    v2 = byte_18016B3D5;
    if ( v1 == RtlRaiseException )
      v2 = i;
    byte_18016B3D5 = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    *(_QWORD *)&dword_18016B3D0[2 * v5 + 8] = v3;
    v8 = v4 + EndAddress;
    *(_QWORD *)&dword_18016B3D0[2 * v5 + 6] = v4;
    v9 = qword_18016B3D8;
    if ( v7 < qword_18016B3D8 )
      v9 = v7;
    qword_18016B3D8 = v9;
    v10 = qword_18016B3E0;
    if ( v8 > qword_18016B3E0 )
      v10 = v8;
    qword_18016B3E0 = v10;
  }
  dword_18016B3D0[0] = i;
  return sub_18001DEA8(1);
}
