/*
 * XREFs of sub_18008A180 @ 0x18008A180
 * Callers:
 *     sub_18006E4FC @ 0x18006E4FC (sub_18006E4FC.c)
 * Callees:
 *     sub_180045AEC @ 0x180045AEC (sub_180045AEC.c)
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 */

__int64 __fastcall sub_18008A180(__int64 a1, unsigned __int16 *a2)
{
  int v3; // edx
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int16 v9; // bp
  __int16 v10; // r15
  char v11; // r14
  __int16 v12; // r13
  __int16 v13; // r12
  int v14; // r8d
  int v15; // edx
  char v16; // al
  __int16 v17; // r8
  int v19; // [rsp+90h] [rbp+8h]
  __int16 v20; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int16 i; // [rsp+A0h] [rbp+18h] BYREF
  _WORD *v22; // [rsp+A8h] [rbp+20h] BYREF

  v19 = a1;
  v3 = a2[1] >> 14;
  v20 = -1;
  v5 = sub_180045AEC(a1, v3, *a2, (__int16 *)&i);
  v6 = 0;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * (__int16)i;
    if ( (*(_WORD *)v8 & 0x1000) != 0 )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v11 = (a2[1] >> v10) & 3;
        if ( !v11 )
          break;
        if ( !v8 )
          return (unsigned int)-1073741772;
        v12 = 0;
        v13 = 0;
        v14 = a2[v9 + 3];
        for ( i = a2[v9 + 3]; ; v14 = i )
        {
          v15 = (unsigned __int16)(*(_WORD *)(v8 + 8) >> v13);
          v22 = 0LL;
          LOBYTE(v6) = v15 & 3;
          LOBYTE(v15) = v11;
          v16 = sub_1800946FC(v19, v15, v14, v6, *(_WORD *)(v8 + 2LL * v12 + 12), (__int64)&v22, (__int64)&v20);
          v6 = 0;
          if ( v16 )
          {
            if ( (!v22 || (*v22 & 0x1000) == 0) && ((*(_BYTE *)v8 & 4) == 0 || v22) )
              break;
          }
          ++v12;
          v13 += 2;
          if ( v13 >= 8 )
            return (unsigned int)-1073741772;
        }
        v17 = v20;
        v8 = (__int64)v22;
        if ( v20 != -1 )
        {
          a2[1] = (2 << (2 * v9)) | a2[1] & ~(3 << (2 * v9));
          a2[v9 + 3] = v17;
        }
        ++v9;
        v10 += 2;
        if ( v10 >= 6 )
          return v7;
      }
      if ( !v9 )
        return (unsigned int)-1073741823;
    }
  }
  return v7;
}
