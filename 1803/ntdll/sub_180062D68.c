/*
 * XREFs of sub_180062D68 @ 0x180062D68
 * Callers:
 *     sub_180062AA4 @ 0x180062AA4 (sub_180062AA4.c)
 * Callees:
 *     sub_18004A8A8 @ 0x18004A8A8 (sub_18004A8A8.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 *     sub_18005EE34 @ 0x18005EE34 (sub_18005EE34.c)
 *     sub_18005EF2C @ 0x18005EF2C (sub_18005EF2C.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

unsigned __int8 __fastcall sub_180062D68(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rdx
  const signed __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 *v12; // rdx
  __int64 *v13; // r10
  unsigned __int8 result; // al
  __int64 *v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  const signed __int64 *v18; // r8
  const signed __int64 *v19; // rdx
  signed __int64 v20; // r10
  bool j; // zf
  bool v22; // zf
  signed __int32 v23[14]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-B0h]
  __int64 *i; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+48h] [rbp-A0h]
  __int64 v27; // [rsp+50h] [rbp-98h]
  unsigned __int64 v28; // [rsp+58h] [rbp-90h]
  unsigned __int64 v29; // [rsp+60h] [rbp-88h]
  unsigned __int64 v30; // [rsp+68h] [rbp-80h]
  const signed __int64 *v31; // [rsp+70h] [rbp-78h]
  __int64 v32; // [rsp+78h] [rbp-70h] BYREF
  __int64 v33; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v35[16]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-48h]
  __int64 v37; // [rsp+A8h] [rbp-40h]
  int v38; // [rsp+108h] [rbp+20h]

  v27 = a1;
  v26 = a1;
  v38 = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v24 = v7;
  v8 = *(const signed __int64 **)(a1 + 16);
  v30 = v7;
  v31 = v8;
  v9 = a2 << 15;
  v28 = a2 << 15;
  v10 = 0x8000LL;
  if ( v7 - (a2 << 15) <= 0x8000 )
    v10 = v7 - (a2 << 15);
  v29 = v10;
  v36 = 0LL;
  v37 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_22;
    v11 = v10 + v9 - 1;
    if ( v11 >= v7 )
    {
LABEL_9:
      result = 0;
      goto LABEL_19;
    }
    if ( v10 <= 1 )
    {
      if ( v10 != 1 )
        goto LABEL_9;
      result = !_bittest64(v8, v9);
    }
    else
    {
      v12 = (__int64 *)&v8[(a2 << 9) & 0x3FFFFFFFFFFFFFFLL];
      i = v12;
      v13 = (__int64 *)&v8[v11 >> 6];
      a4 = *v12;
      if ( v12 == v13 )
      {
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10);
      }
      else
      {
        if ( a4 )
          goto LABEL_9;
        v15 = v12 + 1;
        for ( i = v15; ; i = v15 )
        {
          a4 = *v15;
          if ( v15 == v13 )
            break;
          if ( a4 )
            goto LABEL_9;
          ++v15;
        }
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11;
      }
      result = (a4 & v16) == 0;
    }
LABEL_19:
    v23[12] = result;
    if ( !result )
      goto LABEL_20;
LABEL_22:
    a3 = 0;
    sub_18005EF2C(a1, (char *)1, (__int64)v35, a4);
    v32 = *(_QWORD *)(a1 + 40);
    if ( v32 == -1 )
      break;
    sub_18005EE34((__int64)v35);
    sub_18004AABC((_QWORD *)(v26 + 40), &v32, 8LL, 0LL, dword_1801596D8);
    result = _bittest64(*(const signed __int64 **)(v27 + 8), a2);
    if ( !result )
      goto LABEL_20;
    v7 = v24;
  }
  *(_QWORD *)(v26 + 40) = a2;
  sub_18005EE34((__int64)v35);
  v38 = 1;
  result = _bittest64(*(const signed __int64 **)(v27 + 8), a2);
  if ( !result )
    goto LABEL_20;
  v17 = v10 + v9 - 1;
  if ( v17 >= v24 )
    goto LABEL_20;
  if ( v10 <= 1 )
  {
    if ( v10 != 1 )
      goto LABEL_20;
    if ( !_bittest64(v8, v9) )
    {
LABEL_34:
      _interlockedbittestandreset64(*(volatile signed __int32 **)(a1 + 8), a2);
      v34 = *(_QWORD *)(a1 + 16) + (a2 << 12);
      v33 = 4096LL;
      result = ZwFreeVirtualMemory(-1LL, &v34, &v33, 0x4000LL);
      goto LABEL_20;
    }
    result = 0;
LABEL_33:
    if ( !result )
      goto LABEL_20;
    goto LABEL_34;
  }
  v18 = &v8[(a2 << 9) & 0x3FFFFFFFFFFFFFFLL];
  v19 = &v8[v17 >> 6];
  v20 = *v18;
  if ( v18 == v19 )
  {
    v22 = (v20 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10))) == 0;
LABEL_32:
    result = v22;
    goto LABEL_33;
  }
  result = -1;
  for ( j = v20 == 0; j; j = *v18 == 0 )
  {
    if ( ++v18 == v19 )
    {
      v22 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17) & *v18) == 0;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v38 )
  {
    *(_QWORD *)(a1 + 40) = -1LL;
    _InterlockedOr(v23, 0);
    return sub_18004A8A8(a1 + 40, 1);
  }
  return result;
}
