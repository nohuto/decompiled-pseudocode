/*
 * XREFs of MiAssignSessionRanges @ 0x1408C2E40
 * Callers:
 *     MiInitializeDynamicVa @ 0x1408C2DDC (MiInitializeDynamicVa.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 MiAssignSessionRanges()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r12
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rcx
  _QWORD *v6; // r15
  __int64 v7; // r13
  ULONG v8; // ebx
  unsigned __int64 v9; // rdi
  bool v10; // cf
  int i; // esi
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v15[12]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v16[64]; // [rsp+98h] [rbp-19h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  BitMapHeader.SizeOfBitMap = 512;
  BitMapHeader.Buffer = (unsigned int *)v16;
  v0 = 0LL;
  do
  {
    v1 = 3 * v0;
    LODWORD(v15[v1]) = v0;
    v0 = (unsigned int)(v0 + 1);
    v15[v1 + 2] = 0x2000000000LL;
  }
  while ( (int)v0 < 2 );
  v2 = qword_1403CD150;
  v3 = 3 * v0;
  LODWORD(v15[v3]) = v0;
  v15[v3 + 2] = 0x1000000000LL;
  v4 = v0 + 1;
  v5 = 3LL * v4;
  LODWORD(v15[v5]) = v4;
  v15[v5 + 2] = 4485120LL;
  v6 = &v15[1];
  v7 = 4LL;
  v8 = ExGenRandom(1) & 0x1FF;
  do
  {
    v9 = (unsigned __int64)(v6[1] + 0x3FFFFFFFLL) >> 30;
    v10 = (unsigned int)v9 < 0x20;
    if ( (unsigned int)v9 < 0x20 )
    {
      v8 = ExGenRandom(1) & 0x1FF;
      v10 = (unsigned int)v9 < 0x20;
    }
    for ( i = v10 ? 0 : 0x10; ; --i )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v9, v8);
      if ( ClearBitsAndSet == v8 || !i )
        break;
      RtlClearBits(&BitMapHeader, ClearBitsAndSet, v9);
      v8 = ExGenRandom(1) & 0x1FF;
    }
    *v6 = v2 + ((unsigned __int64)ClearBitsAndSet << 30);
    v6 += 3;
    v8 = (v9 + ClearBitsAndSet + (unsigned __int8)ExGenRandom(1)) & 0x1FF;
    --v7;
  }
  while ( v7 );
  qword_1403CB600 = v15[1];
  qword_1403CB608 = v15[4];
  qword_1403CBB30 = v15[7];
  result = v15[10];
  qword_1403CB640 = v15[10];
  qword_1403CB638 = v2;
  return result;
}
