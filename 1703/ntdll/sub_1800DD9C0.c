/*
 * XREFs of sub_1800DD9C0 @ 0x1800DD9C0
 * Callers:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     RtlWerpReportException_0 @ 0x180003BD8 (RtlWerpReportException_0.c)
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     sub_1800DE2C0 @ 0x1800DE2C0 (sub_1800DE2C0.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 *     sub_1800DE578 @ 0x1800DE578 (sub_1800DE578.c)
 *     sub_1800DE5B4 @ 0x1800DE5B4 (sub_1800DE5B4.c)
 *     sub_1800DE5E4 @ 0x1800DE5E4 (sub_1800DE5E4.c)
 */

__int64 __fastcall sub_1800DD9C0(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  _OWORD *v5; // rdi
  int v7; // ebx
  _BYTE *v8; // rcx
  int v9; // r14d
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int v18; // [rsp+40h] [rbp-508h]
  __int64 v19; // [rsp+58h] [rbp-4F0h] BYREF
  _BYTE *v20; // [rsp+60h] [rbp-4E8h]
  _DWORD *v21; // [rsp+68h] [rbp-4E0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-4D8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-4D0h] BYREF
  int v24; // [rsp+80h] [rbp-4C8h]
  unsigned int v25; // [rsp+84h] [rbp-4C4h]
  __int64 v26; // [rsp+88h] [rbp-4C0h]
  _BYTE v27[1136]; // [rsp+90h] [rbp-4B8h] BYREF
  _QWORD v28[4]; // [rsp+500h] [rbp-48h] BYREF

  v26 = a4;
  v4 = a3;
  v5 = a2;
  v23 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v7 = 0;
  v21 = 0LL;
  v20 = 0LL;
  if ( (a3 & 4) == 0 )
    sub_1800DE578(-1LL, a2, a3);
  if ( (int)sub_1800DE2C0(&v19, a2, a3) < 0 )
  {
    v19 = 0LL;
  }
  else
  {
    v28[0] = v19;
    v7 = 1;
  }
  v24 = sub_1800DE4A0(-1LL, v27);
  v8 = v27;
  if ( v24 < 0 )
    v8 = 0LL;
  v20 = v8;
  v9 = sub_1800DE334(&v22, &v21);
  if ( v9 >= 0 )
  {
    v28[v7] = v22;
    v10 = (unsigned int)(v7 + 1);
    v18 = v10;
    if ( (int)ZwDuplicateObject() >= 0 )
    {
      v28[v10] = 0LL;
      v10 = (unsigned int)(v10 + 1);
      v18 = v10;
    }
    if ( (int)ZwDuplicateObject() >= 0 )
    {
      v28[v10] = 0LL;
      v18 = v10 + 1;
    }
    v11 = sub_180070674(-1LL);
    v25 = v11;
    v12 = sub_1800DE5B4(-2LL);
    v13 = v21;
    *v21 = 248;
    *((_QWORD *)v13 + 21) = 1LL;
    v13[1] = v11;
    v13[2] = v12;
    *((_QWORD *)v13 + 23) = 0LL;
    *((_QWORD *)v13 + 24) = 0LL;
    *((_QWORD *)v13 + 26) = v19;
    *((_QWORD *)v13 + 28) = v20;
    v13[58] = v24;
    v13[59] = v4;
    v14 = v21;
    v21[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v15 = v14 + 104;
    *((_QWORD *)v14 + 31) = 1LL;
    *((_QWORD *)v14 + 32) = 1LL;
    *(_OWORD *)(v14 + 66) = *(_OWORD *)a1;
    *(_OWORD *)(v14 + 70) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v14 + 74) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v14 + 78) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v14 + 82) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v14 + 86) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v14 + 90) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v14 + 94) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v14 + 98) = *(_OWORD *)(a1 + 128);
    *((_QWORD *)v14 + 51) = *(_QWORD *)(a1 + 144);
    v16 = 9LL;
    do
    {
      *v15 = *v5;
      v15[1] = v5[1];
      v15[2] = v5[2];
      v15[3] = v5[3];
      v15[4] = v5[4];
      v15[5] = v5[5];
      v15[6] = v5[6];
      v15 += 8;
      *(v15 - 1) = v5[7];
      v5 += 8;
      --v16;
    }
    while ( v16 );
    *v15 = *v5;
    v15[1] = v5[1];
    v15[2] = v5[2];
    v15[3] = v5[3];
    v15[4] = v5[4];
    v9 = RtlWerpReportException_0(v25, v22, (__int64)v28, v18, v4, &v23);
    if ( v9 >= 0 )
    {
      if ( !v23 || (v9 = sub_1800DE5E4(0LL, v19, v23, v26), v9 >= 0) )
        v9 = 0;
    }
  }
  if ( v20 )
    PssNtFreeSnapshot((__int64)v20);
  if ( v21 )
  {
    ZwUnmapViewOfSection();
    if ( v22 )
      ZwClose();
    if ( v23 )
      ZwClose();
  }
  if ( v19 )
    ZwClose();
  return (unsigned int)v9;
}
