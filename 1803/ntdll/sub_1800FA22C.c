/*
 * XREFs of sub_1800FA22C @ 0x1800FA22C
 * Callers:
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 * Callees:
 *     sub_180036174 @ 0x180036174 (sub_180036174.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 */

__int64 __fastcall sub_1800FA22C(__int64 a1, unsigned __int16 *a2)
{
  int v3; // edx
  int v5; // ebx
  _WORD *v6; // rdi
  __int16 v7; // bp
  __int16 v8; // r15
  unsigned __int8 v9; // r14
  __int16 v10; // r13
  __int16 v11; // r12
  __int64 v12; // r8
  char v13; // dl
  unsigned __int16 v14; // r8
  unsigned __int16 v17; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int16 i; // [rsp+A0h] [rbp+18h] BYREF
  _WORD *v19; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2[1] >> 14;
  v17 = -1;
  v5 = sub_180036174(a1, v3, *a2, (__int16 *)&i);
  if ( v5 >= 0 )
  {
    v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * (__int16)i);
    if ( (*v6 & 0x1000) != 0 )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v9 = (a2[1] >> v8) & 3;
        if ( !v9 )
          break;
        if ( !v6 )
          return (unsigned int)-1073741772;
        v10 = 0;
        v11 = 0;
        v12 = a2[v7 + 3];
        for ( i = a2[v7 + 3]; ; v12 = i )
        {
          v13 = (v6[4] >> v11) & 3;
          v19 = 0LL;
          if ( sub_1800F891C(a1, v9, v12, v13, v6[v10 + 6], (__int64 *)&v19, &v17) )
          {
            if ( (!v19 || (*v19 & 0x1000) == 0) && ((*(_BYTE *)v6 & 4) == 0 || v19) )
              break;
          }
          ++v10;
          v11 += 2;
          if ( v11 >= 8 )
            return (unsigned int)-1073741772;
        }
        v14 = v17;
        v6 = v19;
        if ( v17 != 0xFFFF )
        {
          a2[1] = (2 << (2 * v7)) | a2[1] & ~(3 << (2 * v7));
          a2[v7 + 3] = v14;
        }
        ++v7;
        v8 += 2;
        if ( v8 >= 6 )
          return (unsigned int)v5;
      }
      if ( !v7 )
        return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v5;
}
