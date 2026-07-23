/*
 * XREFs of sub_180056DF4 @ 0x180056DF4
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 * Callees:
 *     TpWaitForWork @ 0x180057E60 (TpWaitForWork.c)
 *     TpReleaseWork @ 0x1800589B0 (TpReleaseWork.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

void sub_180056DF4()
{
  unsigned int v0; // edx
  _QWORD *v1; // rcx
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // r8
  __int64 v3; // rax
  char v4; // al
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  if ( !byte_18015C280 )
  {
    v0 = 0;
    v1 = &unk_18015D090;
    v2 = &off_180110ED0;
    while ( 1 )
    {
      v3 = *v1 - *(_QWORD *)*v2;
      if ( *v1 == *(_QWORD *)*v2 )
        v3 = v1[1] - *((_QWORD *)*v2 + 1);
      if ( v3 )
        break;
      v1 += 2;
      ++v0;
      ++v2;
      if ( v0 >= 5 )
        goto LABEL_7;
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        3601,
        (unsigned int)"LdrpDetectDetour",
        2,
        "!!! Detour detected, disable parallel loading\n");
    byte_18015C280 = 1;
LABEL_7:
    if ( ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadDynamicCodePolicyInfo,
           &ThreadInformation,
           4u,
           0LL) < 0 )
    {
      v4 = byte_18015C280;
    }
    else
    {
      v4 = byte_18015C280;
      if ( ThreadInformation == 1 )
        v4 = 1;
      byte_18015C280 = v4;
    }
    if ( v4 )
    {
      if ( Work )
      {
        TpWaitForWork(Work, 1u);
        TpReleaseWork(Work);
        Work = 0LL;
      }
    }
  }
}
