/*
 * XREFs of BcpGetCharacterMaxResourceProfile @ 0x14013B40C
 * Callers:
 *     BcpGetMaxResourceProfile @ 0x14013B348 (BcpGetMaxResourceProfile.c)
 * Callees:
 *     RaspGetXExtent @ 0x14013C930 (RaspGetXExtent.c)
 */

__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, unsigned __int64 *a4)
{
  __int128 v4; // xmm0
  _DWORD *v7; // rbx
  __int64 i; // rsi
  int XExtent; // r8d
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  bool v13; // cf
  int v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h]
  unsigned int v20; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a3;
  v19 = *((_QWORD *)a3 + 2);
  v18 = v4;
  v7 = (_DWORD *)((char *)&unk_140358260 + 4 * a2);
  for ( i = 0LL; i < 5; ++i )
  {
    LODWORD(v19) = *v7;
    v16[0] = 0LL;
    v16[1] = 0LL;
    v17 = 0LL;
    XExtent = RaspGetXExtent(a1, (unsigned int)&v18, (unsigned int)&v20, (_DWORD)a4, v15, (__int64)v16);
    if ( XExtent < 0 )
      break;
    v10 = v20;
    v11 = v17;
    if ( *((_DWORD *)a4 + 2) >= v20 )
      v10 = *((_DWORD *)a4 + 2);
    v12 = *a4;
    v13 = *a4 < v17;
    *((_DWORD *)a4 + 2) = v10;
    if ( !v13 )
      v11 = v12;
    v7 += 18;
    *a4 = v11;
  }
  return (unsigned int)XExtent;
}
