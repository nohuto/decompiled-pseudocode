/*
 * XREFs of SwitchedRtlGetVersion @ 0x180007A78
 * Callers:
 *     RtlSwitchedVVI @ 0x180007650 (RtlSwitchedVVI.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180007D50 (RtlGetNtProductType.c)
 *     SbSelectProcedure @ 0x180021390 (SbSelectProcedure.c)
 *     RtlStringCbCopyW @ 0x1800528E4 (RtlStringCbCopyW.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v1; // rsi
  int v3; // edi
  __int64 (*v4)(void); // rax
  int v5; // edi
  wchar_t *Buffer; // r8
  int v7; // edi
  _NT_PRODUCT_TYPE v8; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  v3 = 0;
  a1[1] = v1->OSMajorVersion;
  a1[2] = v1->OSMinorVersion;
  a1[3] = v1->OSBuildNumber;
  a1[4] = v1->OSPlatformId;
  v4 = (__int64 (*)(void))qword_180160078;
  if ( qword_180160078
    || (v4 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0LL, "kLsE", 0LL), (qword_180160078 = (__int64)v4) != 0) )
  {
    v3 = v4();
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    a1[2] = 2;
    a1[3] = 9200;
LABEL_17:
    a1[1] = 6;
    goto LABEL_5;
  }
  if ( v5 == 1 )
  {
    a1[2] = 3;
    a1[3] = 9600;
    goto LABEL_17;
  }
LABEL_5:
  Buffer = v1->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(a1 + 5, 256LL, Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v7 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v1->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v1->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v7 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&NtProductType) )
    {
      v8 = NtProductType;
      *((_BYTE *)a1 + 282) = NtProductType;
      if ( v8 == NtProductWinNt )
      {
        *((_WORD *)a1 + 140) &= ~0x10u;
        if ( *a1 == 292 )
          a1[71] &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
