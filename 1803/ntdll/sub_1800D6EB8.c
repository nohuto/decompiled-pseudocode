/*
 * XREFs of sub_1800D6EB8 @ 0x1800D6EB8
 * Callers:
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 * Callees:
 *     sub_180048C9C @ 0x180048C9C (sub_180048C9C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     RtlWerpReportException_0 @ 0x1800D67F0 (RtlWerpReportException_0.c)
 *     sub_1800D7B88 @ 0x1800D7B88 (sub_1800D7B88.c)
 *     sub_1800D7BF4 @ 0x1800D7BF4 (sub_1800D7BF4.c)
 *     sub_1800D7DD8 @ 0x1800D7DD8 (sub_1800D7DD8.c)
 *     sub_1800D7E14 @ 0x1800D7E14 (sub_1800D7E14.c)
 *     sub_1800D7E44 @ 0x1800D7E44 (sub_1800D7E44.c)
 */

__int64 __fastcall sub_1800D6EB8(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  _OWORD *v5; // rdi
  int v7; // ebx
  int v8; // r14d
  __int64 v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD *v12; // rcx
  _DWORD *v13; // rax
  _OWORD *v14; // rdx
  __int64 v15; // rax
  unsigned int v17; // [rsp+40h] [rbp-88h]
  __int64 v18; // [rsp+58h] [rbp-70h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h] BYREF
  __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  _QWORD v24[4]; // [rsp+88h] [rbp-40h] BYREF

  v23 = a4;
  v4 = a3;
  v5 = a2;
  v21 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v7 = 0;
  v19 = 0LL;
  if ( (a3 & 4) == 0 )
    sub_1800D7DD8(-1LL, a2, a3);
  if ( (int)sub_1800D7B88(&v18, a2, a3) < 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v24[0] = v18;
    v7 = 1;
  }
  v8 = sub_1800D7BF4(&v20, &v19);
  if ( v8 >= 0 )
  {
    v24[v7] = v20;
    v9 = (unsigned int)(v7 + 1);
    v17 = v9;
    if ( (int)ZwDuplicateObject() >= 0 )
    {
      v24[v9] = 0LL;
      v9 = (unsigned int)(v9 + 1);
      v17 = v9;
    }
    if ( (int)ZwDuplicateObject() >= 0 )
    {
      v24[v9] = 0LL;
      v17 = v9 + 1;
    }
    v10 = sub_180048C9C(-1LL);
    v22 = v10;
    v11 = sub_1800D7E14(-2LL);
    v12 = v19;
    *v19 = 240;
    *((_QWORD *)v12 + 21) = 1LL;
    v12[1] = v10;
    v12[2] = v11;
    *((_QWORD *)v12 + 23) = 0LL;
    *((_QWORD *)v12 + 24) = 0LL;
    *((_QWORD *)v12 + 26) = v18;
    *((_QWORD *)v12 + 27) = 0LL;
    v12[56] = -1073741823;
    v12[57] = v4;
    v13 = v19;
    v19[58] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v14 = v13 + 102;
    *((_QWORD *)v13 + 30) = 1LL;
    *((_QWORD *)v13 + 31) = 1LL;
    *((_OWORD *)v13 + 16) = *(_OWORD *)a1;
    *((_OWORD *)v13 + 17) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v13 + 18) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v13 + 19) = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v13 + 20) = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v13 + 21) = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v13 + 22) = *(_OWORD *)(a1 + 96);
    *((_OWORD *)v13 + 23) = *(_OWORD *)(a1 + 112);
    *((_OWORD *)v13 + 24) = *(_OWORD *)(a1 + 128);
    *((_QWORD *)v13 + 50) = *(_QWORD *)(a1 + 144);
    v15 = 9LL;
    do
    {
      *v14 = *v5;
      v14[1] = v5[1];
      v14[2] = v5[2];
      v14[3] = v5[3];
      v14[4] = v5[4];
      v14[5] = v5[5];
      v14[6] = v5[6];
      v14 += 8;
      *(v14 - 1) = v5[7];
      v5 += 8;
      --v15;
    }
    while ( v15 );
    *v14 = *v5;
    v14[1] = v5[1];
    v14[2] = v5[2];
    v14[3] = v5[3];
    v14[4] = v5[4];
    v8 = RtlWerpReportException_0(v22, v20, v24, v17, v4, &v21);
    if ( v8 >= 0 )
    {
      if ( !v21 || (v8 = sub_1800D7E44(0LL, v18, v21, v23), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( v19 )
  {
    ZwUnmapViewOfSection();
    if ( v20 )
      ZwClose();
    if ( v21 )
      ZwClose();
  }
  if ( v18 )
    ZwClose();
  return (unsigned int)v8;
}
