/*
 * XREFs of RtlGetVersion @ 0x1800396A0
 * Callers:
 *     sub_180039480 @ 0x180039480 (sub_180039480.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800795F0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180086330 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18000FC40 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     sub_1800456F0 @ 0x1800456F0 (sub_1800456F0.c)
 */

__int64 __fastcall RtlGetVersion(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *v4; // rdi
  wchar_t *Buffer; // r8
  int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = NtCurrentPeb();
  a1[1] = v4->OSMajorVersion;
  a1[2] = v4->OSMinorVersion;
  a1[3] = v4->OSBuildNumber;
  a1[4] = v4->OSPlatformId;
  Buffer = v4->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)sub_1800456F0(a1 + 5, 256LL) < 0 )
      *((_WORD *)a1 + 10) = 0;
  }
  else
  {
    *((_WORD *)a1 + 10) = 0;
  }
  v7 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v4->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v4->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask(255LL, a2, (__int64)Buffer, a4);
    if ( v7 == 292 )
      a1[71] = RtlGetSuiteMask(v10, v9, v11, v12) & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&v14, v9, v11, v12) )
    {
      v13 = v14;
      *((_BYTE *)a1 + 282) = v14;
      if ( v13 == 1 )
      {
        *((_WORD *)a1 + 140) &= ~0x10u;
        if ( *a1 == 292 )
          a1[71] &= 0x1FFEFu;
      }
    }
  }
  return 0LL;
}
