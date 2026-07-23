/*
 * XREFs of sub_1800D75C8 @ 0x1800D75C8
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_1800790B8 @ 0x1800790B8 (sub_1800790B8.c)
 */

void __fastcall sub_1800D75C8(PVOID BaseAddress)
{
  DWORD SizeOfImage; // r14d
  int v3; // esi
  __int64 v4; // rdi
  PIMAGE_NT_HEADERS v5; // rbp
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders);
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  sub_180039AE0((unsigned __int64)BaseAddress, SizeOfImage);
  v3 = 0;
  if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18016B4C0 + 1)
    || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_18016B4C0 + 1)
                                      + (unsigned __int64)(unsigned int)qword_18016B4D0 )
  {
    v4 = sub_180034A40(BaseAddress, (__int64)&v6);
  }
  else
  {
    v4 = xmmword_18016B4C0;
    v6 = xmmword_18016B4C0;
    v7 = qword_18016B4D0;
  }
  if ( v4 )
  {
    v5 = (PIMAGE_NT_HEADERS)*((_QWORD *)&v6 + 1);
    v3 = HIDWORD(v7);
  }
  else
  {
    v5 = OutHeaders;
  }
  sub_18001DEA8(0);
  *(_QWORD *)&xmmword_18016B4C0 = v4;
  HIDWORD(qword_18016B4D0) = v3;
  *((_QWORD *)&xmmword_18016B4C0 + 1) = v5;
  LODWORD(qword_18016B4D0) = SizeOfImage;
  sub_1800790B8((__int64)BaseAddress);
  sub_18001DEA8(1);
}
