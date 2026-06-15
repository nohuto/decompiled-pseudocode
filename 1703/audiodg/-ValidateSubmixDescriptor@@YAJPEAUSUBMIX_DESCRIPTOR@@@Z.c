/*
 * XREFs of ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140003F00
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ValidateSubmixDescriptor(struct SUBMIX_DESCRIPTOR *a1)
{
  unsigned int v1; // eax
  _WORD *v2; // rdx
  unsigned int v3; // edx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 > 2u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x163,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v5);
    return 2147942487LL;
  }
  v1 = *((_DWORD *)a1 + 4);
  if ( !v1 && *((_DWORD *)a1 + 22) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v5);
    return 2147942487LL;
  }
  if ( *(_DWORD *)a1 == 2 && (*((_DWORD *)a1 + 22) || *((_QWORD *)a1 + 3)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v5);
    return 2147942487LL;
  }
  if ( *((_DWORD *)a1 + 22) > 5u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v5);
    return 2147942487LL;
  }
  v2 = (_WORD *)*((_QWORD *)a1 + 3);
  if ( !v2 )
    goto LABEL_8;
  if ( v1 < 0x12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v5);
    return 2147942487LL;
  }
  if ( v1 < 0x28 && *v2 == 0xFFFE )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x173,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v5);
    return 2147942487LL;
  }
  else
  {
LABEL_8:
    v3 = *((_DWORD *)a1 + 10);
    if ( v3 < 0x12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x177,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x80070057LL,
        v5);
      return 2147942487LL;
    }
    else if ( v3 < 0x28 && **((_WORD **)a1 + 6) == 0xFFFE )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x178,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x80070057LL,
        v5);
      return 2147942487LL;
    }
    else
    {
      return 0LL;
    }
  }
}
