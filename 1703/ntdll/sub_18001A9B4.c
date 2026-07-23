/*
 * XREFs of sub_18001A9B4 @ 0x18001A9B4
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     TpWaitForWork @ 0x1800110D0 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x180014510 (TpReleaseWork.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

void sub_18001A9B4()
{
  _QWORD *v0; // rcx
  unsigned int v1; // edx
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // r8
  __int64 v3; // rax
  char v4; // al
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  if ( !byte_18015B260 )
  {
    v0 = &unk_18015C060;
    v1 = 0;
    v2 = &off_180111070;
    while ( 1 )
    {
      v3 = *v0 - *(_QWORD *)*v2;
      if ( *v0 == *(_QWORD *)*v2 )
        v3 = v0[1] - *((_QWORD *)*v2 + 1);
      if ( v3 )
        break;
      v0 += 2;
      ++v1;
      ++v2;
      if ( v1 >= 5 )
        goto LABEL_7;
    }
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3488,
        (unsigned int)"LdrpDetectDetour",
        2,
        "!!! Detour detected, disable parallel loading\n");
    byte_18015B260 = 1;
LABEL_7:
    if ( ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadDynamicCodePolicyInfo,
           &ThreadInformation,
           4u,
           0LL) < 0 )
    {
      v4 = byte_18015B260;
    }
    else
    {
      v4 = byte_18015B260;
      if ( ThreadInformation == 1 )
        v4 = 1;
      byte_18015B260 = v4;
    }
    if ( v4 )
    {
      if ( Work )
      {
        TpWaitForWork(Work, 1u);
        TpReleaseWork(Work);
        Work = 0LL;
        TpReleasePool(Pool);
        Pool = 0LL;
      }
    }
  }
}
