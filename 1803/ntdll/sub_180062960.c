/*
 * XREFs of sub_180062960 @ 0x180062960
 * Callers:
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18005FB48 @ 0x18005FB48 (sub_18005FB48.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_180062AA4 @ 0x180062AA4 (sub_180062AA4.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 */

int __fastcall sub_180062960(__int64 a1, void *a2, int a3)
{
  ULONG_PTR v4; // rcx
  struct _PEB *v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  RegionSize = v4;
  if ( a3 )
    sub_180062AA4(
      &unk_18015D838,
      2 * (((unsigned __int64)a2 - qword_18015D878) >> 20),
      2 * ((unsigned __int64)(unsigned int)v4 >> 20));
  v8 = *(_OWORD *)(a1 + 96);
  sub_1800624DC(&BaseAddress, &RegionSize, 0x8000, &v8);
  LODWORD(v5) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v5 )
  {
    v5 = NtCurrentPeb();
    v6 = (__int64)&v5->SharedData->UserModeGlobalLogger[4];
  }
  else
  {
    v6 = 2147353480LL;
  }
  if ( *(_BYTE *)v6 )
    LODWORD(v5) = sub_1800FC524(a1, BaseAddress, RegionSize);
  return (int)v5;
}
