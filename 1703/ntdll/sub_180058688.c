/*
 * XREFs of sub_180058688 @ 0x180058688
 * Callers:
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_180102B68 @ 0x180102B68 (sub_180102B68.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_18005879C @ 0x18005879C (sub_18005879C.c)
 *     sub_180058A20 @ 0x180058A20 (sub_180058A20.c)
 *     sub_180058A44 @ 0x180058A44 (sub_180058A44.c)
 */

__int64 __fastcall sub_180058688(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v7; // r15d
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // r10
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned int v16; // r10d
  __int64 v17; // rdx
  char v19; // [rsp+70h] [rbp+8h] BYREF

  v7 = a6;
  v9 = a2 / LODWORD(SRWLock[7].Ptr);
  v11 = a3;
  v12 = sub_18005879C(
          (_DWORD)SRWLock,
          (unsigned int)&v19,
          v9,
          (LODWORD(SRWLock[7].Ptr) + a2 + a3 - 1) / LODWORD(SRWLock[7].Ptr));
  if ( v12 >= 0 )
  {
    v13 = a2 % LODWORD(SRWLock[7].Ptr);
    if ( v11 )
    {
      v14 = a5;
      do
      {
        v15 = (unsigned int)(LODWORD(SRWLock[7].Ptr) - v13);
        if ( v11 < v15 )
          LODWORD(v15) = v11;
        if ( SRWLock[1].Ptr )
        {
          if ( (unsigned __int8)sub_180058A20(SRWLock, (unsigned int)v9) )
          {
            v17 = *((_QWORD *)SRWLock[1].Ptr + (unsigned int)v9);
            if ( v17 )
              sub_180058A44(SRWLock, v17, v16, (unsigned int)v15, a4, v14, v7, 0LL);
          }
        }
        LODWORD(v13) = 0;
        LODWORD(v9) = v9 + 1;
        v11 -= (unsigned int)v15;
      }
      while ( v11 );
    }
    v12 = 0;
  }
  if ( ((__int64)SRWLock[9].Ptr & 4) == 0 )
    RtlReleaseSRWLockShared(SRWLock);
  return (unsigned int)v12;
}
