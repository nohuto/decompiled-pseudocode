/*
 * XREFs of sub_1800FD290 @ 0x1800FD290
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_1800FD290(__int64 a1, int a2)
{
  signed __int32 *v2; // rax
  signed __int32 *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  __int128 v6; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 == 2 )
  {
    v5 = xmmword_18015A790;
    v2 = (signed __int32 *)sub_18005E238(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&dword_18015D820);
      memset(v2, 0, 0x4010uLL);
      *v3 = v4;
      v7[1] = -1LL;
      LODWORD(v7[0]) = 1;
      v7[3] = v3;
      v7[2] = sub_1800FD360;
      RtlQueryHeapInformation(0LL, 5, v7, 0x20uLL, 0LL);
      v6 = xmmword_18015A790;
      sub_18005F840((__int64)v3, &v6);
    }
  }
}
