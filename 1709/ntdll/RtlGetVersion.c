/*
 * XREFs of RtlGetVersion @ 0x180007C00
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800500B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180085B10 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180007D50 (RtlGetNtProductType.c)
 *     RtlStringCbCopyW @ 0x1800528E4 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  struct _PEB *v1; // rdi
  wchar_t *Buffer; // r8
  int v4; // esi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = NtCurrentPeb();
  a1[1] = v1->OSMajorVersion;
  a1[2] = v1->OSMinorVersion;
  a1[3] = v1->OSBuildNumber;
  a1[4] = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(a1 + 5, 256LL, Buffer) < 0 )
      *((_WORD *)a1 + 10) = 0;
  }
  else
  {
    *((_WORD *)a1 + 10) = 0;
  }
  v4 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v1->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v1->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask(255LL);
    if ( v4 == 292 )
      a1[71] = RtlGetSuiteMask(v6) & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v8) )
    {
      v7 = v8;
      *((_BYTE *)a1 + 282) = v8;
      if ( v7 == 1 )
      {
        *((_WORD *)a1 + 140) &= ~0x10u;
        if ( *a1 == 292 )
          a1[71] &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
